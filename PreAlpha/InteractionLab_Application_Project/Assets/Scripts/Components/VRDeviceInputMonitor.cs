// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		VRDeviceInputMonitor.cs
//
// Date:
// 		25/08/2021
//
// Description:
//		Component that detects and monitors VR devices. Currently, this
//		component is only able to track the VR headset and two, left and right
//		hand controllers.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

[Serializable]
public class VRDeviceInputMonitor : MonoBehaviour
{
	[Header("VR Headset Inputs")]
	public bool vrHeadsetUserPresence;	// Value that indicates if the VR headset is currently being worn.

	[Header("Left VR Hand Controller Inputs")]
	public float vrHandControllerLeftBatteryLevel;			// Value that indicates the battery level of the left VR hand controller.
	public Vector2 vrHandControllerLeftPrimary2DAxis;		// Value that indicates the direction and intensity of the left VR hand controller's thumbstick.
	public bool vrHandControllerLeftPrimary2DAxisButton;	// Value that indicates if the left VR hand controller's thumbstick button is pressed.
	public bool vrHandControllerleftPrimaryButton;			// Value that indicates if the left VR hand controller's primary button is pressed.
	public bool vrHandControllerLeftSecondaryButton;		// Value that indicates if the left VR hand controller's secondary button is pressed.
	public bool vrHandControllerLeftTriggerButton;			// Value that indicates if the left VR hand controller's trigger button is pressed.
	public float vrHandControllerLeftTriggerValue;			// Value that indicates the amount the left VR hand controller's trigger button is pressed.
	public bool vrHandControllerLeftGripButton;				// Value that indicates if the left VR hand controller's grip button is pressed.
	public float vrHandControllerLeftGripValue;				// Value that indicates the amount the left VR hand controller's grip button is pressed.
	public bool vrHandControllerLeftMenuButton;				// Value that indicates if the left VR hand controller's system button is pressed.

	[Header("Right VR Hand Controller Inputs")]
	public float vrHandControllerRightBatteryLevel;			// Value that indicates the battery level of the right VR hand controller.
	public Vector2 vrHandControllerRightPrimary2DAxis;		// Value that indicates the direction and intensity of the right VR hand controller's thumbstick.
	public bool vrHandControllerRightPrimary2DAxisButton;	// Value that indicates if the right VR hand controller's thumbstick button is pressed.
	public bool vrHandControllerRightPrimaryButton;			// Value that indicates if the right VR hand controller's primary button is pressed.
	public bool vrHandControllerRightSecondaryButton;		// Value that indicates if the right VR hand controller's secondary button is pressed.
	public bool vrHandControllerRightTriggerButton;			// Value that indicates if the right VR hand controller's trigger button is pressed.
	public float vrHandControllerRightTriggerValue;			// Value that indicates the amount the right VR hand controller's trigger button is pressed.
	public bool vrHandControllerRightGripButton;			// Value that indicates if the right VR hand controller's grip button is pressed.
	public float vrHandControllerRightGripValue;			// Value that indicates the amount the right VR hand controller's grip button is pressed.
	public bool vrHandControllerRightMenuButton;			// Value that indicates if the right VR hand controller's system button is pressed.

	[Header("VR Device Evaluation Options")]
	public bool evaluateVRHeadsetInputs = true;				// Condition to evaluate the VR headset device's inputs. This is by default enabled.
	public bool evaluateVRHandControllerLeftInputs = true;	// Condition to evaluate the left VR hand controller device's inputs. This is by default enabled.
	public bool evaluateVRHandControllerRightInputs = true;	// Condition to evaluate the right VR hand controller device's inputs. This is by default enabled.

	[Header("VR Devices Search Options")]
	public bool onEnableVRHeadsetDeviceSearch = true;				// Condition to search for the VR headset device upon enabling this component. This is by default enabled.
	public bool onEnableVRHandControllerLeftDeviceSearch = true;	// Condition to search for the left VR hand controller device upon enabling this component. This is by default enabled.
	public bool onEnableVRHandControllerRightDeviceSearch = true;	// Condition to search for the right VR hand controller device upon enabling this component. This is by default enabled.

