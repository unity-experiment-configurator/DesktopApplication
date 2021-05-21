// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Design For The Masses Project.
//
// Copyright (C) "Mnemoscene LTD".
// All Rights Reserved.
//
// File:
// 		SceneDataBase.cs
//
// Date:
// 		21/05/2021
//
// Description: 
//		Component containing all parameters and functions to retrieve and parse
//		scene construction data and use that data to structure scenes. 
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class SceneDataBase : MonoBehaviour
{
	[Header("Scene Construction Data")]
	public SceneConstructionData ConstructionData;

	[Header("Model List")]
	public List<AssetDefinition<GameObject>> ModelDefinitionList;

	[Header("Material List")]
	public List<AssetDefinition<Material>> MaterialDefinitionList;

	[Header("Sound List")]
	public List<AssetDefinition<AudioClip>> SoundDefinitionList;

	void ReadConfiguration()
	{
		ConstructionData = ReadConfigFile.Read();
	}

	void SortAssetDefinitionLists()
	{
		ModelDefinitionList.Sort();
		MaterialDefinitionList.Sort();
		SoundDefinitionList.Sort();
	}
	
	void Start()
	{
		ReadConfiguration();
		SortAssetDefinitionLists();
	}
}
