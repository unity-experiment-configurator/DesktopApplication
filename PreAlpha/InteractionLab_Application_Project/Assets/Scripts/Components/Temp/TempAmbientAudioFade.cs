using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TempAmbientAudioFade : MonoBehaviour
{
	AudioSource currentAmbientAudioSource;
	
	void OnEnable()
	{
		GameObject currentAmbientAudioHost = GameObject.Find("TEMP_INTERFACE_AMBIENT");

		if (currentAmbientAudioHost != null) currentAmbientAudioSource = currentAmbientAudioHost.GetComponent<AudioSource>();
	}

	// Update is called once per frame
	void Update()
	{
		if (currentAmbientAudioSource != null)
		{
			currentAmbientAudioSource.volume -= 0.1f * Time.deltaTime;

			if (currentAmbientAudioSource.volume <= 0) Destroy(currentAmbientAudioSource.gameObject);
		}
	}
}