	public bool constantVRHeadsetDeviceSearch = true;				// Condition to continue searching for the VR headset device if one is not currently detected. This is by default enabled.
	public bool constantVRHandControllerLeftDeviceSearch = true;	// Condition to continue searching for the left VR hand controller device if one is not currently detected. This is by default enabled.
	public bool constantVRHandControllerRightDeviceSearch = true;	// Condition to continue searching for the right VR hand controller device if one is not currently detected. This is by default enabled.

	[Header("VR Devices Detected")]
	public bool vrHeadsetDeviceDetected;				// Indication for if the VR headset device has been detected.
	public bool vrHandControllerLeftDeviceDetected;		// Indication for if the left VR hand controller device has been detected.
	public bool vrHandControllerRightDeviceDetected;	// Indication for if the right VR hand controller device has been detected.

	[Header("VR Device Instances")]
	public InputDevice vrHeadsetDevice;				// The VR headset device instance.
	public InputDevice vrHandControllerLeftDevice;	// The left VR hand controller instance.
	public InputDevice vrHandControllerRightDevice;	// The right VR hand controller instance.

	// Method to run tasks upon enabling the component.
	void OnEnable()
	{
		// If enabled, search for each VR device on enable.
		if (onEnableVRHeadsetDeviceSearch) SearchVRHeadsetDevice();
		if (onEnableVRHandControllerLeftDeviceSearch) SearchVRHandControllerLeftDevice();
		if (onEnableVRHandControllerRightDeviceSearch) SearchVRHandControllerRightDevice();
	}

	// Method to run tasks every frame.
	void Update()
	{
		// If enabled, search for each VR device.
		if (constantVRHeadsetDeviceSearch) SearchVRHeadsetDevice();
		if (constantVRHandControllerLeftDeviceSearch) SearchVRHandControllerLeftDevice();
		if (constantVRHandControllerRightDeviceSearch) SearchVRHandControllerRightDevice();

		// If enabled, update the inputs of each VR device.
		if (evaluateVRHeadsetInputs) UpdateVRHeadsetInput();
		if (evaluateVRHandControllerLeftInputs) UpdateVRHandControllerLeftInput();
		if (evaluateVRHandControllerRightInputs) UpdateVRHandControllerRightInput();
	}

	// Method to update the inputs from the VR headset device.
	public void UpdateVRHeadsetInput()
	{
		vrHeadsetDevice.TryGetFeatureValue(CommonUsages.userPresence, out vrHeadsetUserPresence);
	}

	// Method to update the inputs from the left VR hand controller device.
	public void UpdateVRHandControllerLeftInput()
	{
		vrHandControllerLeftDevice.TryGetFeatureValue(CommonUsages.batteryLevel, out vrHandControllerLeftBatteryLevel);
		vrHandControllerLeftDevice.TryGetFeatureValue(CommonUsages.primary2DAxis, out vrHandControllerLeftPrimary2DAxis);
		vrHandControllerLeftDevice.TryGetFeatureValue(CommonUsages.primary2DAxisClick, out vrHandControllerLeftPrimary2DAxisButton);
		vrHandControllerLeftDevice.TryGetFeatureValue(CommonUsages.primaryButton, out vrHandControllerleftPrimaryButton);
		vrHandControllerLeftDevice.TryGetFeatureValue(CommonUsages.secondaryButton, out vrHandControllerLeftSecondaryButton);
		vrHandControllerLeftDevice.TryGetFeatureValue(CommonUsages.triggerButton, out vrHandControllerLeftTriggerButton);
		vrHandControllerLeftDevice.TryGetFeatureValue(CommonUsages.trigger, out vrHandControllerLeftTriggerValue);
		vrHandControllerLeftDevice.TryGetFeatureValue(CommonUsages.gripButton, out vrHandControllerLeftGripButton);
		vrHandControllerLeftDevice.TryGetFeatureValue(CommonUsages.grip, out vrHandControllerLeftGripValue);
		vrHandControllerLeftDevice.TryGetFeatureValue(CommonUsages.menuButton, out vrHandControllerLeftMenuButton);
	}

