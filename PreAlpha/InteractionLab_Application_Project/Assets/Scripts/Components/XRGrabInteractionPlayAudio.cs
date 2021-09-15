// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		XRGrabInteractionPlayAudio.cs
//
// Date:
// 		2/09/2021
//
// Description:
//		Component that monitors a target XR grab interactable component and
//		plays the audio clip of a target audio source's audio clip when the
//		target XR grab interactable component states that it's currently being
//		grabbed.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

[Serializable]
public class XRGrabInteractionPlayAudio : MonoBehaviour
{
	[Header("Target Component Options")]
	public  XRGrabInteractable targetXRGrabInteractableComponent;	// The target XR grab interactable component to be monitored for any active grab interactions.
	public AudioSource targetAudioSourceComponent;					// Target audio source component to play its audio clip.
	public bool playOnRelease;										// Condition to play the audio source's audio clip upon grab releasing the host game object instead when it's grabbed.

	[Header("Grab Interaction Limit Options")]
	public bool limitGrabInteractions;			// Condition to limit the amount of times the monitor is going to register grab interactions and activate or deactivate the listed game objects.
	public int limitGrabInteractionAmount = 1;	// Amount of grab interactions limit. The default value is 1.

	[Header("Indications")]
	public bool currentlyHeld;				// Indicator displaying if the host game object is currently being held based on the state of the target XR grab interactable component.
	public bool currentlyReadyForRelease;	// Indicator displaying if the host game object has just been released based on the recent state of the target XR grab interactable component.
	public bool currentlyPlayingAudio;		// Indicator displaying if the target audio source's audio clip is currently playing. This is to prevent the clip restarting to play continuously when the host object is held.
	public int currentGrabInteractionCount;	// Indicator displaying the count of how many times the host game object was held. The counter is active only when the grab interaction amount is limited.

	// Method to run tasks every frame.
	void Update()
	{
		MainProcess();
	}

	// Method to check if the current XR grab interactable component states that the object is being held.
	public void CheckGrabInteraction()
	{
		if (targetXRGrabInteractableComponent.isSelected) currentlyHeld = true;
		else currentlyHeld = false;
	}

	// Method to play the target audio source component's set audio clip.
	public void PlayAudioSourceClip()
	{
		if (targetAudioSourceComponent.isPlaying) targetAudioSourceComponent.Stop();

		targetAudioSourceComponent.Play();
	}

	// Method to run the main process.
	public void MainProcess()
	{
		if (limitGrabInteractions)
		{
			if (currentGrabInteractionCount < limitGrabInteractionAmount)
			{
				CheckGrabInteraction();

				if (playOnRelease)
				{
					if (currentlyHeld) currentlyReadyForRelease = true;
					else if (currentlyReadyForRelease)
					{
						PlayAudioSourceClip();

						currentlyReadyForRelease = false;
						++currentGrabInteractionCount;
					}
				}
				else
				{
					if (currentlyHeld && !currentlyPlayingAudio)
					{
						PlayAudioSourceClip();

						currentlyPlayingAudio = true;
						++currentGrabInteractionCount;
					}
					else if (!currentlyHeld) currentlyPlayingAudio = false;
				}
			}
		}
		else
		{
			CheckGrabInteraction();

			if (playOnRelease)
			{
				if (currentlyHeld) currentlyReadyForRelease = true;
				else if (currentlyReadyForRelease)
				{
					PlayAudioSourceClip();

					currentlyReadyForRelease = false;
				}
			}
			else
			{
				if (currentlyHeld && !currentlyPlayingAudio)
				{
					PlayAudioSourceClip();
					currentlyPlayingAudio = true;
				}
				else if (!currentlyHeld) currentlyPlayingAudio = false;
			}
		}
	}
}