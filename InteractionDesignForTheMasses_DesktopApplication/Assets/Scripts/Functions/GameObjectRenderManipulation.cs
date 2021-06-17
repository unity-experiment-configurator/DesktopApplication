// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Design For The Masses Project.
//
// Copyright (C) "Mnemoscene LTD".
// All Rights Reserved.
//
// File:
// 		GameObjectRenderManipulation.cs
//
// Date:
// 		01/06/2021
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
	public static void HideMesh(GameObject TargetGameObject)
	{
		TargetGameObject.GetComponent<Renderer>().enabled = false;
	}

	// Method to hide all input objects.
	public static void HideMesh(List<GameObject> TargetGameObjectList)
	{
		foreach (GameObject CurrentGameObject in TargetGameObjectList)
		{
			CurrentGameObject.GetComponent<Renderer>().enabled = false;
		}
	}

	// Method to show the input object.
	public static void ShowMesh(GameObject TargetGameObject)
	{
		TargetGameObject.GetComponent<Renderer>().enabled = true;
	}

	// Method to show all input objects.
	public static void ShowMesh(List<GameObject> TargetGameObjectList)
	{
		foreach (GameObject CurrentGameObject in TargetGameObjectList)
		{
			CurrentGameObject.GetComponent<Renderer>().enabled = true;
		}
	}
}
