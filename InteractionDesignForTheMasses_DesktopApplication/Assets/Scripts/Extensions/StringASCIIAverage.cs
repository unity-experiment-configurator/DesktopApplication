// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Design For The Masses Project.
//
// Copyright (C) "Mnemoscene LTD".
// All Rights Reserved.
//
// File:
// 		StringASCIIAverage.cs
//
// Date:
// 		22/05/2021
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
	public static float ASCIIAverage(this string InputString)
	{
		return InputString.ASCIISum() / InputString.Length;
	}
}
