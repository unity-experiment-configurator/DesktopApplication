// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		ExperimentDatabase.cs
//
// Date:
// 		25/08/2021
//
// Description: 
//		Component containing all parameters and functions to retrieve and parse
//		experiment construction data and use that data to structure scenes. 
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

[Serializable]
public class ExperimentDatabase : MonoBehaviour
{
	[Header("Configuration File Directory")]
	public string configurationFileName;						// The name of a specific configuration file to be read if the option is selected.
	public ConfigurationFileOption readConfigurationFileOption;	// Then option as to which configuration file to be read.
	public string cleanConfigurationFileName;					// The name of the configuration file that was read with the end format removed.

	[Header("Configuration File Parsing")]
	public bool readConfigurationFileOnEnable = true;		// Condition to read the preferred configuration file when this component is enabled. This condition is enabled by default.
	public bool parseAllConfigurationDataOnEnable = true;	// Condition to parse the preferred configuration file when this component is enabled. This condition is enabled by default.
	public bool getDefinedExperimentTypeOnEnable = true;	// Condition to get the defined experiment scene using the configuration experiment type data. This condition is enabled by default.
	public bool setCurrentSessionCountersOnEnable = true;	// Condition to set the current trial counter to the initial count from the configuration experiment trial count data. This condition is enabled by default.

	[Header("Experiment Construction Data")]
	public ExperimentConstructionData experimentConstructionData;	// The current experiment's construction data.

	[Header("Experiment Type Scene Association")]
	public SceneObjectContainer associatedExperimentScene;	// The scene associated with the experiment type from the experiment type data.

	[Header("Experiment Trial Counter")]
	public int currentExperimentTrialCount;			// The current trial count of the ongoing experiment. The number of trials will incrementally decrease by one every time a trial is completed.
	public bool preventZeroExperimentTrialCount;	// Condition to prevent the initial trial count from being 0 and ensure that the experiment will at least be executed once.

	[Header("Scene Definition List")]
	public AssetDefinitionList<SceneObjectContainer> sceneDefinitionList;	// The asset definition list for scene objects invocations.

	[Header("Game Object Definition List")]
	public AssetDefinitionList<GameObject> gameObjectDefinitionList;	// The asset definition list for game objects invocations.

	[Header("Material Definition List")]
	public AssetDefinitionList<Material> materialDefinitionList;	// The asset definition list for material objects invocations.

	[Header("Audio Definition List")]
	public AssetDefinitionList<AudioClip> audioDefinitionList;	// The asset definition list for audio objects invocations.

	[Header("Indications")]
	public bool configurationFileFound;			// Condition to indicate if the requested configuration file was found.
	public bool experimentDatabaseEstablished;	// Condition to indicate if the experiment's database is currently ready for use.

	// Method to execute tasks upon enabling the component.
	void OnEnable()
	{
		// Declare the database as currently unestablished until all the "On Enable" tasks are completed.
		configurationFileFound = false;

		// Resolve the input elements directory and read the selected configuration file.
		// If the input elements directory exists it will go ahead and try to find and then read any configuration file available.
		// If the input elements directory doesn't exist, it will proceed to create that directory for the user to use in the future, but the configuration file read will fail.
		if (readConfigurationFileOnEnable)
		{
			FileManagement.ResolveInputDirectory();
			ReadConfigurationFile();
		}
		
		if (parseAllConfigurationDataOnEnable) experimentConstructionData.ParseAll();
		if (preventZeroExperimentTrialCount && experimentConstructionData.experimentTrialCount <= 0) experimentConstructionData.experimentTrialCount = 1;
		if (getDefinedExperimentTypeOnEnable) GetDefinedExperimentScene();
		if (setCurrentSessionCountersOnEnable) SetExperimentTrialCounter();

		experimentDatabaseEstablished = true;
	}

	// Method to read the preferred configuration file.
	public void ReadConfigurationFile()
	{
		if (readConfigurationFileOption == ConfigurationFileOption.GetSpecified)
		{
			if (FileManagement.ConfirmSpecificConfigurationFile(configurationFileName))
			{
				experimentConstructionData = FileManagement.ReadSpecificConfigurationFile(configurationFileName);
				cleanConfigurationFileName = configurationFileName;
				configurationFileFound = true;
			}
		}
		else if (readConfigurationFileOption == ConfigurationFileOption.GetNewest)
		{
			if (FileManagement.ConfirmAnyConfigurationFile())
			{
				experimentConstructionData = FileManagement.ReadNewestConfigurationFile();
				cleanConfigurationFileName = FileManagement.GetNewestConfigurationFileName();
				configurationFileFound = true;
			}
		}
		else if (readConfigurationFileOption == ConfigurationFileOption.GetOldest)
		{
			if (FileManagement.ConfirmAnyConfigurationFile())
			{
				experimentConstructionData = FileManagement.ReadOldestConfigurationFile();
				cleanConfigurationFileName = FileManagement.GetOldestConfigurationFileName();
				configurationFileFound = true;
			}
		}

		cleanConfigurationFileName = FileManagement.RemoveFileFormat(cleanConfigurationFileName);
	}

	// Method to find a scene definition with the same associated name as in the experiment type.
	public void GetDefinedExperimentScene()
	{
		associatedExperimentScene = sceneDefinitionList.GetDefinedObjectByName(experimentConstructionData.experimentType);
	}

	// Method to retrieve and setup the current session's counters.
	public void SetExperimentTrialCounter()
	{
		currentExperimentTrialCount = experimentConstructionData.experimentTrialCount;
	}

	// Method to confirm the experiment scene from the imported data is defined and load it.
	public void LoadExperimentScene()
	{
		associatedExperimentScene.LoadScene();
	}
}