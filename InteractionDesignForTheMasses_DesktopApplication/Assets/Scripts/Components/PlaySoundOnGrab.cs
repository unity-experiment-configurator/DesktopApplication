using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlaySoundOnGrab : MonoBehaviour
{
	[Header("Required Components")]
	public AudioSource TargetAudioSource;
	public FindReferenceCondition FindTargetAudioSource = FindReferenceCondition.OnlyIfNull;
	public ObjectGrabMonitor TargetObjectGrabMonitor;
	public FindReferenceCondition FindObjectGrabMonitor = FindReferenceCondition.OnlyIfNull;
	public bool PlayOnlyOnce = true;

	private bool PlayedOnce = false;
	private bool Ongoing = false;

	void Start()
	{
		if (FindTargetAudioSource == FindReferenceCondition.OnlyIfNull && TargetAudioSource == null) { TargetAudioSource = GetComponent<AudioSource>(); }
		else if (FindTargetAudioSource == FindReferenceCondition.Always) { TargetAudioSource = GetComponent<AudioSource>(); }

		if (FindObjectGrabMonitor == FindReferenceCondition.OnlyIfNull && TargetObjectGrabMonitor == null) { TargetObjectGrabMonitor = GetComponent<ObjectGrabMonitor>(); }
		else if (FindObjectGrabMonitor == FindReferenceCondition.Always) { TargetObjectGrabMonitor = GetComponent<ObjectGrabMonitor>(); }
	}

	void Update()
	{
		if (TargetObjectGrabMonitor.ObjectIsHeld && !PlayedOnce)
		{
			if (!Ongoing)
			{
				TargetAudioSource.Play();
			}

			Ongoing = true;

			if (PlayOnlyOnce) PlayedOnce = true;
		}
		else Ongoing = false;
	}
}
