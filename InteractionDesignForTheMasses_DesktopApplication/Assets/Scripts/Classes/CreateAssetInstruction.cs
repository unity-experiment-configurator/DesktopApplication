// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Design For The Masses Project.
//
// Copyright (C) "Mnemoscene LTD".
// All Rights Reserved.
//
// File:
// 		CreateAssetInstruction.cs
//
// Date:
// 		18/05/2021
//
// Description: 
//		Class that contains all necessary information to create an asset into a
//		scene while attaching to it all the requested attributes.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class CreateAssetInstruction
{
	[Header("Asset Creation Instructions")]
	string AssetName;				// The desired name to be assigned to the object on creation.
	int AssetIDNumber;				// The desired ID number to be assigned to the object on creation.
	Transform AssetTransformations;	// The desired position, rotation and scale to be applied to the created object.
	ObjectRoleTag AssetShapeTag;	// The desired shape tag to be assigned to the created object.
	ObjectColourTag AssetColourTag;	// The desired colour tag to be assigned to the created object.
	ObjectRoleTag AssetRoleTag;		// The desired role tag to be assigned to the created object.

	public void Create()
	{
		
	}
}
