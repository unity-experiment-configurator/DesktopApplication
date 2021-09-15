// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		ExperimentDatabaseSetCurrentTrialCount.cs
//
// Date:
// 		9/09/2021
//
// Description:
//		Component that retrieves the experiment's current trial count from a
//		defined or found experiment database component, convert the data into a
//		string and then set it to a target text component.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

[Serializable]
public class ExperimentDatabaseSetCurrentTrialCount : MonoBehaviour
{
	[Header("Experiment Database Component Options")]
	public ExperimentDatabase targetExperimentDatabaseComponent;	// The target experiment database component to query for the experiment type scene.
	public bool ifNullFindExperimentDatabase = true;				// Condition to try and find the experiment database if the target experiment database component is null. This by default is enabled.
	
	[Header("Set Text Component Options")]
	public TextMeshPro targetTextMeshProComponent;	// The target text component to assign the string retrieved from the experiment database's target field.
	public bool retrieveAndSetDataOnEnable = true;	// Condition to retrieve data from the experiment database upon enabling this component. This by default is enabled.
	public bool retrieveAndSetDataOnUpdate = true;	// Condition to retrieve data from the experiment database every frame this component is active. This by default is enabled.
	public bool stopUpdateAfterEstablished = true;	// Condition to stop retrieving data and setting the text component once the experiment database is established.

	[Header("Indications")]
	public string currentExperimentTrialCount;  // Indicator that displays the currently retrieved current trial count from the target experiment database component

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

	// Method to retrieve the current experiment trial count from the specified experiment database component.
	public void GetExperimentTrialCount()
	{
		if (targetExperimentDatabaseComponent != null)
		{
			currentExperimentTrialCount = targetExperimentDatabaseComponent.currentExperimentTrialCount.ToString();
		}
		else Debug.LogWarning("Could not retrieve the current experiment trial count from the target experiment database component. The target experiment database is null.");
	}

	// Method to set the text of the target text component to the currently retrieved data string.
	public void SetTargetTextComponent()
	{
		targetTextMeshProComponent.text = currentExperimentTrialCount;
	}

	// Method to run the main process.
	public void MainProcess()
	{
		if (ifNullFindExperimentDatabase && targetExperimentDatabaseComponent == null) FindExperimentDatabase();

		if (targetExperimentDatabaseComponent != null)
		{
			GetExperimentTrialCount();
			SetTargetTextComponent();
		}
	}
}