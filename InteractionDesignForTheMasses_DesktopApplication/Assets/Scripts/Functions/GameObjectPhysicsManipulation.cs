// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Design For The Masses Project.
//
// Copyright (C) "Mnemoscene LTD".
// All Rights Reserved.
//
// File:
// 		GameObjectPhysicsManipulation.cs
//
// Date:
// 		31/05/2021
//
// Description:
//		Function that contains methods to manipulate game object's physics.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameObjectPhysicsManipulation
{
	// Method to multiply any momentum in the input object.
	public static void MultiplyMomentum(Vector3 MomentumMultiplier, GameObject InputGameObject)
	{
		InputGameObject.GetComponent<Rigidbody>().velocity = new Vector3
		(
			InputGameObject.GetComponent<Rigidbody>().velocity.x * MomentumMultiplier.x,
			InputGameObject.GetComponent<Rigidbody>().velocity.y * MomentumMultiplier.y,
			InputGameObject.GetComponent<Rigidbody>().velocity.z * MomentumMultiplier.z
		);
	}

	// Method to multiply any momentum in all input objects.
	public static void MultiplyMomentum(Vector3 MomentumMultiplier, List<GameObject> InputGameObjectList)
	{
		foreach (GameObject CurrentGameObject in InputGameObjectList) { MultiplyMomentum(MomentumMultiplier, CurrentGameObject); }
	}

	// Method to kill any momentum in the input object.
	public static void KillMomentum(GameObject InputGameObject)
	{
		MultiplyMomentum(new Vector3(), InputGameObject);
	}

	// Method to kill any momentum in all input objects.
	public static void KillMomentum(List<GameObject> InputGameObjectList)
	{
		foreach (GameObject CurrentGameObject in InputGameObjectList) { KillMomentum(CurrentGameObject); }
	}

	// Method to counter any momentum in the input object.
	public static void CounterMomentum(GameObject InputGameObject)
	{
		MultiplyMomentum(new Vector3(-1f, -1f, -1f), InputGameObject); ;
	}

	// Method to counter any momentum in all input objects.
	public static void CounterMomentum(List<GameObject> InputGameObjectList)
	{
		foreach (GameObject CurrentGameObject in InputGameObjectList) { CounterMomentum(CurrentGameObject); }
	}

	// Method to multiply any momentum in the input object only on specific axis directions.
	public static void MultiplyMomentumPerAxis(Vector3 MomentumMultiplier, GameObject InputGameObject, bool PositiveX, bool PositiveY, bool PositiveZ, bool NegativeX, bool NegativeY, bool NegativeZ)
	{
		Vector3 CurrentObjectVelocity = InputGameObject.GetComponent<Rigidbody>().velocity;
		Vector3 ComposedMomentumMultiplier = new Vector3(1f, 1f, 1f);

		if (CurrentObjectVelocity.x > 0 && PositiveX) { ComposedMomentumMultiplier.x = MomentumMultiplier.x; }
		if (CurrentObjectVelocity.y > 0 && PositiveY) { ComposedMomentumMultiplier.y = MomentumMultiplier.y; }
		if (CurrentObjectVelocity.z > 0 && PositiveZ) { ComposedMomentumMultiplier.z = MomentumMultiplier.z; }

		if (CurrentObjectVelocity.x < 0 && NegativeX) { ComposedMomentumMultiplier.x = MomentumMultiplier.x; }
		if (CurrentObjectVelocity.y < 0 && NegativeY) { ComposedMomentumMultiplier.y = MomentumMultiplier.y; }
		if (CurrentObjectVelocity.z < 0 && NegativeZ) { ComposedMomentumMultiplier.z = MomentumMultiplier.z; }

		MultiplyMomentum(ComposedMomentumMultiplier, InputGameObject);
	}

	// Method to multiply any momentum in all input objects only on specific axis directions.
	public static void MultiplyMomentumPerAxis(Vector3 MomentumMultiplier, List<GameObject> InputGameObjectList, bool PositiveX, bool PositiveY, bool PositiveZ, bool NegativeX, bool NegativeY, bool NegativeZ)
	{
		foreach (GameObject CurrentGameObject in InputGameObjectList) { MultiplyMomentumPerAxis(MomentumMultiplier, CurrentGameObject, PositiveX, PositiveY, PositiveZ, NegativeX, NegativeY, NegativeZ); }
	}
}