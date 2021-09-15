// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		AssetDefinition.cs
//
// Date:
// 		25/08/2021
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
public class AssetDefinition<inputObjectType>
{
	[Header("Name-To-Object Association")]
	public List<string> assetNameList;		// Asset names to be associated with the object.
	public inputObjectType assetObject;		// Asset object to be associated with the name list.

	// Constructor with all default values.
	public AssetDefinition()
	{
		assetNameList = null;
		assetObject = default;
	}

	// Constructor with inputs for all values.
	public AssetDefinition(List<string> inputAssetNameList, inputObjectType inputAssetObject)
	{
		assetNameList = inputAssetNameList;
		assetObject = inputAssetObject;
	}

	// Method to sort the associated name list.
	public void SortNameList()
	{
		assetNameList.Sort();
	}

	// Method that return the ASCII average of the associated name list.
	public float NameListAverage()
	{
		float currentNameListSum = 0;

		foreach (string currentAssociatedName in assetNameList) currentNameListSum += currentAssociatedName.ASCIIAverage();

		return currentNameListSum / assetNameList.Count;
	}

	// Method that searches for matching associated names and returns an index number array of matches.
	public List<int> FindNameMatch(string targetString, bool singleMatch = false, bool ignoreCase = true)
	{
		List<int> outputIndexNumberList = new List<int>();
		int currentIndexNumber = 0;

		foreach(string currentName in assetNameList)
		{
			if (ignoreCase)
			{
				if (String.Equals(currentName, targetString, StringComparison.OrdinalIgnoreCase))
				{
					outputIndexNumberList.Add(currentIndexNumber);

					if (singleMatch) break;
				}
			}
			else
			{
				if (currentName == targetString)
				{
					outputIndexNumberList.Add(currentIndexNumber);

					if (singleMatch) break;
				}
			}

			if (outputIndexNumberList.Count > 0 && singleMatch) break;

			currentIndexNumber++;
		}

		return outputIndexNumberList;
	}

	// Method that checks is there is any matching associated names and returns true or false.
	public bool CheckNameMatch(string targetString)
	{
		if (FindNameMatch(targetString, true).Count > 0) return true;
		else return false;
	}

	// Override of the Equals method.
	public override bool Equals(object inputObject)
	{
		AssetDefinition<inputObjectType> comparisonObject = inputObject as AssetDefinition<inputObjectType>;

		return assetNameList.Equals(comparisonObject.assetNameList)
			&& assetObject.Equals(comparisonObject.assetObject);
	}

	// Override of the GetHashCode method.
	public override int GetHashCode()
	{
		string appendedAssetNames = "";

		foreach (string currentAssetName in assetNameList)
		{
			appendedAssetNames += currentAssetName;
		}
		
		return ("AssetNameList" + appendedAssetNames
			+ "AssetObjectHash" + assetObject.GetHashCode().ToString())
			.ToString()
			.GetHashCode();
	}
}