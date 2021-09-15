// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		VRDeviceInputToAnimationAssociation.cs
//
// Date:
// 		25/08/2021
//
// Description:
//		Class that contains all information regarding the relation of which VR
//		device, using which input, is related to which animator component and
//		which animation within it.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class VRDeviceInputToAnimationAssociation
{
	[Header("VR Device Input Associations")]
	public VRDeviceInputMonitor associatedVRDeviceInputMonitorComponent;	// The associated VR device input monitor component to retrieve values from.
	public VRDeviceName associatedVRDeviceName;								// The associated VR device name option.
	public VRDeviceInputName associatedVRDeviceInputName;					// The associated VR device input name option.

	[Header("Animation Associations")]
	public Animator associatedAnimatorComponent;	// The associated animator component.
	public string associatedAnimationName;			// The associated animation name.

	[Header("Animation Evaluation Options")]
	public float animationValueMultiplier;	// The animation multiplier. By default the value is 1.

	// Constructor with all the default values.
	public VRDeviceInputToAnimationAssociation()
	{
		associatedVRDeviceInputMonitorComponent = null;
		associatedVRDeviceName = VRDeviceName.LeftVRHandControllerDevice;
		associatedVRDeviceInputName = VRDeviceInputName.PrimaryButton;
		associatedAnimatorComponent = null;
		associatedAnimationName = "";
		animationValueMultiplier = 1;
	}

	// Constructor with input for all VR device related parameters.
	public VRDeviceInputToAnimationAssociation(VRDeviceInputMonitor inputAssociatedVRDeviceInputMonitorComponent, VRDeviceName inputAssociatedVRDeviceName, VRDeviceInputName inputAssociatedVRDeviceInputName)
	{
		associatedVRDeviceInputMonitorComponent = inputAssociatedVRDeviceInputMonitorComponent;
		associatedVRDeviceName = inputAssociatedVRDeviceName;
		associatedVRDeviceInputName = inputAssociatedVRDeviceInputName;
		associatedAnimatorComponent = null;
		associatedAnimationName = "";
		animationValueMultiplier = 1;
	}

	// Constructor with input for all VR device related and animation related parameters.
	public VRDeviceInputToAnimationAssociation(VRDeviceInputMonitor inputAssociatedVRDeviceInputMonitorComponent, VRDeviceName inputAssociatedVRDeviceName, VRDeviceInputName inputAssociatedVRDeviceInputName, Animator inputAssociatedAnimatorComponent, string inputAssociatedAnimationName)
	{
		associatedVRDeviceInputMonitorComponent = inputAssociatedVRDeviceInputMonitorComponent;
		associatedVRDeviceName = inputAssociatedVRDeviceName;
		associatedVRDeviceInputName = inputAssociatedVRDeviceInputName;
		associatedAnimatorComponent = inputAssociatedAnimatorComponent;
		associatedAnimationName = inputAssociatedAnimationName;
		animationValueMultiplier = 1;
	}

	// Constructor with inputs for all values.
	public VRDeviceInputToAnimationAssociation(VRDeviceInputMonitor inputAssociatedVRDeviceInputMonitorComponent, VRDeviceName inputAssociatedVRDeviceName, VRDeviceInputName inputAssociatedVRDeviceInputName, Animator inputAssociatedAnimatorComponent, string inputAssociatedAnimationName, float inputAnimationValueMultiplier)
	{
		associatedVRDeviceInputMonitorComponent = inputAssociatedVRDeviceInputMonitorComponent;
		associatedVRDeviceName = inputAssociatedVRDeviceName;
		associatedVRDeviceInputName = inputAssociatedVRDeviceInputName;
		associatedAnimatorComponent = inputAssociatedAnimatorComponent;
		associatedAnimationName = inputAssociatedAnimationName;
		animationValueMultiplier = inputAnimationValueMultiplier;
	}

	// Method to retrieve the selected VR device input from the selected VR device input monitor.
	public float GetInputValue()
	{
		return associatedVRDeviceInputMonitorComponent.GetInputValue(associatedVRDeviceName, associatedVRDeviceInputName);
	}

	// Method to retrieve the selected VR device input from the selected VR device input monitor and multiply it with the current animation value multiplier.
	public float GetMultipliedInputValue()
	{
		return GetInputValue() * animationValueMultiplier;
	}

	// Method to set the target animator's named animation value from the VR device's input value.
	public void SetAnimationValue()
	{
		associatedAnimatorComponent.SetFloat(associatedAnimationName, GetInputValue());
	}

	// Method to set the target animator's named animation value from the VR device's input value multiplied with the current animation value multiplier.
	public void SetMultipliedAnimationValue()
	{
		associatedAnimatorComponent.SetFloat(associatedAnimationName, GetMultipliedInputValue());
	}
}