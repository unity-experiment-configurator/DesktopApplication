// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		FindTargetAmongstDistractorsSceneBahviour.cs
//
// Date:
// 		9/09/2021
//
// Description:
//		Component that handles the general scene behaviour of the "Find Target
//		Amongst Distractors" type of experiment.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class FindTargetAmongstDistractorsSceneBehaviour : MonoBehaviour
{
	[Header("Experiment Configuration Data")]
	public AudioClip environmentAudioClip;
	public AudioClip goalAudio;

	[Space(7)]
	public int distractorObjectSpawnCount;
	public float distractorObjectTransformScale;
	public List<GameObject> distrctorObjectGameObjectList;
	public List<Material> distrctorObjectMaterialList;

	[Space(7)]
	public float targetObjectTransformScale;
	public GameObject targetObjectGameObject;
	public Material targetObjectMaterial;
	public AudioClip targetConstantAudio;
	public AudioClip targetOnGrabAudio;
	public AudioClip targetOnReleaseAudio;

	[Space(7)]
	public bool allowMovement;
	public bool allowDirectGrab;
	public bool allowRayGrab;

	[Header("Referenced Components Options")]
	public ExperimentDatabase experimentDatabaseComponent;
	public bool ifNullFindExperimentDatabase = true;		// Condition to try and find the experiment database if the target experiment database component is null. This by default is enabled.

	[Space(7)]
	public AudioSource environmentAudioSourceComponent;
	public AudioSource goalAudioSourceComponent;

	[Space(7)]
	public GameObjectVolumeSpawner targetObjectGameObjectVolumeSpawnerComponent;
	public GameObjectVolumeSpawner distractorObjectGameObjectVolumeSpawnerComponent;
	public AssignMaterialToChildren targetObjectAssignMaterialToChildrenComponent;
	public AssignMaterialToChildren distractorObjectAssignMaterialToChildrenComponent;

	[Space(7)]
	public RoleTagTriggerActivationController roleTagTriggerActivationController;

	[Space(7)]
	public GameObjectDataCSVLogger gameObjectDataCSVLoggerComponent;
	public SceneLoader repeatExperimentSceneLoaderComponent;
	public SceneLoader finishExperimentSceneLoaderComponent;

	[Space(7)]
	public VRDeviceObjectActivationController leftInteractionActivator;
	public VRDeviceObjectActivationController rightInteractionActivator;

	[Space(7)]
	public VRDeviceObjectMovementController movementControllerA;
	public VRDeviceObjectMovementController movementControllerB;

	public bool objectiveComplete;

	// Method to run tasks once at the earliest unity event.
	void Awake()
	{
		DisableReferencedComponents();

		if (ifNullFindExperimentDatabase) FindExperimentDatabase();
		SetupExperimentConfiguration();
		SetupReferenceObjects();

		EnableReferencedComponents();
	}

	// Method to run tasks upon enabling the component.
	void OnEnable()
	{
		AudioSource targetOnGrabAudioSource = targetObjectGameObjectVolumeSpawnerComponent.gameObject.transform.GetChild(0).GetChild(0).gameObject.GetComponent<AudioSource>();
		AudioSource targetOnReleaseAudioSource = targetObjectGameObjectVolumeSpawnerComponent.gameObject.transform.GetChild(0).GetChild(1).gameObject.GetComponent<AudioSource>();
		AudioSource targetConstantAudioSource = targetObjectGameObjectVolumeSpawnerComponent.gameObject.transform.GetChild(0).GetChild(2).gameObject.GetComponent<AudioSource>();

		if (targetOnGrabAudioSource != null) targetOnGrabAudioSource.clip = targetOnGrabAudio;
		if (targetOnReleaseAudioSource != null) targetOnReleaseAudioSource.clip = targetOnReleaseAudio;
		if (targetConstantAudioSource != null)
		{
			targetConstantAudioSource.clip = targetConstantAudio;
			targetConstantAudioSource.Play();
		}

		targetObjectGameObjectVolumeSpawnerComponent.gameObject.transform.GetChild(0).name = "TARGET OBJECT";

		gameObjectDataCSVLoggerComponent.targetGameObjectList.Add(targetObjectGameObjectVolumeSpawnerComponent.gameObject.transform.GetChild(0).gameObject);

		gameObjectDataCSVLoggerComponent.outputFileName += experimentDatabaseComponent.cleanConfigurationFileName + " Session" + experimentDatabaseComponent.currentExperimentTrialCount;

		gameObjectDataCSVLoggerComponent.gameObject.SetActive(true);


		//------- sorry

		if (allowDirectGrab && !allowRayGrab)
		{
			leftInteractionActivator.enabled = false;
			rightInteractionActivator.enabled = false;

			leftInteractionActivator.gameObject.transform.GetChild(0).gameObject.SetActive(true);
			rightInteractionActivator.gameObject.transform.GetChild(0).gameObject.SetActive(true);

			leftInteractionActivator.gameObject.transform.GetChild(1).gameObject.SetActive(false);
			rightInteractionActivator.gameObject.transform.GetChild(1).gameObject.SetActive(false);
		}

		if (!allowDirectGrab && allowRayGrab)
		{
			leftInteractionActivator.enabled = false;
			rightInteractionActivator.enabled = false;

			leftInteractionActivator.gameObject.transform.GetChild(0).gameObject.SetActive(false);
			rightInteractionActivator.gameObject.transform.GetChild(0).gameObject.SetActive(false);

			leftInteractionActivator.gameObject.transform.GetChild(1).gameObject.SetActive(true);
			rightInteractionActivator.gameObject.transform.GetChild(1).gameObject.SetActive(true);
		}

		if (!allowDirectGrab && !allowRayGrab)
		{
			leftInteractionActivator.enabled = false;
			rightInteractionActivator.enabled = false;

			leftInteractionActivator.gameObject.transform.GetChild(0).gameObject.SetActive(false);
			rightInteractionActivator.gameObject.transform.GetChild(0).gameObject.SetActive(false);

			leftInteractionActivator.gameObject.transform.GetChild(1).gameObject.SetActive(false);
			rightInteractionActivator.gameObject.transform.GetChild(1).gameObject.SetActive(false);
		}

		if (!allowMovement)
		{
			movementControllerA.enabled = false;
			movementControllerB.enabled = false;
		}
	}

	// Method to run tasks every frame.
	void Update()
	{
		//Debug.Log(targetObjectGameObjectVolumeSpawnerComponent.gameObject.transform.GetChild(0).GetChild(0).gameObject.name.ToString());
		//Debug.Log(targetObjectGameObjectVolumeSpawnerComponent.gameObject.transform.GetChild(0).GetChild(1).gameObject.name.ToString());
		//Debug.Log(targetObjectGameObjectVolumeSpawnerComponent.gameObject.transform.GetChild(0).GetChild(2).gameObject.name.ToString());


		if (roleTagTriggerActivationController.currentlyRoleTagTriggerActive && !objectiveComplete)
		{
			objectiveComplete = true;
			--experimentDatabaseComponent.currentExperimentTrialCount;

			gameObjectDataCSVLoggerComponent.EndLogging();

			if (experimentDatabaseComponent.currentExperimentTrialCount > 0) repeatExperimentSceneLoaderComponent.gameObject.SetActive(true);
			else finishExperimentSceneLoaderComponent.gameObject.SetActive(true);
		}
	}

	// Method to find the experiment database component in the current scene the host game object is in now.
	public void FindExperimentDatabase()
	{
		ExperimentDatabase currentFoundExperimentDatabaseComponent = FindObjectOfType<ExperimentDatabase>();

		if (currentFoundExperimentDatabaseComponent != null) experimentDatabaseComponent = currentFoundExperimentDatabaseComponent;
		else Debug.LogWarning("Could not set the target scene to the requested field's value. Could not find an experiment database in the current scene");
	}

	// Method to retrieve experiment configuration data from the referenced experiment database
	public void SetupExperimentConfiguration()
	{
		//-------------------------------------------------------------------------------------TIDY UP SOON-------------------------------------------------------------------------------------

		// Setup the environment's continuous audio and the goal's trigger audio.
		environmentAudioClip = experimentDatabaseComponent.audioDefinitionList.GetDefinedObjectByName(experimentDatabaseComponent.experimentConstructionData.GetConfigurationDataLineByName("environmentAudio", false) // False so the json format is dropped.
																																													.Replace(": ", ":")
																																													.Replace(" :", ":")
																																													.Split(':')[1]
																																													.Replace("[ ", "")
																																													.Replace(" [", "")
																																													.Replace("] ", "")
																																													.Replace(" ]", "")
																																													.Replace("[", "")
																																													.Replace("]", "")
																																													.Replace(" \"", "")
																																													.Replace("\" ", "")
																																													.Replace("\"", "")
																																													.Replace(", ", ",")
																																													.Replace(" ,", ","));
		goalAudio = experimentDatabaseComponent.audioDefinitionList.GetDefinedObjectByName(experimentDatabaseComponent.experimentConstructionData.GetConfigurationDataLineByName("goalAudio", false) // False so the json format is dropped.
																																													.Replace(": ", ":")
																																													.Replace(" :", ":")
																																													.Split(':')[1]
																																													.Replace("[ ", "")
																																													.Replace(" [", "")
																																													.Replace("] ", "")
																																													.Replace(" ]", "")
																																													.Replace("[", "")
																																													.Replace("]", "")
																																													.Replace(" \"", "")
																																													.Replace("\" ", "")
																																													.Replace("\"", "")
																																													.Replace(", ", ",")
																																													.Replace(" ,", ","));

		// Setup the distractor count and size parameters.
		int.TryParse(experimentDatabaseComponent.experimentConstructionData.GetConfigurationDataLineByName("distractorCount", false) // False so the json format is dropped.
																												.Replace(": ", ":")
																												.Replace(" :", ":")
																												.Split(':')[1]
																												.Replace("[ ", "")
																												.Replace(" [", "")
																												.Replace("] ", "")
																												.Replace(" ]", "")
																												.Replace("[", "")
																												.Replace("]", "")
																												.Replace(" \"", "")
																												.Replace("\" ", "")
																												.Replace("\"", "")
																												.Replace(", ", ",")
																												.Replace(" ,", ",")
																												, out distractorObjectSpawnCount);

		float.TryParse(experimentDatabaseComponent.experimentConstructionData.GetConfigurationDataLineByName("distractorSize", false) // False so the json format is dropped.
																												.Replace(": ", ":")
																												.Replace(" :", ":")
																												.Split(':')[1]
																												.Replace("[ ", "")
																												.Replace(" [", "")
																												.Replace("] ", "")
																												.Replace(" ]", "")
																												.Replace("[", "")
																												.Replace("]", "")
																												.Replace(" \"", "")
																												.Replace("\" ", "")
																												.Replace("\"", "")
																												.Replace(", ", ",")
																												.Replace(" ,", ",")
																												, out distractorObjectTransformScale);

		// Setup the distractor game object list.
		string distractorModelsRawData = experimentDatabaseComponent.experimentConstructionData.GetConfigurationDataLineByName("distractorModels", false); // False so the json format is dropped.
		string[] distractorModelsNameArray = distractorModelsRawData
															.Replace(": ", ":")
															.Replace(" :", ":")
															.Split(':')[1]
															.Replace("[ ", "")
															.Replace(" [", "")
															.Replace("] ", "")
															.Replace(" ]", "")
															.Replace("[", "")
															.Replace("]", "")
															.Replace(" \"", "")
															.Replace("\" ", "")
															.Replace("\"", "")
															.Replace(", ", ",")
															.Replace(" ,", ",")
															.Split(',');

		foreach (string currentGameObjectName in distractorModelsNameArray)
		{
			GameObject currentGameObject = experimentDatabaseComponent.gameObjectDefinitionList.GetDefinedObjectByName(currentGameObjectName);

			if (currentGameObject != null) distrctorObjectGameObjectList.Add(currentGameObject);
		}

		// Setup the distractor material list.
		string distractorMaterialsRawData = experimentDatabaseComponent.experimentConstructionData.GetConfigurationDataLineByName("distractorColours", false); // False so the json format is dropped.
		string[] distractorMaterialsNameArray = distractorMaterialsRawData
															.Replace(": ", ":")
															.Replace(" :", ":")
															.Split(':')[1]
															.Replace("[ ", "")
															.Replace(" [", "")
															.Replace("] ", "")
															.Replace(" ]", "")
															.Replace("[", "")
															.Replace("]", "")
															.Replace(" \"", "")
															.Replace("\" ", "")
															.Replace("\"", "")
															.Replace(", ", ",")
															.Replace(" ,", ",")
															.Split(',');

		foreach (string currentMaterialName in distractorMaterialsNameArray)
		{
			Material currentMaterial = experimentDatabaseComponent.materialDefinitionList.GetDefinedObjectByName(currentMaterialName);

			if (currentMaterial != null) distrctorObjectMaterialList.Add(currentMaterial);
		}

		float.TryParse(experimentDatabaseComponent.experimentConstructionData.GetConfigurationDataLineByName("targetSize", false) // False so the json format is dropped.
																												.Replace(": ", ":")
																												.Replace(" :", ":")
																												.Split(':')[1]
																												.Replace("[ ", "")
																												.Replace(" [", "")
																												.Replace("] ", "")
																												.Replace(" ]", "")
																												.Replace("[", "")
																												.Replace("]", "")
																												.Replace(" \"", "")
																												.Replace("\" ", "")
																												.Replace("\"", "")
																												.Replace(", ", ",")
																												.Replace(" ,", ",")
																												, out targetObjectTransformScale);

		targetObjectGameObject = experimentDatabaseComponent.gameObjectDefinitionList.GetDefinedObjectByName(experimentDatabaseComponent.experimentConstructionData.GetConfigurationDataLineByName("targetModel", false) // False so the json format is dropped.
																																																	.Replace(": ", ":")
																																																	.Replace(" :", ":")
																																																	.Split(':')[1]
																																																	.Replace("[ ", "")
																																																	.Replace(" [", "")
																																																	.Replace("] ", "")
																																																	.Replace(" ]", "")
																																																	.Replace("[", "")
																																																	.Replace("]", "")
																																																	.Replace(" \"", "")
																																																	.Replace("\" ", "")
																																																	.Replace("\"", "")
																																																	.Replace(", ", ",")
																																																	.Replace(" ,", ","));

		targetObjectMaterial = experimentDatabaseComponent.materialDefinitionList.GetDefinedObjectByName(experimentDatabaseComponent.experimentConstructionData.GetConfigurationDataLineByName("targetColour", false) // False so the json format is dropped.
																																																	.Replace(": ", ":")
																																																	.Replace(" :", ":")
																																																	.Split(':')[1]
																																																	.Replace("[ ", "")
																																																	.Replace(" [", "")
																																																	.Replace("] ", "")
																																																	.Replace(" ]", "")
																																																	.Replace("[", "")
																																																	.Replace("]", "")
																																																	.Replace(" \"", "")
																																																	.Replace("\" ", "")
																																																	.Replace("\"", "")
																																																	.Replace(", ", ",")
																																																	.Replace(" ,", ","));

		targetConstantAudio = experimentDatabaseComponent.audioDefinitionList.GetDefinedObjectByName(experimentDatabaseComponent.experimentConstructionData.GetConfigurationDataLineByName("targetConstantAudio", false) // False so the json format is dropped.
																																																.Replace(": ", ":")
																																																.Replace(" :", ":")
																																																.Split(':')[1]
																																																.Replace("[ ", "")
																																																.Replace(" [", "")
																																																.Replace("] ", "")
																																																.Replace(" ]", "")
																																																.Replace("[", "")
																																																.Replace("]", "")
																																																.Replace(" \"", "")
																																																.Replace("\" ", "")
																																																.Replace("\"", "")
																																																.Replace(", ", ",")
																																																.Replace(" ,", ","));

		targetOnGrabAudio = experimentDatabaseComponent.audioDefinitionList.GetDefinedObjectByName(experimentDatabaseComponent.experimentConstructionData.GetConfigurationDataLineByName("targetOnGrabAudio", false) // False so the json format is dropped.
																																																.Replace(": ", ":")
																																																.Replace(" :", ":")
																																																.Split(':')[1]
																																																.Replace("[ ", "")
																																																.Replace(" [", "")
																																																.Replace("] ", "")
																																																.Replace(" ]", "")
																																																.Replace("[", "")
																																																.Replace("]", "")
																																																.Replace(" \"", "")
																																																.Replace("\" ", "")
																																																.Replace("\"", "")
																																																.Replace(", ", ",")
																																																.Replace(" ,", ","));

		targetOnReleaseAudio = experimentDatabaseComponent.audioDefinitionList.GetDefinedObjectByName(experimentDatabaseComponent.experimentConstructionData.GetConfigurationDataLineByName("targetOnReleaseAudio", false) // False so the json format is dropped.
																																																.Replace(": ", ":")
																																																.Replace(" :", ":")
																																																.Split(':')[1]
																																																.Replace("[ ", "")
																																																.Replace(" [", "")
																																																.Replace("] ", "")
																																																.Replace(" ]", "")
																																																.Replace("[", "")
																																																.Replace("]", "")
																																																.Replace(" \"", "")
																																																.Replace("\" ", "")
																																																.Replace("\"", "")
																																																.Replace(", ", ",")
																																																.Replace(" ,", ","));

		bool.TryParse(experimentDatabaseComponent.experimentConstructionData.GetConfigurationDataLineByName("userMovement", false) // False so the json format is dropped.
																												.Replace(": ", ":")
																												.Replace(" :", ":")
																												.Split(':')[1]
																												.Replace("[ ", "")
																												.Replace(" [", "")
																												.Replace("] ", "")
																												.Replace(" ]", "")
																												.Replace("[", "")
																												.Replace("]", "")
																												.Replace(" \"", "")
																												.Replace("\" ", "")
																												.Replace("\"", "")
																												.Replace(", ", ",")
																												.Replace(" ,", ",")
																												, out allowMovement);

		bool.TryParse(experimentDatabaseComponent.experimentConstructionData.GetConfigurationDataLineByName("userDirectGrab", false) // False so the json format is dropped.
																												.Replace(": ", ":")
																												.Replace(" :", ":")
																												.Split(':')[1]
																												.Replace("[ ", "")
																												.Replace(" [", "")
																												.Replace("] ", "")
																												.Replace(" ]", "")
																												.Replace("[", "")
																												.Replace("]", "")
																												.Replace(" \"", "")
																												.Replace("\" ", "")
																												.Replace("\"", "")
																												.Replace(", ", ",")
																												.Replace(" ,", ",")
																												, out allowDirectGrab);

		bool.TryParse(experimentDatabaseComponent.experimentConstructionData.GetConfigurationDataLineByName("userRayGrab", false) // False so the json format is dropped.
																												.Replace(": ", ":")
																												.Replace(" :", ":")
																												.Split(':')[1]
																												.Replace("[ ", "")
																												.Replace(" [", "")
																												.Replace("] ", "")
																												.Replace(" ]", "")
																												.Replace("[", "")
																												.Replace("]", "")
																												.Replace(" \"", "")
																												.Replace("\" ", "")
																												.Replace("\"", "")
																												.Replace(", ", ",")
																												.Replace(" ,", ",")
																												, out allowRayGrab);
	}


	//-------------------------------------------------------------------------------------TIDY UP SOON-------------------------------------------------------------------------------------




	// Method to disable all critical referenced components
	public void DisableReferencedComponents()
	{
		if (environmentAudioSourceComponent != null) environmentAudioSourceComponent.enabled = false;
		if (goalAudioSourceComponent != null) goalAudioSourceComponent.enabled = false;

		//if (targetObjectGameObjectVolumeSpawnerComponent != null) targetObjectGameObjectVolumeSpawnerComponent.enabled = false;
		//if (distractorObjectGameObjectVolumeSpawnerComponent != null ) distractorObjectGameObjectVolumeSpawnerComponent.enabled = false;
		//if (targetObjectAssignMaterialToChildrenComponent != null) targetObjectAssignMaterialToChildrenComponent.enabled = false;
		//if (distractorObjectAssignMaterialToChildrenComponent != null) distractorObjectAssignMaterialToChildrenComponent.enabled = false;

		if (gameObjectDataCSVLoggerComponent != null) gameObjectDataCSVLoggerComponent.enabled = false;
		if (repeatExperimentSceneLoaderComponent != null) repeatExperimentSceneLoaderComponent.enabled = false;
		if (finishExperimentSceneLoaderComponent != null) finishExperimentSceneLoaderComponent.enabled = false;
	}

	// Method to enable all critical referenced components
	public void EnableReferencedComponents()
	{
		if (environmentAudioSourceComponent != null) environmentAudioSourceComponent.enabled = true;
		if (goalAudioSourceComponent != null) goalAudioSourceComponent.enabled = true;

		//if (targetObjectGameObjectVolumeSpawnerComponent != null) targetObjectGameObjectVolumeSpawnerComponent.enabled = true;
		//if (distractorObjectGameObjectVolumeSpawnerComponent != null) distractorObjectGameObjectVolumeSpawnerComponent.enabled = true;
		//if (targetObjectAssignMaterialToChildrenComponent != null) targetObjectAssignMaterialToChildrenComponent.enabled = true;
		//if (distractorObjectAssignMaterialToChildrenComponent != null) distractorObjectAssignMaterialToChildrenComponent.enabled = true;

		if (gameObjectDataCSVLoggerComponent != null) gameObjectDataCSVLoggerComponent.enabled = true;
		if (repeatExperimentSceneLoaderComponent != null) repeatExperimentSceneLoaderComponent.enabled = true;
		if (finishExperimentSceneLoaderComponent != null) finishExperimentSceneLoaderComponent.enabled = true;

		targetObjectGameObjectVolumeSpawnerComponent.gameObject.SetActive(true);
		distractorObjectGameObjectVolumeSpawnerComponent.gameObject.SetActive(true);
	}

	public void SetupReferenceObjects()
	{
		environmentAudioSourceComponent.clip = environmentAudioClip;
		goalAudioSourceComponent.clip = goalAudio;

		targetObjectGameObjectVolumeSpawnerComponent.transformationsMin.scale.x = targetObjectTransformScale;
		targetObjectGameObjectVolumeSpawnerComponent.transformationsMin.scale.y = targetObjectTransformScale;
		targetObjectGameObjectVolumeSpawnerComponent.transformationsMin.scale.z = targetObjectTransformScale;

		targetObjectGameObjectVolumeSpawnerComponent.transformationsMax.scale.x = targetObjectTransformScale;
		targetObjectGameObjectVolumeSpawnerComponent.transformationsMax.scale.y = targetObjectTransformScale;
		targetObjectGameObjectVolumeSpawnerComponent.transformationsMax.scale.z = targetObjectTransformScale;

		targetObjectGameObjectVolumeSpawnerComponent.gameObjectSampleList.Add(targetObjectGameObject);
		targetObjectAssignMaterialToChildrenComponent.sampleMaterialList.Add(targetObjectMaterial);



		distractorObjectGameObjectVolumeSpawnerComponent.transformationsMin.scale.x = distractorObjectTransformScale;
		distractorObjectGameObjectVolumeSpawnerComponent.transformationsMin.scale.y = distractorObjectTransformScale;
		distractorObjectGameObjectVolumeSpawnerComponent.transformationsMin.scale.z = distractorObjectTransformScale;

		distractorObjectGameObjectVolumeSpawnerComponent.transformationsMax.scale.x = distractorObjectTransformScale;
		distractorObjectGameObjectVolumeSpawnerComponent.transformationsMax.scale.y = distractorObjectTransformScale;
		distractorObjectGameObjectVolumeSpawnerComponent.transformationsMax.scale.z = distractorObjectTransformScale;

		distractorObjectGameObjectVolumeSpawnerComponent.spawnCountMinMax.min = distractorObjectSpawnCount;
		distractorObjectGameObjectVolumeSpawnerComponent.spawnCountMinMax.max = distractorObjectSpawnCount;

		distractorObjectGameObjectVolumeSpawnerComponent.gameObjectSampleList = distrctorObjectGameObjectList;
		distractorObjectAssignMaterialToChildrenComponent.sampleMaterialList = distrctorObjectMaterialList;

		
	}
}