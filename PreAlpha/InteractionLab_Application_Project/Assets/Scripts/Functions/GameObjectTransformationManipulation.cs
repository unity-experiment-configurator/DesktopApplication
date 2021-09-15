// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		GameObjectTransformationManipulation.cs
//
// Date:
// 		25/08/2021
//
// Description:
//		Function that contains methods to manipulate game object's
//		transformations.
//
// -----------------------------------------------------------------------------

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameObjectTransformationManipulation
{
	// Method to move the input object that is completely or partially below floor above it.
	public static void ClearFloorLevel(float floorHeight, GameObject targetGameObject)
	{
		if (targetGameObject.GetComponent<Renderer>() != null)
		{
			if (targetGameObject.GetComponent<Renderer>().bounds.min.y < floorHeight)
			{
				targetGameObject.transform.position = new Vector3
				(
					targetGameObject.GetComponent<Transform>().position.x,
					targetGameObject.GetComponent<Transform>().position.y + (floorHeight - targetGameObject.GetComponent<Renderer>().bounds.min.y),
					targetGameObject.GetComponent<Transform>().position.z
				);
			}
		}
		else if (targetGameObject.GetComponent<Collider>() != null)
		{
			if (targetGameObject.GetComponent<Collider>().bounds.min.y < floorHeight)
			{
				targetGameObject.transform.position = new Vector3
				(
					targetGameObject.GetComponent<Transform>().position.x,
					targetGameObject.GetComponent<Transform>().position.y + (floorHeight - targetGameObject.GetComponent<Collider>().bounds.min.y),
					targetGameObject.GetComponent<Transform>().position.z
				);
			}
		}
	}

	// Method to move all input objects that are completely or partially below floor above it.
	public static void ClearFloorLevel(float floorHeight, List<GameObject> targetGameObjectList)
	{
		foreach (GameObject currentTargetGameObject in targetGameObjectList)
		{
			ClearFloorLevel(floorHeight, currentTargetGameObject);
		}
	}
}