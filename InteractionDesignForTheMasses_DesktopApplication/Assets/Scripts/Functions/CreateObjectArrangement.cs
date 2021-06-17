// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Design For The Masses Project.
//
// Copyright (C) "Mnemoscene LTD".
// All Rights Reserved.
//
// File:
// 		InstantiateObjectsWithinArea.cs
//
// Date:
// 		28/05/2021
//
// Description:
//		Function that contains methods to create a variety of game object
//		arrangements.
//
// -----------------------------------------------------------------------------

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CreateObjectArrangement
{
	// Method to create game objects from the provided sample list in random positions within the provided range of transformations.
	public static List<GameObject> RandomInArea(int ChildObjectTotal, List<GameObject> ChildObjectSampleList, Transform ParentObject, List<Material> ChildMaterialSampleList, Transformations MinChildObjectTransformations, Transformations MaxChildObjectTransformations, Transform OriginPoint, bool UniformScale)
	{
		List<GameObject> OutputGameObjectList = new List<GameObject>();

		if (ChildObjectSampleList.Count > 0)
		{
			for (int ChildObjectCount = 0; ChildObjectCount < ChildObjectTotal; ChildObjectCount++)
			{
				GameObject CurrentChildObject = Object.Instantiate(ChildObjectSampleList[Random.Range(0, ChildObjectSampleList.Count)]);

				CurrentChildObject.transform.parent = ParentObject;

				CurrentChildObject.GetComponent<Renderer>().material = ChildMaterialSampleList[Random.Range(0, ChildMaterialSampleList.Count)];

				CurrentChildObject.GetComponent<Transform>().position = new Vector3
				(
					Random.Range(MinChildObjectTransformations.GetAdjustedTransformationsToOrigin(OriginPoint).Position.x, MaxChildObjectTransformations.GetAdjustedTransformationsToOrigin(OriginPoint).Position.x),
					Random.Range(MinChildObjectTransformations.GetAdjustedTransformationsToOrigin(OriginPoint).Position.y, MaxChildObjectTransformations.GetAdjustedTransformationsToOrigin(OriginPoint).Position.y),
					Random.Range(MinChildObjectTransformations.GetAdjustedTransformationsToOrigin(OriginPoint).Position.z, MaxChildObjectTransformations.GetAdjustedTransformationsToOrigin(OriginPoint).Position.z)
				);

				CurrentChildObject.GetComponent<Transform>().eulerAngles = new Vector3
				(
					Random.Range(MinChildObjectTransformations.GetAdjustedTransformationsToOrigin(OriginPoint).Rotation.x, MaxChildObjectTransformations.GetAdjustedTransformationsToOrigin(OriginPoint).Rotation.x),
					Random.Range(MinChildObjectTransformations.GetAdjustedTransformationsToOrigin(OriginPoint).Rotation.y, MaxChildObjectTransformations.GetAdjustedTransformationsToOrigin(OriginPoint).Rotation.y),
					Random.Range(MinChildObjectTransformations.GetAdjustedTransformationsToOrigin(OriginPoint).Rotation.z, MaxChildObjectTransformations.GetAdjustedTransformationsToOrigin(OriginPoint).Rotation.z)
				);

				if (UniformScale)
				{
					float CurrentUniformScale = Random.Range
					(
						(MinChildObjectTransformations.GetAdjustedTransformationsToOrigin(OriginPoint).Scale.x + MinChildObjectTransformations.GetAdjustedTransformationsToOrigin(OriginPoint).Scale.y + MinChildObjectTransformations.GetAdjustedTransformationsToOrigin(OriginPoint).Scale.z) / 3,
						(MaxChildObjectTransformations.GetAdjustedTransformationsToOrigin(OriginPoint).Scale.x + MaxChildObjectTransformations.GetAdjustedTransformationsToOrigin(OriginPoint).Scale.y + MaxChildObjectTransformations.GetAdjustedTransformationsToOrigin(OriginPoint).Scale.z) / 3
					);

					CurrentChildObject.GetComponent<Transform>().localScale = new Vector3
					(
						CurrentUniformScale,
						CurrentUniformScale,
						CurrentUniformScale
					);
				}
				else
				{
					CurrentChildObject.GetComponent<Transform>().localScale = new Vector3
					(
						Random.Range(MinChildObjectTransformations.GetAdjustedTransformationsToOrigin(OriginPoint).Scale.x, MaxChildObjectTransformations.GetAdjustedTransformationsToOrigin(OriginPoint).Scale.x),
						Random.Range(MinChildObjectTransformations.GetAdjustedTransformationsToOrigin(OriginPoint).Scale.y, MaxChildObjectTransformations.GetAdjustedTransformationsToOrigin(OriginPoint).Scale.y),
						Random.Range(MinChildObjectTransformations.GetAdjustedTransformationsToOrigin(OriginPoint).Scale.z, MaxChildObjectTransformations.GetAdjustedTransformationsToOrigin(OriginPoint).Scale.z)
					);
				}

				OutputGameObjectList.Add(CurrentChildObject);
			}
		}
		else
		{
			Debug.LogWarning("Cannot create object arrangement. The game object sample list is empty.");
		}

		for (int OutputGameObjectCount = OutputGameObjectList.Count - 1; OutputGameObjectCount >= 0; OutputGameObjectCount--)
		{
			if (OutputGameObjectList[OutputGameObjectCount] == null)
			{
				OutputGameObjectList.RemoveAt(OutputGameObjectCount);
			}
		}

		return OutputGameObjectList;
	}
}
