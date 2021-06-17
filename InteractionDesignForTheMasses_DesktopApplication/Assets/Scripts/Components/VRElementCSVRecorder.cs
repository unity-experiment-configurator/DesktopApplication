using System;
using System.IO;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using UnityEngine.XR.Interaction.Toolkit;

public class VRElementCSVRecorder : MonoBehaviour
{
	[Header("Recorder Options")]
	public string OutputFileName = "ExperimentRecords";
	public char Separator = ',';
	public int RecordLineInterval = 2;

	[Header("Scene Database Setup")]
	public SceneDataBase TargetSceneDataBase;
	public bool RecordSessionBlockCount = true;
	public bool RecordBlockTrialCount = true;

	[Header("VR Head Element Setup")]
	public GameObject VRHeadGameObject;
	public bool RecordHeadPositions = true;
	public bool RecordHeadRotations = true;

	[Header("VR Left Hand Element Setup")]
	public GameObject VRLeftHandGameObject;
	public bool RecordLeftHandPosition = true;
	public bool RecordLeftHandRotation = true;
	public bool RecordLeftHandGrabbedObjectRole = true;

	[Header("VR Right Hand Element Setup")]
	public GameObject VRRightHandGameObject;
	public bool RecordRightHandPosition = true;
	public bool RecordRightHandRotation = true;
	public bool RecordRightHandGrabbedObjectRole = true;

	private float CurrentTime = 0;
	private int CurretnFrameCount = 0;
	private bool RecordingActive = false;
	private StreamWriter CurrentStreamWritter;

	void Update()
	{
		if (RecordingActive) CurrentTime += Time.unscaledDeltaTime;

		++CurretnFrameCount;

		if (CurretnFrameCount >= RecordLineInterval)
		{
			if (RecordingActive) RecordDataLine();
			CurretnFrameCount = 0;
		}
	}

	string FormHeaderLine()
	{
		string OutputString = "Time" + Separator;

		if (RecordSessionBlockCount) OutputString += "SessionBlockNumber" + Separator;
		if (RecordBlockTrialCount) OutputString += "BlockTrialNumber" + Separator;

		if (RecordHeadPositions) OutputString += "VRHead_Position_X" + Separator + "VRHead_Position_Y" + Separator + "VRHead_Position_Z" + Separator;
		if (RecordHeadRotations) OutputString += "VRHead_Rotation_X" + Separator + "VRHead_Rotation_Y" + Separator + "VRHead_Rotation_Z" + Separator;
		
		if (RecordLeftHandPosition) OutputString += "VRLeftHand_Position_X" + Separator + "VRLeftHand_Position_Y" + Separator + "VRLeftHand_Position_Z" + Separator;
		if (RecordLeftHandRotation) OutputString += "VRLeftHand_Rotation_X" + Separator + "VRLeftHand_Rotation_Y" + Separator + "VRLeftHand_Rotation_Z" + Separator;
		if (RecordLeftHandGrabbedObjectRole) OutputString += "VRLeftHand_HoldingObjectType" + Separator;

		if (RecordRightHandPosition) OutputString += "VRRightHand_Position_X" + Separator + "VRRightHand_Position_Y" + Separator + "VRRightHand_Position_Z" + Separator;
		if (RecordRightHandRotation) OutputString += "VRRightHand_Rotation_X" + Separator + "VRRightHand_Rotation_Y" + Separator + "VRRightHand_Rotation_Z" + Separator;
		if (RecordRightHandGrabbedObjectRole) OutputString += "VRRightHand_HoldingObjectType" + Separator;

		if (OutputString.Last() == Separator) OutputString.Remove(OutputString.Length - 1);

		return OutputString;
	}

	string FormDataLine()
	{
		string OutputString = CurrentTime.ToString() + Separator;

		if (RecordSessionBlockCount) OutputString += TargetSceneDataBase.CurrentSessionBlockCount.ToString() + Separator;
		if (RecordBlockTrialCount) OutputString += TargetSceneDataBase.CurrentBlockTrialCount.ToString() + Separator;

		if (RecordHeadPositions) OutputString += VRHeadGameObject.transform.position.x.ToString() + Separator + VRHeadGameObject.transform.position.y.ToString() + Separator + VRHeadGameObject.transform.position.z.ToString() + Separator;
		if (RecordHeadRotations) OutputString += VRHeadGameObject.transform.eulerAngles.x.ToString() + Separator + VRHeadGameObject.transform.eulerAngles.y.ToString() + Separator + VRHeadGameObject.transform.eulerAngles.z.ToString() + Separator;

		if (RecordLeftHandPosition) OutputString += VRLeftHandGameObject.transform.position.x.ToString() + Separator + VRLeftHandGameObject.transform.position.y.ToString() + Separator + VRLeftHandGameObject.transform.position.z.ToString() + Separator;
		if (RecordLeftHandRotation) OutputString += VRLeftHandGameObject.transform.eulerAngles.x.ToString() + Separator + VRLeftHandGameObject.transform.eulerAngles.y.ToString() + Separator + VRLeftHandGameObject.transform.eulerAngles.z.ToString() + Separator;
		if (RecordLeftHandGrabbedObjectRole)
		{
			XRBaseInteractable CurrentInteractableObject = VRLeftHandGameObject.GetComponent<XRDirectInteractor>().selectTarget;

			if (CurrentInteractableObject != null)
			{
				ObjectAttributesContainer CurrentAttributesContainer = CurrentInteractableObject.gameObject.GetComponent<ObjectAttributesContainer>();

				if (CurrentAttributesContainer != null) OutputString += CurrentAttributesContainer.ContainedObjectAttributes.RoleTag.ToString() + Separator;
				else OutputString += "Unknown" + Separator;
			}
			else OutputString += "NoObject" + Separator;
		}

		if (RecordRightHandPosition) OutputString += VRRightHandGameObject.transform.position.x.ToString() + Separator + VRRightHandGameObject.transform.position.y.ToString() + Separator + VRRightHandGameObject.transform.position.z.ToString() + Separator;
		if (RecordRightHandRotation) OutputString += VRRightHandGameObject.transform.eulerAngles.x.ToString() + Separator + VRRightHandGameObject.transform.eulerAngles.y.ToString() + Separator + VRRightHandGameObject.transform.eulerAngles.z.ToString() + Separator;
		if (RecordRightHandGrabbedObjectRole)
		{
			XRBaseInteractable CurrentInteractableObject = VRRightHandGameObject.GetComponent<XRDirectInteractor>().selectTarget;

			if (CurrentInteractableObject != null)
			{
				ObjectAttributesContainer CurrentAttributesContainer = CurrentInteractableObject.gameObject.GetComponent<ObjectAttributesContainer>();

				if (CurrentAttributesContainer != null) OutputString += CurrentAttributesContainer.ContainedObjectAttributes.RoleTag.ToString() + Separator;
				else OutputString += "Unknown" + Separator;
			}
			else OutputString += "NoObject" + Separator;
		}

		if (OutputString.Last() == Separator) OutputString.Remove(OutputString.Length - 1);

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
