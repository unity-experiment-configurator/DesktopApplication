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
	public int IDNumber;	// The object's ID number. This should be preferably unique.

	[Header("Object Role")]
	public ObjectRoleTag RoleTag;	// The object's role tag to be applied.

	[Header("Object Appearance")]
	public bool Visible;				// Condition for if the object's mesh should be visible.
	public ObjectShapeTag ShapeTag;		// The object's shape tag to be applied.
	public ObjectColourTag ColourTag;	// The object's colour tag to be applied.

	[Header("Object Trigger Behaviour")]
	public bool TriggerEnabled;					// Condition for if the object should behave as a trigger.
	public List<int> TargetTriggerIDNumberList;	// List of valid ID numbers that will activate the trigger once within the object's collider.
	public UnityEvent TriggerActivationEvent;	// The event that will be executed once the trigger gets activated.

	[Header("Object Physics Attributes")]
	public float Mass;				// Mass of the object to be used if a rigidbody compnent is added.
	public float MaxVelocity;		// Max velocity the object can achieve.
	public bool CollisionEnabled;	// Condition for if the object should have its collision component enabled. If the TriggerEnable condition is enabled
	public bool PhysicsEnabled;		// Condition for if the object should have an active rigidbody component.
	public bool KinematicEnabled;	// Condition for if the object should be a kinematic rigidbody. This will work only if there is an active rigidbody component.
	public bool GravityEnabled;		// Condition for if the object should be affected by gravity. This will work only if there is an active rigidbody component.
	public bool GrabingEnabled;		// Condition for if the object should be able to be manipulated by the user at runtime by grabbing the object.

	[Header("Object Setup Options")]
	public bool ResetParentOrigin;	// Condition for if the parent object should be reset back to origin transformations.
	public bool ClearAllChildren;	// Condition for if all chidren should be destroyed before proceeding with the creation of new ones.
}
