// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Design For The Masses Project.
//
// Copyright (C) "Mnemoscene LTD".
// All Rights Reserved.
//
// File:
// 		SceneConstructionData.cs
//
// Date:
// 		19/05/2021
//
// Description: 
//		Class containing all data necessery to construct an experiment scene.
//		It contains methods to write and read json files that contain data of
//		all of its parameters.
//
// -----------------------------------------------------------------------------

using System;
using System.IO;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class SceneConstructionData
{
	[Header("Experiment Type")]
	public string ExperimentType;	// The string declaring the experiment type to be loaded.

	[Header("Find Among Distractors - Variables")]
	public List<string> DistractorTypes;	// If the scene requires it, this string list will declare all distractor object types to be created.
	public string TargetColour;				// If the scene requires it, this string will declare the colour of the target object to be created.
	public string TargetType;				// If the scene requires it, this string will declare the type of the target object to be created.
	public string TargetSound;				// If the scene requires it, this string will declare the sound to be attached on the target object.
	public int DistractorCount;				// If the scene requires it, this string will declare the amount of distractor objects to be created.

	// Constructor with all default values;
	public SceneConstructionData()
	{
		ExperimentType = "";
		DistractorTypes = null;
		TargetColour = "";
		TargetType = "";
		TargetSound = "";
		DistractorCount = 0;
	}

	// Constructor with inputs for all values;
	public SceneConstructionData(string InputExperimentType, List<string> InputDistractorTypes, string InputTargetColour, string InputTargetType, string InputTargetSound, int InputDistractorCount)
	{
		ExperimentType = InputExperimentType;
		DistractorTypes = InputDistractorTypes;
		TargetColour = InputTargetColour;
		TargetType = InputTargetType;
		TargetSound = InputTargetSound;
		DistractorCount = InputDistractorCount;
	}

	// Method to create a json string with all the current parameter data.
	public string CreateJSONString()
	{
		return JsonUtility.ToJson(this);
	}

	// Method to write all current parameter data into a json file.
	public void WriteJSONFile(string FilePath)
	{
		StreamWriter JSONFileWriter = new StreamWriter(FilePath, false);
		JSONFileWriter.WriteLine(CreateJSONString());
		JSONFileWriter.Close();
	}

	// Method to setup all the current parameters from a json string.
	public void ParseJSONString(string JSONString)
	{
		JsonUtility.FromJsonOverwrite(JSONString, this);
	}

	// Method to read and setup the current parameters from a json file.
	public void ReadJSONFile(string FilePath)
	{
		StreamReader JSONFileReader = new StreamReader(FilePath);
		string JSONString = JSONFileReader.ReadToEnd();
		JSONFileReader.Close();

		ParseJSONString(JSONString);
	}
}