// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		GameObjectListRemoveNull.cs
//
// Date:
// 		25/08/2021
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
	// Extension for game object list data types to remove all null entries and return a new game object list.
	public static List<GameObject> RemoveNull(this List<GameObject> inputGameObjectList)
	{
		for (int outputGameObjectCount = inputGameObjectList.Count - 1; outputGameObjectCount >= 0; outputGameObjectCount--)
		{
			if (inputGameObjectList[outputGameObjectCount] == null)
			{
				inputGameObjectList.RemoveAt(outputGameObjectCount);
			}
		}

		return inputGameObjectList;
	}
}