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
using UnityEngine;

public class ObjectAttributesContainer : MonoBehaviour
{
	public ObjectAttributes Attributes;	// Object's attributes.
	
	// Method that runs all the parent object setup process.
	public void SetupParent()
	{
		if (Attributes.ResetParentOrigin)
		{
			transform.position = new Vector3();
			transform.rotation = new Quaternion();
			transform.localScale = new Vector3(1f, 1f, 1f);
		}
	}

	// Method that runs all the child object setup process.
	public void SetupChild()
	{
		if (Attributes.ClearAllChildren)
		{
			foreach (Transform CurrentTransform in gameObject.GetComponentsInChildren<Transform>())
			{
				if (CurrentTransform.gameObject != this)
				{
					Destroy(CurrentTransform.gameObject);
				}
			}
		}
	}

	// Method that runs all the physics setup tasks.
	public void SetupPhysics()
	{
		if (gameObject.GetComponent<Rigidbody>() != null)
		{
			if (Attributes.PhysicsEnabled)
			{
				gameObject.GetComponent<Rigidbody>().isKinematic = Attributes.KinematicEnabled;
				gameObject.GetComponent<Rigidbody>().useGravity = Attributes.GravityEnabled;
			}
			else
			{
				Destroy(gameObject.GetComponent<Rigidbody>());
			}
		}
		else
		{
			if (Attributes.PhysicsEnabled)
			{
				gameObject.AddComponent<Rigidbody>();
				gameObject.GetComponent<Rigidbody>().isKinematic = Attributes.KinematicEnabled;
				gameObject.GetComponent<Rigidbody>().useGravity = Attributes.GravityEnabled;
			}
		}

		if (gameObject.GetComponent<Collider>() != null)
		{
			gameObject.GetComponent<Collider>().enabled = Attributes.CollisionEnabled || Attributes.TriggerEnabled;
		}
		else
		{
			gameObject.AddComponent<MeshCollider>();
			gameObject.GetComponent<Collider>().enabled = Attributes.CollisionEnabled || Attributes.TriggerEnabled;
		}
	}

	// Method that runs all setup processes.
	public void Setup()
	{
		// Setup parent object attributes
		SetupParent();

		// Setup child object attributes
		SetupChild();

		// Setup object physics.
		SetupPhysics();

		ObjectAttributes CurrentComponent = GetComponent<ObjectAttributes>();
	}
}
