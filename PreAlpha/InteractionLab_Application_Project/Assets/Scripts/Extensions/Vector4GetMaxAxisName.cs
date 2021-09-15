// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		Vector4GetMaxAxisName.cs
//
// Date:
// 		30/08/2021
//
// Description: 
//		Extension for vector4 types that adds the ability to get the name of the
//		axis that has the greatest value.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class Vector4GetMaxAxisName
{
	// Extension for vector4 data types to compare and return a 3D axis name that currently holds the largest value.
	public static Axis4DOptional GetMaxAxisName(this Vector4 inputVector4)
	{
		if (inputVector4.x > inputVector4.y && inputVector4.x > inputVector4.z && inputVector4.x > inputVector4.w) return Axis4DOptional.X;
		else if (inputVector4.y > inputVector4.x && inputVector4.y > inputVector4.z && inputVector4.y > inputVector4.w) return Axis4DOptional.Y;
		else if (inputVector4.z > inputVector4.x && inputVector4.z > inputVector4.y && inputVector4.z > inputVector4.w) return Axis4DOptional.Z;
		else if (inputVector4.w > inputVector4.x && inputVector4.w > inputVector4.y && inputVector4.w > inputVector4.z) return Axis4DOptional.W;
		else return Axis4DOptional.None;
	}
}