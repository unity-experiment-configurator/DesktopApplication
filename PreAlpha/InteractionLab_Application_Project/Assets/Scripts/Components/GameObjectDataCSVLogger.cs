// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		GameObjectDataCSVLogger.cs
//
// Date:
// 		8/09/2021
//
// Description: 
//		Component that logs all of its listed game object's world position
//		transformations and saves them at a specified path with a specified name
//		as a CSV data file.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEngine;

[Serializable]
public class GameObjectDataCSVLogger : MonoBehaviour
{
	[Header("Data Logger Options")]
	public int logFrameInterval;				// The frame interval between logging value data.
	public char valueSeparator = ',';			// The separator to be use between logged value data. This by default is a comma (',').
	public bool executeAsFixedUpdate = true;	// Condition to execute the main logging process as a fixed update as opposed as a regular update that's not a time consistent. This by default is enabled.
	public bool startLogOnEnable = true;		// Condition to start the log process as soon upon enabling the component. This by default is enabled.

	[Header("Data File Generation Options")]
	public string outputFileName = "Movement_Log";		// The name of the output CSV data file. This can be used to put the file in a subdirectory in the current one by simply using the "/" symbol. This by default is "Movement_Log".
	public bool addSystemDateToFileName = true;			// Condition to include the system reported date at the end of the file's name. This by default is enabled.
	public bool addSystemTimeToFileName = true;			// Condition to include the system reported time at the end of the file's name. If the inclusion of the system reported date is also enabled, the time will be put after the date. This by default is enabled.
	public bool useLocalApplicationDirectory = true;	// Condition to use the local application directory, meaning that the output file will be saved relative to the applications current directory, as opposed to system wide directory. This by default is enabled.

	[Header("Data logging Options")]
	public bool logGameObjectWorldPositions = true;	// Condition to include the game object's world position in the data log. This by default is enabled.

	[Header("Additional Data Logging Options")]
	public bool includeTimeStamps = true;		// Condition to include a timestamp column that will log the total precise delta time sum each data logging interval. This by default is enabled.
	public bool includeTotalFrameCount = true;	// Condition to include a frame total column that will log the total frame sum each data logging interval. This by default is enabled.

	[Header("Target Game Objects")]
	public List<GameObject> targetGameObjectList;	// The list containing all game objects to have their world positions logged.

	[Header("Indications")]
	private bool loggingCurrentlyActive;	// Indicator displaying if the logging process is currently active.

	[Space(7)]
	private float currentTime;			// Indicator displaying the total time passed so far.
	private int curretnTotalFrameCount;	// Indicator displaying the total frame count so far.
	private int curretnFrameStepCount;	// Indicator displaying the total frame count passed so far before the next logging interval.
	
	[Space(7)]
	private StreamWriter currentFileStreamWriter;   // Indicator displaying the current designated file streamer that handles the file generation and data logging process. 

	// Method to execute tasks upon enabling the component.
	void OnEnable()
	{
		if (startLogOnEnable) StartLogging();
	}

	// Method to run tasks every frame at a fixed interval of time.
	void FixedUpdate()
	{
		if (executeAsFixedUpdate) MainProcess();
	}

	// Method to run tasks every frame.
	void Update()
	{
		if (!executeAsFixedUpdate) MainProcess();
	}

	// Method to run final tasks right before destroying this component.
	void OnDestroy()
	{
		if (loggingCurrentlyActive) EndLogging();
	}

	// Method to form and return the header line containing the labels of all columns as a string.
	string FormHeaderLine()
	{
		string outputString = "";

		if (includeTimeStamps) outputString += "SECOND";
		if (includeTotalFrameCount)
		{
			if (includeTimeStamps) outputString += valueSeparator;
			
			outputString += "FRAME#";
		}

		if (logGameObjectWorldPositions)
		{
			foreach (GameObject currentTargetGameObject in targetGameObjectList)
			{
				if (outputString.Length > 0) outputString += valueSeparator;

				outputString += currentTargetGameObject.name + " POSITION X";
				outputString += valueSeparator + currentTargetGameObject.name + " POSITION Y";
				outputString += valueSeparator + currentTargetGameObject.name + " POSITION Z";
			}
		}

		return outputString;
	}

	// Method to form and return the data line containing the current values of all columns as a string.
	string FormDataLine()
	{
		string outputString = "";

		if (includeTimeStamps) outputString += currentTime.ToString();
		if (includeTotalFrameCount)
		{
			if (includeTimeStamps) outputString += valueSeparator;
			outputString += curretnTotalFrameCount;
		}

		if (logGameObjectWorldPositions)
		{
			foreach (GameObject currentTargetGameObject in targetGameObjectList)
			{
				if (outputString.Length > 0) outputString += valueSeparator;

				outputString += currentTargetGameObject.transform.position.x.ToString();
				outputString += valueSeparator + currentTargetGameObject.transform.position.y.ToString();
				outputString += valueSeparator + currentTargetGameObject.transform.position.z.ToString();
			}
		}

		return outputString;
	}

	// Method to log a header line the currently generated CSV data file via the current file stream writer.
	void LogHeaderLine()
	{
		currentFileStreamWriter.WriteLine(FormHeaderLine());
	}

	// Method to log a the current data line the currently generated CSV data file via the current file stream writer.
	void LogDataLine()
	{
		currentFileStreamWriter.WriteLine(FormDataLine());
	}


	// Method to start the data logging process by setting the logging status as active and opening a new file stream writer.
	// Option to include a header line at the first line of the log is included. By default, this option is enabled.
	public void StartLogging(bool includeHeaderLine = true)
	{
		loggingCurrentlyActive = true;

		string currentOutputFileName = outputFileName;

		if (addSystemDateToFileName) currentOutputFileName += "_" + DateTime.Now.ToString("dd_MM_yyyy");
		if (addSystemTimeToFileName) currentOutputFileName += "_" + DateTime.Now.ToString("HH_mm_ss");

		if (useLocalApplicationDirectory)
		{
			currentFileStreamWriter = new StreamWriter(Directory.GetCurrentDirectory() + "/" + currentOutputFileName + ".csv");
		}
		
		if (includeHeaderLine) LogHeaderLine();
	}

	// Method to end the data logging process by setting the logging status as inactive and closing the current file stream writer.
	public void EndLogging()
	{
		loggingCurrentlyActive = false;
		currentFileStreamWriter.Close();
	}

	// Method to run the main process.
	public void MainProcess()
	{
		if (loggingCurrentlyActive)
		{
			currentTime += Time.unscaledDeltaTime;
			++curretnTotalFrameCount;
		}

		++curretnFrameStepCount;

		if (curretnFrameStepCount >= logFrameInterval)
		{
			if (loggingCurrentlyActive) LogDataLine();
			curretnFrameStepCount = 0;
		}
	}
}