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
using UnityEngine.SceneManagement;

[Serializable]
public class SceneDataBase : MonoBehaviour
{
	[Header("Configuration File Options")]
	public bool ReadConfigurationFileOnEnable = true;
	public bool ParseAllConfigurationDataOnEnable = true;
	public bool GetDefinedExperimentOnEnable = true;
	public bool SetCurrentSessionCountersOnEnable = true;
	
	[Header("Scene Construction Data")]
	public SceneConstructionData LoadedSceneConstructionData;

	[Header("Scene Association")]
	public SceneObjectContainer AssociatedExperimentScene;

	[Header("Session Settings")]
	public int CurrentSessionBlockCount;
	public int CurrentBlockTrialCount;

	[Header("Scene List")]
	public AssetDefinitionList<SceneObjectContainer> SceneDefinitionList;

	[Header("Model List")]
	public AssetDefinitionList<GameObject> ModelDefinitionList;

	[Header("Material List")]
	public AssetDefinitionList<Material> MaterialDefinitionList;

	[Header("Sound List")]
	public AssetDefinitionList<AudioClip> SoundDefinitionList;

	public bool SceneDataBaseEstablished { get; private set; }

	void OnEnable()
	{
		if (ReadConfigurationFileOnEnable) ReadConfiguration();
		if (ParseAllConfigurationDataOnEnable) LoadedSceneConstructionData.ParseAll();
		if (GetDefinedExperimentOnEnable) GetDefinedExperimentScene();
		if (SetCurrentSessionCountersOnEnable) SetCurrentSessionCounters();
	}

	// Method to read the config.json file located in the currently same directory the application is in.
	public void ReadConfiguration()
	{
		SceneDataBaseEstablished = false;
		LoadedSceneConstructionData = Configuration.Read();
		SceneDataBaseEstablished = true;
	}

	// Method to find a scene definition with the same associated name as in the experiment type.
	public void GetDefinedExperimentScene()
	{
		AssociatedExperimentScene = SceneDefinitionList.GetDefinedObjectByName(LoadedSceneConstructionData.type);
	}

	// Method to retrive and setup the current session's counters.
	public void SetCurrentSessionCounters()
	{
		CurrentSessionBlockCount = LoadedSceneConstructionData.sessionBlockCount;
		CurrentBlockTrialCount = LoadedSceneConstructionData.blockTrialCount;
	}

	// Method to confirm the experiment scene from the imported data is defined and load it.
	public void LoadExperimentScene()
	{
		AssociatedExperimentScene.LoadScene();
	}
}
