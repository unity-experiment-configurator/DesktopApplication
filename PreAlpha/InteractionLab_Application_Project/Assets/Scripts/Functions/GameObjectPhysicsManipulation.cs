// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		GameObjectPhysicsManipulation.cs
//
// Date:
// 		25/08/2021
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
	public static void MultiplyMomentum(Vector3 momentumMultiplier, GameObject inputGameObject)
	{
		inputGameObject.GetComponent<Rigidbody>().velocity = new Vector3
		(
			inputGameObject.GetComponent<Rigidbody>().velocity.x * momentumMultiplier.x,
			inputGameObject.GetComponent<Rigidbody>().velocity.y * momentumMultiplier.y,
			inputGameObject.GetComponent<Rigidbody>().velocity.z * momentumMultiplier.z
		);
	}

	// Method to multiply any momentum in all input objects.
	public static void MultiplyMomentum(Vector3 momentumMultiplier, List<GameObject> inputGameObjectList)
	{
		foreach (GameObject currentGameObject in inputGameObjectList) MultiplyMomentum(momentumMultiplier, currentGameObject);
	}

	// Method to kill any momentum in the input object.
	public static void KillMomentum(GameObject inputGameObject)
	{
		MultiplyMomentum(new Vector3(), inputGameObject);
	}

	// Method to kill any momentum in all input objects.
	public static void KillMomentum(List<GameObject> inputGameObjectList)
	{
		foreach (GameObject currentGameObject in inputGameObjectList) KillMomentum(currentGameObject);
	}

	// Method to counter any momentum in the input object.
	public static void CounterMomentum(GameObject inputGameObject)
	{
		MultiplyMomentum(new Vector3(-1f, -1f, -1f), inputGameObject); ;
	}

	// Method to counter any momentum in all input objects.
	public static void CounterMomentum(List<GameObject> inputGameObjectList)
	{
		foreach (GameObject currentGameObject in inputGameObjectList) CounterMomentum(currentGameObject);
	}

	// Method to multiply any momentum in the input object only on specific axis directions.
	public static void MultiplyMomentumPerAxis(Vector3 momentumMultiplier, GameObject inputGameObject, bool positiveX, bool positiveY, bool positiveZ, bool negativeX, bool negativeY, bool negativeZ)
	{
		Vector3 currentObjectVelocity = inputGameObject.GetComponent<Rigidbody>().velocity;
		Vector3 composedMomentumMultiplier = new Vector3(1f, 1f, 1f);

		if (currentObjectVelocity.x > 0 && positiveX) composedMomentumMultiplier.x = momentumMultiplier.x;
		if (currentObjectVelocity.y > 0 && positiveY) composedMomentumMultiplier.y = momentumMultiplier.y;
		if (currentObjectVelocity.z > 0 && positiveZ) composedMomentumMultiplier.z = momentumMultiplier.z;

		if (currentObjectVelocity.x < 0 && negativeX) composedMomentumMultiplier.x = momentumMultiplier.x;
		if (currentObjectVelocity.y < 0 && negativeY) composedMomentumMultiplier.y = momentumMultiplier.y;
		if (currentObjectVelocity.z < 0 && negativeZ) composedMomentumMultiplier.z = momentumMultiplier.z;

		MultiplyMomentum(composedMomentumMultiplier, inputGameObject);
	}

	// Method to multiply any momentum in all input objects only on specific axis directions.
	public static void MultiplyMomentumPerAxis(Vector3 momentumMultiplier, List<GameObject> inputGameObjectList, bool positiveX, bool positiveY, bool positiveZ, bool negativeX, bool negativeY, bool negativeZ)
	{
		foreach (GameObject currentGameObject in inputGameObjectList) MultiplyMomentumPerAxis(momentumMultiplier, currentGameObject, positiveX, positiveY, positiveZ, negativeX, negativeY, negativeZ);
	}
}