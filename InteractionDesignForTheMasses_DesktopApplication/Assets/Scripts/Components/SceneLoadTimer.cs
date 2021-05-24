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
//
//
// -----------------------------------------------------------------------------

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SceneLoadTimer : MonoBehaviour
{
	public float SceneLoadDelay;
	float CurrentTimePassed = 0;

	void Update()
	{
		if (GetComponent<SceneDataBase>() != null)
		{
			if (CurrentTimePassed >= SceneLoadDelay)
			{
				GetComponent<SceneDataBase>().LoadExperimentScene();
				this.enabled = false;
			}
		}

		CurrentTimePassed += Time.deltaTime;
	}
}
