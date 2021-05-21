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
	public string AssetName;			// Asset name to be associated with object.
	public InputObjectType AssetObject;	// Asset object to be associated with name.

	// Constructor with all default values;
	public AssetDefinition()
	{
		AssetName = "";
		AssetObject = default;
	}

	// Constructor with inputs for all values;
	public AssetDefinition(string InputAssetName, InputObjectType InputAssetObject)
	{
		AssetName = InputAssetName;
		AssetObject = InputAssetObject;
	}
}
