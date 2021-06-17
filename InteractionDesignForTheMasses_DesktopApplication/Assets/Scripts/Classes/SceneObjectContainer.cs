// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Design For The Masses Project.
//
// Copyright (C) "Mnemoscene LTD".
// All Rights Reserved.
//
// File:
// 		SceneObjectContainer.cs
//
// Date:
// 		27/05/2021
//
// Description: 
//		Class that contains the scene class decleration and the method to load
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
	[Scene]
	public string Scene;

	// Constructor with the default scene value;
	public SceneObjectContainer()
	{
		Scene = "";
	}

	// Constructor with input for the scene value;
	public SceneObjectContainer(string InputScene)
	{
		Scene = InputScene;
	}

	// Method to check if the current scene name is valid, and if it is, load it.
	// Optional input for if the scene loading should be additive or single.
	public void LoadScene(LoadSceneMode InputLoadSceneMode = LoadSceneMode.Single)
	{
		if (Application.CanStreamedLevelBeLoaded(Scene)) SceneManager.LoadScene(Scene, InputLoadSceneMode);
	}
}