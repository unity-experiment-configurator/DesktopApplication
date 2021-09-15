// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		AssetDataEntry.cs
//
// Date:
// 		25/08/2021
//
// Description: 
//		Class that contains all information necessary to make an asset data
//		entry to the asset data base object.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class AssetDataEntry<inputEnumType> where inputEnumType : struct, IConvertible
{
	[Header("Object-To-Tag Association")]
	public inputEnumType associatedTag;	// The tag of the input enum type to be associated with the object.
	public GameObject associatedObject; // The object that is associated with the aforementioned tag.

	// Constructor with all the default values.
	public AssetDataEntry()
	{
		associatedTag = new inputEnumType();
		associatedObject = null;
	}

	// Constructor with inputs for all values.
	public AssetDataEntry(inputEnumType inputAssociatedTag, GameObject inputAssociatedObject)
	{
		associatedTag = inputAssociatedTag;
		associatedObject = inputAssociatedObject;
	}

	// Override of the Equals method.
	public override bool Equals(object inputObject)
	{
		AssetDataEntry<inputEnumType> comparisonObject = inputObject as AssetDataEntry<inputEnumType>;

		return associatedTag.Equals(comparisonObject.associatedTag)
			&& associatedObject.Equals(comparisonObject.associatedObject);
	}

	// Override of the GetHashCode method.
	public override int GetHashCode()
	{
		return ("AssociatedTag" + associatedTag.ToString()
			+ "AssociatedObject" + associatedObject.GetHashCode().ToString())
			.ToString()
			.GetHashCode();
	}
}