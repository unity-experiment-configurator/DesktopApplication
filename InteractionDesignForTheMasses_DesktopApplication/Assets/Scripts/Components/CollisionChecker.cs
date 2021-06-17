// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Design For The Masses Project.
//
// Copyright (C) "Mnemoscene LTD".
// All Rights Reserved.
//
// File:
// 		CollisionChecker.cs
//
// Date:
// 		30/05/2021
//
// Description:
//		Component that checks for any collisions and when a collision occurs it
//		will then follow the specified solution instruction.
//
// -----------------------------------------------------------------------------

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(MeshCollider))]
[RequireComponent(typeof(Rigidbody))]
public class CollisionChecker : MonoBehaviour
{
	[Header("Collision Checker Options")]
	public bool RandomiseIDNumber = false;
	public uint CheckerIDNumber = 0;
	public bool ExecuteSolutionOnCollision = true;
	public bool HoldInitialTransformations = true;
	public bool KillMomentumOnNoCollision = true;

	[Header("Collision Event Solution")]
	public ObjectDiactivationSolutions SelfObjectCollisionSolution = ObjectDiactivationSolutions.NoAction;
	public ComparisonResult SelfObjectCollisionSolutionIDCondition = ComparisonResult.Lesser;
	public bool SelfObjectCollisionSolutionNoOtherIDExecute = false;

	public ObjectDiactivationSolutions OtherObjectCollisionSolution = ObjectDiactivationSolutions.NoAction;
	public ComparisonResult OtherObjectCollisionSolutionIDCondition = ComparisonResult.Greater;
	public bool OtherObjectCollisionSolutionNoOtherIDExecute = false;
	public ObjectDiactivationSolutions CollisionEvaluationEndSolution = ObjectDiactivationSolutions.DestroyObject;

	[Header("Collision Iterations Count")]
	public int CollisionCheckerFrameCount = 0;
	public int CurrentFrameCount = 0;

	public bool CollisionActive { get; private set; } = false;
	public Transformations InitialTransformations { get; private set; } = new Transformations();
	bool InitialTransformationsStored = false;

