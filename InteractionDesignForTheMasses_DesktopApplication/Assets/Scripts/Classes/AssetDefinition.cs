// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Design For The Masses Project.
//
// Copyright (C) "Mnemoscene LTD".
// All Rights Reserved.
//
// File:
// 		AssetDefinition.cs
//
// Date:
// 		21/05/2021
//
// Description: 
//		Class that contains all asset definition data, where an object of any
//		type and its name are stored together so an association can be made.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class AssetDefinition<InputObjectType>
{
	[Header("Name-To-Object Association")]
	public List<string> AssetNameList;		// Asset names to be associated with the object.
	public InputObjectType AssetObject;		// Asset object to be associated with the name list.

	// Constructor with all default values;
	public AssetDefinition()
	{
		AssetNameList = null;
		AssetObject = default;
	}

	// Constructor with inputs for all values;
	public AssetDefinition(List<string> InputAssetNameList, InputObjectType InputAssetObject)
	{
		AssetNameList = InputAssetNameList;
		AssetObject = InputAssetObject;
	}

	// Method to sort the associated name list.
	public void SortNameList()
	{
		AssetNameList.Sort();
	}

	// Method that return the ASCII average of the associated name list.
	public float NameListAverage()
	{
		float CurrentNameListSum = 0;

		foreach (string CurrentAssociatedName in AssetNameList) CurrentNameListSum += CurrentAssociatedName.ASCIIAverage();

		return CurrentNameListSum / AssetNameList.Count;
	}

	// Method that searches for matching associated names and returns an index number array of matches.
	public List<int> FindNameMatch(string TargetString, bool SingleMatch = false, bool IgnoreCase = true)
	{
		List<int> OutputIndexNumberList = new List<int>();
		int CurrentIndexNumber = 0;

		foreach(string CurrentName in AssetNameList)
		{
			if (IgnoreCase)
			{
				if (String.Equals(CurrentName, TargetString, StringComparison.OrdinalIgnoreCase))
				{
					OutputIndexNumberList.Add(CurrentIndexNumber);

					if (SingleMatch) { break; }
				}
			}
			else
			{
				if (CurrentName == TargetString)
				{
					OutputIndexNumberList.Add(CurrentIndexNumber);

					if (SingleMatch) { break; }
				}
			}

			if (OutputIndexNumberList.Count > 0 && SingleMatch) { break; }

			CurrentIndexNumber++;
		}

		return OutputIndexNumberList;
	}

	// Method that checks is there is any matching associated names and returns true or false.
	public bool CheckNameMatch(string TargetString)
	{
		if (FindNameMatch(TargetString, true).Count > 0) return true;
		else return false;
	}

	// Override of the Equals method.
	public override bool Equals(object InputObject)
	{
		AssetDefinition<InputObjectType> ComparisonObject = InputObject as AssetDefinition<InputObjectType>;

		return AssetNameList.Equals(ComparisonObject.AssetNameList)
			&& AssetObject.Equals(ComparisonObject.AssetObject);
	}

	// Override of the GetHashCode method.
	public override int GetHashCode()
	{
		return ("NameList" + AssetNameList.ToString()
			+ "ObjectHash" + AssetObject.GetHashCode().ToString())
			.ToString()
			.GetHashCode();
	}
}
