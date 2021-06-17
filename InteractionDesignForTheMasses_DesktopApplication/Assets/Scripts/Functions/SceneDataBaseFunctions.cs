// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Design For The Masses Project.
//
// Copyright (C) "Mnemoscene LTD".
// All Rights Reserved.
//
// File:
// 		FindSceneDatabase.cs
//
// Date:
// 		24/05/2021
//
// Description: 
//		Function that searches the current scene for an object that contains the
//		scene data base component and returns the game object that contains it.
//
// -----------------------------------------------------------------------------

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SceneDataBaseFunctions
{
	public static SceneDataBase Find()
	{
		return Object.FindObjectOfType<SceneDataBase>();
	}
}