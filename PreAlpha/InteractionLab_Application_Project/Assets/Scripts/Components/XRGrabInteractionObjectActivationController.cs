// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		XRGrabInteractionObjectActivationController.cs
//
// Date:
// 		2/09/2021
//
// Description:
//		Component that monitors a target XR grab interactable component and
//		activates and/or deactivates listed game objects when the target XR grab
//		interactable component states that it's currently being grabbed.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

[Serializable]
public class XRGrabInteractionObjectActivationController : MonoBehaviour
{
	[Header("XR Grab Interactable Component Options")]
	public XRGrabInteractable targetXRGrabInteractableComponent;	// The target XR grab interactable component to be monitored for any active grab interactions.
	public bool evaluateOnEnable = true;							// Condition to start the evaluation upon enabling this component. This by default is enabled.

	[Header("Grab Interaction Limit Options")]
	public bool limitGrabInteractions;			// Condition to limit the amount of times the monitor is going to register grab interactions and activate or deactivate the listed game objects.
	public int limitGrabInteractionAmount = 1;	// Amount of grab interactions limit. The default value is 1.

	[Header("Activate On Grab Options")]
	public bool activateGameObjectsOnVRDeviceInput = true;	// Condition to activate listed gamed objects when the host game object is being held. This by default is enabled.
	public bool activateForever;							// Condition to activate the listed activatable objects forever once activated.
	public List<GameObject> activatableGameObjectList;		// List of game objects that will be activated when the XR grab interactable component states that the object is being held.

	[Header("Deactivate On Grab Options")]
	public bool deactivateGameObjectsOnVRDeviceInput = true;	// Condition to deactivate listed gamed objects when the host game object is being held. This by default is enabled.
	public bool deactivateForever;								// Condition to deactivate the listed deactivatable objects forever once deactivated.
	public List<GameObject> deactivatableGameObjectList;		// List of game objects that will be deactivated when the XR grab interactable component states that the object is not being held.

	[Header("Indications")]
	public bool currentlyHeld;								// Indicator displaying if the host game object is currently being held based on the state of the target XR grab interactable component.
	public bool activatableGameObjectsActivatedForever;		// Indicator displaying if the listed activatable game objects have been activated forever.
	public bool deactivatableGameObjectsDeactivatedForever;	// Indicator displaying if the listed deactivatable game objects have been deactivated forever.
	public int currentGrabInteractionCount;					// Indicator displaying the count of how many times the host game object was held. The counter is active only when the grab interaction amount is limited.

	// Method to run tasks upon enabling the component.
	void OnEnable()
	{
		if (evaluateOnEnable)
		{
			DisableAllActivatableObjects();
			EnableAllDeactivatableObjects();
			MainProcess();
		}
	}

	// Method to run tasks every frame.
	void Update()
	{
		MainProcess();
	}

	// Method to check if the current XR grab interactable component states that the object is being held.
	public void CheckGrabInteraction()
	{
		if (targetXRGrabInteractableComponent.isSelected) currentlyHeld = true;
		else currentlyHeld = false;
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

	// Method to evaluate both lists of activatable and deactivatable game objects based on the current XR grab interactable holding state.
	public void SetAllObjectsByInput()
	{
		// Check for VR device input.
		// If the selected input is active, enable all activatable game objects, disable all deactivatable game objects and enable the selected input as active to prevent continuous evaluation.
		if (currentlyHeld)
		{
			if (activateGameObjectsOnVRDeviceInput)
			{
				EnableAllActivatableObjects();
				if (activateForever) activatableGameObjectsActivatedForever = true;
			}
			if (deactivateGameObjectsOnVRDeviceInput)
			{
				DisableAllDeactivatableObjects();
				if (deactivateForever) deactivatableGameObjectsDeactivatedForever = true;
			}
		}
		// If the selected input is inactive, enable all deactivatable game objects, disable all activatable game objects and disable the selected input as active to prevent continuous evaluation.
		else
		{
			if (activateGameObjectsOnVRDeviceInput && !activatableGameObjectsActivatedForever) DisableAllActivatableObjects();
			if (deactivateGameObjectsOnVRDeviceInput && !deactivatableGameObjectsDeactivatedForever) EnableAllDeactivatableObjects();
		}
	}

	// Method to run the main process.
	public void MainProcess()
	{
		if (limitGrabInteractions)
		{
			if (currentGrabInteractionCount < limitGrabInteractionAmount)
			{
				CheckGrabInteraction();

				if (currentlyHeld)
				{
					SetAllObjectsByInput();

					++currentGrabInteractionCount;
				}
			}
		}
		else
		{
			CheckGrabInteraction();
			SetAllObjectsByInput();
		}
	}
}