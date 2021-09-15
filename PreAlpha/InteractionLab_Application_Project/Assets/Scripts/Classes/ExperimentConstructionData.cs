// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		SceneConstructionData.cs
//
// Date:
// 		25/08/2021
//
// Description: 
//		Class containing all data necessary to construct an experiment scene.
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
public class ExperimentConstructionData
{
	[Header("Initial Configuration Data String")]
	[TextArea]
	public string rawConfigurationData;	// The entire raw string of configuration data exactly as read from the configuration file.

	[Header("Scene Construction Data")]
	public List<string> configurationDataLineList;	// The configuration data processed and organised into individual string list entries.

	[Header("Initial Scene Setup Data")]
	public string experimentType;			// The string declaring the experiment type to be loaded.
	public string experimentTitle;			// The string declaring the title of the current experiment.
	public string experimentAuthor;			// The string declaring the user who created the current experiment.
	public string experimentUID;			// The string declaring the experiments unique identifier.
	public string experimentCreationDate;	// The string declaring the date and time the experiment was created.
	public string experimentUpdateDate;		// The string declaring the date and time the experiment was updated.
	public int experimentTrialCount;		// The integer declaring the amount of trials per block.
	
	[Space(7)]
	[TextArea]
	public string experimentDescription;	// The string declaring the description for the current experiment.
	
	[Space(7)]
	[TextArea]
	public string experimentInstructions;	// The string declaring the instructions for the current experiment.

	// Constructor with all default values;
	public ExperimentConstructionData()
	{
		rawConfigurationData = "";
		configurationDataLineList = null;
		experimentType = "";
		experimentTitle = "";
		experimentAuthor = "";
		experimentUID = "";
		experimentCreationDate = "";
		experimentUpdateDate = "";
		experimentTrialCount = 0;
		experimentDescription = "";
		experimentInstructions = "";
	}

	// Constructor with input just for the initial raw configuration string.
	// Optional condition enables or disables the automatic data parse from given string for the experiment type and the configuration data string list. By default this is enabled.
	public ExperimentConstructionData(string inputRawConfigurationData, bool automaticDataParse = true)
	{
		rawConfigurationData = inputRawConfigurationData;
		configurationDataLineList = null;
		experimentType = "";
		experimentTitle = "";
		experimentAuthor = "";
		experimentUID = "";
		experimentCreationDate = "";
		experimentUpdateDate = "";
		experimentTrialCount = 0;
		experimentDescription = "";
		experimentInstructions = "";

		if (automaticDataParse) ParseAll();
	}

	// Constructor with inputs for all class's parameters.
	public ExperimentConstructionData(string inputRawConfigurationData, List<string> inputConfigurationDataLineList, string inputExperimentType, string inputExperimentTitle, string inputExperimentAuthor, string inputExperimentUID, string inputExperimentCreationDate, string inputExperimentUpdateDate, int inputExperimentTrialCount, string inputExperimentDescription, string inputExperimentInstructions)
	{
		rawConfigurationData = inputRawConfigurationData;
		configurationDataLineList = inputConfigurationDataLineList;
		experimentType = inputExperimentType;
		experimentTitle = inputExperimentTitle;
		experimentAuthor = inputExperimentAuthor;
		experimentUID = inputExperimentUID;
		experimentCreationDate = inputExperimentCreationDate;
		experimentUpdateDate = inputExperimentUpdateDate;
		experimentTrialCount = inputExperimentTrialCount;
		experimentDescription = inputExperimentDescription;
		experimentInstructions = inputExperimentInstructions;
	}

	// Method to read the configuration data string from a JSON file in the provided directory.
	public void LoadConfigurationDataFile(string filePath)
	{
		StreamReader fileReader = new StreamReader(filePath);
		rawConfigurationData = fileReader.ReadToEnd();
		fileReader.Close();
	}

