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
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ReadConfigFile
{
	public static SceneConstructionData Read(string ConfigurationFilePathOveride = "")
	{
		string ApplicationFilePath = Directory.GetCurrentDirectory();	// String containing the current directory the application is in.
		string ConfigurationFileName = "config";						// The name of the configuration file to look for in the given path.
		string ConfigurationFileFormat = "json";						// The format of the configuration file to look for in the given path.
		string ConfigurationFileFullPath;								// The string variable to store the final directory to find the configuration file.

		// If the path overide string is empty, proceed to query the system for the application's current directory and create an assumed configuration file directory.
		// If the path overide string contains anything at all, proceed into treating it as a file path and create an assumed configuration file directory.
		if (ConfigurationFilePathOveride == "")
		{
			ConfigurationFileFullPath = ApplicationFilePath + "/" + ConfigurationFileName + "." + ConfigurationFileFormat;
		}
		else
		{
			ConfigurationFileFullPath = ConfigurationFilePathOveride + "/" + ConfigurationFileName + "." + ConfigurationFileFormat;
		}

		if (File.Exists(ConfigurationFileFullPath))
		{
			SceneConstructionData OutputSceneConstructionData = new SceneConstructionData();
			OutputSceneConstructionData.ReadJSONFile(ConfigurationFileFullPath);

			return OutputSceneConstructionData;
		}
		else
		{
			Debug.LogError("Cannot proceed with scene construction. Cannot locate \"config.json\" in provided directory.");
			return new SceneConstructionData();
		}
	}
}