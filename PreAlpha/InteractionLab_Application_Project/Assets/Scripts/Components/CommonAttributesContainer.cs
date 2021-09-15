// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		CommonAttributesContainer.cs
//
// Date:
// 		7/09/2021
//
// Description: 
//		Component that contains its host game object's common attributes.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class CommonAttributesContainer : MonoBehaviour
{
	[Header("Game Object's Common Attributes")]
	public CommonAttributes commonAttributes;	// The host game object's common attributes.
}