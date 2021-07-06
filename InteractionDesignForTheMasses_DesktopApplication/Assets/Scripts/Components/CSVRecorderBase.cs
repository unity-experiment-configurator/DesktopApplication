using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEngine;

public class CSVRecorderBase : MonoBehaviour
{
	[Header("Recorder Options")]
	public string OutputFileName;
	public char Separator;
	public bool RecordTime;
	public bool RecordTotalFrameCount;
	public int RecordFrameStep;

	public List<ComponentFieldListing> RecordedComponentList;

	private float CurrentTime = 0;
	private int CurretnTotalFrameCount = 0;
	private int CurretnFrameStepCount = 0;
	private bool RecordingActive = false;
	private StreamWriter CurrentStreamWritter;

	void Update()
	{
		if (RecordingActive)
		{
			CurrentTime += Time.unscaledDeltaTime;
			++CurretnTotalFrameCount;
		}

		++CurretnFrameStepCount;

		if (CurretnFrameStepCount >= RecordFrameStep)
		{
			if (RecordingActive) RecordDataLine();
			CurretnFrameStepCount = 0;
		}
	}

	string FormHeaderLine()
	{
		string OutputString = "";

		if (RecordTime) OutputString += "Time";
		if (RecordTotalFrameCount)
		{
			if (RecordTime) OutputString += Separator + "Frame";
			else OutputString += "Frame";
		}

		if (RecordedComponentList.Count > 0) OutputString += Separator;

		for (int RecordedComponentCount = 0; RecordedComponentCount < RecordedComponentList.Count; RecordedComponentCount++)
		{
			OutputString += RecordedComponentList[RecordedComponentCount].TargetComponent.gameObject.name + " - " + RecordedComponentList[RecordedComponentCount].TargetComponent.name + Separator;

			if (RecordedComponentCount < RecordedComponentList.Count - 1)
			{
				OutputString += ",";
			}
		}



		// THIS NEEDS TO HAVE ANOTHER LOOP IN IT FOR EACH PARAMETER NAME OF EACH COMPONENT FROM THE LIST.


		return OutputString;
	}
	string FormDataLine()
	{
		string OutputString = "";

		if (RecordTime) OutputString += CurrentTime.ToString();
		if (RecordTotalFrameCount)
		{
			if (RecordTime) OutputString += Separator + CurretnTotalFrameCount;
			else OutputString += CurretnTotalFrameCount;
		}

		if (RecordedComponentList.Count > 0) OutputString += Separator;

		for (int RecordedComponentCount = 0; RecordedComponentCount < RecordedComponentList.Count; RecordedComponentCount++)
		{
			OutputString += RecordedComponentList[RecordedComponentCount].TargetComponent.gameObject.name + " - " + RecordedComponentList[RecordedComponentCount].TargetComponent.name + Separator;

			if (RecordedComponentCount < RecordedComponentList.Count - 1)
			{
				OutputString += ",";
			}
		}



		// THIS NEEDS TO HAVE ANOTHER LOOP IN IT FOR EACH PARAMETER NAME OF EACH COMPONENT FROM THE LIST.



		return OutputString;
	}

	void RecordHeaderLine()
	{
		CurrentStreamWritter.WriteLine(FormHeaderLine());
	}

	void RecordDataLine()
	{
		CurrentStreamWritter.WriteLine(FormDataLine());
	}

	public void StartRecording()
	{
		RecordingActive = true;
		CurrentStreamWritter = new StreamWriter(Directory.GetCurrentDirectory() + "/" + OutputFileName + ".csv");
		RecordHeaderLine();
	}

	public void EndRecording()
	{
		RecordingActive = false;
		CurrentStreamWritter.Close();
	}

	public bool IsActive()
	{
		return RecordingActive;
	}
}