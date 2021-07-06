using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BackgroundAudioDataParser : MonoBehaviour
{
	[Header("Scene Database Component")]
	public SceneDataBase TargetSceneDataBase;
	public FindReferenceCondition FindTargetSceneDataBase = FindReferenceCondition.OnlyIfNull;

	[Header("Audio Source Component")]
	public AudioSource TargetAudioSource;
	public FindReferenceCondition FindTargetAudioSource = FindReferenceCondition.OnlyIfNull;

	[Header("Parsed Data")]
	public string globalSound;

	[Header("Options")]
	public float AudioVolume = 1;
	public bool ForceAudioVolumeOnParse;
	public bool ForceAudioLoopOnParse;
	public bool ForcePlayOnParse;

	private bool ParseCompleted = false;

	void OnEnable()
	{
		if (FindTargetSceneDataBase == FindReferenceCondition.OnlyIfNull && TargetSceneDataBase == null) TargetSceneDataBase = SceneDataBaseFunctions.Find();
		else if (FindTargetSceneDataBase == FindReferenceCondition.Always) TargetSceneDataBase = SceneDataBaseFunctions.Find();

		if (FindTargetAudioSource == FindReferenceCondition.OnlyIfNull && TargetAudioSource == null) TargetAudioSource = GetComponent<AudioSource>();
		else if (FindTargetAudioSource == FindReferenceCondition.Always) TargetAudioSource = GetComponent<AudioSource>();
	}

	void Update()
	{
		if (!ParseCompleted && TargetSceneDataBase.SceneDataBaseEstablished) Parse();
	}

	void Parse()
	{
		ParseCompleted = false;

		JsonUtility.FromJsonOverwrite(TargetSceneDataBase.LoadedSceneConstructionData.GetConfigurationDataLineByName("globalSound"), this);

		TargetAudioSource.clip = TargetSceneDataBase.SoundDefinitionList.GetDefinedObjectByName(globalSound);

		if (ForceAudioVolumeOnParse) TargetAudioSource.volume = AudioVolume;
		if (ForceAudioLoopOnParse) TargetAudioSource.loop = true;
		if (ForcePlayOnParse) TargetAudioSource.Play();

		ParseCompleted = true;
	}
}
