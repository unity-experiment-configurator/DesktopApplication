// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		ReadConfigFile.cs
//
// Date:
// 		25/08/2021
//
// Description: 
//		Function that reads the applications configuration file. The function
//		will look for the "config.json" file in the provided directory or, if no
//		directory is provided, it will look in the current directory the
//		application is in.
//
// -----------------------------------------------------------------------------

using System;
using System.IO;
using System.Linq;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class FileManagement
{
	public static string applicationFilePath = Directory.GetCurrentDirectory();	// String containing the current directory the application is in.
	public static string configurationFileFormat = "json";						// The format of the configuration file to look for in the given path.
	public static string configurationInputFolderName = "InputElements";		// The folder name for all application input elements.
	public static string configurationOutputFolderName = "OutputElements";		// The folder name for all application output elements.

	// Method to compose and return the application's input directory.
	public static string ComposeInputDirectory()
	{
		return applicationFilePath + "/" + configurationInputFolderName;
	}

	// Method to compose and return the application's output directory.
	public static string ComposeOutputDirectory()
	{
		return applicationFilePath + "/" + configurationOutputFolderName;
	}

	// Method to verify the existence of the application's input directory.
	public static bool ConfirmInputDirectory()
	{
		return Directory.Exists(ComposeInputDirectory());
	}

	// Method to verify the existence of the application's output directory.
	public static bool ConfirmOutputDirectory()
	{
		return Directory.Exists(ComposeOutputDirectory());
	}

	// Method to create the application's input directory.
	public static void CreateInputDirectory()
	{
		Directory.CreateDirectory(ComposeInputDirectory());
	}

	// Method to create the application's output directory.
	public static void CreateOutputDirectory()
	{
		Directory.CreateDirectory(ComposeOutputDirectory());
	}

	// Method to verify the existence of the application's input directory, and if the directory does not exist, create it.
	public static void ResolveInputDirectory()
	{
		if (!ConfirmInputDirectory()) CreateInputDirectory();
	}

	// Method to verify the existence of the application's output directory, and if the directory does not exist, create it.
	public static void ResolveOutputDirectory()
	{
		if (!ConfirmOutputDirectory()) CreateOutputDirectory();
	}

	// Method to remove the directory section from a file path.
	public static string RemoveFileDirectory(string inputFileDirectory)
	{
		string[] tokenisedFileDirectory = inputFileDirectory.Split('/');

		return tokenisedFileDirectory[tokenisedFileDirectory.Length - 1];
	}

	// Method to remove the format section from a file path.
	public static string RemoveFileFormat(string inputFileFormat)
	{
		string[] tokenisedFileFormat = inputFileFormat.Split('.');

		return tokenisedFileFormat[0];
	}

	// Method to compose the full path to the application's configuration file.
	public static string ComposeSpecificConfigurationFilePath(string configurationFileName)
	{
		return ComposeInputDirectory() + "/" + configurationFileName + "." + configurationFileFormat;
	}

	// Method to get the name of the newest configuration file based on its last modified date as noted from its system metadata.
	public static FileInfo GetNewestConfigurationFileInfo()
	{
		DirectoryInfo currentInputDirectory = new DirectoryInfo(ComposeInputDirectory());
		FileInfo[] currentFileArray = currentInputDirectory.GetFiles("*." + configurationFileFormat, SearchOption.TopDirectoryOnly);

		// Check if the current files list in not empty before finding the newest one.
		if (currentFileArray.Length > 0) return currentFileArray.OrderByDescending(file => file.LastWriteTime).First();
		else
		{
			Debug.LogWarning("Could not get newest configuration file info. The destination input element directory doesn't seem to have any .\"" + configurationFileFormat + "\" configuration files.");
			return default;
		}
	}

	// Method to get the name of the oldest configuration file based on its last modified date as noted from its system metadata.
	public static FileInfo GetOldestConfigurationFileInfo()
	{
		DirectoryInfo currentInputDirectory = new DirectoryInfo(ComposeInputDirectory());
		FileInfo[] currentFileArray = currentInputDirectory.GetFiles("*." + configurationFileFormat, SearchOption.TopDirectoryOnly);

		// Check if the current files list in not empty before finding the oldest one.
		if (currentFileArray.Length > 0) return currentFileArray.OrderByDescending(file => file.LastWriteTime).Last();
		else
		{
			Debug.LogWarning("Could not get oldest configuration file info. The destination input element directory doesn't seem to have any .\"" + configurationFileFormat + "\" configuration files.");
			return default;
		}
	}

	// Method to get the name of the newest configuration file based on its last modified date as noted from its system metadata.
	public static string GetNewestConfigurationFileName()
	{
		return GetNewestConfigurationFileInfo().Name;
	}

	// Method to get the name of the oldest configuration file based on its last modified date as noted from its system metadata.
	public static string GetOldestConfigurationFileName()
	{
		return GetOldestConfigurationFileInfo().Name;
	}

	// Method to get the path of the newest configuration file based on its last modified date as noted from its system metadata.
	public static string ComposeNewestConfigurationFilePath()
	{
		return GetNewestConfigurationFileInfo().FullName;
	}

	// Method to get the path of the oldest configuration file based on its last modified date as noted from its system metadata.
	public static string ComposeOldestConfigurationFilePath()
	{
		return GetOldestConfigurationFileInfo().FullName;
	}

	// Method to confirm the existence of a configuration file with a specific name.
	public static bool ConfirmSpecificConfigurationFile(string configurationFileName)
	{
		return File.Exists(ComposeSpecificConfigurationFilePath(configurationFileName));
	}

	// Method to confirm the existence of any configuration file.
	public static bool ConfirmAnyConfigurationFile()
	{
		return Directory.GetFiles(ComposeInputDirectory() + "/", "*." + configurationFileFormat, SearchOption.TopDirectoryOnly).Length > 0;
	}

	// Method to read a specific configuration file by overriding the configuration file path.
	public static ExperimentConstructionData ReadSpecificConfigurationFile(string configurationFilePathOverride)
	{
		if (ConfirmSpecificConfigurationFile(configurationFilePathOverride))
		{
			ExperimentConstructionData outputSceneConstructionData = new ExperimentConstructionData();
			outputSceneConstructionData.LoadConfigurationDataFile(ComposeSpecificConfigurationFilePath(configurationFilePathOverride));

			return outputSceneConstructionData;
		}
		else
		{
			Debug.LogError("Cannot proceed with scene construction. Cannot locate \"" + configurationFilePathOverride + "." + configurationFileFormat + "\" in provided directory.");
			return new ExperimentConstructionData();
		}
	}

	// Method to read the newest configuration file available.
	public static ExperimentConstructionData ReadNewestConfigurationFile()
	{
		ExperimentConstructionData outputSceneConstructionData = new ExperimentConstructionData();
		outputSceneConstructionData.LoadConfigurationDataFile(ComposeNewestConfigurationFilePath());

		return outputSceneConstructionData;
	}

	// Method to read the oldest configuration file available.
	public static ExperimentConstructionData ReadOldestConfigurationFile()
	{
		ExperimentConstructionData outputSceneConstructionData = new ExperimentConstructionData();
		outputSceneConstructionData.LoadConfigurationDataFile(ComposeOldestConfigurationFilePath());

		return outputSceneConstructionData;
	}
}