using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Introduction_SceneBehaviour : MonoBehaviour
{
	[Header("Required Objects")]
	public ObjectGrabMonitor TargetObjectGrabMonitor;
	public FindReferenceCondition FindTargetObjectGrabMonitor = FindReferenceCondition.OnlyIfNull;
	public SceneDataBase TargetSceneDataBase;
	public FindReferenceCondition FindTargetSceneDataBase = FindReferenceCondition.OnlyIfNull;
	public SceneLoader TargetSceneLoader;
	public FindReferenceCondition FindTargetSceneLoader = FindReferenceCondition.OnlyIfNull;
	public FadeElementOperation TargetFadeElementOperation;
	public FindReferenceCondition FindTargetFadeElementOperation = FindReferenceCondition.OnlyIfNull;
	public FadeAmbientSound TargetFadeAmbientSound;
	public FindReferenceCondition FindTargetFadeAmbientSound = FindReferenceCondition.OnlyIfNull;

	void OnEnable()
	{
		if (FindTargetObjectGrabMonitor == FindReferenceCondition.OnlyIfNull && TargetObjectGrabMonitor == null) { TargetObjectGrabMonitor = FindObjectOfType<ObjectGrabMonitor>(); }
		else if (FindTargetObjectGrabMonitor == FindReferenceCondition.Always) { TargetObjectGrabMonitor = FindObjectOfType<ObjectGrabMonitor>(); }

		if (FindTargetSceneDataBase == FindReferenceCondition.OnlyIfNull && TargetSceneDataBase == null) { TargetSceneDataBase = FindObjectOfType<SceneDataBase>(); }
		else if (FindTargetSceneDataBase == FindReferenceCondition.Always) { TargetSceneDataBase = FindObjectOfType<SceneDataBase>(); }

		if (FindTargetSceneLoader == FindReferenceCondition.OnlyIfNull && TargetSceneLoader == null) { TargetSceneLoader = FindObjectOfType<SceneLoader>(); }
		else if (FindTargetSceneLoader == FindReferenceCondition.Always) { TargetSceneLoader = FindObjectOfType<SceneLoader>(); }

		if (FindTargetFadeElementOperation == FindReferenceCondition.OnlyIfNull && TargetFadeElementOperation == null) { TargetFadeElementOperation = FindObjectOfType<FadeElementOperation>(); }
		else if (FindTargetFadeElementOperation == FindReferenceCondition.Always) { TargetFadeElementOperation = FindObjectOfType<FadeElementOperation>(); }

		if (FindTargetFadeAmbientSound == FindReferenceCondition.OnlyIfNull && TargetFadeAmbientSound == null) TargetFadeAmbientSound = FindObjectOfType<FadeAmbientSound>();
		else if (FindTargetFadeAmbientSound == FindReferenceCondition.Always) TargetFadeAmbientSound = FindObjectOfType<FadeAmbientSound>();

		TargetSceneLoader.TargetScene = TargetSceneDataBase.AssociatedExperimentScene;
	}

	void Update()
	{
		if (TargetObjectGrabMonitor.ObjectIsHeld)
		{
			TargetSceneLoader.LoadTargetScene();
			TargetFadeAmbientSound.CurrentFadeState = FadeState.FadeOut;

			enabled = false;
		}
	}
}
