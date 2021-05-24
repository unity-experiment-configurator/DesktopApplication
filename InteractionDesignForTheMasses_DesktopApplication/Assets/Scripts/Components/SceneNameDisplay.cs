// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Design For The Masses Project.
//
// Copyright (C) "Mnemoscene LTD".
// All Rights Reserved.
//
// File:
// 		SceneNameDisplay.cs
//
// Date:
// 		23/05/2021
//
// Description: 
//		Component for the scene name label game object. This component updates
//		the required text mesh pro component of the game object with the name of
//		the current scene.
//
// -----------------------------------------------------------------------------

using TMPro;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

[RequireComponent(typeof(TextMeshPro))]
public class SceneNameDisplay : MonoBehaviour
{
	void Start()
	{
		gameObject.GetComponent<TextMeshPro>().text = SceneManager.GetActiveScene().name;
	}
}
