// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		SystemQuery.cs
//
// Date:
// 		26/08/2021
//
// Description: 
//		Function that contains methods for the collecting information related to
//		the application itself, the system it's running on and the general
//		performance.
//
// -----------------------------------------------------------------------------

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class SystemQuery
{
	// Method to calculate what the current frame rate of the application is.
	public static float GetApplicationFramerate()
	{
		return 1 / Time.deltaTime;
	}
}