	void OnCollisionEnter(Collision CurrentCollisionData)
	{
		CollisionActive = true;

		if (ExecuteSolutionOnCollision)
		{
			if (SelfObjectCollisionSolution == ObjectDiactivationSolutions.DestroyObject)
			{
				if (CurrentCollisionData.collider.gameObject.GetComponent<CollisionChecker>() != null)
				{
					if (SelfObjectCollisionSolutionIDCondition == ComparisonResult.Greater && CheckerIDNumber > CurrentCollisionData.collider.gameObject.GetComponent<CollisionChecker>().CheckerIDNumber) { Destroy(gameObject); }
					else if (SelfObjectCollisionSolutionIDCondition == ComparisonResult.GreaterEqual && CheckerIDNumber >= CurrentCollisionData.collider.gameObject.GetComponent<CollisionChecker>().CheckerIDNumber) { Destroy(gameObject); }
					else if (SelfObjectCollisionSolutionIDCondition == ComparisonResult.Lesser && CheckerIDNumber < CurrentCollisionData.collider.gameObject.GetComponent<CollisionChecker>().CheckerIDNumber) { Destroy(gameObject); }
					else if (SelfObjectCollisionSolutionIDCondition == ComparisonResult.LesserEqual && CheckerIDNumber <= CurrentCollisionData.collider.gameObject.GetComponent<CollisionChecker>().CheckerIDNumber) { Destroy(gameObject); }
					else if (SelfObjectCollisionSolutionIDCondition == ComparisonResult.Equal && CheckerIDNumber == CurrentCollisionData.collider.gameObject.GetComponent<CollisionChecker>().CheckerIDNumber) { Destroy(gameObject); }
					else if (SelfObjectCollisionSolutionIDCondition == ComparisonResult.Unequal && CheckerIDNumber != CurrentCollisionData.collider.gameObject.GetComponent<CollisionChecker>().CheckerIDNumber) { Destroy(gameObject); }
				}
				else
				{
					if (SelfObjectCollisionSolutionNoOtherIDExecute) { Destroy(gameObject); }
				}
			}
			else if (SelfObjectCollisionSolution == ObjectDiactivationSolutions.DisableObject)
			{
				if (CurrentCollisionData.collider.gameObject.GetComponent<CollisionChecker>() != null)
				{
					if (SelfObjectCollisionSolutionIDCondition == ComparisonResult.Greater && CheckerIDNumber > CurrentCollisionData.collider.gameObject.GetComponent<CollisionChecker>().CheckerIDNumber) { gameObject.SetActive(false); }
					else if (SelfObjectCollisionSolutionIDCondition == ComparisonResult.GreaterEqual && CheckerIDNumber >= CurrentCollisionData.collider.gameObject.GetComponent<CollisionChecker>().CheckerIDNumber) { gameObject.SetActive(false); }
					else if (SelfObjectCollisionSolutionIDCondition == ComparisonResult.Lesser && CheckerIDNumber < CurrentCollisionData.collider.gameObject.GetComponent<CollisionChecker>().CheckerIDNumber) { gameObject.SetActive(false); }
					else if (SelfObjectCollisionSolutionIDCondition == ComparisonResult.LesserEqual && CheckerIDNumber <= CurrentCollisionData.collider.gameObject.GetComponent<CollisionChecker>().CheckerIDNumber) { gameObject.SetActive(false); }
					else if (SelfObjectCollisionSolutionIDCondition == ComparisonResult.Equal && CheckerIDNumber == CurrentCollisionData.collider.gameObject.GetComponent<CollisionChecker>().CheckerIDNumber) { gameObject.SetActive(false); }
					else if (SelfObjectCollisionSolutionIDCondition == ComparisonResult.Unequal && CheckerIDNumber != CurrentCollisionData.collider.gameObject.GetComponent<CollisionChecker>().CheckerIDNumber) { gameObject.SetActive(false); }
				}
				else
				{
					if (SelfObjectCollisionSolutionNoOtherIDExecute) { gameObject.SetActive(false); }
				}
			}

			if (OtherObjectCollisionSolution == ObjectDiactivationSolutions.DestroyObject)
			{
				if (CurrentCollisionData.collider.gameObject.GetComponent<CollisionChecker>() != null)
				{
					if (OtherObjectCollisionSolutionIDCondition == ComparisonResult.Greater && CheckerIDNumber > CurrentCollisionData.collider.gameObject.GetComponent<CollisionChecker>().CheckerIDNumber) { Destroy(CurrentCollisionData.collider.gameObject); }
					else if (OtherObjectCollisionSolutionIDCondition == ComparisonResult.GreaterEqual && CheckerIDNumber >= CurrentCollisionData.collider.gameObject.GetComponent<CollisionChecker>().CheckerIDNumber) { Destroy(CurrentCollisionData.collider.gameObject); }
					else if (OtherObjectCollisionSolutionIDCondition == ComparisonResult.Lesser && CheckerIDNumber < CurrentCollisionData.collider.gameObject.GetComponent<CollisionChecker>().CheckerIDNumber) { Destroy(CurrentCollisionData.collider.gameObject); }
					else if (OtherObjectCollisionSolutionIDCondition == ComparisonResult.LesserEqual && CheckerIDNumber <= CurrentCollisionData.collider.gameObject.GetComponent<CollisionChecker>().CheckerIDNumber) { Destroy(CurrentCollisionData.collider.gameObject); }
					else if (OtherObjectCollisionSolutionIDCondition == ComparisonResult.Equal && CheckerIDNumber == CurrentCollisionData.collider.gameObject.GetComponent<CollisionChecker>().CheckerIDNumber) { Destroy(CurrentCollisionData.collider.gameObject); }
					else if (OtherObjectCollisionSolutionIDCondition == ComparisonResult.Unequal && CheckerIDNumber != CurrentCollisionData.collider.gameObject.GetComponent<CollisionChecker>().CheckerIDNumber) { Destroy(CurrentCollisionData.collider.gameObject); }
				}
				else
				{
					if (OtherObjectCollisionSolutionNoOtherIDExecute) { Destroy(CurrentCollisionData.collider.gameObject); }
				}
			}
			else if (OtherObjectCollisionSolution == ObjectDiactivationSolutions.DisableObject)
			{
				if (CurrentCollisionData.collider.gameObject.GetComponent<CollisionChecker>() != null)
				{
					if (OtherObjectCollisionSolutionIDCondition == ComparisonResult.Greater && CheckerIDNumber > CurrentCollisionData.collider.gameObject.GetComponent<CollisionChecker>().CheckerIDNumber) { CurrentCollisionData.collider.gameObject.SetActive(false); }
					else if (OtherObjectCollisionSolutionIDCondition == ComparisonResult.GreaterEqual && CheckerIDNumber >= CurrentCollisionData.collider.gameObject.GetComponent<CollisionChecker>().CheckerIDNumber) { CurrentCollisionData.collider.gameObject.SetActive(false); }
					else if (OtherObjectCollisionSolutionIDCondition == ComparisonResult.Lesser && CheckerIDNumber < CurrentCollisionData.collider.gameObject.GetComponent<CollisionChecker>().CheckerIDNumber) { CurrentCollisionData.collider.gameObject.SetActive(false); }
					else if (OtherObjectCollisionSolutionIDCondition == ComparisonResult.LesserEqual && CheckerIDNumber <= CurrentCollisionData.collider.gameObject.GetComponent<CollisionChecker>().CheckerIDNumber) { CurrentCollisionData.collider.gameObject.SetActive(false); }
					else if (OtherObjectCollisionSolutionIDCondition == ComparisonResult.Equal && CheckerIDNumber == CurrentCollisionData.collider.gameObject.GetComponent<CollisionChecker>().CheckerIDNumber) { CurrentCollisionData.collider.gameObject.SetActive(false); }
					else if (OtherObjectCollisionSolutionIDCondition == ComparisonResult.Unequal && CheckerIDNumber != CurrentCollisionData.collider.gameObject.GetComponent<CollisionChecker>().CheckerIDNumber) { CurrentCollisionData.collider.gameObject.SetActive(false); }
				}
				else
				{
					if (OtherObjectCollisionSolutionNoOtherIDExecute) { CurrentCollisionData.collider.gameObject.SetActive(false); }
				}
			}
		}
	}

