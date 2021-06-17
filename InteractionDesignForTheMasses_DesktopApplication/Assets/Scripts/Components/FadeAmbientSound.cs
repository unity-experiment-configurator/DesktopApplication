using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(AudioSource))]
public class FadeAmbientSound : MonoBehaviour
{
	[Header("Fade State")]
	public FadeState CurrentFadeState = FadeState.Idle;

	[Header("Fade Pace Values")]
	public float FadeInPace = 0.01f;
	public float FadeOutPace = 0.01f;

	[Header("Fade Material Attributes")]
	public string MaterialFadeAttributeName = "_Transparency";

	private AudioSource CurrentAudioSource;
	private float CurrentVolumeValue = 0;

	void OnEnable()
	{
		CurrentAudioSource = gameObject.GetComponent<AudioSource>();
		CurrentAudioSource.volume = CurrentVolumeValue;
	}

	void Update()
	{
		if (CurrentFadeState == FadeState.FadeOut && CurrentVolumeValue > 0) CurrentVolumeValue -= FadeOutPace;
		else if (CurrentFadeState == FadeState.FadeIn && CurrentVolumeValue < 0.6) CurrentVolumeValue += FadeInPace;
		else CurrentFadeState = FadeState.Idle;

		CurrentVolumeValue = Mathf.Clamp(CurrentVolumeValue, 0, 0.6f);

		CurrentAudioSource.volume = CurrentVolumeValue;
	}
}
