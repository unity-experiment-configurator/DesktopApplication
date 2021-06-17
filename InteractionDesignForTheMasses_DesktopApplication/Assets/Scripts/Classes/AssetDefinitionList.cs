// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Design For The Masses Project.
//
// Copyright (C) "Mnemoscene LTD".
// All Rights Reserved.
//
// File:
// 		AssetDefinitionList.cs
//
// Date:
// 		26/05/2021
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
public class AssetDefinitionList<InputObjectType>
{
	[Header("Name-To-Object Associations List")]
	public List<AssetDefinition<InputObjectType>> List;

	// Constructor with a default value;
	public AssetDefinitionList()
	{
		List = null;
	}

	// Constructor with an input for the asset definitions list;
	public AssetDefinitionList(List<AssetDefinition<InputObjectType>> InputList)
	{
		List = InputList;
	}

	// Method to sort the associated name list.
	public void SortAssetDefinitions()
	{
		List<AssetDefinition<InputObjectType>> CurrentAssetDefinitionList = new List<AssetDefinition<InputObjectType>> { List[0] };

		for (int AssetDefinitionCounter = 1; AssetDefinitionCounter < List.Count; AssetDefinitionCounter++)
		{
			int CurrentAssetDefinitionIndex = 0;

			foreach (AssetDefinition<InputObjectType> CurrentAssetDefinition in CurrentAssetDefinitionList)
			{
				if (List[AssetDefinitionCounter].NameListAverage() <= CurrentAssetDefinition.NameListAverage())
				{
					CurrentAssetDefinitionList.Insert(CurrentAssetDefinitionIndex, List[AssetDefinitionCounter]);
					break;
				}

				CurrentAssetDefinitionList.Add(List[AssetDefinitionCounter]);
			}
		}

		List = CurrentAssetDefinitionList;
	}

	// Method to search for an asset object that any of its names matches the input target name and return its list index. If no matches are found, the return index will be -1.
	public int GetDefinedObjectIndexByName(string TargetDefinition)
	{
		int CurrentAssetDefinitionListIndex = 0;

		foreach (AssetDefinition<InputObjectType> CurrentAssetDefinition in List)
		{
			if (CurrentAssetDefinition.CheckNameMatch(TargetDefinition)) return CurrentAssetDefinitionListIndex;

			CurrentAssetDefinitionListIndex++;
		}

		return -1;
	}

	// Method to check for an asset object that any of its names matches the input target name and return true if there is.
	public bool CheckDefinedObjectIndexByName(string TargetDefinition)
	{
		if (GetDefinedObjectIndexByName(TargetDefinition) >= 0) { return true; }
		else { return false; }
	}

	// Method to search for an asset object that any of its names matches the input target name and return tha associated object.
	public InputObjectType GetDefinedObjectByName(string TargetDefinition)
	{
		int CurrentDefinitionIndex = GetDefinedObjectIndexByName(TargetDefinition);

		if (CurrentDefinitionIndex >= 0) { return List[CurrentDefinitionIndex].AssetObject; }
		else { return default; }
	}

	// Method to check if a definition exists in the current asset definition list.
	public bool CheckForDefinition(string TargetDefinition)
	{
		bool MatchFound = false;

		foreach (AssetDefinition<InputObjectType> CurrentAssetDefinition in List)
		{
			foreach (string CurrentAssociatedName in CurrentAssetDefinition.AssetNameList)
			{
				if (TargetDefinition == CurrentAssociatedName)
				{
					MatchFound = true;
					break;
				}
			}

			if (MatchFound) break;
		}

		return MatchFound;
	}

	// Method to find invalid definitions in a list of strings compared with the ones in the current asset definition list, then return a list of index numbers of invalid entries.
	public List<int> FindInvalidDefinitionsInList(List<string> TargetDefinitionList)
	{
		List<int> InvalidDefinitionIndexList = new List<int>();
		int CurrentTargetDefinitionIndex = 0;
		
		foreach (string CurrentTargetDefinition in TargetDefinitionList)
		{
			if (!CheckForDefinition(CurrentTargetDefinition)) InvalidDefinitionIndexList.Add(CurrentTargetDefinitionIndex);

			CurrentTargetDefinitionIndex++;
		}

		return InvalidDefinitionIndexList;
	}

	// Method to remove all invalid definitions in a list of strings compared with the ones in the current asset definition list.
	public void RemoveInvalidDefinitionsInList(ref List<string> TargetDefinitionList)
	{
		List<int> InvalidDefinitionIndexList = FindInvalidDefinitionsInList(TargetDefinitionList);

		for (int InvalidDefinitionIndexCounter = InvalidDefinitionIndexList.Count - 1; InvalidDefinitionIndexCounter >= 0; InvalidDefinitionIndexCounter--) TargetDefinitionList.RemoveAt(InvalidDefinitionIndexList[InvalidDefinitionIndexCounter]);
	}
}