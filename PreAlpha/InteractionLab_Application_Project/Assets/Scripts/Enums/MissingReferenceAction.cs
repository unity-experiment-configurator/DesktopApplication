// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		MissingReferenceAction.cs
//
// Date:
// 		25/08/2021
//
// Description: 
//		Enum that contains all possible actions to be performed in the case of
//		a missing reference.
//
// -----------------------------------------------------------------------------

public enum MissingReferenceAction
{
	FindComponent,
	CreateComponent,
	FindOrCreateComponent,
	FindComponentOrCreateObject,
	FindObject,
	CreateObject,
	FindOrCreateObject,
	FindObjectOrCreateComponent,
}