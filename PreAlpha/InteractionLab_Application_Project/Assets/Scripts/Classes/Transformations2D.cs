// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		Transformations2D.cs
//
// Date:
// 		25/08/2021
//
// Description: 
//		Class that contains all transformations that can describe an object's
//		2D spatial position, rotation and scale.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class Transformations2D
{
	[Header("2D Transformations")]
	public Vector2 position;		// The position of the 2D object.
	public Vector2 rotation;		// The rotation of the 2D object.
	public Vector2 scale;			// The scale of the 2D object.

	// Constructor with all default values.
	public Transformations2D()
	{
		position = new Vector2();
		rotation = new Vector2();
		scale = new Vector2(1f, 1f);
	}

	// Constructor with input for the position value. The rest will be set to default values.
	public Transformations2D(Vector3 inputPosition)
	{
		position = inputPosition;
		rotation = new Vector3();
		scale = new Vector3(1f, 1f, 1f);
	}

	// Constructor with input for the position and rotation value. The rest will be set to default values.
	public Transformations2D(Vector3 inputPosition, Vector3 inputRotation)
	{
		position = inputPosition;
		rotation = inputRotation;
		scale = new Vector3(1f, 1f, 1f);
	}

	// Constructor with input for all the transformation values. The rest will be set to default values.
	public Transformations2D(Vector3 inputPosition, Vector3 inputRotation, Vector3 inputScale)
	{
		position = inputPosition;
		rotation = inputRotation;
		scale = inputScale;
	}

	// Constructor with input for all values.
	public Transformations2D(Vector3 inputPosition, Vector3 inputRotation, Vector3 inputScale, TransformOrigin inputOrigin)
	{
		position = inputPosition;
		rotation = inputRotation;
		scale = inputScale;
	}

	// Constructor that will use the local or world transformations of a game object as inputs.
	public Transformations2D(GameObject targetGameObject, TransformOrigin gameObjectOrigin)
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
	public Transformations2D(Transform targetTransform, TransformOrigin gameObjectOrigin)
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
	public Transformations2D GetAdjustedTransformations(Transformations2D adjustmentTransformations)
	{
		return new Transformations2D
		(
			position + adjustmentTransformations.position,
			rotation + adjustmentTransformations.rotation,
			new Vector2
			(
				scale.x * adjustmentTransformations.scale.x,
				scale.y * adjustmentTransformations.scale.y
			),
			TransformOrigin.World
		);
	}

	// Override of the Equals method.
	public override bool Equals(object inputObject)
	{
		Transformations2D comparisonObject = inputObject as Transformations2D;

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