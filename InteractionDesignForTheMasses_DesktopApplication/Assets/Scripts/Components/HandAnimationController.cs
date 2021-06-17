using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Animator))]
public class HandAnimationController : MonoBehaviour
{
	[Header("Component Associations")]
	public Animator TargetAnimator;
	public FindReferenceCondition FindTargetAnimator = FindReferenceCondition.OnlyIfNull;
	public string AnimationBlendName;
	public HandControllersMonitor SourceHandControllerMonitor;
	public LeftRight HandControllerSide;

	void Start()
	{
		if (FindTargetAnimator == FindReferenceCondition.OnlyIfNull && TargetAnimator == null) { TargetAnimator = GetComponent<Animator>(); }
		else if (FindTargetAnimator == FindReferenceCondition.Always) { TargetAnimator = GetComponent<Animator>(); }
	}

	// Update is called once per frame
	void Update()
	{
		if (HandControllerSide == LeftRight.Left)
		{
			TargetAnimator.SetFloat(AnimationBlendName, SourceHandControllerMonitor.LeftGripValue);
		}
		else if (HandControllerSide == LeftRight.Right)
		{
			TargetAnimator.SetFloat(AnimationBlendName, SourceHandControllerMonitor.RightGripValue);
		}
	}
}
