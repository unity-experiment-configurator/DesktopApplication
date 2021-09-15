// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		Transformations4D.cs
//
// Date:
// 		25/08/2021
//
// Description: 
//		Class that contains all transformations that can describe an object's
//		4D spatial position, rotation and scale.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class Transformations4D
{
	[Header("4D Transformations")]
	public Vector4 position;		// The position of the 4D object.
	public Vector4 rotation;		// The rotation of the 4D object.
	public Vector4 scale;			// The scale of the 4D object.

	// Constructor with all default values.
	public Transformations4D()
	{
		position = new Vector4();
		rotation = new Vector4();
		scale = new Vector4(1f, 1f, 1f, 1f);
	}

	// Constructor with input for the position value. The rest will be set to default values.
	public Transformations4D(Vector4 inputPosition)
	{
		position = inputPosition;
		rotation = new Vector4();
		scale = new Vector4(1f, 1f, 1f, 1f);
	}

	// Constructor with input for the position and rotation value. The rest will be set to default values.
	public Transformations4D(Vector4 inputPosition, Vector4 inputRotation)
	{
		position = inputPosition;
		rotation = inputRotation;
		scale = new Vector4(1f, 1f, 1f, 1f);
	}

	// Constructor with input for all the transformation values. The rest will be set to default values.
	public Transformations4D(Vector4 inputPosition, Vector4 inputRotation, Vector4 inputScale)
	{
		position = inputPosition;
		rotation = inputRotation;
		scale = inputScale;
	}

	// Constructor with input for all values.
	public Transformations4D(Vector4 inputPosition, Vector4 inputRotation, Vector4 inputScale, TransformOrigin inputOrigin)
	{
		position = inputPosition;
		rotation = inputRotation;
		scale = inputScale;
	}

	// Constructor that will use the local or world transformations of a game object as inputs.
	public Transformations4D(GameObject targetGameObject, TransformOrigin gameObjectOrigin)
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
	public Transformations4D(Transform targetTransform, TransformOrigin gameObjectOrigin)
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
	public Transformations4D GetAdjustedTransformations(Transformations4D adjustmentTransformations)
	{
		return new Transformations4D
		(
			position + adjustmentTransformations.position,
			rotation + adjustmentTransformations.rotation,
			new Vector4
			(
				scale.x * adjustmentTransformations.scale.x,
				scale.y * adjustmentTransformations.scale.y,
				scale.z * adjustmentTransformations.scale.z,
				scale.w * adjustmentTransformations.scale.w
			),
			TransformOrigin.World
		);
	}

	// Override of the Equals method.
	public override bool Equals(object inputObject)
	{
		Transformations4D comparisonObject = inputObject as Transformations4D;

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