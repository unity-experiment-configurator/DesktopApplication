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
using System.Linq;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class SceneConstructionData
{
	[Header("Initial Configuration Data String")]
	[TextArea]
	public string RawConfigurationData;	// The entire raw string of configuration data exactly as read from the configuration file.

	[Header("Scene Construction Data")]
	public List<string> ConfigurationDataLineList;  // The configuration data processed and organised into individual string list entries.

	[Header("Initial Scene Setup Data")]
	public string type;				// The string declaring the experiment type to be loaded.
	public string title;			// The string declaring the title of the current experiment.
	public string username;			// The string declaring the user who created the current experiment.
	public string uid;				// The string declaring the experiments unique identifier.
	public string createdAt;		// The string declaring the date and time the experiment was created.
	public string updatedAt;		// The string declaring the date and time the experiment was updated.
	public int sessionBlockCount;	// The integer declaring the amount of blocks per session.
	public int blockTrialCount;		// The integer declaring the amount of trials per block.
	[TextArea]
	public string description;		// The string declaring the description for the current experiment.
	[TextArea]
	public string instructions;		// The string declaring the instructions for the current experiment.

	// Constructor with all default values;
	public SceneConstructionData()
	{
		RawConfigurationData = "";
		ConfigurationDataLineList = null;
		type = "";
		title = "";
		username = "";
		uid = "";
		createdAt = "";
		updatedAt = "";
		sessionBlockCount = 0;
		blockTrialCount = 0;
		description = "";
		instructions = "";
	}

	// Constructor with input just for the initial raw configuration string.
	// Optional condition enables or disables the automatic data parse from given string for the experiment type and the configuration data string list. By default this is enabled.
	public SceneConstructionData(string InputRawConfigurationData, bool AutomaticDataParse = true)
	{
		RawConfigurationData = InputRawConfigurationData;
		ConfigurationDataLineList = null;
		type = "";
		title = "";
		username = "";
		uid = "";
		createdAt = "";
		updatedAt = "";
		sessionBlockCount = 0;
		blockTrialCount = 0;
		description = "";
		instructions = "";

		if (AutomaticDataParse)
		{
			ParseAll();
		}
	}

	// Constructor with inputs for all classe's parameters.
	public SceneConstructionData(string InputRawConfigurationData, List<string> InputConfigurationDataLineList, string InputType, string InputTitle, string Inputusername, string InputUID, string InputCreatedAt, string InputUpdatedAt, int InputSessionBlockCount, int InputBlockTrialCount, string InputDescription, string InputInstructions)
	{
		RawConfigurationData = InputRawConfigurationData;
		ConfigurationDataLineList = InputConfigurationDataLineList;
		type = InputType;
		title = InputTitle;
		username = Inputusername;
		uid = InputUID;
		createdAt = InputCreatedAt;
		updatedAt = InputUpdatedAt;
		sessionBlockCount = InputSessionBlockCount;
		blockTrialCount = InputBlockTrialCount;
		description = InputDescription;
		instructions = InputInstructions;
	}

	// Method to read the configuration data string from a JSON file in the provided directory.
	public void LoadConfigurationDataFile(string FilePath)
	{
		StreamReader JSONFileReader = new StreamReader(FilePath);
		RawConfigurationData = JSONFileReader.ReadToEnd();
		JSONFileReader.Close();
	}

	// Method to parse all the lines from the current configuration data string into a list of individual string.
	public void ParseConfigurationDataLines(bool RemoveStartEmptySpace = true, bool RemoveEndEmptySpace = true, bool RemoveCurlyBrackets = true, bool ReframeSquareBracketContent = true, bool RemoveLineEndCommas = true, bool RemoveEmptyLines = true)
	{
		ConfigurationDataLineList = RawConfigurationData.Split(new[] { "\r\n", "\r", "\n" }, StringSplitOptions.None).ToList();

		List<string> OldDataLineList = new List<string>();

		while (!OldDataLineList.SequenceEqual(ConfigurationDataLineList))
		{
			OldDataLineList = ConfigurationDataLineList;

			if (RemoveStartEmptySpace)
			{
				for (int ConfigurationDataCount = ConfigurationDataLineList.Count - 1; ConfigurationDataCount >= 0; ConfigurationDataCount--)
				{
					ConfigurationDataLineList[ConfigurationDataCount] = ConfigurationDataLineList[ConfigurationDataCount].TrimStart();
				}
			}

			if (RemoveEndEmptySpace)
			{
				for (int ConfigurationDataCount = ConfigurationDataLineList.Count - 1; ConfigurationDataCount >= 0; ConfigurationDataCount--)
				{
					ConfigurationDataLineList[ConfigurationDataCount] = ConfigurationDataLineList[ConfigurationDataCount].TrimEnd();
				}
			}

			if (RemoveCurlyBrackets)
			{
				for (int ConfigurationDataCount = ConfigurationDataLineList.Count - 1; ConfigurationDataCount >= 0; ConfigurationDataCount--)
				{
					ConfigurationDataLineList[ConfigurationDataCount] = ConfigurationDataLineList[ConfigurationDataCount].Replace("{", "");
					ConfigurationDataLineList[ConfigurationDataCount] = ConfigurationDataLineList[ConfigurationDataCount].Replace("}", "");
				}
			}

			if (ReframeSquareBracketContent)
			{
				for (int ConfigurationDataCount = ConfigurationDataLineList.Count - 1; ConfigurationDataCount >= 0; ConfigurationDataCount--)
				{
					if (ConfigurationDataLineList[ConfigurationDataCount].FirstOrDefault() == ']')
					{
						string CurrentBracketContent = "";
						int DataLineTraverseCount = ConfigurationDataCount;

						while (DataLineTraverseCount >= 0)
						{
							if (DataLineTraverseCount - 1 >= 0)
							{
								if (ConfigurationDataLineList[DataLineTraverseCount - 1].LastOrDefault() == '[')
								{
									CurrentBracketContent = ConfigurationDataLineList[DataLineTraverseCount] + CurrentBracketContent;
									ConfigurationDataLineList[DataLineTraverseCount] = "";
									ConfigurationDataLineList[DataLineTraverseCount - 1] += CurrentBracketContent;
									break;
								}
								else
								{
									CurrentBracketContent = ConfigurationDataLineList[DataLineTraverseCount] + CurrentBracketContent;
									ConfigurationDataLineList[DataLineTraverseCount] = "";
								}
							}

							--DataLineTraverseCount;
						}
					}
				}
			}

			if (RemoveLineEndCommas)
			{
				for (int ConfigurationDataCount = ConfigurationDataLineList.Count - 1; ConfigurationDataCount >= 0; ConfigurationDataCount--)
				{
					if (ConfigurationDataLineList[ConfigurationDataCount].LastOrDefault() == ',') ConfigurationDataLineList[ConfigurationDataCount] = ConfigurationDataLineList[ConfigurationDataCount].Remove(ConfigurationDataLineList[ConfigurationDataCount].Length - 1);
				}
			}

			if (RemoveEmptyLines)
			{
				for (int ConfigurationDataCount = ConfigurationDataLineList.Count - 1; ConfigurationDataCount >= 0; ConfigurationDataCount--)
				{
					if (ConfigurationDataLineList[ConfigurationDataCount] == "") ConfigurationDataLineList.RemoveAt(ConfigurationDataCount);
				}
			}
		}
	}

	// Method to parse the experiment type from the current configuration data string.
	public void ParseExperimentType()
	{
		JsonUtility.FromJsonOverwrite(GetConfigurationDataLineByName("type"), this);
	}

	// Method to parse the experiment title from the current configuration data string.
	public void ParseExperimentTitle()
	{
		JsonUtility.FromJsonOverwrite(GetConfigurationDataLineByName("title"), this);
	}

	// Method to parse the creator's username from the current configuration data string.
	public void ParseExperimentUsername()
	{
		JsonUtility.FromJsonOverwrite(GetConfigurationDataLineByName("username"), this);
	}

	// Method to parse the unique identification from the current configuration data string.
	public void ParseExperimentUID()
	{
		JsonUtility.FromJsonOverwrite(GetConfigurationDataLineByName("uid"), this);
	}

	// Method to parse the creation date from the current configuration data string.
	public void ParseExperimentCreatedAt()
	{
		JsonUtility.FromJsonOverwrite(GetConfigurationDataLineByName("createdAt"), this);
	}

	// Method to parse the update date from the current configuration data string.
	public void ParseExperimentUpdatedAt()
	{
		JsonUtility.FromJsonOverwrite(GetConfigurationDataLineByName("updatedAt"), this);
	}

	// Method to parse the session's block count from the current configuration data string.
	public void ParseExperimentSessionBlockCount()
	{
		JsonUtility.FromJsonOverwrite(GetConfigurationDataLineByName("sessionBlockCount"), this);
	}

	// Method to parse the session's block count from the current configuration data string.
	public void ParseExperimentBlockTrialCount()
	{
		JsonUtility.FromJsonOverwrite(GetConfigurationDataLineByName("blockTrialCount"), this);
	}

	// Method to parse the experiment description from the current configuration data string.
	public void ParseExperimentDescription()
	{
		JsonUtility.FromJsonOverwrite(GetConfigurationDataLineByName("description"), this);
	}

	// Method to parse the experiment instructions from the current configuration data string.
	public void ParseExperimentInstructions()
	{
		JsonUtility.FromJsonOverwrite(GetConfigurationDataLineByName("instructions"), this);
	}

	public void ParseAll()
	{
		ParseConfigurationDataLines();
		ParseExperimentType();
		ParseExperimentTitle();
		ParseExperimentUsername();
		ParseExperimentUID();
		ParseExperimentCreatedAt();
		ParseExperimentUpdatedAt();
		ParseExperimentSessionBlockCount();
		ParseExperimentBlockTrialCount();
		ParseExperimentDescription();
		ParseExperimentInstructions();
	}

	// Method to find a specific line of configuration data based on the provided parameter name. The method will only return the first match it finds, and if nothing is found, it will return an empty string.
	// This method by default will return the requested line, if found, formated as an individual JSON string. If disabled, it will return the string exactly as stored.
	public string GetConfigurationDataLineByName(string DataParameterName, bool JSONFormat = true)
	{
		string OutputString = "";

		foreach (string CurrentConfigurationDataLine in ConfigurationDataLineList)
		{
			if (CurrentConfigurationDataLine.Contains("\"" + DataParameterName + "\":"))
			{				
				if (CurrentConfigurationDataLine.Last() == ',') OutputString = CurrentConfigurationDataLine.Remove(CurrentConfigurationDataLine.Length - 1);
				else OutputString = CurrentConfigurationDataLine;

				if (JSONFormat) OutputString = "{" + OutputString + "}";

				break;
			}
		}

		return OutputString;
	}

	// Method to get a specific line of configuration data based on the line list index.
	// This method by default will return the requested line formated as an individual JSON string. If disabled, it will return the string exactly as stored.
	public string GetConfigurationDataLineByIndex(int DataLineIndex, bool JSONFormat = true)
	{
		string OutputString = "";

		if (ConfigurationDataLineList[DataLineIndex].Last() == ',') OutputString = ConfigurationDataLineList[DataLineIndex].Remove(ConfigurationDataLineList[DataLineIndex].Length - 1);

		if (JSONFormat) return "{" + OutputString + "}";
		else return OutputString;
	}
}