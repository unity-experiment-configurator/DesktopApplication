// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		ExperimentDatabaseSetText.cs
//
// Date:
// 		7/09/2021
//
// Description:
//		Component that retrieves data from a defined or found experiment
//		database component, converts it into string and sets it as the text of a
//		defined text component.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

[Serializable]
public class ExperimentDatabaseSetText : MonoBehaviour
{
	[Header("Experiment Database Component Options")]
	public ExperimentDatabase targetExperimentDatabaseComponent;	// The target experiment database component to query for the target field.
	public string targetDataFieldName;								// The target data field of the target experiment component to retrieve a string from.
	public bool ifNullFindExperimentDatabase = true;				// Condition to try and find the experiment database if the target experiment database component is null. This by default is enabled.

	[Header("Set Text Component Options")]
	public TextMeshPro targetTextMeshProComponent;	// The target text component to assign the string retrieved from the experiment database's target field.
	public bool retrieveAndSetDataOnEnable = true;	// Condition to retrieve data from the experiment database upon enabling this component. This by default is enabled.
	public bool retrieveAndSetDataOnUpdate = true;	// Condition to retrieve data from the experiment database every frame this component is active. This by default is enabled.
	public bool stopUpdateAfterEstablished = true;	// Condition to stop retrieving data and setting the text component once the experiment database is established.

	[Header("Indications")]
	public string currentRetrievedDataString;	// The current data retrieved from the target experiment database and field, converted into a string.

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
		else Debug.LogWarning("Could not set text to the requested field's value. Could not find an experiment database in the current scene");
	}

	// Method to retrieve data from the target experiment database and field as a string.
	public void GetDataString()
	{
		if (targetExperimentDatabaseComponent != null)
		{
			object currentFieldObject = targetExperimentDatabaseComponent.experimentConstructionData.GetType().GetField(targetDataFieldName).GetValue(targetExperimentDatabaseComponent.experimentConstructionData);

			if (currentFieldObject != null)
			{
				// Check if the current field object is a list of strings. If it is, each string entry will be in a new line.
				if (currentFieldObject.GetType() == typeof(List<string>))
				{
					foreach (string currentString in (List<string>)currentFieldObject)
					{
						currentRetrievedDataString += currentString + "\n";
					}
				}
				else currentRetrievedDataString = currentFieldObject.ToString();
			}
			else Debug.LogWarning("Cannot retrieve data .The target field name does not seem to exist on the target experiment database.");
		}
		else Debug.LogWarning("Cannot retrieve data .The target experiment database is null.");
	}

	// Method to set the text of the target text component to the currently retrieved data string.
	public void SetTargetTextComponent()
	{
		targetTextMeshProComponent.text = currentRetrievedDataString;
	}

	// Method to run the main process.
	public void MainProcess()
	{
		if (ifNullFindExperimentDatabase && targetExperimentDatabaseComponent == null) FindExperimentDatabase();

		if (targetExperimentDatabaseComponent != null)
		{
			GetDataString();
			SetTargetTextComponent();
		}
	}
}