	// Method to update the inputs from the right VR hand controller device.
	public void UpdateVRHandControllerRightInput()
	{
		vrHandControllerRightDevice.TryGetFeatureValue(CommonUsages.batteryLevel, out vrHandControllerRightBatteryLevel);
		vrHandControllerRightDevice.TryGetFeatureValue(CommonUsages.primary2DAxis, out vrHandControllerRightPrimary2DAxis);
		vrHandControllerRightDevice.TryGetFeatureValue(CommonUsages.primary2DAxisClick, out vrHandControllerRightPrimary2DAxisButton);
		vrHandControllerRightDevice.TryGetFeatureValue(CommonUsages.primaryButton, out vrHandControllerRightPrimaryButton);
		vrHandControllerRightDevice.TryGetFeatureValue(CommonUsages.secondaryButton, out vrHandControllerRightSecondaryButton);
		vrHandControllerRightDevice.TryGetFeatureValue(CommonUsages.triggerButton, out vrHandControllerRightTriggerButton);
		vrHandControllerRightDevice.TryGetFeatureValue(CommonUsages.trigger, out vrHandControllerRightTriggerValue);
		vrHandControllerRightDevice.TryGetFeatureValue(CommonUsages.gripButton, out vrHandControllerRightGripButton);
		vrHandControllerRightDevice.TryGetFeatureValue(CommonUsages.grip, out vrHandControllerRightGripValue);
		vrHandControllerRightDevice.TryGetFeatureValue(CommonUsages.menuButton, out vrHandControllerRightMenuButton);
	}

	// Method to search for the VR headset device and confirm its existence.
	public void SearchVRHeadsetDevice()
	{
		if (!vrHeadsetDeviceDetected)
		{
			List<InputDevice> currentVRHeadsetFoundList = new List<InputDevice>();
			InputDeviceCharacteristics suggestedVRHeadsetCharacteristics = InputDeviceCharacteristics.HeadMounted;
			InputDevices.GetDevicesWithCharacteristics(suggestedVRHeadsetCharacteristics, currentVRHeadsetFoundList);

			if (currentVRHeadsetFoundList.Count > 0)
			{
				vrHeadsetDevice = currentVRHeadsetFoundList[0];
				vrHeadsetDeviceDetected = true;
			}
		}
	}

	// Method to search for the left VR hand controller and confirm its existence.
	public void SearchVRHandControllerLeftDevice()
	{
		if (!vrHandControllerLeftDeviceDetected)
		{
			List<InputDevice> currentVRHandControllerLeftFoundList = new List<InputDevice>();
			InputDeviceCharacteristics suggestedVRHandControllerLeftCharacteristics = InputDeviceCharacteristics.Left | InputDeviceCharacteristics.Controller;
			InputDevices.GetDevicesWithCharacteristics(suggestedVRHandControllerLeftCharacteristics, currentVRHandControllerLeftFoundList);

			if (currentVRHandControllerLeftFoundList.Count > 0)
			{
				vrHandControllerLeftDevice = currentVRHandControllerLeftFoundList[0];
				vrHandControllerLeftDeviceDetected = true;
			}
		}
	}

