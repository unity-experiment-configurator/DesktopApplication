// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Design For The Masses Project.
//
// Copyright (C) "Mnemoscene LTD".
// All Rights Reserved.
//
// File:
// 		AssetDataEntry.cs
//
// Date:
// 		18/05/2021
//
// Description: 
//		Class that contains all information necessery to make an asset data
//		entry to the asset data base object.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class AssetDataEntry<InputEnumType> where InputEnumType : struct, IConvertible
{
	[Header("Object-Tag Association")]
	public InputEnumType AssociatedTag;	// The tag of the input enum type to be associated with the object.
	public GameObject AssociatedObject; // The object that is associated with the aforementioned tag.

	// Constructor with all the default values. 
	public AssetDataEntry()
	{
		AssociatedTag = new InputEnumType();
		AssociatedObject = null;
	}

	// Constructor with inputs for both the associated tag type, tag and object.
	public AssetDataEntry(InputEnumType InputAssociatedTag, GameObject InputAssociatedObject)
	{
		AssociatedTag = InputAssociatedTag;
		AssociatedObject = InputAssociatedObject;
	}
}