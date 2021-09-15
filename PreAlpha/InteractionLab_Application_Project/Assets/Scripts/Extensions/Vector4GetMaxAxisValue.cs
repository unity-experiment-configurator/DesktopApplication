// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		Vector4GetMaxAxisValue.cs
//
// Date:
// 		30/08/2021
//
// Description: 
//		Extension for vector4 types that adds the ability to get the value of
//		the axis that has the greatest value.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class Vector4GetMaxAxisValue
{
	// Extension for vector4 data types to compare and return the largest axis value.
	public static float GetMaxAxisValue(this Vector4 inputVector4)
	{
		float currentMaxValue = inputVector4.x;

		if (inputVector4.y > currentMaxValue) currentMaxValue = inputVector4.y;
		if (inputVector4.z > currentMaxValue) currentMaxValue = inputVector4.z;
		if (inputVector4.w > currentMaxValue) currentMaxValue = inputVector4.w;

		return currentMaxValue;
	}
}