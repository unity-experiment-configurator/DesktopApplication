// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		ObjectComponentManagement.cs
//
// Date:
// 		25/08/2021
//
// Description: 
//		Function that contains methods to manage the components of an object.
//
// -----------------------------------------------------------------------------

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectComponentManagement
{
	// Method to add multiple components to a game object.
	public static void AddMultipleComponents<inputComponentType>(List<inputComponentType> componentList, GameObject targetGameObject) where inputComponentType : Component, new()
	{
		foreach (inputComponentType currentComponent in componentList)
		{
			targetGameObject.AddComponent(currentComponent.GetType());
		}
	}

	// Method to add multiple components to multiple game objects.
	public static void AddMultipleComponents<InputComponentType>(List<InputComponentType> componentList, List<GameObject> targetGameObjectList) where InputComponentType : Component, new()
	{
		foreach (GameObject currentGameObject in targetGameObjectList)
		{
			AddMultipleComponents(componentList, currentGameObject);
		}
	}

	// Method to remove multiple components from a game object.
	public static void RemoveMultipleComponents<InputComponentType>(List<InputComponentType> componentList, GameObject targetGameObject) where InputComponentType : Component, new()
	{
		foreach (InputComponentType currentComponent in componentList)
		{
			Object.Destroy(targetGameObject.GetComponent(currentComponent.GetType()));
		}
	}

	// Method to remove multiple components from multiple game objects.
	public static void RemoveMultipleComponents<InputComponentType>(List<InputComponentType> componentList, List<GameObject> targetGameObjectList) where InputComponentType : Component, new()
	{
		foreach (GameObject currentGameObject in targetGameObjectList)
		{
			RemoveMultipleComponents(componentList, currentGameObject);
		}
	}
}