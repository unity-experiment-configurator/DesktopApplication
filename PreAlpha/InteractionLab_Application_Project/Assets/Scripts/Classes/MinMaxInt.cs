// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		MinMaxInt.cs
//
// Date:
// 		28/08/2021
//
// Description: 
//		Class that contains a min and a max integer value.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class MinMaxInt
{
	[Header("Min & Max Values")]
	public int min;	// The minimum integer value.
	public int max;	// The maximum integer value.

	// Constructor with all default values.
	public MinMaxInt()
	{
		min = 0;
		max = 0;
	}

	// Constructor with input for the maximum value.
	// The minimum value will be set by default to 0.
	public MinMaxInt(int inputMax)
	{
		min = 0;
		max = inputMax;
	}

	// Constructor with inputs for all values.
	public MinMaxInt(int inputMin, int inputMax)
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
		int oldMin = min;
		int oldMax = max;

		min = oldMax;
		max = oldMin;
	}

	// Override of the Equals method.
	public override bool Equals(object inputObject)
	{
		MinMaxInt comparisonObject = inputObject as MinMaxInt;

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