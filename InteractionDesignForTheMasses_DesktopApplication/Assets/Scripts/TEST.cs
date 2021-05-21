using System;
using System.IO;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TEST : MonoBehaviour
{
	/*
	void Start()
	{
		ObjectDistractorInstructions TestObj = new ObjectDistractorInstructions(new List<string> { "Banana", "Car", "Apple", "Plane", "Cow" }, "Gruish Blue", "TargetIsChair", "Smash", 50, new ObjectDistractorInstructions.UXFInstructions(11, 22, 33));

		Debug.Log(TestObj.ToJSONString());
	}
	*/

	// Start is called before the first frame update
	void Update()
	{
		string FilePath = Directory.GetCurrentDirectory();
		string FileName = "config";
		string FileFormat = "json";
		string FileFullPath = FilePath + "/" + FileName + "." + FileFormat;

		StreamReader ConfigContents = new StreamReader(FileFullPath);
		string JSONString = ConfigContents.ReadToEnd();

		Debug.Log("Reading in: " + FileFullPath);
		Debug.Log(JSONString);

		ObjectDistractorInstructions ExpInstr = new ObjectDistractorInstructions();

		ExpInstr.SetupFromJSON(JSONString);

		if (ExpInstr == null)
		{
			Debug.Log("ITS NULL");
		}

		Debug.Log(ExpInstr.DistractorTypes[1]);
		Debug.Log(ExpInstr.TargetColor);
		Debug.Log(ExpInstr.TargetSound);
		Debug.Log(ExpInstr.DistractorCount);
	}
}