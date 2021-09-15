// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		GameObjectListCheckAllNull.cs
//
// Date:
// 		25/08/2021
//
// Description:
//		Extension that adds the ability to check all entries of the game object
//		list if they are all null.
//
// -----------------------------------------------------------------------------

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class GameObjectListCheckAllNull
{
	// Extension for game object list data types to check if all their entries are null.
	public static bool CheckAllNull(this List<GameObject> inputGameObjectList)
	{
		bool allConfirmedNull = true;

		foreach (GameObject currentSwappableGameObject in inputGameObjectList)
		{
			if (currentSwappableGameObject != null)
			{
				allConfirmedNull = false;
				break;
			}
		}

		return allConfirmedNull;
	}
}