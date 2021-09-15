// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		VRFunctions.cs
//
// Date:
// 		25/08/2021
//
// Description: 
//		Function that contains methods for the management and interaction with
//		the application's VR elements.
//
// -----------------------------------------------------------------------------

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

public static class VRFuntions
{
	// Method to check if the VR display subsystem is running.
	// This method can be used to verify that a valid VR device is connected and running properly.
	public static bool VRDisplaySubsystemActive()
	{
		var xrDisplaySubsystems = new List<XRDisplaySubsystem>();
		SubsystemManager.GetInstances<XRDisplaySubsystem>(xrDisplaySubsystems);
		
		foreach (var xrDisplay in xrDisplaySubsystems)
		{
			if (xrDisplay.running)
			{
				return true;
			}
		}

		return false;
	}
}
