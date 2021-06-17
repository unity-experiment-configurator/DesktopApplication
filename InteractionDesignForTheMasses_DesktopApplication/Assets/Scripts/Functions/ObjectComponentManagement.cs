// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Design For The Masses Project.
//
// Copyright (C) "Mnemoscene LTD".
// All Rights Reserved.
//
// File:
// 		ObjectComponentManagement.cs
//
// Date:
// 		02/06/2021
//
// Description: 
//
//
// -----------------------------------------------------------------------------

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectComponentManagement
{
	// Method to add multiple components to a game object.
	public static void AddMultipleComponents<InputComponentType>(List<InputComponentType> ComponentList, GameObject TargetGameObject) where InputComponentType : Component, new()
	{
		foreach (InputComponentType CurrentComponent in ComponentList)
		{
			TargetGameObject.AddComponent(CurrentComponent.GetType());
		}
	}

	// Method to add multiple components to multiple game objects.
	public static void AddMultipleComponents<InputComponentType>(List<InputComponentType> ComponentList, List<GameObject> TargetGameObjectList) where InputComponentType : Component, new()
	{
		foreach (GameObject CurrentGameObject in TargetGameObjectList)
		{
			AddMultipleComponents(ComponentList, CurrentGameObject);
		}
	}

	// Method to remove multiple components from a game object.
	public static void RemoveMultipleComponents<InputComponentType>(List<InputComponentType> ComponentList, GameObject TargetGameObject) where InputComponentType : Component, new()
	{
		foreach (InputComponentType CurrentComponent in ComponentList)
		{
			Object.Destroy(TargetGameObject.GetComponent(CurrentComponent.GetType()));
		}
	}

	// Method to remove multiple components from multiple game objects.
	public static void RemoveMultipleComponents<InputComponentType>(List<InputComponentType> ComponentList, List<GameObject> TargetGameObjectList) where InputComponentType : Component, new()
	{
		foreach (GameObject CurrentGameObject in TargetGameObjectList)
		{
			RemoveMultipleComponents(ComponentList, CurrentGameObject);
		}
	}
}
