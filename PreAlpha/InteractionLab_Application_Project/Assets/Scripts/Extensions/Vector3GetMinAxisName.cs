// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		Vector3GetMinAxisName.cs
//
// Date:
// 		30/08/2021
//
// Description: 
//		Extension for vector3 types that adds the ability to get the name of the
//		axis that has the least value.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class Vector3GetMinAxisName
{
	// Extension for vector3 data types to compare and return a 3D axis name that currently holds the smallest value.
	public static Axis3DOptional GetMinAxisName(this Vector3 inputVector3)
	{
		if (inputVector3.x < inputVector3.y && inputVector3.x > inputVector3.z) return Axis3DOptional.X;
		else if (inputVector3.y < inputVector3.x && inputVector3.y > inputVector3.z) return Axis3DOptional.Y;
		else if (inputVector3.z < inputVector3.x && inputVector3.z > inputVector3.y) return Axis3DOptional.Z;
		else return Axis3DOptional.None;
	}
}