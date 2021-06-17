// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Design For The Masses Project.
//
// Copyright (C) "Mnemoscene LTD".
// All Rights Reserved.
//
// File:
// 		ObjectAttributes.cs
//
// Date:
// 		18/05/2021
//
// Description: 
//		Component that serves as an attribute container to be attached to all
//		objects a scene contains.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

[Serializable]
public class ObjectAttributes
{
	[Header("Object ID")]
	public string Name;		// The object's "nice" name.
	public uint IDNumber;	// The object's ID number. This should be preferably unique.

	[Header("Object Role")]
	public ObjectRoleTag RoleTag;	// The object's role tag to be applied.

	[Header("Object Trigger Behaviour")]
	public bool TriggerEnabled;					// Condition for if the object should behave as a trigger.
	public bool TriggerByAll;					// Condition for if the trigger should be activated by any object.
	public List<int> TargetTriggerIDNumberList;	// List of valid ID numbers that will activate the trigger once within the object's collider.
	public UnityEvent TriggerActiveEvent;		// The event that will be executed once the trigger gets activated.
	public UnityEvent TriggerInactiveEvent;		// The event that will be executed once the trigger gets deactivated.

	public bool TriggerActive { get; private set; }

	// Constructor with all default values.
	public ObjectAttributes()
	{
		Name = "";
		IDNumber = 0;
		RoleTag = ObjectRoleTag.None;
		TriggerEnabled = false;
		TargetTriggerIDNumberList = new List<int>();
		TriggerActiveEvent = null;
		TriggerInactiveEvent = null;
		TriggerActive = false;
	}

	// Method to execute all actions for when the object trigger is active.
	public void ExecuteActiveTriggerActions()
	{
		TriggerActive = true;
		if (TriggerActiveEvent != null) { TriggerActiveEvent.Invoke(); }
	}

	// Method to execute all actions for when the object trigger is inactive.
	public void ExecuteInactiveTriggerActions()
	{
		TriggerActive = false;
		if (TriggerActiveEvent != null) { TriggerInactiveEvent.Invoke(); }
	}
}
