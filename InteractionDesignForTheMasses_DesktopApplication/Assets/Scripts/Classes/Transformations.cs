// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Design For The Masses Project.
//
// Copyright (C) "Mnemoscene LTD".
// All Rights Reserved.
//
// File:
// 		Transformations.cs
//
// Date:
// 		29/05/2021
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
public class Transformations
{
	public Vector3 Position;
	public Vector3 Rotation;
	public Vector3 Scale;
	public TransformOrigin Origin;

	// Constructor with all default values.
	public Transformations()
	{
		Position = new Vector3();
		Rotation = new Vector3();
		Scale = new Vector3(1f, 1f, 1f);
		Origin = TransformOrigin.World;
	}

	// Contructor with input for the position value. The rest will be set to default values.
	public Transformations(Vector3 InputPosition)
	{
		Position = InputPosition;
		Rotation = new Vector3();
		Scale = new Vector3(1f, 1f, 1f);
		Origin = TransformOrigin.World;
	}

	// Contructor with input for the position and rotation value. The rest will be set to default values.
	public Transformations(Vector3 InputPosition, Vector3 InputRotation)
	{
		Position = InputPosition;
		Rotation = InputRotation;
		Scale = new Vector3(1f, 1f, 1f);
		Origin = TransformOrigin.World;
	}

	// Contructor with input for all the transformation values. The rest will be set to default values.
	public Transformations(Vector3 InputPosition, Vector3 InputRotation, Vector3 InputScale)
	{
		Position = InputPosition;
		Rotation = InputRotation;
		Scale = InputScale;
		Origin = TransformOrigin.World;
	}

	// Contructor with input for all values.
	public Transformations(Vector3 InputPosition, Vector3 InputRotation, Vector3 InputScale, TransformOrigin InputOrigin)
	{
		Position = InputPosition;
		Rotation = InputRotation;
		Scale = InputScale;
		Origin = InputOrigin;
	}

	// Contructor that will use the local or world transformations of a game object as inputs.
	public Transformations(GameObject TargetGameObject, TransformOrigin GameObjectOrigin)
	{
		if (GameObjectOrigin == TransformOrigin.Local)
		{
			Position = TargetGameObject.GetComponent<Transform>().localPosition;
			Rotation = TargetGameObject.GetComponent<Transform>().localEulerAngles;
			Scale = TargetGameObject.GetComponent<Transform>().localScale;
		}
		else
		{
			Position = TargetGameObject.GetComponent<Transform>().position;
			Rotation = TargetGameObject.GetComponent<Transform>().eulerAngles;
			Scale = TargetGameObject.GetComponent<Transform>().lossyScale;
		}
	}

	// Contructor that will use the local or world transformations of a transform component as inputs.
	public Transformations(Transform TargetTransform, TransformOrigin GameObjectOrigin)
	{
		if (GameObjectOrigin == TransformOrigin.Local)
		{
			Position = TargetTransform.localPosition;
			Rotation = TargetTransform.localEulerAngles;
			Scale = TargetTransform.localScale;
		}
		else
		{
			Position = TargetTransform.position;
			Rotation = TargetTransform.eulerAngles;
			Scale = TargetTransform.lossyScale;
		}
	}

	// Method to adjust the current transformations with another transformation input.
	public Transformations GetAdjustedTransformations(Transformations AdjustmentTransformations)
	{
		return new Transformations
		(
			Position + AdjustmentTransformations.Position,
			Rotation + AdjustmentTransformations.Rotation,
			new Vector3
			(
				Scale.x * AdjustmentTransformations.Scale.x,
				Scale.y * AdjustmentTransformations.Scale.y,
				Scale.z * AdjustmentTransformations.Scale.z
			),
			TransformOrigin.World
		);
	}

	// Method to automatically get the adjusted transformations based on the input transform component.
	public Transformations GetAdjustedTransformationsToOrigin(Transform OriginPoint)
	{
		if (Origin == TransformOrigin.World || OriginPoint == null) return this;
		else return GetAdjustedTransformations(new Transformations(OriginPoint, TransformOrigin.World));
	}
}
