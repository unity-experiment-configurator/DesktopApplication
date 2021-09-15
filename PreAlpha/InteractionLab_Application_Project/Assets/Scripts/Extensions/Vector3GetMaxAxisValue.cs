// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		Vector3GetMaxAxisValue.cs
//
// Date:
// 		30/08/2021
//
// Description: 
//		Extension for vector3 types that adds the ability to get the value of
//		the axis that has the greatest value.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class Vector3GetMaxAxisValue
{
	// Extension for vector3 data types to compare and return the largest axis value.
	public static float GetMaxAxisValue(this Vector3 inputVector3)
	{
		float currentMaxValue = inputVector3.x;

		if (inputVector3.y > currentMaxValue) currentMaxValue = inputVector3.y;
		if (inputVector3.z > currentMaxValue) currentMaxValue = inputVector3.z;

		return currentMaxValue;
	}
}