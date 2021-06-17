using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

[Serializable]
public class HandControllersMonitor : MonoBehaviour
{
	[Header("Right Controller Inputs")]
	public Vector2 RightPrimary2DAxis;
	public bool RightPrimary2DAxisButton;
	public bool RightPrimaryButton;
	public bool RightSecondaryButton;
	public bool RightTriggerButton;
	public float RightTriggerValue;
	public bool RightGripButton;
	public float RightGripValue;

	[Header("Left Controller Inputs")]
	public Vector2 LeftPrimary2DAxis;
	public bool LeftPrimary2DAxisButton;
	public bool LeftPrimaryButton;
	public bool LeftSecondaryButton;
	public bool LeftTriggerButton;
	public float LeftTriggerValue;
	public bool LeftGripButton;
	public float LeftGripValue;

	[Header("Evaluation Options")]
	public bool RefreshRightControllerInputs = true;
	public bool RefreshLeftControllerInputs = true;

	[Header("Detected Controller Devices")]
	public bool KeepSearchingAfterStart = true;
	
	private InputDevice RightControllerDevice;
	private InputDevice LeftControllerDevice;
	private bool RightControllerDeviceFound;
	private bool LeftControllerDeviceFound;

	// Start is called before the first frame update
	void Start()
	{
		SearchForControllerDevices();
	}

	// Update is called once per frame
	void Update()
	{
		if (KeepSearchingAfterStart) SearchForControllerDevices();


		if (RefreshRightControllerInputs)
		{
			RightControllerDevice.TryGetFeatureValue(CommonUsages.primary2DAxis, out RightPrimary2DAxis);
			RightControllerDevice.TryGetFeatureValue(CommonUsages.primary2DAxisClick, out RightPrimary2DAxisButton);
			RightControllerDevice.TryGetFeatureValue(CommonUsages.primaryButton, out RightPrimaryButton);
			RightControllerDevice.TryGetFeatureValue(CommonUsages.secondaryButton, out RightSecondaryButton);
			RightControllerDevice.TryGetFeatureValue(CommonUsages.triggerButton, out RightTriggerButton);
			RightControllerDevice.TryGetFeatureValue(CommonUsages.trigger, out RightTriggerValue);
			RightControllerDevice.TryGetFeatureValue(CommonUsages.gripButton, out RightGripButton);
			RightControllerDevice.TryGetFeatureValue(CommonUsages.grip, out RightGripValue);
		}

		if (RefreshLeftControllerInputs)
		{
			LeftControllerDevice.TryGetFeatureValue(CommonUsages.primary2DAxis, out LeftPrimary2DAxis);
			LeftControllerDevice.TryGetFeatureValue(CommonUsages.primary2DAxisClick, out LeftPrimary2DAxisButton);
			LeftControllerDevice.TryGetFeatureValue(CommonUsages.primaryButton, out LeftPrimaryButton);
			LeftControllerDevice.TryGetFeatureValue(CommonUsages.secondaryButton, out LeftSecondaryButton);
			LeftControllerDevice.TryGetFeatureValue(CommonUsages.triggerButton, out LeftTriggerButton);
			LeftControllerDevice.TryGetFeatureValue(CommonUsages.trigger, out LeftTriggerValue);
			LeftControllerDevice.TryGetFeatureValue(CommonUsages.gripButton, out LeftGripButton);
			LeftControllerDevice.TryGetFeatureValue(CommonUsages.grip, out LeftGripValue);
		}
	}

	public void SearchForControllerDevices()
	{
		if (!RightControllerDeviceFound)
		{
			List<InputDevice> CurrentRightControllerFoundList = new List<InputDevice>();
			InputDeviceCharacteristics SuggestedRightControllerCharacteristics = InputDeviceCharacteristics.Right | InputDeviceCharacteristics.Controller;
			InputDevices.GetDevicesWithCharacteristics(SuggestedRightControllerCharacteristics, CurrentRightControllerFoundList);

			if (CurrentRightControllerFoundList.Count > 0)
			{
				RightControllerDevice = CurrentRightControllerFoundList[0];
				RightControllerDeviceFound = true;
			}
		}

		if (!LeftControllerDeviceFound)
		{
			List<InputDevice> CurrentLeftControllerFoundList = new List<InputDevice>();
			InputDeviceCharacteristics SuggestedLeftControllerCharacteristics = InputDeviceCharacteristics.Left | InputDeviceCharacteristics.Controller;
			InputDevices.GetDevicesWithCharacteristics(SuggestedLeftControllerCharacteristics, CurrentLeftControllerFoundList);

			if (CurrentLeftControllerFoundList.Count > 0)
			{
				LeftControllerDevice = CurrentLeftControllerFoundList[0];
				LeftControllerDeviceFound = true;
			}
		}
	}
}
