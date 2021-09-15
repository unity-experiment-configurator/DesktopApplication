// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		GameObjectRenderManipulation.cs
//
// Date:
// 		25/08/2021
//
// Description: 
//		Function that contains methods to manipulate game object's rendering.
//
// -----------------------------------------------------------------------------

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameObjectRenderManipulation
{
	// Method to hide the input object.
	public static void HideMesh(GameObject targetGameObject)
	{
		targetGameObject.GetComponent<Renderer>().enabled = false;
	}

	// Method to hide all input objects.
	public static void HideMesh(List<GameObject> targetGameObjectList)
	{
		foreach (GameObject currentGameObject in targetGameObjectList)
		{
			currentGameObject.GetComponent<Renderer>().enabled = false;
		}
	}

	// Method to show the input object.
	public static void ShowMesh(GameObject targetGameObject)
	{
		targetGameObject.GetComponent<Renderer>().enabled = true;
	}

	// Method to show all input objects.
	public static void ShowMesh(List<GameObject> targetGameObjectList)
	{
		foreach (GameObject currentGameObject in targetGameObjectList)
		{
			currentGameObject.GetComponent<Renderer>().enabled = true;
		}
	}
}