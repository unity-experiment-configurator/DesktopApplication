using TMPro;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ActiveVRHeadsetDetector : MonoBehaviour
{
	[Header("Text Messages")]
	public TextMeshPro TargetTextComponent;
	public FindReferenceCondition FindTargetTextComponent = FindReferenceCondition.OnlyIfNull;
	public string PositiveMessageText;
	public string NegativeMessageText;
	
	[Header("Game Object Activation Lists")]
	public List<GameObject> PositiveGameObjectList;
	public List<GameObject> NegativeGameObjectList;

	[Header("VR Headset State")]
	public bool ActiveState;
	
	void OnEnable()
	{
		if (FindTargetTextComponent == FindReferenceCondition.OnlyIfNull && TargetTextComponent == null) TargetTextComponent = GetComponent<TextMeshPro>();
		else if (FindTargetTextComponent == FindReferenceCondition.Always) TargetTextComponent = GetComponent<TextMeshPro>();

		Evaluate();
	}

	void Update()
	{
		Evaluate();
	}

	void Evaluate()
	{
		ActiveState = VRFuntions.VRDisplaySubsystemActive();

		if (ActiveState) TargetTextComponent.text = PositiveMessageText;
		else TargetTextComponent.text = NegativeMessageText;

		foreach (GameObject CurrentPositiveGameObject in PositiveGameObjectList) CurrentPositiveGameObject.SetActive(ActiveState);
		foreach (GameObject CurrentNegativeGameObject in NegativeGameObjectList) CurrentNegativeGameObject.SetActive(!ActiveState);
	}
}