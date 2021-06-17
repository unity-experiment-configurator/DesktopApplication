using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class ResolvableObject<InputObjectType> : MonoBehaviour where InputObjectType : Component
{
	[Header("Main Input Object")]
	public InputObjectType inputObjectType;

	[Header("Self Resolve Behaviour")]
	public FindReferenceCondition findReferenceCondition;
	public MissingReferenceAction missingReferenceAction;

	public ResolvableObject()
	{
		inputObjectType = null;
		findReferenceCondition = FindReferenceCondition.OnlyIfNull;
		missingReferenceAction = MissingReferenceAction.FindComponent;
	}

	public void Check()
	{
		if (findReferenceCondition == FindReferenceCondition.OnlyIfNull && inputObjectType == null) Resolve();
		else if (findReferenceCondition == FindReferenceCondition.Always) Resolve();
	}

	public void Resolve()
	{
		if (missingReferenceAction == MissingReferenceAction.FindComponent) FindComponent();
		else if (missingReferenceAction == MissingReferenceAction.CreateComponent) CreateComponent();
		else if (missingReferenceAction == MissingReferenceAction.FindOrCreateComponent) FindOrCreateComponent();
		else if (missingReferenceAction == MissingReferenceAction.FindComponentOrCreateObject) FindComponentOrCreateObject();
		else if (missingReferenceAction == MissingReferenceAction.FindObject) FindObject();
		else if (missingReferenceAction == MissingReferenceAction.CreateObject) CreateObject();
		else if (missingReferenceAction == MissingReferenceAction.FindOrCreateObject) FindOrCreateObject();
		else if (missingReferenceAction == MissingReferenceAction.FindObjectOrCreateComponent) FindObjectOrCreateComponent();
	}

	private void FindComponent()
	{
		inputObjectType = GetComponent<InputObjectType>();
	}

	private void CreateComponent()
	{
		inputObjectType = gameObject.AddComponent<InputObjectType>();
	}

	private void FindOrCreateComponent()
	{
		InputObjectType currentInputObjectType = GetComponent<InputObjectType>();

		if (currentInputObjectType == null) CreateComponent();
		else inputObjectType = currentInputObjectType;
	}

	private void FindComponentOrCreateObject()
	{
		InputObjectType currentInputObjectType = GetComponent<InputObjectType>();
		if (currentInputObjectType == null) CreateObject();
		else inputObjectType = currentInputObjectType;
	}

	private void FindObject()
	{
		inputObjectType = (InputObjectType)FindObjectOfType(typeof(InputObjectType));
	}

	private void CreateObject()
	{
		GameObject currentNewGameObject = new GameObject();
		currentNewGameObject.name = "gob_" + typeof(InputObjectType).Name + "_Host_GameObject1";
		inputObjectType = currentNewGameObject.AddComponent<InputObjectType>();
	}

	private void FindOrCreateObject()
	{
		InputObjectType currentInputObjectType = (InputObjectType)FindObjectOfType(typeof(InputObjectType));

		if (currentInputObjectType == null) FindOrCreateObject();
		else inputObjectType = currentInputObjectType;
	}

	private void FindObjectOrCreateComponent()
	{
		InputObjectType currentInputObjectType = (InputObjectType)FindObjectOfType(typeof(InputObjectType));

		if (currentInputObjectType == null) CreateComponent();
		else inputObjectType = currentInputObjectType;
	}
}