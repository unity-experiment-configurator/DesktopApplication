// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		NamedValue.cs
//
// Date:
// 		25/08/2021
//
// Description: 
//		Class that contains a value of any type and its name.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class NamedValue
{
	[Header(" Name & Value")]
	public string name;		// The name of the value.
	public object value;	// The value of any type.

	// Constructor with all default values.
	public NamedValue()
	{
		name = "";
		value = null;
	}

	// Constructor with input for the value's name.
	public NamedValue(string inputName)
	{
		name = inputName;
		value = null;
	}

	// Constructor with inputs for all values.
	public NamedValue(string inputName, object inputValue)
	{
		name = inputName;
		value = inputValue;
	}

	// Override of the Equals method.
	public override bool Equals(object inputObject)
	{
		NamedValue comparisonObject = inputObject as NamedValue;

		return name.Equals(comparisonObject.name)
			&& value.Equals(comparisonObject.value);
	}

	// Override of the GetHashCode method.
	public override int GetHashCode()
	{
		return ("Name" + name
			+ "Value" + value.GetHashCode().ToString())
			.ToString()
			.GetHashCode();
	}
}