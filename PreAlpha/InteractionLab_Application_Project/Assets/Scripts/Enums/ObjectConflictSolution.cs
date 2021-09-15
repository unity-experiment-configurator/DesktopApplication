// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		ObjectConflictSolution.cs
//
// Date:
// 		25/08/2021
//
// Description: 
//		Enum that contains all the possible solutions for when two objects are
//		at any type of conflict.
//
// -----------------------------------------------------------------------------

public enum ObjectConflictSolution
{
	DestroySelf,
	DestroyOther,
	DestroyBoth,
	DisableSelf,
	DisableOther,
	DisableBoth,
	NoAction,
}