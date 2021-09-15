// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		RoleTagTriggerActivationController.cs
//
// Date:
// 		8/09/2021
//
// Description:
//		Component that activates or deactivates its listed game objects based on
//		if a game object with a common attribute container component has entered
//		this component's host game object's trigger collider and contains the
//		the set role tag.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class RoleTagTriggerActivationController : MonoBehaviour
{
	[Header("Role Tag Options")]
	public ObjectRoleTag targetRoleTag;		// The target role tag to search for when a game object with a common attributes container component triggers the host game object.
	public bool evaluateOnEnable = true;	// Condition to disable all activatable game objects and enable all deactivatable game objects upon enabling the component. This is by default enabled.

	[Header("Activatable Game Objects")]
	public bool activateGameObjectsOnRoleTagTrigger = true;						// Condition to activate the listed game objects when the role tag trigger become active.
	public List<GameObject> activatableGameObjectList = new List<GameObject>();	// List of all game object to be activated when the role tag trigger become active.

	[Header("Deactivatable Game Objects")]
	public bool deactivateGameObjectsOnRoleTagTrigger = true;						// Condition to deactivate the listed game objects when the role tag trigger become active.
	public List<GameObject> deactivatableGameObjectList = new List<GameObject>();	// List of all game object to be deactivated when the role tag trigger become active.

	[Header("Indications")]
	public bool currentlyRoleTagTriggerActive;  // Indicator displaying if the specified role tag has been found.

	// Method to run tasks upon enabling the component.
	void OnEnable()
	{
		if (evaluateOnEnable)
		{
			if (activateGameObjectsOnRoleTagTrigger) DisableAllActivatableObjects();
			if (deactivateGameObjectsOnRoleTagTrigger) EnableAllDeactivatableObjects();

			MainProcess();
		}
	}

	// Method to run tasks every frame.
	void Update()
	{
		MainProcess();
	}

	void OnTriggerEnter(Collider other)
	{
		CommonAttributesContainer currentCommonAttributesContainer = other.gameObject.GetComponent<CommonAttributesContainer>();

		if (currentCommonAttributesContainer != null)
		{
			if (currentCommonAttributesContainer.commonAttributes.roleTagList.Contains(targetRoleTag)) currentlyRoleTagTriggerActive = true;
		}
	}

	// Method to enable all listed activatable game objects.
	public void EnableAllActivatableObjects()
	{
		foreach (GameObject currentlyActivatableGameObject in activatableGameObjectList)
		{
			if (currentlyActivatableGameObject.activeSelf == false) currentlyActivatableGameObject.SetActive(true);
		}
	}

	// Method to disable all listed activatable game objects.
	public void DisableAllActivatableObjects()
	{
		foreach (GameObject currentlyActivatableGameObject in activatableGameObjectList)
		{
			if (currentlyActivatableGameObject.activeSelf == true) currentlyActivatableGameObject.SetActive(false);
		}
	}

	// Method to enable all listed deactivatable game objects.
	public void EnableAllDeactivatableObjects()
	{
		foreach (GameObject currentlyDeactivatableGameObject in deactivatableGameObjectList)
		{
			if (currentlyDeactivatableGameObject.activeSelf == false) currentlyDeactivatableGameObject.SetActive(true);
		}
	}

	// Method to disable all listed deactivatable game objects.
	public void DisableAllDeactivatableObjects()
	{
		foreach (GameObject currentlyDeactivatableGameObject in deactivatableGameObjectList)
		{
			if (currentlyDeactivatableGameObject.activeSelf == true) currentlyDeactivatableGameObject.SetActive(false);
		}
	}

	// Method to run the main process.
	public void MainProcess()
	{
		if (currentlyRoleTagTriggerActive)
		{
			if (activateGameObjectsOnRoleTagTrigger) EnableAllActivatableObjects();
			if (deactivateGameObjectsOnRoleTagTrigger) DisableAllDeactivatableObjects();
		}
		else
		{
			if (activateGameObjectsOnRoleTagTrigger) DisableAllActivatableObjects();
			if (deactivateGameObjectsOnRoleTagTrigger) EnableAllDeactivatableObjects();
		}
	}
}