	void OnCollisionExit(Collision CurrentCollisionData)
	{
		CollisionActive = false;

		if (KillMomentumOnNoCollision)
		{
			gameObject.GetComponent<Rigidbody>().velocity = new Vector3();
		}
	}

	void Start()
	{
		if (RandomiseIDNumber)
		{
			CheckerIDNumber = (uint)Random.Range(0, uint.MaxValue);
		}
	}

	void Update()
	{
		if (InitialTransformationsStored)
		{
			if (HoldInitialTransformations)
			{
				gameObject.transform.position = InitialTransformations.Position;
				gameObject.transform.eulerAngles = InitialTransformations.Rotation;
				gameObject.transform.localScale = InitialTransformations.Scale;
			}
		}
		else
		{
			InitialTransformations.Position = gameObject.transform.position;
			InitialTransformations.Rotation = gameObject.transform.eulerAngles;
			InitialTransformations.Scale = gameObject.transform.localScale;

			InitialTransformationsStored = true;
		}
		
		if (CurrentFrameCount == CollisionCheckerFrameCount)
		{
			if (CollisionEvaluationEndSolution == ObjectDiactivationSolutions.DestroyObject) { Destroy(this); }
			else if (CollisionEvaluationEndSolution == ObjectDiactivationSolutions.DisableObject) { enabled = false; }
		}

		CurrentFrameCount++;
	}
}
