using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FadeInOnEnable : MonoBehaviour
{
	[Header("Fade Element Options")]
	public FadeElementOperation TargetFadeElementOperation;
	public FindReferenceCondition FindTargetFadeElementOperation = FindReferenceCondition.OnlyIfNull;
	public bool DisableAfterFunction = true;
	
	void OnEnable()
	{
		if (FindTargetFadeElementOperation == FindReferenceCondition.OnlyIfNull && TargetFadeElementOperation == null) { TargetFadeElementOperation = FindObjectOfType<FadeElementOperation>(); }
		else if (FindTargetFadeElementOperation == FindReferenceCondition.Always) { TargetFadeElementOperation = FindObjectOfType<FadeElementOperation>(); }

		TargetFadeElementOperation.CurrentFadeState = FadeState.FadeIn;

		if (DisableAfterFunction) { enabled = false; }
	}
}
