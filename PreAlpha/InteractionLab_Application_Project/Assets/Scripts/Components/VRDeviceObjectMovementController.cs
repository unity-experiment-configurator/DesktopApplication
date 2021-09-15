// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		VRDeviceObjectMovementController.cs
//
// Date:
// 		25/08/2021
//
// Description:
//		Component that takes and evaluates directional data from the a selected
//		VR hand controller and applies it to its host game object.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class VRDeviceObjectMovementController : MonoBehaviour
{
	[Header("VR Device Input Options")]
	public VRDeviceInputMonitor targetVRDeviceInputMonitorComponent;	// The target VR device input monitor component to retrieve the input data from.
	public LeftRightDirection vrHandControllerSelection;				// Selection of which of the two VR hand controller should the input data be retrieved from.

	[Header("Directional Input Evaluation")]
	public bool relativeToDeltaTime = true;					// Condition for if the evaluation should be multiplied to the frame's delta time to keep the directional output speed a constant. This is by default enabled.
	public bool evaluateOnlyRelevantDirectionalAxis = true;	// Condition for when the current evaluated directional out is to be applied to the host game object's transformations to only change values to the selected 3D axial plane. This is by default enabled.
	public bool setDirectionRelativeToTransform = true;		// Condition to transform the input direction values relative to an input game object. This is by default enabled.
	public bool switchInitialDirectionAxes;						// Condition to switch the values of the directional input's axes after retrieving them from the selected VR hand controller device.
	
	[Space(7)]
	public float unutilisedAxisValue;								// The value to be used for the axis that is not relevant in the selected 3D axial plane.
	public Vector2 directionInputMultiplier = new Vector2(1, 1);	// Multiplier to be applied to the direction data retrieved from the selected VR hand controller.
	public Vector3 directionTransformationOffset;					// Offset values to be added to the current evaluated directional output.

	[Space(7)]
	public Transform relativeDirectionTransform;	// Transform component that will be used to make the directional data relative to.

	[Header("Transformation Application Options")]
	public TransformType directionTransformationType;		// Option to select the transformation type  should the final evaluated directional input should be applied in.
	public TransformOrigin directionTransformationOrigin;	// Option to select which origin point should the final evaluated directional input should be relative to.
	public TransformContext directionTransformationContext; // Option to select in what context should the final evaluated directional input should be apply in.
	public AxialPlane3D axialPlane3DInterpretation;			// Option to select on what 3D axial plane should the directional data be interpreted in.

	[Header("Indications")]
	public Vector3 currentEvaluatedDirectionalOutput;	// Indicator displaying the current result of the evaluated direction to be applied to the transformations.

	// Method to run tasks every frame.
	void Update()
	{
		GetDirectionalInput();

		if (switchInitialDirectionAxes) SwitchInitialAxesValues();

		ApplyDirectionalInputMultiplier();
		InterpretDirectionalInputAxialPlane();
		EvaluateUnutilisedAxisValue();

		if (setDirectionRelativeToTransform) TransformRelativeDirection();

		// When the transformation context is set to absolute, do not make the value relative to the current delta time.
		if (relativeToDeltaTime && directionTransformationContext != TransformContext.Absolute) ApplyDeltaTimeMultiplier();

		AddOffset();
		ApplyDirectionalOutput();
	}

	// Method to get the directional input from the selected VR hand controller device and set it as the current evaluated directional output.
	public void GetDirectionalInput()
	{
		if (vrHandControllerSelection == LeftRightDirection.Left) currentEvaluatedDirectionalOutput = targetVRDeviceInputMonitorComponent.vrHandControllerLeftPrimary2DAxis;
		else if (vrHandControllerSelection == LeftRightDirection.Right) currentEvaluatedDirectionalOutput = targetVRDeviceInputMonitorComponent.vrHandControllerRightPrimary2DAxis;

		// If for any reason the VR hand controller selection is neither left or right, consider it invalid and set the current evaluated directional output as a new vector with X, Y and Z being 0.
		else
		{
			Debug.LogWarning("Could not get VR device input value. The selected VR device input was not accounted for.");
			currentEvaluatedDirectionalOutput = new Vector2();
		}
	}

	// Method to switch the initial directional axis values to each other. The X axis will have the value of the Y, and the Y will have the value of the X.
	public void SwitchInitialAxesValues()
	{
		Vector3 originalEvaluatedDirectionalOutput = currentEvaluatedDirectionalOutput;

		currentEvaluatedDirectionalOutput.x = originalEvaluatedDirectionalOutput.y;
		currentEvaluatedDirectionalOutput.y = originalEvaluatedDirectionalOutput.x;
	}

	// Method to apply the directional input multiplier to the current evaluated directional output.
	public void ApplyDirectionalInputMultiplier()
	{
		currentEvaluatedDirectionalOutput *= directionInputMultiplier;
	}

	// Method to interpret the current evaluated directional output to the selected 3D axial plane and set it as the new current evaluated directional output.
	public void InterpretDirectionalInputAxialPlane()
	{
		if (axialPlane3DInterpretation == AxialPlane3D.XY) currentEvaluatedDirectionalOutput = new Vector3(currentEvaluatedDirectionalOutput.x, currentEvaluatedDirectionalOutput.y, 0f);
		else if (axialPlane3DInterpretation == AxialPlane3D.YZ) currentEvaluatedDirectionalOutput = new Vector3(0f, currentEvaluatedDirectionalOutput.y, currentEvaluatedDirectionalOutput.x);
		else if (axialPlane3DInterpretation == AxialPlane3D.XZ) currentEvaluatedDirectionalOutput = new Vector3(currentEvaluatedDirectionalOutput.x, 0f, currentEvaluatedDirectionalOutput.y);

		// If for any reason the selected interpretation 3D axial plane is not accounted for, set the current evaluated directional output as a new vector with X, Y and Z being 0.
		else
		{
			Debug.LogWarning("Could not interpret the directional input to the selected 3D axial plane. The selected 3D axial plane was not accounted for.");
			currentEvaluatedDirectionalOutput = new Vector3();
		}
	}

	// Method to multiply the current evaluated directional output to the frame's delta time.
	public void ApplyDeltaTimeMultiplier()
	{
		currentEvaluatedDirectionalOutput *= Time.deltaTime;
	}

	// Method to make the current evaluated directional output relative to the transformations of another game object.
	public void TransformRelativeDirection()
	{
		if (axialPlane3DInterpretation == AxialPlane3D.XY)
		{
			Vector3 relativeTransformRight = relativeDirectionTransform.right;
			Vector3 relativeTransformUp = relativeDirectionTransform.up;

			relativeTransformRight.z = unutilisedAxisValue;
			relativeTransformUp.z = unutilisedAxisValue;

			relativeTransformRight = relativeTransformRight.normalized;
			relativeTransformUp = relativeTransformUp.normalized;

			currentEvaluatedDirectionalOutput = (relativeTransformRight * currentEvaluatedDirectionalOutput.x + relativeTransformUp * currentEvaluatedDirectionalOutput.y);
		}
		else if (axialPlane3DInterpretation == AxialPlane3D.YZ)
		{
			Vector3 relativeTransformUp = relativeDirectionTransform.up;
			Vector3 relativeTransformForward = relativeDirectionTransform.forward;

			relativeTransformUp.x = unutilisedAxisValue;
			relativeTransformForward.x = unutilisedAxisValue;

			relativeTransformUp = relativeTransformUp.normalized;
			relativeTransformForward = relativeTransformForward.normalized;

			currentEvaluatedDirectionalOutput = (relativeTransformUp * currentEvaluatedDirectionalOutput.y + relativeTransformForward * currentEvaluatedDirectionalOutput.z);
		}
		else if (axialPlane3DInterpretation == AxialPlane3D.XZ)
		{
			Vector3 relativeTransformRight = relativeDirectionTransform.right;
			Vector3 relativeTransformForward = relativeDirectionTransform.forward;

			relativeTransformRight.y = unutilisedAxisValue;
			relativeTransformForward.y = unutilisedAxisValue;

			relativeTransformRight = relativeTransformRight.normalized;
			relativeTransformForward = relativeTransformForward.normalized;

			currentEvaluatedDirectionalOutput = (relativeTransformRight * currentEvaluatedDirectionalOutput.x + relativeTransformForward * currentEvaluatedDirectionalOutput.z);
		}
	}

	// Method to apply the appropriate value to the unutilised axis of the selected 3D axial plane.
	public void EvaluateUnutilisedAxisValue()
	{
		if (evaluateOnlyRelevantDirectionalAxis)
		{
			if (axialPlane3DInterpretation == AxialPlane3D.XY) currentEvaluatedDirectionalOutput.z = gameObject.transform.position.z;
			else if (axialPlane3DInterpretation == AxialPlane3D.YZ) currentEvaluatedDirectionalOutput.x = gameObject.transform.position.x;
			else if (axialPlane3DInterpretation == AxialPlane3D.XZ) currentEvaluatedDirectionalOutput.y = gameObject.transform.position.y;
		}
		else
		{
			if (axialPlane3DInterpretation == AxialPlane3D.XY) currentEvaluatedDirectionalOutput.z = unutilisedAxisValue;
			else if (axialPlane3DInterpretation == AxialPlane3D.YZ) currentEvaluatedDirectionalOutput.x = unutilisedAxisValue;
			else if (axialPlane3DInterpretation == AxialPlane3D.XZ) currentEvaluatedDirectionalOutput.y = unutilisedAxisValue;
		}
	}

	// Method to add the offset to the current evaluated directional output.
	public void AddOffset()
	{
		currentEvaluatedDirectionalOutput += directionTransformationOffset;
	}

	// Method to apply to the component's host game object the current evaluated directional output to its selected transformation.
	public void ApplyDirectionalOutput()
	{
		if (directionTransformationType == TransformType.Position)
		{
			if (directionTransformationContext == TransformContext.Absolute)
			{
				if (directionTransformationOrigin == TransformOrigin.Local) gameObject.transform.localPosition = currentEvaluatedDirectionalOutput;
				else if (directionTransformationOrigin == TransformOrigin.World) gameObject.transform.position = currentEvaluatedDirectionalOutput;

				// If for any reason the selected transformation origin point is not accounted for, do not apply the current evaluated directional output.
				else Debug.LogWarning("Could not apply evaluated directional transformation. The selected transformation origin point was not accounted for.");
			}
			else if (directionTransformationContext == TransformContext.Relative)
			{
				if (directionTransformationOrigin == TransformOrigin.Local) gameObject.transform.localPosition += currentEvaluatedDirectionalOutput;
				else if (directionTransformationOrigin == TransformOrigin.World) gameObject.transform.position += currentEvaluatedDirectionalOutput;

				// If for any reason the selected transformation origin point is not accounted for, do not apply the current evaluated directional output.
				else Debug.LogWarning("Could not apply evaluated directional transformation. The selected transformation origin point was not accounted for.");
			}

			// If for any reason the selected transformation context is not accounted for, do not apply the current evaluated directional output.
			else Debug.LogWarning("Could not apply evaluated directional transformation. The selected transformation context was not accounted for.");
		}
		else if (directionTransformationType == TransformType.Rotation)
		{
			if (directionTransformationContext == TransformContext.Absolute)
			{
				if (directionTransformationOrigin == TransformOrigin.Local) gameObject.transform.localEulerAngles = currentEvaluatedDirectionalOutput;
				else if (directionTransformationOrigin == TransformOrigin.World) gameObject.transform.eulerAngles = currentEvaluatedDirectionalOutput;

				// If for any reason the selected transformation origin point is not accounted for, do not apply the current evaluated directional output.
				else Debug.LogWarning("Could not apply evaluated directional transformation. The selected transformation origin point was not accounted for.");
			}
			else if (directionTransformationContext == TransformContext.Relative)
			{
				if (directionTransformationOrigin == TransformOrigin.Local) gameObject.transform.localEulerAngles += currentEvaluatedDirectionalOutput;
				else if (directionTransformationOrigin == TransformOrigin.World) gameObject.transform.eulerAngles += currentEvaluatedDirectionalOutput;

				// If for any reason the selected transformation origin point is not accounted for, do not apply the current evaluated directional output.
				else Debug.LogWarning("Could not apply evaluated directional transformation. The selected transformation origin point was not accounted for.");
			}

			// If for any reason the selected transformation context is not accounted for, do not apply the current evaluated directional output.
			else Debug.LogWarning("Could not apply evaluated directional transformation. The selected transformation context was not accounted for.");
		}
		else if (directionTransformationType == TransformType.Scale)
		{
			if (directionTransformationContext == TransformContext.Absolute)
			{
				// The scale transformation can only be applied locally, so the transformation origin selection will be ignored.
				gameObject.transform.localScale = currentEvaluatedDirectionalOutput;
			}
			else if (directionTransformationContext == TransformContext.Relative)
			{
				// The scale transformation can only be applied locally, so the transformation origin selection will be ignored.
				gameObject.transform.localScale += currentEvaluatedDirectionalOutput;
			}

			// If for any reason the selected transformation context is not accounted for, do not apply the current evaluated directional output.
			else Debug.LogWarning("Could not apply evaluated directional transformation. The selected transformation context was not accounted for.");
		}
	}
}