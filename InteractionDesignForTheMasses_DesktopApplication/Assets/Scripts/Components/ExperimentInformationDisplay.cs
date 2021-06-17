using TMPro;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExperimentInformationDisplay : MonoBehaviour
{
	[Header("Database Options")]
	public SceneDataBase TargetSceneDataBase;
	public FindReferenceCondition FindTargetSceneDataBase = FindReferenceCondition.OnlyIfNull;
	
	[Header("Experiment Information")]
	public string ExperimentType;
	public string ExperimentTitle;
	public string ExperimentUsername;
	public string ExperimentUID;
	public string ExperimentCreatedDate;
	public string ExperimentUpdateDate;
	[TextArea]
	public string ExperimentDescription;
	[TextArea]
	public string ExperimentInstructions;

	[Header("Text Component Associations")]
	public TextMeshPro ExperimentTitleTextComponent;
	public TextMeshPro ExperimentDetailsTextComponent;
	public TextMeshPro ExperimentDescriptionAndInstructionsTextComponent;

	public bool RetrievedExperimentInformation { get; private set; }

	void OnEnable()
	{
		if (FindTargetSceneDataBase == FindReferenceCondition.OnlyIfNull && TargetSceneDataBase == null) { TargetSceneDataBase = SceneDataBaseFunctions.Find(); }
		else if (FindTargetSceneDataBase == FindReferenceCondition.Always) { TargetSceneDataBase = SceneDataBaseFunctions.Find(); }
		GetExperimentInformation();
		SetupExperimentInformation();
	}

	void Update()
	{
		if (FindTargetSceneDataBase == FindReferenceCondition.OnlyIfNull && TargetSceneDataBase == null) { TargetSceneDataBase = SceneDataBaseFunctions.Find(); }
		else if (FindTargetSceneDataBase == FindReferenceCondition.Always) { TargetSceneDataBase = SceneDataBaseFunctions.Find(); }

		if (TargetSceneDataBase.SceneDataBaseEstablished)
		{
			GetExperimentInformation();
			SetupExperimentInformation();
		}
	}

	public void GetExperimentInformation()
	{
		RetrievedExperimentInformation = false;

		ExperimentType = TargetSceneDataBase.LoadedSceneConstructionData.type;
		ExperimentTitle = TargetSceneDataBase.LoadedSceneConstructionData.title;
		ExperimentUsername = TargetSceneDataBase.LoadedSceneConstructionData.username;
		ExperimentUID = TargetSceneDataBase.LoadedSceneConstructionData.uid;
		ExperimentCreatedDate = TargetSceneDataBase.LoadedSceneConstructionData.createdAt;
		ExperimentTitle = TargetSceneDataBase.LoadedSceneConstructionData.title;
		ExperimentDescription = TargetSceneDataBase.LoadedSceneConstructionData.description;
		ExperimentInstructions = TargetSceneDataBase.LoadedSceneConstructionData.instructions;

		RetrievedExperimentInformation = true;
	}

	public void SetupExperimentInformation()
	{
		ExperimentTitleTextComponent.text = ExperimentTitle;
		ExperimentDetailsTextComponent.text = "TYPE: " + ExperimentType + "	" + "USERNAME: " + ExperimentUsername + "\n" + "UID: " + ExperimentUID + "	" + "DATE: " + ExperimentCreatedDate;
		ExperimentDescriptionAndInstructionsTextComponent.text = ExperimentDescription + "\n\n" + ExperimentInstructions;
	}
}
