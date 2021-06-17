using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SwapMaterialOnGrab : MonoBehaviour
{
	[Header("Required Components")]
	public Renderer TargetRenderer;
	public FindReferenceCondition FindTargetRenderer = FindReferenceCondition.OnlyIfNull;
	public ObjectGrabMonitor TargetObjectGrabMonitor;
	public FindReferenceCondition FindObjectGrabMonitor = FindReferenceCondition.OnlyIfNull;
	public bool SwapOnlyOnce = true;

	[Header("Material Options")]
	public Material OnActivationMaterial;

	private bool SwappedOnce = false;

	void Start()
	{
		if (FindTargetRenderer == FindReferenceCondition.OnlyIfNull && TargetRenderer == null) { TargetRenderer = GetComponent<Renderer>(); }
		else if (FindTargetRenderer == FindReferenceCondition.Always) { TargetRenderer = GetComponent<Renderer>(); }

		if (FindObjectGrabMonitor == FindReferenceCondition.OnlyIfNull && TargetObjectGrabMonitor == null) { TargetObjectGrabMonitor = GetComponent<ObjectGrabMonitor>(); }
		else if (FindObjectGrabMonitor == FindReferenceCondition.Always) { TargetObjectGrabMonitor = GetComponent<ObjectGrabMonitor>(); }
	}

	void Update()
	{
		if (TargetObjectGrabMonitor.ObjectIsHeld && !SwappedOnce)
		{
			TargetRenderer.material = OnActivationMaterial;
			SwappedOnce = true;
		}
	}
}
