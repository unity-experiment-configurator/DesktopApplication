// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		MinMaxFloat.cs
//
// Date:
// 		28/08/2021
//
// Description: 
//		Class that contains a min and a max float value.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class MinMaxFloat
{
	[Header("Min & Max Values")]
	public float min;	// The minimum float value.
	public float max;	// The maximum float value.

	// Constructor with all default values.
	public MinMaxFloat()
	{
		min = 0;
		max = 0;
	}

	// Constructor with input for the maximum value.
	// The minimum value will be set by default to 0.
	public MinMaxFloat(float inputMax)
	{
		min = 0;
		max = inputMax;
	}

	// Constructor with inputs for all values.
	public MinMaxFloat(float inputMin, float inputMax)
	{
		min = inputMin;
		max = inputMax;
	}

	// Method to get the average value between the current min and max values.
	public float Average()
	{
		return (min + max) / 2;
	}

	// Method to flip the current min and max values. The min value becomes the max and visa versa.
	public void FlipValue()
	{
		float oldMin = min;
		float oldMax = max;

		min = oldMax;
		max = oldMin;
	}

	// Override of the Equals method.
	public override bool Equals(object inputObject)
	{
		MinMaxFloat comparisonObject = inputObject as MinMaxFloat;

		return min.Equals(comparisonObject.min)
			&& max.Equals(comparisonObject.max);
	}

	// Override of the GetHashCode method.
	public override int GetHashCode()
	{
		return ("Min" + min.ToString()
			+ "Max" +max.ToString())
			.ToString()
			.GetHashCode();
	}
}