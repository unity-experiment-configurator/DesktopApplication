// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		FadeMaterialController.cs
//
// Date:
// 		27/08/2021
//
// Description:
//		Component that controls the fade state and amount of an assigned
//		renderer's material component.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class FadeMaterialController : MonoBehaviour
{
	[Header("Renderer & Material Component Options")]
	public Renderer targetRendererComponent;		// The target renderer type component to query for its currently assigned material.
	public string targetMaterialFadeAttributeName;	// The name of the target attribute in the current material to fade its value.

	[Header("Fade Evaluation Options")]
	public MinMaxFloat materialAttributeMinMaxValues;	// Min and max values that the named material attribute should be limited in.
	
	[Space(7)]
	public float fadeInRate = 0.5f;				// The fade in rate value. The default value is 0.5.
	public float fadeOutRate = 0.5f;			// The fade out rate value. The default value is 0.5.
	public bool deltaTimeRelativeRates = true;	// Condition to make the fade rates analogous to the current delta time. This is enabled by default.

	[Space(7)]
	public float onEnbaleMaterialFadeValue = 1; // The fade value to be set upon enabling this component. The default value is 1.
	public FadeState onEnableMaterialFadeState;	// The fade state to be set upon enabling this component.

	[Header("Indications")]
	public Material currentMaterial;			// Indicator displaying the currently detected target material.
	public FadeState currentMaterialFadeState;	// Indicator displaying the currently set fade state.
	public float currentFadeValue;				// Indicator displaying the currently evaluated fade value.

	// Method to run tasks upon enabling the component.
	void OnEnable()
	{
		currentMaterialFadeState = onEnableMaterialFadeState;
		currentFadeValue = onEnbaleMaterialFadeValue;
		currentMaterial = targetRendererComponent.material;
		currentMaterial.SetFloat(targetMaterialFadeAttributeName, currentFadeValue);
	}

	// Method to run tasks every frame.
	void Update()
	{
		EvaluateFadeValue();
		ClampFadeValue();
		SetFadeValueToTarget();
	}

	// Method to evaluate the fade amount based on the active fade state.
	public void EvaluateFadeValue()
	{
		if (materialAttributeMinMaxValues.min < materialAttributeMinMaxValues.max)
		{
			if (deltaTimeRelativeRates)
			{
				if (currentMaterialFadeState == FadeState.FadeIn && currentFadeValue > materialAttributeMinMaxValues.min) currentFadeValue -= fadeInRate * Time.deltaTime;
				else if (currentMaterialFadeState == FadeState.FadeOut && currentFadeValue < materialAttributeMinMaxValues.max) currentFadeValue += fadeOutRate * Time.deltaTime;
				else currentMaterialFadeState = FadeState.Idle;
			}
			else
			{
				if (currentMaterialFadeState == FadeState.FadeIn && currentFadeValue > materialAttributeMinMaxValues.min) currentFadeValue -= fadeInRate;
				else if (currentMaterialFadeState == FadeState.FadeOut && currentFadeValue < materialAttributeMinMaxValues.max) currentFadeValue += fadeOutRate;
				else currentMaterialFadeState = FadeState.Idle;
			}
		}

		// If the material's attribute limits are inverted, the min value is greater than the max, reverse the operations.
		else if (materialAttributeMinMaxValues.min > materialAttributeMinMaxValues.max)
		{
			if (deltaTimeRelativeRates)
			{
				if (currentMaterialFadeState == FadeState.FadeIn && currentFadeValue < materialAttributeMinMaxValues.min) currentFadeValue += fadeInRate * Time.deltaTime;
				else if (currentMaterialFadeState == FadeState.FadeOut && currentFadeValue > materialAttributeMinMaxValues.max) currentFadeValue -= fadeOutRate * Time.deltaTime;
				else currentMaterialFadeState = FadeState.Idle;
			}
			else
			{
				if (currentMaterialFadeState == FadeState.FadeIn && currentFadeValue < materialAttributeMinMaxValues.min) currentFadeValue += fadeInRate;
				else if (currentMaterialFadeState == FadeState.FadeOut && currentFadeValue > materialAttributeMinMaxValues.max) currentFadeValue -= fadeOutRate;
				else currentMaterialFadeState = FadeState.Idle;
			}
		}

		// If the material's attribute limits are equal, skip the evaluation and simply set the current fade value to one of the limits.
		else
		{
			currentFadeValue = materialAttributeMinMaxValues.min;
			currentMaterialFadeState = FadeState.Idle;
		}
	}
	
	// Method to clamp the current fade value within the specified min and max limits.
	public void ClampFadeValue()
	{
		currentFadeValue = Mathf.Clamp(currentFadeValue, materialAttributeMinMaxValues.min, materialAttributeMinMaxValues.max);
	}

	// Method to set the current fade value to the target material's named attribute.
	public void SetFadeValueToTarget()
	{
		currentMaterial.SetFloat(targetMaterialFadeAttributeName, currentFadeValue);
	}
}