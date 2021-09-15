// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		CommonAttributes.cs
//
// Date:
// 		25/08/2021
//
// Description: 
//		Class that contains all the common attributes that all game objects in
//		a scene should have in order to be easier to identify.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

[Serializable]
public class CommonAttributes
{
	[Header("Game Object's Identification Attributes")]
	public string name;		// The object's "nice" name.
	public uint idNumber;	// The object's ID number. This should be preferably unique.

	[Header("Object Roles")]
	public List<ObjectRoleTag> roleTagList;	// The object's role tags.

	// Constructor with all default values.
	public CommonAttributes()
	{
		name = "";
		idNumber = 0;
		roleTagList = new List<ObjectRoleTag>();
	}

	// Constructor with input for the name of the object's attribute.
	public CommonAttributes(string inputName)
	{
		name = inputName;
		idNumber = 0;
		roleTagList = new List<ObjectRoleTag>();
	}

	// Constructor with input for the name and ID number of the object's attributes.
	public CommonAttributes(string inputName, uint inputIDNumber)
	{
		name = inputName;
		idNumber = inputIDNumber;
		roleTagList = new List<ObjectRoleTag>();
	}

	// Constructor with inputs for all values.
	public CommonAttributes(string inputName, uint inputIDNumber, List<ObjectRoleTag> inputRoleTagList)
	{
		name = inputName;
		idNumber = inputIDNumber;
		roleTagList = inputRoleTagList;
	}

	// Override of the Equals method.
	public override bool Equals(object inputObject)
	{
		CommonAttributes comparisonObject = inputObject as CommonAttributes;

		return name.Equals(comparisonObject.name)
			&& idNumber.Equals(comparisonObject.idNumber);
	}

	// Override of the GetHashCode method.
	public override int GetHashCode()
	{
		return ("Name" + name
			+ "IDNumber" +idNumber.ToString())
			.ToString()
			.GetHashCode();
	}
}