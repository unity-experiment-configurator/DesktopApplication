using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProgressVisualElementManager : MonoBehaviour
{
	[Header("Progress Value Setup")]
	[Range(0f, 100f)]
	public float ProgressValue = 100;
	public bool HideOnZeroPercent = true;

	[Header("Required Components")]
	public SkinnedMeshRenderer TargetSkinnedMeshRenderer;
	public FindReferenceCondition FindTargetSkinnedMeshRenderer = FindReferenceCondition.OnlyIfNull;

	private void Start()
	{
		if (FindTargetSkinnedMeshRenderer == FindReferenceCondition.OnlyIfNull && TargetSkinnedMeshRenderer == null) TargetSkinnedMeshRenderer = GetComponent<SkinnedMeshRenderer>();
		else if (FindTargetSkinnedMeshRenderer == FindReferenceCondition.OnlyIfNull) TargetSkinnedMeshRenderer = GetComponent<SkinnedMeshRenderer>();
	}

	private void OnDrawGizmos()
	{
		Start();
		SetProgressToValue();
	}

	private void Update()
	{
		SetProgressToValue();
	}

	public void SetProgressToValue()
	{
		TargetSkinnedMeshRenderer.SetBlendShapeWeight(0, ProgressValue);

		if (ProgressValue <= 0) TargetSkinnedMeshRenderer.enabled = false;
		else TargetSkinnedMeshRenderer.enabled = true;
	}
}