	// Method to search for the right VR hand controller and confirm its existence.
	public void SearchVRHandControllerRightDevice()
	{
		if (!vrHandControllerRightDeviceDetected)
		{
			List<InputDevice> currentVRHandControllerRightFoundList = new List<InputDevice>();
			InputDeviceCharacteristics suggestedVRHandControllerRightCharacteristics = InputDeviceCharacteristics.Right | InputDeviceCharacteristics.Controller;
			InputDevices.GetDevicesWithCharacteristics(suggestedVRHandControllerRightCharacteristics, currentVRHandControllerRightFoundList);

			if (currentVRHandControllerRightFoundList.Count > 0)
			{
				vrHandControllerRightDevice = currentVRHandControllerRightFoundList[0];
				vrHandControllerRightDeviceDetected = true;
			}
		}
	}

	// Method to query, evaluate and return value from VR devices. 
	public float GetInputValue(VRDeviceName inputVRDeviceName, VRDeviceInputName inputVRDeviceInputName)
	{
		// Return value from the VR headset.
		if (inputVRDeviceName == VRDeviceName.VRHeadsetDevice)
		{
			if (inputVRDeviceInputName == VRDeviceInputName.UserPresence) return Convert.ToSingle(vrHeadsetUserPresence);

			// Return 0 value if the VR device input was not accounted for.
			else
			{
				Debug.LogWarning("Could not get VR device input value. The selected VR device input was not accounted for.");
				return 0f;
			}
		}
		// Return value from the left VR hand controller.
		if (inputVRDeviceName == VRDeviceName.LeftVRHandControllerDevice)
		{
			// Section that handles float type values from the left VR hand controller.
			// These values are returned as they are with no additional calculations.
			if (inputVRDeviceInputName == VRDeviceInputName.BatteryLevel) return vrHandControllerLeftBatteryLevel;
			else if (inputVRDeviceInputName == VRDeviceInputName.TriggerValue) return vrHandControllerLeftTriggerValue;
			else if (inputVRDeviceInputName == VRDeviceInputName.GripValue) return vrHandControllerLeftGripValue;

			// Section that handles positive vector2 values from the left VR hand controller.
			// The vector2 values are retrieved as two separate float values, clamped to only positive values and then returned.
			else if (inputVRDeviceInputName == VRDeviceInputName.Primary2DAxisPositiveX) return Mathf.Clamp(vrHandControllerLeftPrimary2DAxis.x, 0f, vrHandControllerLeftPrimary2DAxis.x);
			else if (inputVRDeviceInputName == VRDeviceInputName.Primary2DAxisPositiveY) return Mathf.Clamp(vrHandControllerLeftPrimary2DAxis.y, 0f, vrHandControllerLeftPrimary2DAxis.y);

			// Section that handles negative vector2 values from the left VR hand controller.
			// The vector2 values are retrieved as two separate float values, clamped to only negative values, inverted into positive values and then returned.
			else if (inputVRDeviceInputName == VRDeviceInputName.Primary2DAxisNegativeX) return (Mathf.Clamp(vrHandControllerLeftPrimary2DAxis.x, vrHandControllerLeftPrimary2DAxis.x, 0f)) * -1;
			else if (inputVRDeviceInputName == VRDeviceInputName.Primary2DAxisNegativeY) return (Mathf.Clamp(vrHandControllerLeftPrimary2DAxis.y, vrHandControllerLeftPrimary2DAxis.y, 0f)) * -1;

			// Section that handles boolean values from the left VR hand controller.
			// The booleans are casted as floats, 0 for false and 1 for true, and then returned.
			else if (inputVRDeviceInputName == VRDeviceInputName.Primary2DAxisButton) return Convert.ToSingle(vrHandControllerLeftPrimary2DAxisButton);
			else if (inputVRDeviceInputName == VRDeviceInputName.PrimaryButton) return Convert.ToSingle(vrHandControllerleftPrimaryButton);
			else if (inputVRDeviceInputName == VRDeviceInputName.SecondaryButton) return Convert.ToSingle(vrHandControllerLeftSecondaryButton);
			else if (inputVRDeviceInputName == VRDeviceInputName.MenuButton) return Convert.ToSingle(vrHandControllerLeftMenuButton);
			else if (inputVRDeviceInputName == VRDeviceInputName.TriggerButton) return Convert.ToSingle(vrHandControllerLeftTriggerButton);
			else if (inputVRDeviceInputName == VRDeviceInputName.GripButton) return Convert.ToSingle(vrHandControllerLeftGripButton);

			// Return 0 value if the VR device input was not accounted for.
			else
			{
				Debug.LogWarning("Could not get VR device input value. The selected VR device input was not accounted for.");
				return 0f;
			}
		}

		// Return value from the right VR hand controller.
		if (inputVRDeviceName == VRDeviceName.RightVRHandControllerDevice)
		{
			// Section that handles float type values from the right VR hand controller.
			// These values are returned as they are with no additional calculations.
			if (inputVRDeviceInputName == VRDeviceInputName.BatteryLevel) return vrHandControllerRightBatteryLevel;
			else if (inputVRDeviceInputName == VRDeviceInputName.TriggerValue) return vrHandControllerRightTriggerValue;
			else if (inputVRDeviceInputName == VRDeviceInputName.GripValue) return vrHandControllerRightGripValue;

			// Section that handles positive vector2 values from the right VR hand controller.
			// The vector2 values are retrieved as two separate float values, clamped to only positive values and then returned.
			else if (inputVRDeviceInputName == VRDeviceInputName.Primary2DAxisPositiveX) return Mathf.Clamp(vrHandControllerRightPrimary2DAxis.x, 0f, vrHandControllerRightPrimary2DAxis.x);
			else if (inputVRDeviceInputName == VRDeviceInputName.Primary2DAxisPositiveY) return Mathf.Clamp(vrHandControllerRightPrimary2DAxis.y, 0f, vrHandControllerRightPrimary2DAxis.y);

			// Section that handles negative vector2 values from the right VR hand controller.
			// The vector2 values are retrieved as two separate float values, clamped to only negative values, inverted into positive values and then returned.
			else if (inputVRDeviceInputName == VRDeviceInputName.Primary2DAxisNegativeX) return (Mathf.Clamp(vrHandControllerRightPrimary2DAxis.x, vrHandControllerRightPrimary2DAxis.x, 0f)) * -1;
			else if (inputVRDeviceInputName == VRDeviceInputName.Primary2DAxisNegativeY) return (Mathf.Clamp(vrHandControllerRightPrimary2DAxis.y, vrHandControllerRightPrimary2DAxis.y, 0f)) * -1;

			// Section that handles boolean values from the right VR hand controller.
			// The booleans are casted as floats, 0 for false and 1 for true, and then returned.
			else if (inputVRDeviceInputName == VRDeviceInputName.Primary2DAxisButton) return Convert.ToSingle(vrHandControllerRightPrimary2DAxisButton);
			else if (inputVRDeviceInputName == VRDeviceInputName.PrimaryButton) return Convert.ToSingle(vrHandControllerRightPrimaryButton);
			else if (inputVRDeviceInputName == VRDeviceInputName.SecondaryButton) return Convert.ToSingle(vrHandControllerRightSecondaryButton);
			else if (inputVRDeviceInputName == VRDeviceInputName.MenuButton) return Convert.ToSingle(vrHandControllerRightMenuButton);
			else if (inputVRDeviceInputName == VRDeviceInputName.TriggerButton) return Convert.ToSingle(vrHandControllerRightTriggerButton);
			else if (inputVRDeviceInputName == VRDeviceInputName.GripButton) return Convert.ToSingle(vrHandControllerRightGripButton);

			// Return 0 value if the VR device input was not accounted for.
			else
			{
				Debug.LogWarning("Could not get VR device input value. The selected VR device input was not accounted for.");
				return 0f;
			}
		}

		// Return 0 value if the VR device was not accounted for.
		else
		{
			Debug.LogWarning("Could not get VR device input value. The selected VR device was not accounted for.");
			return 0f;
		}
	}
}