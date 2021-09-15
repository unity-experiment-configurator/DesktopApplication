// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		Transformations3D.cs
//
// Date:
// 		25/08/2021
//
// Description: 
//		Class that contains all transformations that can describe an object's
//		3D spatial position, rotation and scale.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class Transformations3D
{
	[Header("3D Transformations")]
	public Vector3 position;		// The position of the 3D object.
	public Vector3 rotation;		// The rotation of the 3D object.
	public Vector3 scale;			// The scale of the 3D object.

	// Constructor with all default values.
	public Transformations3D()
	{
		position = new Vector3();
		rotation = new Vector3();
		scale = new Vector3(1f, 1f, 1f);
	}

	// Constructor with input for the position value. The rest will be set to default values.
	public Transformations3D(Vector3 inputPosition)
	{
		position = inputPosition;
		rotation = new Vector3();
		scale = new Vector3(1f, 1f, 1f);
	}

	// Constructor with input for the position and rotation value. The rest will be set to default values.
	public Transformations3D(Vector3 inputPosition, Vector3 inputRotation)
	{
		position = inputPosition;
		rotation = inputRotation;
		scale = new Vector3(1f, 1f, 1f);
	}

	// Constructor with input for all the transformation values. The rest will be set to default values.
	public Transformations3D(Vector3 inputPosition, Vector3 inputRotation, Vector3 inputScale)
	{
		position = inputPosition;
		rotation = inputRotation;
		scale = inputScale;
	}

	// Constructor with input for all values.
	public Transformations3D(Vector3 inputPosition, Vector3 inputRotation, Vector3 inputScale, TransformOrigin inputOrigin)
	{
		position = inputPosition;
		rotation = inputRotation;
		scale = inputScale;
	}

	// Constructor that will use the local or world transformations of a game object as inputs.
	public Transformations3D(GameObject targetGameObject, TransformOrigin gameObjectOrigin)
	{
		if (gameObjectOrigin == TransformOrigin.Local)
		{
			position = targetGameObject.GetComponent<Transform>().localPosition;
			rotation = targetGameObject.GetComponent<Transform>().localEulerAngles;
			scale = targetGameObject.GetComponent<Transform>().localScale;
		}
		else
		{
			position = targetGameObject.GetComponent<Transform>().position;
			rotation = targetGameObject.GetComponent<Transform>().eulerAngles;
			scale = targetGameObject.GetComponent<Transform>().lossyScale;
		}
	}

	// Constructor that will use the local or world transformations of a transform component as inputs.
	public Transformations3D(Transform targetTransform, TransformOrigin gameObjectOrigin)
	{
		if (gameObjectOrigin == TransformOrigin.Local)
		{
			position = targetTransform.localPosition;
			rotation = targetTransform.localEulerAngles;
			scale = targetTransform.localScale;
		}
		else
		{
			position = targetTransform.position;
			rotation = targetTransform.eulerAngles;
			scale = targetTransform.lossyScale;
		}
	}

	// Method to adjust the current transformations with another transformation input.
	public Transformations3D GetAdjustedTransformations(Transformations3D adjustmentTransformations)
	{
		return new Transformations3D
		(
			position + adjustmentTransformations.position,
			rotation + adjustmentTransformations.rotation,
			new Vector3
			(
				scale.x * adjustmentTransformations.scale.x,
				scale.y * adjustmentTransformations.scale.y,
				scale.z * adjustmentTransformations.scale.z
			),
			TransformOrigin.World
		);
	}

	// Override of the Equals method.
	public override bool Equals(object inputObject)
	{
		Transformations3D comparisonObject = inputObject as Transformations3D;

		return position.Equals(comparisonObject.position)
			&& rotation.Equals(comparisonObject.rotation)
			&& scale.Equals(comparisonObject.scale);
	}

	// Override of the GetHashCode method.
	public override int GetHashCode()
	{
		return ("Position" + position.ToString()
			+ "Rotation" + rotation.ToString()
			+ "Scale" + scale.ToString())
			.ToString()
			.GetHashCode();
	}
}