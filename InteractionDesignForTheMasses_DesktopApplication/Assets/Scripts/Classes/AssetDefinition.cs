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
}
