// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		VRDeviceObjectSwapContoller.cs
//
// Date:
// 		25/08/2021
//
// Description:
//		Component that takes an input from a VR device via a VR device input
//		monitor and sequentially swaps the visibility by enabling and disabling
//		the game objects.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class VRDeviceObjectSwapContoller : MonoBehaviour
{
	[Header("Swappable Game Objects")]
	public int initialEnabledGameObjectListIndex;								// The index number of the first game object to enable upon enabling the component, the other game objects in the list will be disabled.
	public List<GameObject> swappableGameObjectList = new List<GameObject>();	// List of all game object to be swapped. Only one game object will be enabled at a time.

	[Header("VR Device Input Options")]
	public VRDeviceInputMonitor targetVRDeviceInputMonitorComponent;	// The target VR device input monitor component to retrieve the input data from.
	
	[Space(7)]
	public bool allowNextGameObjectSwap = true;			// Condition to allow to swap to the next game object in the swappable game object list upon VR device input. This is by default enabled.
	public VRDeviceName swapNextVRDeviceName;			// The VR device name to retrieve input data from to swap to the next game object in the swappable game object list.
	public VRDeviceInputName swapNextVRDeviceInputName;	// The VR device input name to be used to swap to the next game object in the swappable game object list.
	public float swapNextVRDeviceInputMinValue = 0.9f;	// The minimum value that is needed before it's considered a valid input to swap to the next swappable game object. The default value is 0.9.
	
	[Space(7)]
	public bool allowPreviousGameObjectSwap = true;			// Condition to allow to swap to the previous game object in the swappable game object list upon VR device input. This is by default enabled.
	public VRDeviceName swapPreviousVRDeviceName;			// The VR device name to retrieve input data from to swap to the previous game object in the swappable game object list.
	public VRDeviceInputName swapPreviousVRDeviceInputName;	// The VR device input name to be used to swap to the previous game object in the swappable game object list.
	public float swapPreviousVRDeviceInputMinValue = 0.9f;	// The minimum value that is needed before it's considered a valid input to swap to the previous swappable game object. The default value is 0.9.

	[Header("Swap Behaviour Options")]
	public bool allowSwapWrapAround = true; // Condition to wrap around to the beginning or end of the swappable game objects list when the indicator index reaches the end or beginning of the list. This is by default enabled.

	[Header("Indications")]
	public int currentlyActiveGameObjectListIndex;	// Indicator that displays the index number of the currently active game object from the swappable game object list.
	public GameObject currentlyActiveGameObject;	// Indicator that displays the currently active game object from the swappable game object list.
	public bool currentVRDeviceInputEvaluated;		// Indicator that display if the current VR device input was evaluated. This will be used to prevent continuous evaluation if the user holds down the VR device input.

	// Method to run tasks upon enabling the component.
	void OnEnable()
	{
		currentVRDeviceInputEvaluated = false;

		// Set all game objects to disabled on enable.
		foreach (GameObject currentlySwappableGameObject in swappableGameObjectList)
		{
			currentlySwappableGameObject.SetActive(false);
		}

		// Set the game object on the swappable game object list index to be initially enabled.
		swappableGameObjectList[initialEnabledGameObjectListIndex].SetActive(true);
	}

	// Method to run tasks every frame.
	void Update()
	{
		if (GetAnyInput()) EvaluateSwapInput();
		else currentVRDeviceInputEvaluated = false;

		EvaluateAllObjectsByIndexMatch();
	}

	// Method to get the VR device raw input associated for the next swap action.
	public float GetNextInputRawValue()
	{
		return targetVRDeviceInputMonitorComponent.GetInputValue(swapNextVRDeviceName, swapNextVRDeviceInputName);
	}

	// Method to get the VR device raw input associated for the previous swap action.
	public float GetPreviousInputRawValue()
	{
		return targetVRDeviceInputMonitorComponent.GetInputValue(swapPreviousVRDeviceName, swapPreviousVRDeviceInputName);
	}

	// Method to get the input value for the next game object swap and make sure it's greater than the minimum value.
	public bool GetNextInput()
	{
		if (GetNextInputRawValue() >= swapNextVRDeviceInputMinValue) return true;
		else return false;
	}

	// Method to get the input value for the previous game object swap and make sure it's greater than the minimum value.
	public bool GetPreviousInput()
	{
		if (GetPreviousInputRawValue() >= swapPreviousVRDeviceInputMinValue) return true;
		else return false;
	}

	// Method to get either the next or previous VR device inputs.
	public bool GetAnyInput()
	{
		return (GetNextInput() || GetPreviousInput());
	}

	// Method to evaluate the currently active index and game object based on the VR device inputs.
	public void EvaluateSwapInput()
	{
		if (!currentVRDeviceInputEvaluated)
		{
			// If enabled, evaluate the next interval.
			if (GetNextInput() && allowNextGameObjectSwap) ActiveIndexSetToNextInterval();

			// If enabled, evaluate the previous interval.
			if (GetPreviousInput() && allowPreviousGameObjectSwap) ActiveIndexSetToPreviousInterval();

			currentlyActiveGameObject = swappableGameObjectList[currentlyActiveGameObjectListIndex];
		}

		currentVRDeviceInputEvaluated = true;
	}

	// Method to enable the game object with the matching index number in the swappable game object list.
	public void EnableIndexMatchObject()
	{
		swappableGameObjectList[currentlyActiveGameObjectListIndex].SetActive(true);
	}

	// Method to disable the game object with the matching index number in the swappable game object list.
	public void DisableIndexMatchObject()
	{
		swappableGameObjectList[currentlyActiveGameObjectListIndex].SetActive(false);
	}

	// Method to enable all game objects with mismatching index number in the swappable game object list.
	public void EnableIndexMismatchObjects()
	{
		for (int swappableGameObjectCounter = 0; swappableGameObjectCounter < swappableGameObjectList.Count; swappableGameObjectCounter++)
		{
			if (swappableGameObjectCounter != currentlyActiveGameObjectListIndex) swappableGameObjectList[swappableGameObjectCounter].SetActive(true);
		}
	}

	// Method to disable all game objects with mismatching index number in the swappable game object list.
	public void DisableIndexMismatchObjects()
	{
		for (int swappableGameObjectCounter = 0; swappableGameObjectCounter < swappableGameObjectList.Count; swappableGameObjectCounter++)
		{
			if (swappableGameObjectCounter != currentlyActiveGameObjectListIndex) swappableGameObjectList[swappableGameObjectCounter].SetActive(false);
		}
	}

	// Method to enable all objects in the swappable game object list.
	public void EnableAllObjects()
	{
		foreach (GameObject currentlySwappableGameObject in swappableGameObjectList)
		{
			currentlySwappableGameObject.SetActive(true);
		}
	}

	// Method to disable all objects in the swappable game object list.
	public void DisableAllObjects()
	{
		foreach (GameObject currentlySwappableGameObject in swappableGameObjectList)
		{
			currentlySwappableGameObject.SetActive(false);
		}
	}

	// Method to enable the game object with the matching index number and disable all mismatching ones.
	public void EvaluateAllObjectsByIndexMatch()
	{
		DisableIndexMismatchObjects();
		EnableIndexMatchObject();

	}

	// Method to disable the game object with the matching index number and enable all mismatching ones.
	public void EvaluateAllByIndexMismatch()
	{
		EnableIndexMismatchObjects();
		DisableIndexMatchObject();

	}
	
	// Method to evaluate the next interval from the currently active index.
	public void ActiveIndexSetToNextInterval()
	{
		if (allowSwapWrapAround)
		{
			if (currentlyActiveGameObjectListIndex + 1 < swappableGameObjectList.Count) ++currentlyActiveGameObjectListIndex;
			else currentlyActiveGameObjectListIndex = 0;
		}
		else currentlyActiveGameObjectListIndex = Mathf.Clamp(currentlyActiveGameObjectListIndex + 1, 0, swappableGameObjectList.Count - 1);
	}

	// Method to evaluate the previous interval from the currently active index.
	public void ActiveIndexSetToPreviousInterval()
	{
		if (allowSwapWrapAround)
		{
			if (currentlyActiveGameObjectListIndex - 1 >= 0) --currentlyActiveGameObjectListIndex;
			else currentlyActiveGameObjectListIndex = swappableGameObjectList.Count - 1;
		}
		else currentlyActiveGameObjectListIndex = Mathf.Clamp(currentlyActiveGameObjectListIndex - 1, 0, swappableGameObjectList.Count - 1);
	}
}