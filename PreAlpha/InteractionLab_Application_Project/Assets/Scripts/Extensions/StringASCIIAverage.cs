// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		StringASCIIAverage.cs
//
// Date:
// 		25/08/2021
//
// Description: 
//		Extension for string types that adds the ability to return the string's
//		average int value based on the ASCII character indexing order.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class StringASCIIAverage
{	
	// Extension for string data types to return the average calculated from all contained characters.
	public static float ASCIIAverage(this string inputString)
	{
		return inputString.ASCIISum() / inputString.Length;
	}
}