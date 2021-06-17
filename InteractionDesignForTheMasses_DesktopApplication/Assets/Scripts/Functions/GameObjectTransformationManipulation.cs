// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Design For The Masses Project.
//
// Copyright (C) "Mnemoscene LTD".
// All Rights Reserved.
//
// File:
// 		GameObjectTransformationManipulation.cs
//
// Date:
// 		02/06/2021
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
	public static void ClearFloorLevel(float FloorHeight, GameObject TargetGameObject)
	{
		if (TargetGameObject.GetComponent<Renderer>() != null)
		{
			if (TargetGameObject.GetComponent<Renderer>().bounds.min.y < FloorHeight)
			{
				TargetGameObject.transform.position = new Vector3
				(
					TargetGameObject.GetComponent<Transform>().position.x,
					TargetGameObject.GetComponent<Transform>().position.y + (FloorHeight - TargetGameObject.GetComponent<Renderer>().bounds.min.y),
					TargetGameObject.GetComponent<Transform>().position.z
				);
			}
		}
		else if (TargetGameObject.GetComponent<Collider>() != null)
		{
			if (TargetGameObject.GetComponent<Collider>().bounds.min.y < FloorHeight)
			{
				TargetGameObject.transform.position = new Vector3
				(
					TargetGameObject.GetComponent<Transform>().position.x,
					TargetGameObject.GetComponent<Transform>().position.y + (FloorHeight - TargetGameObject.GetComponent<Collider>().bounds.min.y),
					TargetGameObject.GetComponent<Transform>().position.z
				);
			}
		}
	}

	// Method to move all input objects that are completely or partially below floor above it.
	public static void ClearFloorLevel(float FloorHeight, List<GameObject> TargetGameObjectList)
	{
		foreach (GameObject CurrentTargetGameObject in TargetGameObjectList)
		{
			ClearFloorLevel(FloorHeight, CurrentTargetGameObject);
		}
	}
}