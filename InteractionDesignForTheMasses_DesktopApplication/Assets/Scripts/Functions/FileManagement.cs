// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Design For The Masses Project.
//
// Copyright (C) "Mnemoscene LTD".
// All Rights Reserved.
//
// File:
// 		ReadConfigFile.cs
//
// Date:
// 		19/05/2021
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
	public static string ApplicationFilePath = Directory.GetCurrentDirectory();	// String containing the current directory the application is in.
	public static string ConfigurationFileFormat = "json";							// The format of the configuration file to look for in the given path.
	public static string ConfigurationInputFolderName = "InputElements";			// The folder name for all application input elements.
	public static string ConfigurationOutputFolderName = "OutputElements";			// The folder name for all application output elements.

	public static string ComposeInputDirectory()
	{
		return ApplicationFilePath + "/" + ConfigurationInputFolderName;
	}

	public static string ComposeOutputDirectory()
	{
		return ApplicationFilePath + "/" + ConfigurationOutputFolderName;
	}

	public static bool ConfirmInputDirectory()
	{
		return Directory.Exists(ComposeInputDirectory());
	}

	public static bool ConfirmOutputDirectory()
	{
		return Directory.Exists(ComposeOutputDirectory());
	}

	public static void CreateInputDirectory()
	{
		Directory.CreateDirectory(ComposeInputDirectory());
	}

	public static void CreateOutputDirectory()
	{
		Directory.CreateDirectory(ComposeOutputDirectory());
	}

	public static void ResolveInputDirectory()
	{
		if (!ConfirmInputDirectory()) CreateInputDirectory();
	}

	public static void ResolveOutputDirectory()
	{
		if (!ConfirmOutputDirectory()) CreateOutputDirectory();
	}

	public static string ComposeSpecificConfigurationFilePath(string ConfigurationFileName)
	{
		return ComposeInputDirectory() + "/" + ConfigurationFileName + "." + ConfigurationFileFormat;
	}

	public static string GetNewestConfigurationFileName()
	{
		DirectoryInfo CurrentInputDirectory = new DirectoryInfo(ComposeInputDirectory());
		FileInfo CurrentFile = CurrentInputDirectory.GetFiles("*." + ConfigurationFileFormat, SearchOption.TopDirectoryOnly).OrderByDescending(File => File.LastWriteTime).First();

		return CurrentFile.Name;
	}

	public static string GetOldestConfigurationFileName()
	{
		DirectoryInfo CurrentInputDirectory = new DirectoryInfo(ComposeInputDirectory());
		FileInfo CurrentFile = CurrentInputDirectory.GetFiles("*." + ConfigurationFileFormat, SearchOption.TopDirectoryOnly).OrderByDescending(File => File.LastWriteTime).Last();

		return CurrentFile.Name;
	}

	public static string ComposeNewestConfigurationFilePath()
	{
		DirectoryInfo CurrentInputDirectory = new DirectoryInfo(ComposeInputDirectory());
		FileInfo CurrentFile = CurrentInputDirectory.GetFiles("*." + ConfigurationFileFormat, SearchOption.TopDirectoryOnly).OrderByDescending(File => File.LastWriteTime).First();

		return CurrentFile.FullName;
	}

	public static string ComposeOldestConfigurationFilePath()
	{
		DirectoryInfo CurrentInputDirectory = new DirectoryInfo(ComposeInputDirectory());
		FileInfo CurrentFile = CurrentInputDirectory.GetFiles("*." + ConfigurationFileFormat, SearchOption.TopDirectoryOnly).OrderByDescending(File => File.LastWriteTime).Last();

		return CurrentFile.FullName;
	}

	public static bool ConfirmSpecificConfigurationFile(string ConfigurationFileName)
	{
		return File.Exists(ComposeSpecificConfigurationFilePath(ConfigurationFileName));
	}

	public static bool ConfirmAnyConfigurationFile()
	{
		return Directory.GetFiles(ComposeInputDirectory() + "/", "*." + ConfigurationFileFormat, SearchOption.TopDirectoryOnly).Length > 0;
	}

	public static SceneConstructionData ReadSpecificConfigurationFile(string ConfigurationFilePathOveride)
	{
		if (ConfirmSpecificConfigurationFile(ConfigurationFilePathOveride))
		{
			SceneConstructionData OutputSceneConstructionData = new SceneConstructionData();
			OutputSceneConstructionData.LoadConfigurationDataFile(ComposeSpecificConfigurationFilePath(ConfigurationFilePathOveride));

			return OutputSceneConstructionData;
		}
		else
		{
			Debug.LogError("Cannot proceed with scene construction. Cannot locate \"" + ConfigurationFilePathOveride + "." + ConfigurationFileFormat + "\" in provided directory.");
			return new SceneConstructionData();
		}
	}

	public static SceneConstructionData ReadNewestConfigurationFile()
	{
		SceneConstructionData OutputSceneConstructionData = new SceneConstructionData();
		OutputSceneConstructionData.LoadConfigurationDataFile(ComposeNewestConfigurationFilePath());

		return OutputSceneConstructionData;
	}

	public static SceneConstructionData ReadOldestConfigurationFile()
	{
		SceneConstructionData OutputSceneConstructionData = new SceneConstructionData();
		OutputSceneConstructionData.LoadConfigurationDataFile(ComposeOldestConfigurationFilePath());

		return OutputSceneConstructionData;
	}
}
