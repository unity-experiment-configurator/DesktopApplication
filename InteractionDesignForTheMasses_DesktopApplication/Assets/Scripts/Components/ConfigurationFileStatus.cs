using TMPro;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(TextMeshPro))]
public class ConfigurationFileStatus : MonoBehaviour
{
	[Header("Result Messages")]
	public string PositiveResultMessage = "Configuration File Found.";
	public string NegativeResultMessage = "Configuration File Absent.";
	public TextMeshPro TextComponent;
	public FindReferenceCondition FindTextComponent = FindReferenceCondition.OnlyIfNull;

	[Header("Result Visuals")]
	public List<GameObject> PositiveResultVisualList;
	public List<GameObject> NegativeResultVisualList;

	[Header("Result Outcome")]
	public bool Result;

	[Header("Enable On Positive Outcome")]
	public List<GameObject> TargetList;

	// Start is called before the first frame update
	void OnEnable()
	{
		if (FindTextComponent == FindReferenceCondition.OnlyIfNull && TextComponent == null) { TextComponent = GetComponent<TextMeshPro>(); }
		else if (FindTextComponent == FindReferenceCondition.Always) { TextComponent = GetComponent<TextMeshPro>(); }

		Result = FileManagement.ConfirmAnyConfigurationFile();

		Evaluate();
	}
	
	public void Evaluate()
	{
		GetComponent<TextMeshPro>().text = PositiveResultMessage;

		foreach (GameObject CurrentPositiveResultVisual in PositiveResultVisualList) CurrentPositiveResultVisual.SetActive(Result);
		foreach (GameObject CurrentNegativeResultVisual in NegativeResultVisualList) CurrentNegativeResultVisual.SetActive(!Result);
	}

	public void SetActiveListed()
	{
		foreach (GameObject CurrentGameObject in TargetList)
		{
			CurrentGameObject.SetActive(Result);
		}
	}

	public void Hide()
	{
		GetComponent<TextMeshPro>().text = "";

		foreach (GameObject CurrentPositiveResultVisual in PositiveResultVisualList) CurrentPositiveResultVisual.SetActive(false);
		foreach (GameObject CurrentNegativeResultVisual in NegativeResultVisualList) CurrentNegativeResultVisual.SetActive(false);
	}
}
