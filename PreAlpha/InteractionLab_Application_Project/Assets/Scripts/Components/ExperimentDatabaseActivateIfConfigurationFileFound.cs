// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		ExperimentDatabaseActivateIfConfigurationFileFound.cs
//
// Date:
// 		7/09/2021
//
// Description: 
//		Component that examine a target experiment database component and
//		activate or deactivate the listed activatable or deactivatable game
//		objects depending on if the target experiment database has found its
//		specified configuration file. 
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class ExperimentDatabaseActivateIfConfigurationFileFound : MonoBehaviour
{
	[Header("Experiment Database Component Options")]
	public ExperimentDatabase targetExperimentDatabaseComponent;	// The target experiment database component to query.
	public bool ifNullFindExperimentDatabase = true;				// Condition to try and find the experiment database if the target experiment database component is null. This by default is enabled.
	public bool retrieveAndSetDataOnEnable = true;					// Condition to retrieve data from the experiment database upon enabling this component. This by default is enabled.
	public bool retrieveAndSetDataOnUpdate = true;					// Condition to retrieve data from the experiment database every frame this component is active. This by default is enabled.
	public bool stopUpdateAfterEstablished = true;					// Condition to stop retrieving data and activating or deactivating the listed game objects once the experiment database is established.

	[Header("Activate On Configuration File Found Options")]
	public bool activateGameObjectsOnConfigurationFileFound = true;	// Condition to activate listed gamed objects when the target experiment database has found its specified configuration file.
	public List<GameObject> activatableGameObjectList;				// List of game objects that will be activated when the target experiment database has found its specified configuration file.

	[Header("Deactivate On Configuration File Found Options")]
	public bool deactivateGameObjectsOnConfigurationFileFound = true;	// Condition to deactivate listed gamed objects when the target experiment database has found its specified configuration file.
	public List<GameObject> deactivatableGameObjectList;				// List of game objects that will be deactivated when the target experiment database has found its specified configuration file.

	[Header("Indications")]
	public bool targetExperimentDatabaseHasFoundConfigurationFile;	// Indicator displaying if the target experiment database has currently found its specified configuration file.

	// Method to execute tasks upon enabling the component.
	void OnEnable()
	{
		if (retrieveAndSetDataOnEnable)  MainProcess();
	}

	// Method to run tasks every frame.
	void Update()
	{
		if (retrieveAndSetDataOnUpdate) MainProcess();
		if (targetExperimentDatabaseComponent != null)
		{
			if (retrieveAndSetDataOnUpdate) MainProcess(); if (stopUpdateAfterEstablished && targetExperimentDatabaseComponent.experimentDatabaseEstablished) retrieveAndSetDataOnUpdate = false;
		}
	}

	// Method to find the experiment database component in the current scene the host game object is in now.
	public void FindExperimentDatabase()
	{
		ExperimentDatabase currentFoundExperimentDatabaseComponent = FindObjectOfType<ExperimentDatabase>();

		if (currentFoundExperimentDatabaseComponent != null) targetExperimentDatabaseComponent = currentFoundExperimentDatabaseComponent;
		else Debug.LogWarning("Could not set text to the requested filed's value. Could not find an experiment database in the current scene");
	}

	// Method to check if the target experiment database has found its specified configuration file.
	public void CheckTargetExperimentDatabase()
	{
		if (targetExperimentDatabaseComponent != null) targetExperimentDatabaseHasFoundConfigurationFile = targetExperimentDatabaseComponent.configurationFileFound;
	}

	// Method to enable all listed activatable game objects.
	public void EnableAllActivatableObjects()
	{
		foreach (GameObject currentlyActivatableGameObject in activatableGameObjectList)
		{
			if (currentlyActivatableGameObject != null && currentlyActivatableGameObject.activeSelf == false) currentlyActivatableGameObject.SetActive(true);
		}
	}

	// Method to disable all listed activatable game objects.
	public void DisableAllActivatableObjects()
	{
		foreach (GameObject currentlyActivatableGameObject in activatableGameObjectList)
		{
			if (currentlyActivatableGameObject != null && currentlyActivatableGameObject.activeSelf == true) currentlyActivatableGameObject.SetActive(false);
		}
	}

	// Method to enable all listed deactivatable game objects.
	public void EnableAllDeactivatableObjects()
	{
		foreach (GameObject currentlyDeactivatableGameObject in deactivatableGameObjectList)
		{
			if (currentlyDeactivatableGameObject != null && currentlyDeactivatableGameObject.activeSelf == false) currentlyDeactivatableGameObject.SetActive(true);
		}
	}

	// Method to disable all listed deactivatable game objects.
	public void DisableAllDeactivatableObjects()
	{
		foreach (GameObject currentlyDeactivatableGameObject in deactivatableGameObjectList)
		{
			if (currentlyDeactivatableGameObject != null && currentlyDeactivatableGameObject.activeSelf == true) currentlyDeactivatableGameObject.SetActive(false);
		}
	}

	// Method to run the main process.
	public void MainProcess()
	{
		if (ifNullFindExperimentDatabase && targetExperimentDatabaseComponent == null) FindExperimentDatabase();

		CheckTargetExperimentDatabase();

		if (targetExperimentDatabaseHasFoundConfigurationFile)
		{
			EnableAllActivatableObjects();
			DisableAllDeactivatableObjects();
		}
		else
		{
			EnableAllDeactivatableObjects();
			DisableAllActivatableObjects();
		}
	}
}