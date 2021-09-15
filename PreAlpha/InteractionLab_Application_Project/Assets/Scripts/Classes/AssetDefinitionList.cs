// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		AssetDefinitionList.cs
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
public class AssetDefinitionList<inputObjectType>
{
	[Header("Name-To-Object Associations List")]
	public List<AssetDefinition<inputObjectType>> list;

	// Constructor with a default value.
	public AssetDefinitionList()
	{
		list = null;
	}

	// Constructor with an input for the asset definitions list.
	public AssetDefinitionList(List<AssetDefinition<inputObjectType>> inputList)
	{
		list = inputList;
	}

	// Method to sort the associated name list.
	public void SortAssetDefinitions()
	{
		List<AssetDefinition<inputObjectType>> currentAssetDefinitionList = new List<AssetDefinition<inputObjectType>> { list[0] };

		for (int assetDefinitionCounter = 1; assetDefinitionCounter < list.Count; assetDefinitionCounter++)
		{
			int currentAssetDefinitionIndex = 0;

			foreach (AssetDefinition<inputObjectType> currentAssetDefinition in currentAssetDefinitionList)
			{
				if (list[assetDefinitionCounter].NameListAverage() <= currentAssetDefinition.NameListAverage())
				{
					currentAssetDefinitionList.Insert(currentAssetDefinitionIndex, list[assetDefinitionCounter]);
					break;
				}

				currentAssetDefinitionList.Add(list[assetDefinitionCounter]);
			}
		}

		list = currentAssetDefinitionList;
	}

	// Method to search for an asset object that any of its names matches the input target name and return its list index. If no matches are found, the return index will be -1.
	public int GetDefinedObjectIndexByName(string targetDefinition)
	{
		if (targetDefinition != "")
		{
			int currentAssetDefinitionListIndex = 0;

			foreach (AssetDefinition<inputObjectType> currentAssetDefinition in list)
			{
				if (currentAssetDefinition.CheckNameMatch(targetDefinition)) return currentAssetDefinitionListIndex;

				currentAssetDefinitionListIndex++;
			}

			Debug.LogWarning("Could not find object that matches the definition \"" + targetDefinition + "\"");
		}

		return -1;
	}

	// Method to check for an asset object that any of its names matches the input target name and return true if there is.
	public bool CheckDefinedObjectIndexByName(string targetDefinition)
	{
		if (GetDefinedObjectIndexByName(targetDefinition) >= 0) return true;
		else return false;
	}

	// Method to search for an asset object that any of its names matches the input target name and return the associated object.
	public inputObjectType GetDefinedObjectByName(string targetDefinition)
	{
		if (targetDefinition != "")
		{
			int currentDefinitionIndex = GetDefinedObjectIndexByName(targetDefinition);

			if (currentDefinitionIndex >= 0) return list[currentDefinitionIndex].assetObject;
			else
			{
				Debug.LogWarning("Could not find object index that matches the definition \"" + targetDefinition + "\"");
				return default;
			}
		}
		else return default;
	}

	// Method to check if a definition exists in the current asset definition list.
	public bool CheckForDefinition(string targetDefinition)
	{
		bool matchFound = false;

		foreach (AssetDefinition<inputObjectType> currentAssetDefinition in list)
		{
			foreach (string currentAssociatedName in currentAssetDefinition.assetNameList)
			{
				if (targetDefinition == currentAssociatedName)
				{
					matchFound = true;
					break;
				}
			}

			if (matchFound) break;
		}

		return matchFound;
	}

	// Method to find invalid definitions in a list of strings compared with the ones in the current asset definition list, then return a list of index numbers of invalid entries.
	public List<int> FindInvalidDefinitionsInList(List<string> targetDefinitionList)
	{
		List<int> invalidDefinitionIndexList = new List<int>();
		int currentTargetDefinitionIndex = 0;
		
		foreach (string currentTargetDefinition in targetDefinitionList)
		{
			if (!CheckForDefinition(currentTargetDefinition)) invalidDefinitionIndexList.Add(currentTargetDefinitionIndex);

			currentTargetDefinitionIndex++;
		}

		return invalidDefinitionIndexList;
	}

	// Method to remove all invalid definitions in a list of strings compared with the ones in the current asset definition list.
	public void RemoveInvalidDefinitionsInList(ref List<string> targetDefinitionList)
	{
		List<int> invalidDefinitionIndexList = FindInvalidDefinitionsInList(targetDefinitionList);

		for (int invalidDefinitionIndexCounter = invalidDefinitionIndexList.Count - 1; invalidDefinitionIndexCounter >= 0; invalidDefinitionIndexCounter--) targetDefinitionList.RemoveAt(invalidDefinitionIndexList[invalidDefinitionIndexCounter]);
	}

	// Override of the Equals method.
	public override bool Equals(object inputObject)
	{
		AssetDefinitionList<inputObjectType> comparisonObject = inputObject as AssetDefinitionList<inputObjectType>;
		int comparisonCounter = 0;
		bool equalObjects = true;

		foreach (AssetDefinition<inputObjectType> currentAssetDefinition in list)
		{
			if(!(currentAssetDefinition.GetHashCode() == comparisonObject.list[comparisonCounter].GetHashCode()))
			{
				equalObjects = false;
				break;
			}
			++comparisonCounter;
		}

		return equalObjects;
	}

	// Override of the GetHashCode method.
	public override int GetHashCode()
	{
		string appendedListHash = "ListHash";

		foreach (AssetDefinition<inputObjectType> currentAssetDefinition in list)
		{
			appendedListHash += currentAssetDefinition.GetHashCode();
		}
		
		return appendedListHash.GetHashCode();
	}
}