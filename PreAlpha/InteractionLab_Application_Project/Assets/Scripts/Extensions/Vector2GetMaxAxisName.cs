// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		Vector2GetMaxAxisName.cs
//
// Date:
// 		30/08/2021
//
// Description: 
//		Extension for vector2 types that adds the ability to get the name of the
//		axis that has the greatest value.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class Vector2GetMaxAxisName
{
	// Extension for vector2 data types to compare and return a 2D axis name that currently holds the largest value.
	public static Axis2DOptional GetMaxAxisName(this Vector2 inputVector2)
	{
		if (inputVector2.x > inputVector2.y) return Axis2DOptional.X;
		else if (inputVector2.y > inputVector2.x) return Axis2DOptional.Y;
		else return Axis2DOptional.None;
	}
}