	// Method to parse all the lines from the current configuration data string into a list of individual string.
	public void ParseConfigurationDataLines(bool removeStartEmptySpace = true, bool removeEndEmptySpace = true, bool removeCurlyBrackets = true, bool reframeSquareBracketContent = true, bool removeLineEndCommas = true, bool removeEmptyLines = true)
	{
		configurationDataLineList = rawConfigurationData.Split(new[] { "\r\n", "\r", "\n" }, StringSplitOptions.None).ToList();

		List<string> oldDataLineList = new List<string>();

		while (!oldDataLineList.SequenceEqual(configurationDataLineList))
		{
			oldDataLineList = configurationDataLineList;

			if (removeStartEmptySpace)
			{
				for (int configurationDataCount = configurationDataLineList.Count - 1; configurationDataCount >= 0; configurationDataCount--)
				{
					configurationDataLineList[configurationDataCount] = configurationDataLineList[configurationDataCount].TrimStart();
				}
			}

			if (removeEndEmptySpace)
			{
				for (int configurationDataCount = configurationDataLineList.Count - 1; configurationDataCount >= 0; configurationDataCount--)
				{
					configurationDataLineList[configurationDataCount] = configurationDataLineList[configurationDataCount].TrimEnd();
				}
			}

			if (removeCurlyBrackets)
			{
				for (int configurationDataCount = configurationDataLineList.Count - 1; configurationDataCount >= 0; configurationDataCount--)
				{
					configurationDataLineList[configurationDataCount] = configurationDataLineList[configurationDataCount].Replace("{", "");
					configurationDataLineList[configurationDataCount] = configurationDataLineList[configurationDataCount].Replace("}", "");
				}
			}

			if (reframeSquareBracketContent)
			{
				for (int configurationDataCount = configurationDataLineList.Count - 1; configurationDataCount >= 0; configurationDataCount--)
				{
					if (configurationDataLineList[configurationDataCount].FirstOrDefault() == ']')
					{
						string currentBracketContent = "";
						int dataLineTraverseCount = configurationDataCount;

						while (dataLineTraverseCount >= 0)
						{
							if (dataLineTraverseCount - 1 >= 0)
							{
								if (configurationDataLineList[dataLineTraverseCount - 1].LastOrDefault() == '[')
								{
									currentBracketContent = configurationDataLineList[dataLineTraverseCount] + currentBracketContent;
									configurationDataLineList[dataLineTraverseCount] = "";
									configurationDataLineList[dataLineTraverseCount - 1] += currentBracketContent;
									break;
								}
								else
								{
									currentBracketContent = configurationDataLineList[dataLineTraverseCount] + currentBracketContent;
									configurationDataLineList[dataLineTraverseCount] = "";
								}
							}

							--dataLineTraverseCount;
						}
					}
				}
			}

			if (removeLineEndCommas)
			{
				for (int configurationDataCount = configurationDataLineList.Count - 1; configurationDataCount >= 0; configurationDataCount--)
				{
					if (configurationDataLineList[configurationDataCount].LastOrDefault() == ',') configurationDataLineList[configurationDataCount] = configurationDataLineList[configurationDataCount].Remove(configurationDataLineList[configurationDataCount].Length - 1);
				}
			}

			if (removeEmptyLines)
			{
				for (int configurationDataCount = configurationDataLineList.Count - 1; configurationDataCount >= 0; configurationDataCount--)
				{
					if (configurationDataLineList[configurationDataCount] == "") configurationDataLineList.RemoveAt(configurationDataCount);
				}
			}
		}
	}

	// Method to parse the experiment type from the current configuration data string.
	public void ParseExperimentType()
	{
		JsonUtility.FromJsonOverwrite(GetConfigurationDataLineByName(nameof(experimentType)), this);
	}

	// Method to parse the experiment title from the current configuration data string.
	public void ParseExperimentTitle()
	{
		JsonUtility.FromJsonOverwrite(GetConfigurationDataLineByName(nameof(experimentTitle)), this);
	}

	// Method to parse the creator's username from the current configuration data string.
	public void ParseExperimentUsername()
	{
		JsonUtility.FromJsonOverwrite(GetConfigurationDataLineByName(nameof(experimentAuthor)), this);
	}

	// Method to parse the unique identification from the current configuration data string.
	public void ParseExperimentUID()
	{
		JsonUtility.FromJsonOverwrite(GetConfigurationDataLineByName(nameof(experimentUID)), this);
	}

	// Method to parse the creation date from the current configuration data string.
	public void ParseExperimentCreatedAt()
	{
		JsonUtility.FromJsonOverwrite(GetConfigurationDataLineByName(nameof(experimentCreationDate)), this);
	}

	// Method to parse the update date from the current configuration data string.
	public void ParseExperimentUpdatedAt()
	{
		JsonUtility.FromJsonOverwrite(GetConfigurationDataLineByName(nameof(experimentUpdateDate)), this);
	}

