// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		Vector2GetMaxAxisValue.cs
//
// Date:
// 		30/08/2021
//
// Description: 
//		Extension for vector2 types that adds the ability to get the value of
//		the axis that has the greatest value.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class Vector2GetMaxAxisValue
{
	// Extension for vector2 data types to compare and return the largest axis value.
	public static float GetMaxAxisValue(this Vector2 inputVector2)
	{
		if (inputVector2.x > inputVector2.y) return inputVector2.x;
		else if (inputVector2.y > inputVector2.x) return inputVector2.y;
		else return inputVector2.x;
	}
}