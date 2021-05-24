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
	[Header("General Options")]
	public bool PreserveDataBase = true;

	[Header("Configuration File Options")]
	public bool ReadConfigurationFileOnStart = false;
	public bool RemoveAllInvalidDefinitionsOnStart = false;
	public bool LoadDefinedExperimentOnStart = false;
	
	[Header("Scene Construction Data")]
	public SceneConstructionData ConstructionData;

	[Header("Scene List")]
	public List<AssetDefinition<SceneObjectContainer>> SceneDefinitionList;

	[Header("Model List")]
	public List<AssetDefinition<GameObject>> ModelDefinitionList;

	[Header("Material List")]
	public List<AssetDefinition<Material>> MaterialDefinitionList;

	[Header("Sound List")]
	public List<AssetDefinition<AudioClip>> SoundDefinitionList;

	// Method to read the config.json file located in the currently same directory the application is in.
	public void ReadConfiguration()
	{
		ConstructionData = ReadConfigFile.Read();
	}

	public void LoadExperimentScene()
	{
		foreach (AssetDefinition<SceneObjectContainer> CurrentSceneDefinition in SceneDefinitionList)
		{
			foreach (string CurrentValidSceneName in CurrentSceneDefinition.AssetNameList)
			{
				if (CurrentValidSceneName == ConstructionData.ExperimentType)
				{
					SceneManager.LoadScene(CurrentSceneDefinition.AssetObject.Scene, LoadSceneMode.Single);
					break;
				}
			}
		}
	}

	// Method to examine all distractor object entries and remove the ones that do not match any of the available model objects.
	public void RemoveInvalidDistractorTypes(bool SetToDefaultOnRemove = false, bool IgnoreCase = false)
	{
		List<int> InvaliObjectIndexList = new List<int>();
		int CurrentSuggestedObjectIndex = 0;

		foreach (string CurrentSuggestedTypeName in ConstructionData.DistractorTypes)
		{
			bool MatchFound = false;

			foreach (AssetDefinition<GameObject> CurrentModelDefinition in ModelDefinitionList)
			{
				foreach (string CurrentValidModelName in CurrentModelDefinition.AssetNameList)
				{
					if (IgnoreCase)
					{
						if (CurrentSuggestedTypeName.Equals(CurrentValidModelName, StringComparison.InvariantCultureIgnoreCase))
						{
							MatchFound = true;
							break;
						}
					}
					else
					{
						if (CurrentSuggestedTypeName.Equals(CurrentValidModelName))
						{
							MatchFound = true;
							break;
						}
					}
				}

				if (MatchFound) { break; }
			}

			if (!MatchFound)
			{
				InvaliObjectIndexList.Add(CurrentSuggestedObjectIndex);
			}

			CurrentSuggestedObjectIndex++;
		}

		if (InvaliObjectIndexList.Count > 0)
		{
			for (int InvalidItemIndexCount = InvaliObjectIndexList.Count - 1; InvalidItemIndexCount >= 0; InvalidItemIndexCount--)
			{
				if (SetToDefaultOnRemove)
				{
					ConstructionData.DistractorTypes[InvaliObjectIndexList[InvalidItemIndexCount]] = "Default";
				}
				else
				{
					ConstructionData.DistractorTypes.RemoveAt(InvaliObjectIndexList[InvalidItemIndexCount]);
				}
			}
		}
	}

	public void RemoveInvalidObjectDefinition<InputObjectType>(List<AssetDefinition<InputObjectType>> InputObjectDefinitionList, ref string InputDefinition, bool SetToDefaultOnRemove = false)
	{
		bool MatchFound = false;

		foreach (AssetDefinition<InputObjectType> CurrentObjectDefinition in InputObjectDefinitionList)
		{
			foreach (string CurrentValidObjectName in CurrentObjectDefinition.AssetNameList)
			{
				if (InputDefinition == CurrentValidObjectName)
				{
					MatchFound = true;
					break;
				}
			}

			if (MatchFound) { break; }
		}

		if (!MatchFound)
		{
			if (SetToDefaultOnRemove)
			{
				InputDefinition = "Default";
			}
			else
			{
				InputDefinition = "";
			}
		}
	}

	void Start()
	{
		if (PreserveDataBase)
		{
			DontDestroyOnLoad(gameObject);
		}
		
		if (ReadConfigurationFileOnStart)
		{
			ReadConfiguration();
		}

		if (RemoveAllInvalidDefinitionsOnStart)
		{
			RemoveInvalidDistractorTypes(true, true);
			RemoveInvalidObjectDefinition(SceneDefinitionList, ref ConstructionData.ExperimentType, true);
			RemoveInvalidObjectDefinition(MaterialDefinitionList, ref ConstructionData.TargetColour, true);
			RemoveInvalidObjectDefinition(ModelDefinitionList, ref ConstructionData.TargetType, true);
			RemoveInvalidObjectDefinition(SoundDefinitionList, ref ConstructionData.TargetSound, true);
		}

		if (LoadDefinedExperimentOnStart)
		{
			LoadExperimentScene();
		}
	}
}
