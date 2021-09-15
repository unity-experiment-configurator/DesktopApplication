// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		FindSceneDatabase.cs
//
// Date:
// 		25/08/2021
//
// Description: 
//		Function that contains methods for the management and interaction with
//		a scene's database.
//
// -----------------------------------------------------------------------------

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SceneDatabaseFunctions
{
	// Method to find the current scene's database component.
	public static ExperimentDatabase Find()
	{
		return Object.FindObjectOfType<ExperimentDatabase>();
	}

	// Method to find the current scene's database host object.
	public static GameObject FindHost()
	{
		return Find().gameObject;
	}
}