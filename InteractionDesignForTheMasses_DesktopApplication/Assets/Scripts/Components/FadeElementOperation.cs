// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Design For The Masses Project.
//
// Copyright (C) "Mnemoscene LTD".
// All Rights Reserved.
//
// File:
// 		FadeElementOperation.cs
//
// Date:
// 		04/06/2021
//
// Description: 
//
//
// -----------------------------------------------------------------------------

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Renderer))]
public class FadeElementOperation : MonoBehaviour
{
	[Header("Fade State")]
	public FadeState CurrentFadeState = FadeState.Idle;
	
	[Header("Fade Pace Values")]
	public float FadeInPace = 0.01f;
	public float FadeOutPace = 0.01f;

	[Header("Fade Material Attributes")]
	public string MaterialFadeAttributeName = "_Transparency";

	private Material CurrentMaterial;
	private float CurrentOpacityValue = 1;

	void OnEnable()
	{
		CurrentMaterial = gameObject.GetComponent<Renderer>().material;
		CurrentMaterial.SetFloat("_Transparency", CurrentOpacityValue);
	}

	void Update()
	{
		if (CurrentFadeState == FadeState.FadeIn && CurrentOpacityValue > 0) CurrentOpacityValue -= FadeInPace;
		else if (CurrentFadeState == FadeState.FadeOut && CurrentOpacityValue < 1) CurrentOpacityValue += FadeOutPace;
		else CurrentFadeState = FadeState.Idle;

		CurrentOpacityValue = Mathf.Clamp(CurrentOpacityValue, 0, 1);

		CurrentMaterial.SetFloat("_Transparency", CurrentOpacityValue);
	}
}
