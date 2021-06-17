using TMPro;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SessionStatusDisplay : MonoBehaviour
{
	[Header("Required Components")]
	public TextMeshPro TargetTextComponent;
	public FindReferenceCondition FindTargetTextComponent = FindReferenceCondition.OnlyIfNull;
	public SceneDataBase TargetSceneDataBase;
	public FindReferenceCondition FindTargetSceneDataBase = FindReferenceCondition.OnlyIfNull;

	// Start is called before the first frame update
	void OnEnable()
	{
		if (FindTargetTextComponent == FindReferenceCondition.OnlyIfNull && TargetTextComponent == null) TargetTextComponent = GetComponent<TextMeshPro>();
		else if (FindTargetTextComponent == FindReferenceCondition.Always) TargetTextComponent = GetComponent<TextMeshPro>();

		if (FindTargetSceneDataBase == FindReferenceCondition.OnlyIfNull && TargetSceneDataBase == null) TargetSceneDataBase = FindObjectOfType<SceneDataBase>();
		else if (FindTargetSceneDataBase == FindReferenceCondition.Always) TargetSceneDataBase = FindObjectOfType<SceneDataBase>();
	}

	// Update is called once per frame
	void Update()
	{
		TargetTextComponent.text = "Block - " + (TargetSceneDataBase.LoadedSceneConstructionData.sessionBlockCount - TargetSceneDataBase.CurrentSessionBlockCount + 1).ToString() + "/" + TargetSceneDataBase.LoadedSceneConstructionData.sessionBlockCount.ToString() + "\n" + "Trial - " + (TargetSceneDataBase.LoadedSceneConstructionData.blockTrialCount - TargetSceneDataBase.CurrentBlockTrialCount + 1).ToString() + "/" + TargetSceneDataBase.LoadedSceneConstructionData.blockTrialCount.ToString();
	}
}