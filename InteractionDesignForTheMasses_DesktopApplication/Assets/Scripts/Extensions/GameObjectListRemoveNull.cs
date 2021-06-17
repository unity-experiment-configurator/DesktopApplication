// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Design For The Masses Project.
//
// Copyright (C) "Mnemoscene LTD".
// All Rights Reserved.
//
// File:
// 		GameObjectListRemoveNull.cs
//
// Date:
// 		31/05/2021
//
// Description:
//		Extension that adds the ability for game object lists to remove all game
//		object entries that are null.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class GameObjectListRemoveNull
{
	public static List<GameObject> RemoveNull(this List<GameObject> InputGameObjectList)
	{
		for (int OutputGameObjectCount = InputGameObjectList.Count - 1; OutputGameObjectCount >= 0; OutputGameObjectCount--)
		{
			if (InputGameObjectList[OutputGameObjectCount] == null)
			{
				InputGameObjectList.RemoveAt(OutputGameObjectCount);
			}
		}

		return InputGameObjectList;
	}
}
