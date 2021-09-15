// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		PreserveDuringSceneChange.cs
//
// Date:
// 		7/09/2021
//
// Description: 
//		Component that will preserve its host game object, including its other
//		children and components, during a scene change. 
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

[Serializable]
public class PreserveDuringSceneChange : MonoBehaviour
{
	[Header("Game Object Preservation Options")]
	public bool preserveDuringSceneChanges = true;	// Condition to preserve the component's host game object when loading into other scenes. This by default is enabled.

	[Header("Indications")]
	public int initialSceneBuildIndex;			// Indicator displaying the number of the component's host game object's build index before setting it to be preserved.
	public bool gameObjectDestroyEventAdded;	// Indicator displaying if this component's host game object destruction event has been added to the scene manager's "sceneLoaded" delegate.

	// Method to run tasks once at the earliest unity event.
	void Awake()
	{
		initialSceneBuildIndex = gameObject.scene.buildIndex;
		gameObjectDestroyEventAdded = false;

		if (preserveDuringSceneChanges && gameObject.scene.buildIndex != -1) DontDestroyOnLoad(gameObject);
	}

	// Method to execute tasks upon enabling the component.
	void OnEnable()
	{
		if (preserveDuringSceneChanges && gameObject.scene.buildIndex != -1) DontDestroyOnLoad(gameObject);
	}

	// Method to run tasks every frame.
	void Update()
	{
		MainProcess();
	}

	// Method to destroy the host game object of this component.
	public void DestroyObject(Scene scene, LoadSceneMode mode)
	{
		Destroy(gameObject);
	}

	// Method to add to the scene manager's "sceneLoaded" delegate the event to delete this component's host game object upon loading a scene.
	public void DestroyObjectOnSceneLoadEventAdd()
	{
		try { SceneManager.sceneLoaded += DestroyObject; }
		catch { Debug.LogWarning("Could not add the object destruction event for \"" + gameObject.name + "\" to the scene manager's \"sceneLoaded\" delegate. The event may exist already."); }
	}

	// Method to remove to the scene manager's "sceneLoaded" delegate the event to delete this component's host game object upon loading a scene.
	public void DestroyObjectOnSceneLoadEventRemove()
	{
		try { SceneManager.sceneLoaded -= DestroyObject; }
		catch { Debug.LogWarning("Could not remove the object destruction event for \"" + gameObject.name + "\" to the scene manager's \"sceneLoaded\" delegate. The event may not exist already."); }
	}

	// Method to run the main process.
	public void MainProcess()
	{
		if (preserveDuringSceneChanges)
		{
			if (gameObject.scene.buildIndex != -1) DontDestroyOnLoad(gameObject);

			if (gameObjectDestroyEventAdded)
			{
				DestroyObjectOnSceneLoadEventRemove();
				gameObjectDestroyEventAdded = false;
			}
		}
		else if (!gameObjectDestroyEventAdded)
		{
			if (gameObject.scene.buildIndex == -1)
			{
				DestroyObjectOnSceneLoadEventAdd();
				gameObjectDestroyEventAdded = true;
			}
		}
	}
}