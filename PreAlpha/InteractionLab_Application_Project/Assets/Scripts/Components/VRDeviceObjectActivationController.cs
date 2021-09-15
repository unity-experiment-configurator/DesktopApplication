// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		VRDeviceObjectActivationController.cs
//
// Date:
// 		25/08/2021
//
// Description:
//		Component that takes an input from a VR device via a VR device input
//		monitor and enable or disable the listed game objects as long as the
//		selected VR device input from the selected VR device is active.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class VRDeviceObjectActivationController : MonoBehaviour
{
	[Header("VR Device Input Options")]
	public VRDeviceInputMonitor targetVRDeviceInputMonitorComponent;	// The target VR device input monitor component to retrieve the input data from.
	public bool evaluateOnEnable = true;								// Condition to disable all activatable game objects and enable all deactivatable game objects upon enabling the component. This is by default enabled.

	[Header("Activatable Game Objects")]
	public bool activateGameObjectsOnVRDeviceInput = true;						// Condition to activate the listed game objects as long as there is the selected VR device input. This is by default enabled.
	public List<GameObject> activatableGameObjectList = new List<GameObject>(); // List of all game object to be activated as long as there is the selected VR device input.

	[Header("Deactivatable Game Objects")]
	public bool deactivateGameObjectsOnVRDeviceInput = true;						// Condition to deactivate the listed game objects as long as there is the selected VR device input. This is by default enabled.
	public List<GameObject> deactivatableGameObjectList = new List<GameObject>();	// List of all game object to be deactivated as long as there is the selected VR device input.
	
	[Space(7)]
	public VRDeviceName vrDeviceName;			// The VR device name to retrieve input data from.
	public VRDeviceInputName vrDeviceInputName;	// The VR device input name to retrieve input data from.
	
	[Space(7)]
	public float vrDeviceInputMinValue = 0.9f;	// The minimum value that is needed before it's considered a valid input. The default value is 0.9.

	[Header("Indications")]
	public bool currentVRDeviceInputActive;		// Indicator displaying if the selected input from the selected VR device is active. This will be used to prevent continuous evaluation if the user holds down the VR device input.
	public float currentVRDeviceInputRawValue;	// Indicator displaying the current input raw value being received by the selected VR device and VR device input.

	// Method to run tasks upon enabling the component.
	void OnEnable()
	{
		if (evaluateOnEnable)
		{
			if (activateGameObjectsOnVRDeviceInput) DisableAllActivatableObjects();
			if (deactivateGameObjectsOnVRDeviceInput) EnableAllDeactivatableObjects();

			GetInputRawValue();
			EvaluateVRDeviceInput();
			SetAllObjectsByInput();
		}
	}

	// Method to run tasks every frame.
	void Update()
	{
		GetInputRawValue();
		EvaluateVRDeviceInput();
		SetAllObjectsByInput();
	}

	// Method to get the VR device raw input associated for the next swap action.
	public void GetInputRawValue()
	{
		currentVRDeviceInputRawValue = targetVRDeviceInputMonitorComponent.GetInputValue(vrDeviceName, vrDeviceInputName);
	}

	// Method to evaluate the input value and make sure it's greater than the minimum value to considered a valid input.
	public void EvaluateVRDeviceInput()
	{
		if (currentVRDeviceInputRawValue >= vrDeviceInputMinValue) currentVRDeviceInputActive = true;
		else currentVRDeviceInputActive = false;
	}

	// Method to enable all listed activatable game objects.
	public void EnableAllActivatableObjects()
	{
		foreach (GameObject currentlyActivatableGameObject in activatableGameObjectList)
		{
			if (currentlyActivatableGameObject.activeSelf == false) currentlyActivatableGameObject.SetActive(true);
		}
	}

	// Method to disable all listed activatable game objects.
	public void DisableAllActivatableObjects()
	{
		foreach (GameObject currentlyActivatableGameObject in activatableGameObjectList)
		{
			if (currentlyActivatableGameObject.activeSelf == true) currentlyActivatableGameObject.SetActive(false);
		}
	}

	// Method to enable all listed deactivatable game objects.
	public void EnableAllDeactivatableObjects()
	{
		foreach (GameObject currentlyDeactivatableGameObject in deactivatableGameObjectList)
		{
			if (currentlyDeactivatableGameObject.activeSelf == false) currentlyDeactivatableGameObject.SetActive(true);
		}
	}

	// Method to disable all listed deactivatable game objects.
	public void DisableAllDeactivatableObjects()
	{
		foreach (GameObject currentlyDeactivatableGameObject in deactivatableGameObjectList)
		{
			if (currentlyDeactivatableGameObject.activeSelf == true) currentlyDeactivatableGameObject.SetActive(false);
		}
	}

	// Method to evaluate both lists of activatable and deactivatable game objects based on the current VR device input state.
	public void SetAllObjectsByInput()
	{
		// Check for VR device input.
		// If the selected input is active, enable all activatable game objects, disable all deactivatable game objects and enable the selected input as active to prevent continuous evaluation.
		if (currentVRDeviceInputActive)
		{
			if (activateGameObjectsOnVRDeviceInput) EnableAllActivatableObjects();
			if (deactivateGameObjectsOnVRDeviceInput) DisableAllDeactivatableObjects();
		}
		// If the selected input is inactive, enable all deactivatable game objects, disable all activatable game objects and disable the selected input as active to prevent continuous evaluation.
		else
		{
			if (activateGameObjectsOnVRDeviceInput) DisableAllActivatableObjects();
			if (deactivateGameObjectsOnVRDeviceInput) EnableAllDeactivatableObjects();
		}
	}
}