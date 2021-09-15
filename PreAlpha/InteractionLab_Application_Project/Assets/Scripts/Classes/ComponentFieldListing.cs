// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		ComponentFieldListing.cs
//
// Date:
// 		25/08/2021
//
// Description: 
//		Class that contains parameters about a target object's component and
//		a list of all fields of interest that can be queried individually or
//		entirely.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class ComponentFieldListing
{
	[Header("Component & Field Names")]
	public Component targetComponent;			// The target component to get the requested fields from.
	public List<string> requestedFieldNameList;	// The list of names of all requested fields from the target component.

	// Constructor with all default values.
	public ComponentFieldListing()
	{
		targetComponent = null;
		requestedFieldNameList = new List<string>();
	}

	// Constructor with input for the target component and an empty string list of requested fields.
	public ComponentFieldListing(Component inputTargetComponent)
	{
		targetComponent = inputTargetComponent;
		requestedFieldNameList = new List<string>();
	}

	// Constructor with inputs for all values.
	public ComponentFieldListing(Component inputTargetComponent, List<string> inputRequestedParameterNameList)
	{
		targetComponent = inputTargetComponent;
		requestedFieldNameList = inputRequestedParameterNameList;
	}

	// Method to retrieve the value of a single field from the target component by name index.
	public object GetIndexValue(int indexNumber)
	{
		return targetComponent.GetType().GetField(requestedFieldNameList[indexNumber]).GetValue(targetComponent);
	}

	// Method to retrieve the named value of a single field from the target component by name index.
	public NamedValue GetIndexNamedValue(int indexNumber)
	{
		return new NamedValue(requestedFieldNameList[indexNumber], targetComponent.GetType().GetField(requestedFieldNameList[indexNumber]).GetValue(targetComponent));
	}

	// Method to retrieve the name and value as a formated string of a single field from the target component by name index.
	public string GetIndexFormatedStringValue(int indexNumber, string prefix, string separator, string suffix)
	{
		return prefix + requestedFieldNameList[indexNumber] + separator + (targetComponent.GetType().GetField(requestedFieldNameList[indexNumber]).GetValue(targetComponent)).ToString() + suffix;
	}

	// Method to retrieve all values of all requested fields from the target component.
	public List<object> GetAllValues()
	{
		List<object> outputObjectList = new List<object>();

		for (int requestedParameterNameCount = 0; requestedParameterNameCount < requestedFieldNameList.Count; requestedParameterNameCount++)
		{
			outputObjectList.Add(GetIndexValue(requestedParameterNameCount));
		}

		return outputObjectList;
	}

	// Method to retrieve all named values of all requested fields from the target component.
	public List<NamedValue> GetAllNamedValues()
	{
		List<NamedValue> outputNamedValueList = new List<NamedValue>();

		for (int requestedParameterNameCount = 0; requestedParameterNameCount < requestedFieldNameList.Count; requestedParameterNameCount++)
		{
			outputNamedValueList.Add(GetIndexNamedValue(requestedParameterNameCount));
		}

		return outputNamedValueList;
	}

	// Method to retrieve all name and values as a formated string of all requested fields from the target component.
	public List<string> GetAllFormatedStringValue(string prefix, string separator, string suffix)
	{
		List<string> outputStringList = new List<string>();

		for (int requestedParameterNameCount = 0; requestedParameterNameCount < requestedFieldNameList.Count; requestedParameterNameCount++)
		{
			outputStringList.Add(GetIndexFormatedStringValue(requestedParameterNameCount, prefix, separator, suffix));
		}

		return outputStringList;
	}

	// Override of the Equals method.
	public override bool Equals(object inputObject)
	{
		ComponentFieldListing comparisonObject = inputObject as ComponentFieldListing;

		return targetComponent.Equals(comparisonObject.targetComponent)
			&& requestedFieldNameList.Equals(comparisonObject.requestedFieldNameList);
	}

	// Override of the GetHashCode method.
	public override int GetHashCode()
	{
		string appendedRequestedFieldName = "RequestedFieldNameList";

		foreach (string currentRequestedFieldName in requestedFieldNameList)
		{
			appendedRequestedFieldName += currentRequestedFieldName;
		}

		return ("TargetComponent" + targetComponent.GetHashCode().ToString()
			+ appendedRequestedFieldName.GetHashCode().ToString())
			.ToString()
			.GetHashCode();
	}
}