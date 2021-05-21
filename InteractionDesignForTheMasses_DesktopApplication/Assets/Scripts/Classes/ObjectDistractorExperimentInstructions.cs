// -----------------------------------------------------------------------------
//
// Project:
//		Interaction Design For The Masses Project.
//
// Copyright (C) "Mnemoscene LTD".
// All Rights Reserved.
//
// File:
//		ObjectDistractorExperimentInstructions.cs
//
// Date:
//		20/05/2021
//
// Description: 
//
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class ObjectDistractorInstructions
{
	public List<string> DistractorTypes;
	public string TargetColor;
	public string TargetType;
	public string TargetSound;
	public int DistractorCount;
	//public UXFInstructions UXF;

	public ObjectDistractorInstructions()
	{
		DistractorTypes = null;
		TargetColor = "";
		TargetType = "";
		TargetSound = "";
		DistractorCount = 0;
		//UXF = null;
	}

	public ObjectDistractorInstructions(List<string> InputDistractorTypes, string InputTargetColor, string InputTargetType, string InputTargetSound, int InputDistractorCount)
	{
		DistractorTypes = InputDistractorTypes;
		TargetColor = InputTargetColor;
		TargetType = InputTargetType;
		TargetSound = InputTargetType;
		DistractorCount = InputDistractorCount;
		//UXF = InputUXF;
	}

	public class UXFInstructions
	{
		int trials_per_block;
		int catch_trials_per_block;
		int delay_time;

		public UXFInstructions()
		{
			trials_per_block = 0;
			catch_trials_per_block = 0;
			delay_time = 0;
		}

		public UXFInstructions(int TPB, int CTPB, int DT)
		{
			trials_per_block = TPB;
			catch_trials_per_block = CTPB;
			delay_time = DT;
		}
	}

	public string ToJSONString()
	{
		return JsonUtility.ToJson(this);
	}

	public void SetupFromJSON(string JSONString)
	{
		JsonUtility.FromJsonOverwrite(JSONString, this);
	}
}
