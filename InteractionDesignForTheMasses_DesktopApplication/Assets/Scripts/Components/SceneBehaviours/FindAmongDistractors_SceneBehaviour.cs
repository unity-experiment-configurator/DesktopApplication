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
using UnityEngine.XR.Interaction.Toolkit;

public class FindAmongDistractors_SceneBehaviour : MonoBehaviour
{
	[Header("Scene Database Component")]
	public SceneDataBase TargetSceneDataBase;
	public FindReferenceCondition FindTargetSceneDataBase = FindReferenceCondition.OnlyIfNull;

	[Header("Object Trigger Component")]
	public ObjectRoleTrigger TargetObjectTrigger;
	public FindReferenceCondition FindTargetObjectTrigger = FindReferenceCondition.OnlyIfNull;

	[Header("Scene Loader Component")]
	public SceneLoader TargetSceneLoader;
	public FindReferenceCondition FindTargetSceneLoader = FindReferenceCondition.OnlyIfNull;
	public SceneObjectContainer ExitScene;

	[Header("VR Element Recorder Component")]
	public VRElementCSVRecorder TargetVRElementCSVRecorder;
	public FindReferenceCondition FindTargetVRElementCSVRecorder = FindReferenceCondition.OnlyIfNull;

	[Header("Fade Element Interaction")]
	public FadeElementOperation TargetFadeElement;
	public FindReferenceCondition FindTargetFadeElement = FindReferenceCondition.OnlyIfNull;

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
	public string targetSoundPlaybackEvent;
	public float targetSize;
	public float targetSizeMultiplier = 0.005f;

	public string interactionType;

	public GameObject BackgroundAudioObject;

	private bool GoalAudioOnGoing = false;
	private bool LoadAgain = false;
	private bool TaskComplete = false;
	private bool DestroyedSimilar = false;
	private bool InteractorsEstablished = false;

	private List<GameObject> InteractorObjects = new List<GameObject>();

	//public string globalSound;

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

		if (FindTargetFadeElement == FindReferenceCondition.OnlyIfNull && TargetFadeElement == null) TargetFadeElement = FindObjectOfType<FadeElementOperation>();
		else if (FindTargetFadeElement == FindReferenceCondition.Always) TargetFadeElement = FindObjectOfType<FadeElementOperation>();

		if (!TargetVRElementCSVRecorder.IsActive()) TargetVRElementCSVRecorder.StartRecording();

		if (ParseDistractorDataFromSceneDataBase) DistractorSetup();
		if (ParseTargetDataFromSceneDataBase) TargetSetup();


		JsonUtility.FromJsonOverwrite(TargetSceneDataBase.LoadedSceneConstructionData.GetConfigurationDataLineByName("interactionType"), this);

		if (interactionType == "point")
		{
			foreach (XRDirectInteractor CurrentInteractor in FindObjectsOfType<XRDirectInteractor>())
			{
				InteractorObjects.Add(CurrentInteractor.gameObject);

				Destroy(CurrentInteractor);
			}
		}

		//AmbientSoundSetup();

		DistractorObjectCreator.gameObject.SetActive(true);
		TargetObjectCreator.gameObject.SetActive(true);

		if (FindObjectOfType<BackgroundAudioDataParser>() == null) Instantiate(BackgroundAudioObject);

		GameObject.Find("AmbientSound").GetComponent<FadeAmbientSound>().CurrentFadeState = FadeState.FadeOut;
	}

	void Update()
	{

		if (interactionType == "point")
		{
			foreach (GameObject CurrentInteractor in InteractorObjects)
			{
				if (CurrentInteractor.GetComponent<XRRayInteractor>() == null) CurrentInteractor.AddComponent<XRRayInteractor>();
				if (CurrentInteractor.GetComponent<LineRenderer>() == null) CurrentInteractor.AddComponent<LineRenderer>();
				if (CurrentInteractor.GetComponent<XRInteractorLineVisual>() == null) CurrentInteractor.AddComponent<XRInteractorLineVisual>();
			}
		}

		if (!DestroyedSimilar)
		{
			List<GameObject> DestroySimilar = new List<GameObject>();

			foreach (GameObject CurrentDistractor in DistractorObjectCreator.CreatedChildObjectList)
			{
				if (CurrentDistractor.GetComponent<MeshCollider>().sharedMesh.name == TargetObjectCreator.CreatedChildObjectList[0].GetComponent<MeshCollider>().sharedMesh.name
				&& CurrentDistractor.GetComponent<Renderer>().material.name == TargetObjectCreator.CreatedChildObjectList[0].GetComponent<Renderer>().material.name)
				{
					DestroySimilar.Add(CurrentDistractor);
				}
			}

			foreach (GameObject CurrentSimilar in DestroySimilar)
			{
				Destroy(CurrentSimilar);
			}

			DestroyedSimilar = true;
		}

		if (TargetObjectTrigger.ActiveTrigger && !TaskComplete)
		{
			if (targetSoundPlaybackEvent == "ongoal" && !TargetObjectTrigger.gameObject.GetComponent<AudioSource>().isPlaying && !GoalAudioOnGoing)
			{
				TargetObjectTrigger.gameObject.GetComponent<AudioSource>().Play();
				GoalAudioOnGoing = true;
			}

			if (TargetSceneDataBase.CurrentBlockTrialCount > 1)
			{
				TaskComplete = true;

				--TargetSceneDataBase.CurrentBlockTrialCount;

				TargetFadeElement.FadeInPace = 0.015f;
				TargetFadeElement.FadeOutPace = 0.015f;

				TargetSceneLoader.TargetScene = TargetSceneDataBase.AssociatedExperimentScene;
				TargetSceneLoader.LoadTargetScene();
			}
			else
			{
				--TargetSceneDataBase.CurrentSessionBlockCount;

				if (TargetSceneDataBase.CurrentSessionBlockCount > 0)
				{
					TaskComplete = true;

					TargetSceneDataBase.CurrentBlockTrialCount = TargetSceneDataBase.LoadedSceneConstructionData.blockTrialCount;

					TargetFadeElement.FadeInPace = 0.015f;
					TargetFadeElement.FadeOutPace = 0.015f;

					TargetSceneLoader.TargetScene = TargetSceneDataBase.AssociatedExperimentScene;
					TargetSceneLoader.LoadTargetScene();
				}
				else
				{
					TaskComplete = true;

					TargetFadeElement.FadeInPace = 0.005f;
					TargetFadeElement.FadeOutPace = 0.005f;

					if (TargetVRElementCSVRecorder.IsActive()) TargetVRElementCSVRecorder.EndRecording();

					TargetSceneLoader.TargetScene = ExitScene;
					TargetSceneLoader.LoadTargetScene();

					GameObject.Find("AmbientSound").GetComponent<FadeAmbientSound>().CurrentFadeState = FadeState.FadeIn;
				}
			}
		}
		else if (TargetObjectTrigger.ActiveTrigger)
		{
			
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
		JsonUtility.FromJsonOverwrite(TargetSceneDataBase.LoadedSceneConstructionData.GetConfigurationDataLineByName("targetSoundPlaybackEvent"), this);

		if (targetSoundPlaybackEvent == "always") TargetObjectCreator.AddObjectSoundAlwaysToChild = true;
		else if (targetSoundPlaybackEvent == "ongrab") TargetObjectCreator.AddObjectSoundOnGrabToChild = true;
		else if (targetSoundPlaybackEvent == "ondrop") TargetObjectCreator.AddObjectSoundOnDropToChild = true;

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

	/*
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
	*/
}