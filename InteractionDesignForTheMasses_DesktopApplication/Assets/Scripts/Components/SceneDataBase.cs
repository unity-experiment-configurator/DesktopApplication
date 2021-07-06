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
	[Header("Configuration File Directory")]
	public string ConfigurationFileName;
	public ReadConfigurationFileOption readConfigurationFileOption;
	public string CleanConfigurationFileName;

	[Header("Configuration File Parsing")]
	public bool ReadConfigurationFileOnEnable = true;
	public bool ParseAllConfigurationDataOnEnable = true;
	public bool GetDefinedExperimentOnEnable = true;
	public bool SetCurrentSessionCountersOnEnable = true;
	
	[Header("Scene Construction Data")]
	public SceneConstructionData LoadedSceneConstructionData;
	public bool PreventZeroBlockCount;
	public bool PreventZeroTrialCount;

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
		if (ReadConfigurationFileOnEnable)
		{
			FileManagement.ResolveInputDirectory();
			ReadConfigurationFile();
		}
		
		if (ParseAllConfigurationDataOnEnable) LoadedSceneConstructionData.ParseAll();

		if (PreventZeroBlockCount && LoadedSceneConstructionData.sessionBlockCount <= 0) LoadedSceneConstructionData.sessionBlockCount = 1;
		if (PreventZeroTrialCount && LoadedSceneConstructionData.blockTrialCount <= 0) LoadedSceneConstructionData.blockTrialCount = 1;

		if (GetDefinedExperimentOnEnable) GetDefinedExperimentScene();
		if (SetCurrentSessionCountersOnEnable) SetCurrentSessionCounters();
	}

	// Method to read the config.json file located in the currently same directory the application is in.
	public void ReadConfigurationFile()
	{
		SceneDataBaseEstablished = false;

		if (readConfigurationFileOption == ReadConfigurationFileOption.GetSpecified)
		{
			LoadedSceneConstructionData = FileManagement.ReadSpecificConfigurationFile(ConfigurationFileName);
			CleanConfigurationFileName = ConfigurationFileName;
		}
		else if (readConfigurationFileOption == ReadConfigurationFileOption.GetNewest)
		{
			LoadedSceneConstructionData = FileManagement.ReadNewestConfigurationFile();
			CleanConfigurationFileName = FileManagement.GetNewestConfigurationFileName();
		}
		else if (readConfigurationFileOption == ReadConfigurationFileOption.GetOldest)
		{
			LoadedSceneConstructionData = FileManagement.ReadOldestConfigurationFile();
			CleanConfigurationFileName = FileManagement.GetOldestConfigurationFileName();
		}

		CleanConfigurationFileName = CleanConfigurationFileName.Replace("." + FileManagement.ConfigurationFileFormat, "");

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
