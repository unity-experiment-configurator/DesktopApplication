// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		VariableStatusBasedAction.cs
//
// Date:
// 		25/08/2021
//
// Description: 
//		Enum that contains all possible conditions for when to automatically
//		seek a compatible reference.
//
// -----------------------------------------------------------------------------

public enum FindReferenceCondition
{
	OnlyIfNull,
	Always,
	Never,
}