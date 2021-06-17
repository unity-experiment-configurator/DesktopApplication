using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class MakeUnGrabbableOnGrab : MonoBehaviour
{
	[Header("Required Components")]
	public XRGrabInteractable TargetXRGrabInteractable;
	public FindReferenceCondition FindTargetXRGrabInteractable = FindReferenceCondition.OnlyIfNull;
	public ObjectGrabMonitor TargetObjectGrabMonitor;
	public FindReferenceCondition FindObjectGrabMonitor = FindReferenceCondition.OnlyIfNull;
	public bool ActivateOnlyOnce = true;

	private bool ActivatedOnce = false;

	void Start()
	{
		if (FindTargetXRGrabInteractable == FindReferenceCondition.OnlyIfNull && TargetXRGrabInteractable == null) { TargetXRGrabInteractable = GetComponent<XRGrabInteractable>(); }
		else if (FindTargetXRGrabInteractable == FindReferenceCondition.Always) { TargetXRGrabInteractable = GetComponent<XRGrabInteractable>(); }

		if (FindObjectGrabMonitor == FindReferenceCondition.OnlyIfNull && TargetObjectGrabMonitor == null) { TargetObjectGrabMonitor = GetComponent<ObjectGrabMonitor>(); }
		else if (FindObjectGrabMonitor == FindReferenceCondition.Always) { TargetObjectGrabMonitor = GetComponent<ObjectGrabMonitor>(); }
	}

	void Update()
	{
		if (TargetObjectGrabMonitor.ObjectIsHeld && !ActivatedOnce)
		{
			Destroy(TargetXRGrabInteractable);
			ActivatedOnce = true;
		}
	}
}
