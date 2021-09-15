// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		SceneObjectContainer.cs
//
// Date:
// 		25/08/2021
//
// Description: 
//		Class that contains the scene class deceleration and the method to load
//		it using the scene manager.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

[Serializable]
public class SceneObjectContainer
{
	[Header("Scene Container")]
	[Scene]
	public string scene;			// The name of the scene. The scene will be rejected if it has not been declared to be included in the application build.
	public LoadSceneMode loadMode;  // The mode the scene will use by default when requested to load.

	// Constructor with all default values.
	public SceneObjectContainer()
	{
		scene = "";
		loadMode = LoadSceneMode.Single;
	}

	// Constructor with input for the scene name.
	// The scene loading mode will automatically be set to single.
	public SceneObjectContainer(string inputScene)
	{
		scene = inputScene;
		loadMode = LoadSceneMode.Single;
	}

	// Constructor with inputs for all values.
	public SceneObjectContainer(string inputScene, LoadSceneMode inputLoadMode)
	{
		scene = inputScene;
		loadMode = inputLoadMode;
	}

	// Method to check if the current scene name is valid, and if it is, load it using the defined load mode.
	public void LoadScene()
	{
		if (Application.CanStreamedLevelBeLoaded(scene)) SceneManager.LoadScene(scene, loadMode);
	}

	// Method to check if the current scene name is valid, and if it is, load it using the input load mode.
	public void LoadSceneOverride(LoadSceneMode inputLoadSceneMode)
	{
		if (Application.CanStreamedLevelBeLoaded(scene)) SceneManager.LoadScene(scene, inputLoadSceneMode);
	}

	// Override of the Equals method.
	public override bool Equals(object inputObject)
	{
		SceneObjectContainer comparisonObject = inputObject as SceneObjectContainer;

		return scene.Equals(comparisonObject.scene);
	}

	// Override of the GetHashCode method.
	public override int GetHashCode()
	{
		return scene.ToString().GetHashCode();
	}
}