// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		VRDeviceAnimationController.cs
//
// Date:
// 		25/08/2021
//
// Description: 
//		Component for the control of animations via the inputs from VR devices.
//
// -----------------------------------------------------------------------------

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VRDeviceAnimationController : MonoBehaviour
{
	[Header("VR Device To Animation Associations")]
	public List<VRDeviceInputToAnimationAssociation> vrDeviceInputToAnimationAssociationList = new List<VRDeviceInputToAnimationAssociation>(); // The list of VR device input to animation control associations.

	[Header("Animation Evaluation Options")]
	public bool useMultipliedAnimationValues = true;	// Condition to evaluate the animation multipliers when setting the associated VR device input to the associated animations.

	// Method to run tasks every frame.
	void Update()
	{
		EvaluateAssociationList();
	}

	// Method to evaluate the VR device inputs to their associated animations.
	public void EvaluateAssociationList()
	{
		// If enabled, set the animation value to the multiplied VR device input value. Otherwise, set the animation value to the VR device input value without applying the multiplier.
		if (useMultipliedAnimationValues)
		{
			foreach (VRDeviceInputToAnimationAssociation currentVRDeviceInputToAnimationAssociationList in vrDeviceInputToAnimationAssociationList)
			{
				currentVRDeviceInputToAnimationAssociationList.SetMultipliedAnimationValue();
			}
		}
		else
		{
			foreach (VRDeviceInputToAnimationAssociation currentVRDeviceInputToAnimationAssociationList in vrDeviceInputToAnimationAssociationList)
			{
				currentVRDeviceInputToAnimationAssociationList.SetAnimationValue();
			}
		}
	}
}