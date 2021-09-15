// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		Vector4GetMinAxisValue.cs
//
// Date:
// 		30/08/2021
//
// Description: 
//		Extension for vector4 types that adds the ability to get the value of
//		the axis that has the least value.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class Vector4GetMinAxisValue
{
	// Extension for vector4 data types to compare and return the smallest axis value.
	public static float GetMinAxisValue(this Vector4 inputVector4)
	{
		float currentMinValue = inputVector4.x;

		if (inputVector4.y < currentMinValue) currentMinValue = inputVector4.y;
		if (inputVector4.z < currentMinValue) currentMinValue = inputVector4.z;
		if (inputVector4.w < currentMinValue) currentMinValue = inputVector4.w;

		return currentMinValue;
	}
}