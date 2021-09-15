// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		ExperimentDatabaseSetExperimentType.cs
//
// Date:
// 		7/09/2021
//
// Description:
//		Component that retrieves the experiment type from a defined or found
//		experiment database component and assigns it to a target scene loader.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class ExperimentDatabaseSetExperimentType : MonoBehaviour
{
	[Header("Experiment Database Component Options")]
	public ExperimentDatabase targetExperimentDatabaseComponent;	// The target experiment database component to query for the experiment type scene.
	public bool ifNullFindExperimentDatabase = true;				// Condition to try and find the experiment database if the target experiment database component is null. This by default is enabled.

	[Header("Scene Loader Component Options")]
	public SceneLoader targetSceneLoaderComponent;  // The target scene loader component to set its target scene.
	public bool retrieveAndSetDataOnEnable = true;  // Condition to retrieve data from the experiment database upon enabling this component. This by default is enabled.
	public bool retrieveAndSetDataOnUpdate = true;  // Condition to retrieve data from the experiment database every frame this component is active. This by default is enabled.
	public bool stopUpdateAfterEstablished = true;  // Condition to stop retrieving data and setting the text component once the experiment database is established.

	[Header("Indications")]
	public SceneObjectContainer currentExperimentTypeScene;

	// Method to execute tasks upon enabling the component.
	void OnEnable()
	{
		if (retrieveAndSetDataOnEnable) MainProcess();

	}

	// Method to run tasks every frame.
	void Update()
	{
		if (retrieveAndSetDataOnUpdate) MainProcess();
		if (targetExperimentDatabaseComponent != null)
		{
			if (stopUpdateAfterEstablished && targetExperimentDatabaseComponent.experimentDatabaseEstablished) retrieveAndSetDataOnUpdate = false;
		}
	}

	// Method to find the experiment database component in the current scene the host game object is in now.
	public void FindExperimentDatabase()
	{
		ExperimentDatabase currentFoundExperimentDatabaseComponent = FindObjectOfType<ExperimentDatabase>();

		if (currentFoundExperimentDatabaseComponent != null) targetExperimentDatabaseComponent = currentFoundExperimentDatabaseComponent;
		else Debug.LogWarning("Could not set the target scene to the requested field's value. Could not find an experiment database in the current scene");
	}

	// Method to retrieve the current experiment type scene from the specified experiment database component.
	public void GetExperimentTypeScene()
	{
		if (targetExperimentDatabaseComponent != null)
		{
			currentExperimentTypeScene = targetExperimentDatabaseComponent.associatedExperimentScene;
		}
		else Debug.LogWarning("Could not retrieve the experiment type scene from the target experiment database component. The target experiment database is null.");
	}

	// Method to set the target scene loader's target scene as the current experiment type scene.
	public void SetSceneLoaderTargetScene()
	{
		if (targetSceneLoaderComponent != null) targetSceneLoaderComponent.targetSceneContainer = currentExperimentTypeScene;
		else Debug.LogWarning("Could not set the target scene loader component's target scene. The target experiment database is null.");
	}

	// Method to run the main process.
	public void MainProcess()
	{
		if (ifNullFindExperimentDatabase && targetExperimentDatabaseComponent == null) FindExperimentDatabase();

		if (targetExperimentDatabaseComponent != null)
		{
			GetExperimentTypeScene();
			SetSceneLoaderTargetScene();
		}
	}
}