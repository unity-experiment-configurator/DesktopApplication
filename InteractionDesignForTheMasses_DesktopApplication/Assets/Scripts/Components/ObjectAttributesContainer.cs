// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Design For The Masses Project.
//
// Copyright (C) "Mnemoscene LTD".
// All Rights Reserved.
//
// File:
// 		ObjectAttributesContainer.cs
//
// Date:
// 		18/05/2021
//
// Description: 
//		Component that serves as an attribute container to be attached to all
//		objects a scene contains.
//
// -----------------------------------------------------------------------------

using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class ObjectAttributesContainer : MonoBehaviour
{
	[Header("Object Attributes")]
	public ObjectAttributes ContainedObjectAttributes;  // The current object's attributes.

	[Header("Object Setup Options")]
	public bool RunSetupOnEnable;				// Condition for if the setup process should run on enable.
	public bool RunSetupOnStart;				// Condition for if the setup process should run on start.
	public bool RunSetupOnUpdate;				// Condition for if the setup process should run on update.
	public NiceNameOrigin NiceNameOriginOption;	// Option that will determine where the nice name will originate from.
	public bool ResetGameObjectTransformations;	// Condition for if the current game object should be reset back to origin transformations.
	public bool ClearAllChildren;				// Condition for if all chidren should be destroyed before proceeding with the creation of new ones.

	void OnCollisionEnter(Collision CurrentCollisionData)
	{
		EvaluateTrigger(CurrentCollisionData.collider.gameObject);
	}

	void OnTriggerEnter(Collider CurrentTriggerData)
	{
		EvaluateTrigger(CurrentTriggerData.gameObject);
	}

	void OnEnable()
	{
		if (RunSetupOnEnable) { RunSetup(); }
	}

	void Start()
	{
		if (RunSetupOnStart) { RunSetup(); }
	}

	void Update()
	{
		if (RunSetupOnUpdate) { RunSetup(); }
	}

	void EvaluateTrigger(GameObject OtherObject)
	{
		if (ContainedObjectAttributes.TriggerEnabled)
		{
			if (ContainedObjectAttributes.TriggerByAll)
			{
				ContainedObjectAttributes.ExecuteActiveTriggerActions();
			}
			else if (OtherObject.GetComponent<ObjectAttributesContainer>() != null)
			{
				foreach (uint CurrentTargetTrigger in ContainedObjectAttributes.TargetTriggerIDNumberList)
				{
					if (CurrentTargetTrigger == ContainedObjectAttributes.IDNumber)
					{
						ContainedObjectAttributes.ExecuteActiveTriggerActions();
						break;
					}
				}
			}
		}
	}

	// Method to execute all game object setup functions.
	public void RunSetup()
	{
		if (NiceNameOriginOption == NiceNameOrigin.Attribute) { SetGameObjectName(); }
		else { GetNiceName(); }

		if (ResetGameObjectTransformations) { ResetTransformations(); }
		if (ClearAllChildren) { DestroyAllChildren(); }
	}

	// Method to set the name of the current game object same as the "nice" name.
	public void SetGameObjectName()
	{
		gameObject.name = ContainedObjectAttributes.Name;
	}

	// Method to get the name of the current game object and use it as the "nice" name.
	public void GetNiceName()
	{
		ContainedObjectAttributes.Name = gameObject.name;
	}

	// Method to reset the current game object's position to 0 0 0.
	public void ResetTransformations()
	{
		gameObject.GetComponent<Transform>().position = new Vector3();
		gameObject.GetComponent<Transform>().eulerAngles = new Vector3();
		gameObject.GetComponent<Transform>().localScale = new Vector3(1f, 1f, 1f);
	}

	// Method to destroy all children that the game object may have.
	public void DestroyAllChildren()
	{
		List<Transform> CurrentChildrenTransformList = gameObject.GetComponentsInChildren<Transform>().ToList();

		foreach (Transform CurrentChildTransform in CurrentChildrenTransformList)
		{
			Destroy(CurrentChildTransform.gameObject);
		}
	}
}
