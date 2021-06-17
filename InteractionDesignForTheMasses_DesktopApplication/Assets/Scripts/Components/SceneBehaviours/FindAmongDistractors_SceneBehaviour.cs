// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Design For The Masses Project.
//
// Copyright (C) "Mnemoscene LTD".
// All Rights Reserved.
//
// File:
// 		FindAmongDistractors_SceneSetup.cs
//
// Date:
// 		03/06/2021
//
// Description: 
//
//
// -----------------------------------------------------------------------------

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FindAmongDistractors_SceneBehaviour : MonoBehaviour
{
	[Header("Scene Database Object")]
	public SceneDataBase TargetSceneDataBase;
	public FindReferenceCondition FindTargetSceneDataBase = FindReferenceCondition.OnlyIfNull;

	[Header("Object Trigger Object")]
	public ObjectRoleTrigger TargetObjectTrigger;
	public FindReferenceCondition FindTargetObjectTrigger = FindReferenceCondition.OnlyIfNull;

	[Header("Scene Loader Object")]
	public SceneLoader TargetSceneLoader;
	public FindReferenceCondition FindTargetSceneLoader = FindReferenceCondition.OnlyIfNull;

	[Header("VR Element Recorder Object")]
	public VRElementCSVRecorder TargetVRElementCSVRecorder;
	public FindReferenceCondition FindTargetVRElementCSVRecorder = FindReferenceCondition.OnlyIfNull;

	[Header("Distractor Objects Setup")]
	public bool ParseDistractorDataFromSceneDataBase = true;
	public CreateObjectsInArea DistractorObjectCreator;
	public List<string> distractorModels;
	public List<string> distractorColors;
	public float distractorSize;
	public float distractorSizeMultiplier = 0.005f;
	public int distractorCount; 

	[Header("Target Objects Setup")]
	public bool ParseTargetDataFromSceneDataBase = true;
	public CreateObjectsInArea TargetObjectCreator;
	public string targetModel;
	public string targetColor;
	public string targetSound;
	public float targetSize;
	public float targetSizeMultiplier = 0.005f;

	public string globalSound;

	void Start()
	{
		if (FindTargetSceneDataBase == FindReferenceCondition.OnlyIfNull && TargetSceneDataBase == null) TargetSceneDataBase = SceneDataBaseFunctions.Find();
		else if (FindTargetSceneDataBase == FindReferenceCondition.Always) TargetSceneDataBase = SceneDataBaseFunctions.Find();

		if (FindTargetObjectTrigger == FindReferenceCondition.OnlyIfNull && TargetObjectTrigger == null) TargetObjectTrigger = FindObjectOfType<ObjectRoleTrigger>();
		else if (FindTargetObjectTrigger == FindReferenceCondition.Always) TargetObjectTrigger = FindObjectOfType<ObjectRoleTrigger>();

		if (FindTargetSceneLoader == FindReferenceCondition.OnlyIfNull && TargetSceneLoader == null) TargetSceneLoader = FindObjectOfType<SceneLoader>();
		else if (FindTargetSceneLoader == FindReferenceCondition.Always) TargetSceneLoader = FindObjectOfType<SceneLoader>();

		if (FindTargetVRElementCSVRecorder == FindReferenceCondition.OnlyIfNull && TargetVRElementCSVRecorder == null) TargetVRElementCSVRecorder = FindObjectOfType<VRElementCSVRecorder>();
		else if (FindTargetVRElementCSVRecorder == FindReferenceCondition.Always) TargetVRElementCSVRecorder = FindObjectOfType<VRElementCSVRecorder>();

		if (!TargetVRElementCSVRecorder.IsActive()) TargetVRElementCSVRecorder.StartRecording();

		if (ParseDistractorDataFromSceneDataBase) { DistractorSetup(); }
		if (ParseTargetDataFromSceneDataBase) { TargetSetup(); }

		AmbientSoundSetup();

		DistractorObjectCreator.gameObject.SetActive(true);
		TargetObjectCreator.gameObject.SetActive(true);

		

	}

	void Update()
	{
		if (TargetObjectTrigger.ActiveTrigger && TargetSceneDataBase.CurrentSessionBlockCount > 1)
		{
			if (TargetSceneDataBase.CurrentBlockTrialCount > 1)
			{
				--TargetSceneDataBase.CurrentBlockTrialCount;
				TargetSceneDataBase.LoadExperimentScene();
			}
			else
			{
				--TargetSceneDataBase.CurrentSessionBlockCount;
				TargetSceneDataBase.CurrentBlockTrialCount = TargetSceneDataBase.LoadedSceneConstructionData.blockTrialCount;
				TargetSceneDataBase.LoadExperimentScene();
			}
		}
		else if (TargetObjectTrigger.ActiveTrigger)
		{
			if (TargetVRElementCSVRecorder.IsActive()) TargetVRElementCSVRecorder.EndRecording();
			TargetSceneLoader.LoadTargetScene();
		}
	}

	public void DistractorSetup()
	{
		JsonUtility.FromJsonOverwrite(TargetSceneDataBase.LoadedSceneConstructionData.GetConfigurationDataLineByName("distractorModels"), this);
		JsonUtility.FromJsonOverwrite(TargetSceneDataBase.LoadedSceneConstructionData.GetConfigurationDataLineByName("distractorColors"), this);
		JsonUtility.FromJsonOverwrite(TargetSceneDataBase.LoadedSceneConstructionData.GetConfigurationDataLineByName("distractorSize"), this);
		JsonUtility.FromJsonOverwrite(TargetSceneDataBase.LoadedSceneConstructionData.GetConfigurationDataLineByName("distractorCount"), this);

		foreach (string CurrentModelName in distractorModels)
		{
			GameObject CurrentModelMatch = TargetSceneDataBase.ModelDefinitionList.GetDefinedObjectByName(CurrentModelName);
			if (CurrentModelMatch != null) { DistractorObjectCreator.ChildObjectSamplesList.Add(CurrentModelMatch); }
		}

		foreach (string CurrentMaterialName in distractorColors)
		{
			Material CurrentMaterialMatch = TargetSceneDataBase.MaterialDefinitionList.GetDefinedObjectByName(CurrentMaterialName);
			if (CurrentMaterialMatch != null) { DistractorObjectCreator.ChildMaterialSamplesList.Add(CurrentMaterialMatch); }
		}

		float CurrentDistractorSize = distractorSize * distractorSizeMultiplier;

		DistractorObjectCreator.MinTransformations.Scale = new Vector3(CurrentDistractorSize, CurrentDistractorSize, CurrentDistractorSize);
		DistractorObjectCreator.MaxTransformations.Scale = new Vector3(CurrentDistractorSize, CurrentDistractorSize, CurrentDistractorSize);
		DistractorObjectCreator.ChildCreationTotal = distractorCount;
	}

	public void TargetSetup()
	{
		JsonUtility.FromJsonOverwrite(TargetSceneDataBase.LoadedSceneConstructionData.GetConfigurationDataLineByName("targetModel"), this);
		JsonUtility.FromJsonOverwrite(TargetSceneDataBase.LoadedSceneConstructionData.GetConfigurationDataLineByName("targetColor"), this);
		JsonUtility.FromJsonOverwrite(TargetSceneDataBase.LoadedSceneConstructionData.GetConfigurationDataLineByName("targetSound"), this);
		JsonUtility.FromJsonOverwrite(TargetSceneDataBase.LoadedSceneConstructionData.GetConfigurationDataLineByName("targetSize"), this);

		GameObject CurrentModelMatch = TargetSceneDataBase.ModelDefinitionList.GetDefinedObjectByName(targetModel);
		if (CurrentModelMatch != null) { TargetObjectCreator.ChildObjectSamplesList.Add(CurrentModelMatch); }

		Material CurrentMaterialMatch = TargetSceneDataBase.MaterialDefinitionList.GetDefinedObjectByName(targetColor);
		if (CurrentMaterialMatch != null) { TargetObjectCreator.ChildMaterialSamplesList.Add(CurrentMaterialMatch); }

		AudioClip CurrentSoundMatch = TargetSceneDataBase.SoundDefinitionList.GetDefinedObjectByName(targetSound);
		if (CurrentMaterialMatch != null) { TargetObjectCreator.ChildAudioSamplesList.Add(CurrentSoundMatch); }

		float CurrentTargetSize = targetSize * targetSizeMultiplier;

		TargetObjectCreator.MinTransformations.Scale = new Vector3(CurrentTargetSize, CurrentTargetSize, CurrentTargetSize);
		TargetObjectCreator.MaxTransformations.Scale = new Vector3(CurrentTargetSize, CurrentTargetSize, CurrentTargetSize);
	}

	public void AmbientSoundSetup()
	{
		JsonUtility.FromJsonOverwrite(TargetSceneDataBase.LoadedSceneConstructionData.GetConfigurationDataLineByName("globalSound"), this);

		GameObject NewAmbientSound = new GameObject();
		NewAmbientSound.AddComponent<AudioSource>();
		NewAmbientSound.GetComponent<AudioSource>().volume = 0.6f;
		NewAmbientSound.GetComponent<AudioSource>().playOnAwake = true;
		NewAmbientSound.GetComponent<AudioSource>().loop = true;
		NewAmbientSound.GetComponent<AudioSource>().clip = TargetSceneDataBase.SoundDefinitionList.GetDefinedObjectByName(globalSound);
		NewAmbientSound.GetComponent<AudioSource>().Play();
	}
}