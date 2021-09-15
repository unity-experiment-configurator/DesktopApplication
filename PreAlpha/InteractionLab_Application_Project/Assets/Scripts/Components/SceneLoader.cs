// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		XRGrabInteractionObjectActivationController.cs
//
// Date:
// 		5/09/2021
//
// Description:
//		Component that loads a scene from a referenced scene container.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

[Serializable]
public class SceneLoader : MonoBehaviour
{
	[Header("Scene Loader Options")]
	public SceneObjectContainer targetSceneContainer;
	public bool loadTargetSceneOnEnable;

	[Header("Fade Material Options")]
	public bool fadeOutMaterialBeforeTargetSceneLoad = false;
	public FadeMaterialController targetFadeMaterialControllerComponent;

	[Header("Fade Audio Source Options")]
	public bool fadeOutAudioSourceBeforeTargetSceneLoad = false;
	//public FadeAudioSourceController targetFadeAudioSourceControllerComponent;

	[Header("Indications")]
	public bool targetFadeMaterialActivated;
	public bool targetFadeAudioSourceActivated;
	
	[Space(7)]
	public bool targetMaterialFadeReady;
	public bool targetAudioSourceFadeReady;

	// Method to execute tasks upon enabling the component.
	void OnEnable()
	{
		targetFadeMaterialActivated = false;
		targetFadeAudioSourceActivated = false;

		if (!fadeOutMaterialBeforeTargetSceneLoad) targetMaterialFadeReady = true;
		else targetMaterialFadeReady = false;

		if (!fadeOutAudioSourceBeforeTargetSceneLoad) targetAudioSourceFadeReady = true;
		else targetAudioSourceFadeReady = false;
	}

	// Method to run tasks every frame.
	void Update()
	{
		if (loadTargetSceneOnEnable) MainProcess();
	}

	// Method to load the scene from the target scene container.
	public void LoadTargetScene()
	{
		targetSceneContainer.LoadScene();
	}

	// Method to start the material fade out process.
	public void FadeOutMaterial()
	{
		if (targetFadeMaterialControllerComponent != null)
		{
			if (!targetFadeMaterialActivated)
			{
				if (targetFadeMaterialControllerComponent.currentMaterialFadeState != FadeState.FadeOut) targetFadeMaterialControllerComponent.currentMaterialFadeState = FadeState.FadeOut;
				targetFadeMaterialActivated = true;
			}

			if (targetFadeMaterialActivated && targetFadeMaterialControllerComponent.currentMaterialFadeState == FadeState.Idle) targetMaterialFadeReady = true;
		}
	}

	// Method to start the audio source fade out process.
	public void FadeOutAudioSource()
	{
		targetAudioSourceFadeReady = true;
	}

	// Method to run the main process.
	public void MainProcess()
	{
		if (fadeOutMaterialBeforeTargetSceneLoad) FadeOutMaterial();
		if (fadeOutAudioSourceBeforeTargetSceneLoad) FadeOutAudioSource();
		if (targetMaterialFadeReady && targetAudioSourceFadeReady) LoadTargetScene();
	}
}