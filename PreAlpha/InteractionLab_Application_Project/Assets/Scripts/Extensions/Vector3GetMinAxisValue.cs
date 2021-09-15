// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		Vector3GetMinAxisValue.cs
//
// Date:
// 		30/08/2021
//
// Description: 
//		Extension for vector3 types that adds the ability to get the value of
//		the axis that has the least value.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class Vector3GetMinAxisValue
{
	// Extension for vector3 data types to compare and return the smallest axis value.
	public static float GetMinAxisValue(this Vector3 inputVector3)
	{
		float currentMinValue = inputVector3.x;

		if (inputVector3.y < currentMinValue) currentMinValue = inputVector3.y;
		if (inputVector3.z < currentMinValue) currentMinValue = inputVector3.z;

		return currentMinValue;
	}
}