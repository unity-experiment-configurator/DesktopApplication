using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class ObjectGrabMonitor : MonoBehaviour
{
	[Header("Interactable Object")]
	public XRGrabInteractable TargetXRGrabInteractable;
	public FindReferenceCondition FindTargetTargetXRGrabInteractable = FindReferenceCondition.OnlyIfNull;

	[Header("Activate On Grab")]
	public List<GameObject> ActivateGameObjectList;
	public bool ActivateForever;

	[Header("Current Grab State")]
	public bool ObjectIsHeld;

	void OnEnable()
	{
		if (FindTargetTargetXRGrabInteractable == FindReferenceCondition.OnlyIfNull && TargetXRGrabInteractable == null) { TargetXRGrabInteractable = GetComponent<XRGrabInteractable>(); }
		else if (FindTargetTargetXRGrabInteractable == FindReferenceCondition.Always) { TargetXRGrabInteractable = GetComponent<XRGrabInteractable>(); }
	}

	void Update()
	{
		if (TargetXRGrabInteractable != null)
		{
			if (TargetXRGrabInteractable.isSelected)
			{
				ObjectIsHeld = true;
				SetActiveList(true);
			}
			else if (!ActivateForever)
			{
				ObjectIsHeld = false;
				SetActiveList(false);
			}
		}
		else
		{
			if (FindTargetTargetXRGrabInteractable == FindReferenceCondition.OnlyIfNull && TargetXRGrabInteractable == null) { TargetXRGrabInteractable = GetComponent<XRGrabInteractable>(); }
			else if (FindTargetTargetXRGrabInteractable == FindReferenceCondition.Always) { TargetXRGrabInteractable = GetComponent<XRGrabInteractable>(); }
		}
	}

	void SetActiveList(bool SetActive)
	{
		//foreach (GameObject CurrentGameObject in ActivateGameObjectList) { CurrentGameObject.SetActive(SetActive); }
	}
}