	// Method to parse the session's block count from the current configuration data string.
	public void ParseExperimentBlockTrialCount()
	{
		JsonUtility.FromJsonOverwrite(GetConfigurationDataLineByName(nameof(experimentTrialCount)), this);
	}

	// Method to parse the experiment description from the current configuration data string.
	public void ParseExperimentDescription()
	{
		JsonUtility.FromJsonOverwrite(GetConfigurationDataLineByName(nameof(experimentDescription)), this);
	}

	// Method to parse the experiment instructions from the current configuration data string.
	public void ParseExperimentInstructions()
	{
		JsonUtility.FromJsonOverwrite(GetConfigurationDataLineByName(nameof(experimentInstructions)), this);
	}

	// Method to parse all data using all parsing methods.
	public void ParseAll()
	{
		ParseConfigurationDataLines();
		ParseExperimentType();
		ParseExperimentTitle();
		ParseExperimentUsername();
		ParseExperimentUID();
		ParseExperimentCreatedAt();
		ParseExperimentUpdatedAt();
		ParseExperimentBlockTrialCount();
		ParseExperimentDescription();
		ParseExperimentInstructions();
	}

	// Method to find a specific line of configuration data based on the provided parameter name. The method will only return the first match it finds, and if nothing is found, it will return an empty string.
	// This method by default will return the requested line, if found, formated as an individual JSON string. If disabled, it will return the string exactly as stored.
	public string GetConfigurationDataLineByName(string dataParameterName, bool formatToJSON = true)
	{
		string outputString = "";

		foreach (string currentConfigurationDataLine in configurationDataLineList)
		{
			if (currentConfigurationDataLine.StartsWith("\"" + dataParameterName + "\":"))
			{
				if (currentConfigurationDataLine.Last() == ',') outputString = currentConfigurationDataLine.Remove(currentConfigurationDataLine.Length - 1);
				else outputString = currentConfigurationDataLine;

				if (formatToJSON) outputString = "{" + outputString + "}";

				break;
			}
		}

		return outputString;
	}

	// Method to get a specific line of configuration data based on the line list index.
	// This method by default will return the requested line formated as an individual JSON string. If disabled, it will return the string exactly as stored.
	public string GetConfigurationDataLineByIndex(int dataLineIndex, bool formatToJSON = true)
	{
		string outputString = "";

		if (configurationDataLineList[dataLineIndex].Last() == ',') outputString = configurationDataLineList[dataLineIndex].Remove(configurationDataLineList[dataLineIndex].Length - 1);

		if (formatToJSON) return "{" + outputString + "}";
		else return outputString;
	}

	// Override of the Equals method.
	public override bool Equals(object inputObject)
	{
		ExperimentConstructionData comparisonObject = inputObject as ExperimentConstructionData;

		return rawConfigurationData.Equals(comparisonObject.rawConfigurationData)
			&& configurationDataLineList.Equals(comparisonObject.configurationDataLineList)
			&& experimentType.Equals(comparisonObject.experimentType)
			&& experimentTitle.Equals(comparisonObject.experimentTitle)
			&& experimentAuthor.Equals(comparisonObject.experimentAuthor)
			&& experimentUID.Equals(comparisonObject.experimentUID)
			&& experimentCreationDate.Equals(comparisonObject.experimentCreationDate)
			&& experimentUpdateDate.Equals(comparisonObject.experimentUpdateDate)
			&& experimentTrialCount.Equals(comparisonObject.experimentTrialCount)
			&& experimentDescription.Equals(comparisonObject.experimentDescription)
			&& experimentInstructions.Equals(comparisonObject.experimentInstructions);
	}

	// Override of the GetHashCode method.
	public override int GetHashCode()
	{
		return ("RawConfigurationData" + rawConfigurationData
			+ "ConfigurationDataLineListHash" + configurationDataLineList.GetHashCode().ToString()
			+ "ExperimentType" + experimentType
			+ "ExperimentTitle" + experimentTitle
			+ "ExperimentAuthor" + experimentAuthor
			+ "ExperimentUID" + experimentUID
			+ "ExperimentCreationDate" + experimentCreationDate
			+ "ExperimentUpdateDate" + experimentUpdateDate
			+ "ExperimentTrialCount" + experimentTrialCount
			+ "ExperimentDescription" + experimentDescription
			+ "ExperimentInstructions" + experimentInstructions)
			.ToString()
			.GetHashCode();
	}
}