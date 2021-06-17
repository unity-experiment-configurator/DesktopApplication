// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Design For The Masses Project.
//
// Copyright (C) "Mnemoscene LTD".
// All Rights Reserved.
//
// File:
// 		SceneLoadTimer.cs
//
// Date:
// 		24/05/2021
//
// Description: 
//		Component that loads a specified scene or the experiment type scene that
//		is provided by the scene's data base. It additionally provided a timer
//		function to delay the scene change a specified amount of time.
//
// -----------------------------------------------------------------------------

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneLoader : MonoBehaviour
{
	[Header("Scene Loader Options")]
	public SceneObjectContainer TargetScene;
	public bool LoadTargetSceneImmediately = false;
	public LoadSceneMode LoadTargetSceneMode = LoadSceneMode.Single;

	[Header("Timer Options")]
	public bool TimerEnabled = true;
	public float TimeAmount = 5;
	public float CurrentTimePassed = 0;

	[Header("Device Input Options")]
	public bool LoadTargetSceneOnKeyPressEnabled = true;
	public SceneLoaderInputAction LoadTargetSceneOnKeyPressAction = SceneLoaderInputAction.LoadScene;
	public HandControllersMonitor TargetHandControllerMonitor;

	[Header("Fade Element Interaction")]
	public bool FadeOutBeforeTargetSceneLoad = false;
	public FadeElementOperation TargetFadeElement;
	public FindReferenceCondition FindTargetFadeElement = FindReferenceCondition.OnlyIfNull;
	public bool TargetFadeActivated = false;

	void OnEnable()
	{
		if (FindTargetFadeElement == FindReferenceCondition.OnlyIfNull && TargetFadeElement == null) TargetFadeElement = FindObjectOfType<FadeElementOperation>();
		else if (FindTargetFadeElement == FindReferenceCondition.Always) TargetFadeElement = FindObjectOfType<FadeElementOperation>();

		if (LoadTargetSceneOnKeyPressAction == SceneLoaderInputAction.StartTimer) TimerEnabled = false;
		TargetFadeActivated = false;
	}

	void Update()
	{
		if (LoadTargetSceneImmediately) LoadTargetScene();
		else
		{
			if (TargetFadeActivated) LoadTargetScene();
			else
			{
				if (TimerEnabled)
				{
					if (CurrentTimePassed >= TimeAmount) { { LoadTargetScene(); } }
					else { CurrentTimePassed += Time.deltaTime; }
				}

				if (LoadTargetSceneOnKeyPressEnabled)
				{
					if (LoadTargetSceneOnKeyPressAction == SceneLoaderInputAction.LoadScene)
					{
						if (TargetHandControllerMonitor.LeftPrimaryButton || TargetHandControllerMonitor.RightPrimaryButton) { LoadTargetScene(); }
					}
					else if (LoadTargetSceneOnKeyPressAction == SceneLoaderInputAction.StartTimer)
					{
						if (TargetHandControllerMonitor.LeftPrimaryButton || TargetHandControllerMonitor.RightPrimaryButton) { TimerEnabled = true; }
					}
				}
			}
		}
	}

	// Method that will initiate the loading of the target scene.
	public void LoadTargetScene()
	{
		if (FadeOutBeforeTargetSceneLoad)
		{
			if (!TargetFadeActivated)
			{
				if (TargetFadeElement.CurrentFadeState == FadeState.Idle || TargetFadeElement.CurrentFadeState == FadeState.FadeIn)
				{
					TargetFadeElement.CurrentFadeState = FadeState.FadeOut;
					TargetFadeActivated = true;
				}
				else if (TargetFadeElement.CurrentFadeState == FadeState.FadeIn)
				{
					TargetFadeActivated = true;
				}
			}

			if (TargetFadeElement.CurrentFadeState == FadeState.Idle) TargetScene.LoadScene(LoadTargetSceneMode);
		}
		else TargetScene.LoadScene(LoadTargetSceneMode);
	}

	// Method that will re-enable the timer and set the time passed back to 0.
	public void ResetTimer()
	{
		CurrentTimePassed = 0;
	}
}
