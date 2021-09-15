// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		CountDownObjectActivationController.cs
//
// Date:
// 		4/09/2021
//
// Description:
//		Component that counts down from a specified starting and ending time and
//		according to the current time activates or deactivates listed game
//		objects with the corresponding index number.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class CountDownObjectActivationController : MonoBehaviour
{
	[Header("Count Down Options")]
	public float startTime;		// The starting time value.
	public float endTime = 3;	// The ending time value. The default value is 3.

	[Header("Count Down Activation Options")]
	public bool activateObjectsOnTime = true;				// Condition to activate listed gamed objects to their according second based on their index number and current time.
	public bool leaveGameObjectsActivated;					// Condition to leave game objects activated once activated.
	public float activatableGameObjectTimingMultiplier = 1;	// The multiplier factor for the timing of activating the activatable game objects. The default value is 1.
	public List<GameObject> activatableGameObjectList;		// List of game objects that will be activated when the floored multiplied time is equal to their index number.

	[Header("Count Down Deactivation Options")]
	public bool deactivateObjectsOnTime = true;					// Condition to deactivate listed gamed objects to their according second based on their index number and current time.
	public bool leaveGameObjectsDeactivated;					// Condition to leave game objects deactivated once deactivated.
	public float deactivatableGameObjectTimingMultiplier = 1;	// The multiplier factor for the timing of deactivating the deactivatable game objects. The default value is 1.
	public List<GameObject> deactivatableGameObjectList;		// List of game objects that will be deactivated when the floored multiplied time is equal to their index number.

	[Header("Indications")]
	public float currentTime;				// Indicator displaying the current time passed.
	public float currentActivatableTime;	// Indicator displaying the current time passed with the activatable game objects multiplier applied.
	public float currentDeactivatableTime;	// Indicator displaying the current time passed with the deactivatable game objects multiplier applied.

	// Method to execute tasks upon enabling the component.
	void OnEnable()
	{
		currentTime = startTime;

		DisableAllActivatableObjects();
		EnableAllDeactivatableObjects();
	}

	// Method to run tasks every frame.
	void Update()
	{
		if (activateObjectsOnTime)
		{
			if (leaveGameObjectsActivated)
			{
				// If the time passage is forward, then activate all indexes equal or lesser to the current time.
				// If the time passage is reversed, then activate all indexes equal or greater to the current time
				if (startTime < endTime) ActivateIndexActivatableEqualOrLesserToTime();
				else if (startTime > endTime) ActivateIndexActivatableEqualOrGreaterToTime();
			}
			else
			{
				ActivateIndexActivatableEqualToTime();
				DeactivateIndexActivatableUnequalToTime();
			}
		}

		if (deactivateObjectsOnTime)
		{
			if (leaveGameObjectsDeactivated)
			{
				// If the time passage is forward, then deactivate all indexes equal or lesser to the current time.
				// If the time passage is reversed, then deactivate all indexes equal or greater to the current time
				if (startTime < endTime) DeactivateIndexDeactivatableEqualOrLesserToTime();
				else if (startTime > endTime) DeactivateIndexDeactivatableEqualOrGreaterToTime();
			}
			else
			{
				DeactivateIndexDeactivatableEqualToTime();
				ActivateIndexDeactivatableUnequalToTime();
			}
		}

		// Advance all time counters if the end time hasn't been reached.
		if (startTime < endTime)
        {
			if (currentTime <= endTime)
			{
				ProgressTime();
				ProgressActivatableTime();
				ProgressDeactivatableTime();
			}
        }
		else if (startTime > endTime)
		{
			if (currentTime >= endTime)
			{
				ProgressTime();
				ProgressActivatableTime();
				ProgressDeactivatableTime();
			}
		}
	}

	// Method to enable all listed activatable game objects.
	public void EnableAllActivatableObjects()
	{
		foreach (GameObject currentlyActivatableGameObject in activatableGameObjectList)
		{
			if (currentlyActivatableGameObject != null && currentlyActivatableGameObject.activeSelf == false) currentlyActivatableGameObject.SetActive(true);
		}
	}

	// Method to disable all listed activatable game objects.
	public void DisableAllActivatableObjects()
	{
		foreach (GameObject currentlyActivatableGameObject in activatableGameObjectList)
		{
			if (currentlyActivatableGameObject != null && currentlyActivatableGameObject.activeSelf == true) currentlyActivatableGameObject.SetActive(false);
		}
	}

	// Method to enable all listed deactivatable game objects.
	public void EnableAllDeactivatableObjects()
	{
		foreach (GameObject currentlyDeactivatableGameObject in deactivatableGameObjectList)
		{
			if (currentlyDeactivatableGameObject != null && currentlyDeactivatableGameObject.activeSelf == false) currentlyDeactivatableGameObject.SetActive(true);
		}
	}

	// Method to disable all listed deactivatable game objects.
	public void DisableAllDeactivatableObjects()
	{
		foreach (GameObject currentlyDeactivatableGameObject in deactivatableGameObjectList)
		{
			if (currentlyDeactivatableGameObject != null && currentlyDeactivatableGameObject.activeSelf == true) currentlyDeactivatableGameObject.SetActive(false);
		}
	}

	// Method to progress time according to the start and end time values.
	public void ProgressTime()
	{
		if (startTime < endTime) currentTime += Time.deltaTime;
		else if (startTime > endTime) currentTime -= Time.deltaTime;
	}

	// Method to progress the multiplied time of the activatable game objects.
	public void ProgressActivatableTime()
	{
		currentActivatableTime = currentTime * activatableGameObjectTimingMultiplier;
	}

	// Method to progress the multiplied time of the deactivatable game objects.
	public void ProgressDeactivatableTime()
	{
		currentDeactivatableTime = currentTime * deactivatableGameObjectTimingMultiplier;
	}

	// Method to activate the game object from the activatable game object list with the equal index number of the time.
	public void ActivateIndexActivatableEqualToTime()
	{
		int currentlyActivatableGameObjectIndex = 0;

		foreach (GameObject currentlyActivatableGameObject in activatableGameObjectList)
		{
			if (currentlyActivatableGameObject != null && currentlyActivatableGameObjectIndex == (int)currentActivatableTime && currentlyActivatableGameObject.activeSelf == false) currentlyActivatableGameObject.SetActive(true);

			++currentlyActivatableGameObjectIndex;
		}
	}

	// Method to deactivate the game object from the activatable game object list with the equal index number of the time.
	public void DeactivateIndexActivatableEqualToTime()
	{
		int currentlyActivatableGameObjectIndex = 0;

		foreach (GameObject currentlyActivatableGameObject in activatableGameObjectList)
		{
			if (currentlyActivatableGameObject != null && currentlyActivatableGameObjectIndex == (int)currentActivatableTime && currentlyActivatableGameObject.activeSelf == true) currentlyActivatableGameObject.SetActive(false);

			++currentlyActivatableGameObjectIndex;
		}
	}

	// Method to activate the game object from the deactivatable game object list with the equal index number of the time.
	public void ActivateIndexDeactivatableEqualToTime()
	{
		int currentlyDeactivatableGameObjectIndex = 0;

		foreach (GameObject currentlyDeactivatableGameObject in deactivatableGameObjectList)
		{
			if (currentlyDeactivatableGameObject != null && currentlyDeactivatableGameObjectIndex == (int)currentDeactivatableTime && currentlyDeactivatableGameObject.activeSelf == false) currentlyDeactivatableGameObject.SetActive(true);

			++currentlyDeactivatableGameObjectIndex;
		}
	}

	// Method to deactivate the game object from the deactivatable game object list with the equal index number of the time.
	public void DeactivateIndexDeactivatableEqualToTime()
	{
		int currentlyActivatableGameObjectIndex = 0;

		foreach (GameObject currentlyDeactivatableGameObject in deactivatableGameObjectList)
		{
			if (currentlyDeactivatableGameObject != null && currentlyActivatableGameObjectIndex == (int)currentDeactivatableTime && currentlyDeactivatableGameObject.activeSelf == true) currentlyDeactivatableGameObject.SetActive(false);

			++currentlyActivatableGameObjectIndex;
		}
	}

	// Method to activate the game object from the activatable game object list with the equal or greater index number of the time.
	public void ActivateIndexActivatableEqualOrGreaterToTime()
	{
		int currentlyActivatableGameObjectIndex = 0;

		foreach (GameObject currentlyActivatableGameObject in activatableGameObjectList)
		{
			if (currentlyActivatableGameObject != null && currentlyActivatableGameObjectIndex >= (int)currentActivatableTime && currentlyActivatableGameObject.activeSelf == false) currentlyActivatableGameObject.SetActive(true);

			++currentlyActivatableGameObjectIndex;
		}
	}

	// Method to deactivate the game object from the activatable game object list with the equal or greater index number of the time.
	public void DeactivateIndexActivatableEqualOrGreaterToTime()
	{
		int currentlyActivatableGameObjectIndex = 0;

		foreach (GameObject currentlyActivatableGameObject in activatableGameObjectList)
		{
			if (currentlyActivatableGameObject != null && currentlyActivatableGameObjectIndex >= (int)currentActivatableTime && currentlyActivatableGameObject.activeSelf == true) currentlyActivatableGameObject.SetActive(false);

			++currentlyActivatableGameObjectIndex;
		}
	}

	// Method to activate the game object from the deactivatable game object list with the equal or greater index number of the time.
	public void ActivateIndexDeactivatableEqualOrGreaterToTime()
	{
		int currentlyDeactivatableGameObjectIndex = 0;

		foreach (GameObject currentlyDeactivatableGameObject in deactivatableGameObjectList)
		{
			if (currentlyDeactivatableGameObject != null && currentlyDeactivatableGameObjectIndex >= (int)currentDeactivatableTime && currentlyDeactivatableGameObject.activeSelf == false) currentlyDeactivatableGameObject.SetActive(true);

			++currentlyDeactivatableGameObjectIndex;
		}
	}

	// Method to deactivate the game object from the deactivatable game object list with the equal or greater index number of the time.
	public void DeactivateIndexDeactivatableEqualOrGreaterToTime()
	{
		int currentlyActivatableGameObjectIndex = 0;

		foreach (GameObject currentlyDeactivatableGameObject in deactivatableGameObjectList)
		{
			if (currentlyDeactivatableGameObject != null && currentlyActivatableGameObjectIndex >= (int)currentDeactivatableTime && currentlyDeactivatableGameObject.activeSelf == true) currentlyDeactivatableGameObject.SetActive(false);

			++currentlyActivatableGameObjectIndex;
		}
	}

	// Method to activate the game object from the activatable game object list with the equal or lesser index number of the time.
	public void ActivateIndexActivatableEqualOrLesserToTime()
	{
		int currentlyActivatableGameObjectIndex = 0;

		foreach (GameObject currentlyActivatableGameObject in activatableGameObjectList)
		{
			if (currentlyActivatableGameObject != null && currentlyActivatableGameObjectIndex <= (int)currentActivatableTime && currentlyActivatableGameObject.activeSelf == false) currentlyActivatableGameObject.SetActive(true);

			++currentlyActivatableGameObjectIndex;
		}
	}

	// Method to deactivate the game object from the activatable game object list with the equal or lesser index number of the time.
	public void DeactivateIndexActivatableEqualOrLesserToTime()
	{
		int currentlyActivatableGameObjectIndex = 0;

		foreach (GameObject currentlyActivatableGameObject in activatableGameObjectList)
		{
			if (currentlyActivatableGameObject != null && currentlyActivatableGameObjectIndex <= (int)currentActivatableTime && currentlyActivatableGameObject.activeSelf == true) currentlyActivatableGameObject.SetActive(false);

			++currentlyActivatableGameObjectIndex;
		}
	}

	// Method to activate the game object from the deactivatable game object list with the equal or lesser index number of the time.
	public void ActivateIndexDeactivatableEqualOrLesserToTime()
	{
		int currentlyDeactivatableGameObjectIndex = 0;

		foreach (GameObject currentlyDeactivatableGameObject in deactivatableGameObjectList)
		{
			if (currentlyDeactivatableGameObject != null && currentlyDeactivatableGameObjectIndex <= (int)currentDeactivatableTime && currentlyDeactivatableGameObject.activeSelf == false) currentlyDeactivatableGameObject.SetActive(true);

			++currentlyDeactivatableGameObjectIndex;
		}
	}

	// Method to deactivate the game object from the deactivatable game object list with the equal or lesser index number of the time.
	public void DeactivateIndexDeactivatableEqualOrLesserToTime()
	{
		int currentlyActivatableGameObjectIndex = 0;

		foreach (GameObject currentlyDeactivatableGameObject in deactivatableGameObjectList)
		{
			if (currentlyDeactivatableGameObject != null && currentlyActivatableGameObjectIndex <= (int)currentDeactivatableTime && currentlyDeactivatableGameObject.activeSelf == true) currentlyDeactivatableGameObject.SetActive(false);

			++currentlyActivatableGameObjectIndex;
		}
	}

	// Method to activate the game object from the activatable game object list with the unequal index number of the time.
	public void ActivateIndexActivatableUnequalToTime()
	{
		int currentlyActivatableGameObjectIndex = 0;

		foreach (GameObject currentlyActivatableGameObject in activatableGameObjectList)
		{
			if (currentlyActivatableGameObject != null && currentlyActivatableGameObjectIndex != (int)currentActivatableTime && currentlyActivatableGameObject.activeSelf == false) currentlyActivatableGameObject.SetActive(true);

			++currentlyActivatableGameObjectIndex;
		}
	}

	// Method to deactivate the game object from the activatable game object list with the unequal index number of the time.
	public void DeactivateIndexActivatableUnequalToTime()
	{
		int currentlyActivatableGameObjectIndex = 0;

		foreach (GameObject currentlyActivatableGameObject in activatableGameObjectList)
		{
			if (currentlyActivatableGameObject != null && currentlyActivatableGameObjectIndex != (int)currentActivatableTime && currentlyActivatableGameObject.activeSelf == true) currentlyActivatableGameObject.SetActive(false);

			++currentlyActivatableGameObjectIndex;
		}
	}

	// Method to activate the game object from the deactivatable game object list with the unequal index number of the time.
	public void ActivateIndexDeactivatableUnequalToTime()
	{
		int currentlyDeactivatableGameObjectIndex = 0;

		foreach (GameObject currentlyDeactivatableGameObject in deactivatableGameObjectList)
		{
			if (currentlyDeactivatableGameObject != null && currentlyDeactivatableGameObjectIndex != (int)currentDeactivatableTime && currentlyDeactivatableGameObject.activeSelf == false) currentlyDeactivatableGameObject.SetActive(true);

			++currentlyDeactivatableGameObjectIndex;
		}
	}

	// Method to deactivate the game object from the deactivatable game object list with the unequal index number of the time.
	public void DeactivateIndexDeactivatableUnequalToTime()
	{
		int currentlyActivatableGameObjectIndex = 0;

		foreach (GameObject currentlyDeactivatableGameObject in deactivatableGameObjectList)
		{
			if (currentlyDeactivatableGameObject != null && currentlyActivatableGameObjectIndex != (int)currentDeactivatableTime && currentlyDeactivatableGameObject.activeSelf == true) currentlyDeactivatableGameObject.SetActive(false);

			++currentlyActivatableGameObjectIndex;
		}
	}
}