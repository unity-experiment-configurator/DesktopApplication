// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Design For The Masses Project.
//
// Copyright (C) "Mnemoscene LTD".
// All Rights Reserved.
//
// File:
// 		CreateObjectsInArea.cs
//
// Date:
// 		01/06/2021
//
// Description: 
//
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class CreateObjectsInArea : MonoBehaviour
{
	[Header("Child Creation Options")]
	public int ChildCreationTotal = 0;
	public uint CollisionCheckerStartIDNumber = 1;
	public bool AddMeshColliderToChild = true;
	public bool ChildColliderIsConvex = true;
	public bool AddRigidBodyToChild = true;
	public CollisionDetectionMode ChildCollisionMode = CollisionDetectionMode.ContinuousSpeculative;
	public bool ChildScaleIsUniform = true;
	public bool AddCollisionCheckerToChild = true;

	[Header("Child Object Attributes")]
	public bool AddObjectAttributesToChild = true;
	public bool AddObjectSoundToChild = true;
	public ObjectAttributes ChildObjectAttributes;

	[Header("Child Transformation Range")]
	public Transformations MinTransformations;
	public Transformations MaxTransformations;
	public float FloorLevelHeight;
	public bool KeepChildAboveFloor = true;
	public bool VisualiseAreaBoundsGizmo = true;

	[Header("Child Creation Samples")]
	public List<GameObject> ChildObjectSamplesList;
	public List<Material> ChildMaterialSamplesList;
	public List<AudioClip> ChildAudioSamplesList;

	[Header("Parent Attachment")]
	public bool CurrentObjectIsParent = true;
	public Transform ExternalParentObject;

	[Header("Created Children Object List")]
	public List<GameObject> CreatedChildObjectList;

	[Header("Attempts To Reach Desired Child Count")]
	public int ChildCountMaxAttempts = 50;
	public int ChildCountCurrentAttempts = 0;

	[Header("Post Creation Options")]
	public bool HideUntilFinalisation = true;
	public bool KillMomentumAfterCreation = true;
	public bool InitialMomentumKilled = false;
	public int KillMomentumFrameCount = 5;
	public int CurrentKillMomentumFrame = 0;

	private bool ObjectsAreInteractable = false;

	void OnDrawGizmos()
	{
		if (VisualiseAreaBoundsGizmo)
		{
			Gizmos.color = new Color(1, 0, 0, 0.75f);
			Gizmos.matrix = Matrix4x4.TRS(transform.position, transform.rotation, transform.lossyScale);
			Gizmos.DrawCube
			(
				new Vector3(),
				MaxTransformations.GetAdjustedTransformationsToOrigin(null).Position - MinTransformations.GetAdjustedTransformationsToOrigin(null).Position
			);
		}
	}

	void OnEnable()
	{
		EvaluateAndCreate();
	}

	void Update()
	{
		CreatedChildObjectList = CreatedChildObjectList.RemoveNull();

		if (CreatedChildObjectList.Count < ChildCreationTotal && ChildCountCurrentAttempts < ChildCountMaxAttempts)
		{
			EvaluateAndCreate();

			if (KillMomentumAfterCreation) { GameObjectPhysicsManipulation.MultiplyMomentumPerAxis(new Vector3(0f, 0f, 0f), CreatedChildObjectList, true, true, true, true, false, true); }

			ChildCountCurrentAttempts++;
		}
		else
		{
			if (KillMomentumAfterCreation && !InitialMomentumKilled)
			{
				AddCollisionCheckComponents();

				GameObjectPhysicsManipulation.MultiplyMomentumPerAxis(new Vector3(0f, 0f, 0f), CreatedChildObjectList, true, true, true, true, false, true);

				if (CurrentKillMomentumFrame < KillMomentumFrameCount) { CurrentKillMomentumFrame++; }
				else { InitialMomentumKilled = true; }
			}

			if (!ObjectsAreInteractable)
			{
				foreach (GameObject CurrentChildGameObject in CreatedChildObjectList)
				{
					CurrentChildGameObject.AddComponent<XRGrabInteractable>();
					CurrentChildGameObject.GetComponent<XRGrabInteractable>().movementType = XRBaseInteractable.MovementType.Instantaneous;

					CurrentChildGameObject.AddComponent<ClearGrabCollidersOnDestroy>();
				}

				ObjectsAreInteractable = true;
			}

			if (HideUntilFinalisation) { GameObjectRenderManipulation.ShowMesh(CreatedChildObjectList); }
		}
	}

	// Method to evaluate all creation parameters and to proceed to create the defined objects.
	public void EvaluateAndCreate()
	{
		if (CurrentObjectIsParent) { ExternalParentObject = gameObject.transform; }

		List<GameObject> CurrentChildObjectList= CreateObjectArrangement.RandomInArea
		(
			ChildCreationTotal - CreatedChildObjectList.Count,
			ChildObjectSamplesList,
			ExternalParentObject,
			ChildMaterialSamplesList,
			MinTransformations.GetAdjustedTransformationsToOrigin(transform),
			MaxTransformations.GetAdjustedTransformationsToOrigin(transform),
			transform,
			ChildScaleIsUniform
		);

		if (KeepChildAboveFloor) { GameObjectTransformationManipulation.ClearFloorLevel(FloorLevelHeight, CurrentChildObjectList); }
		if (HideUntilFinalisation) { GameObjectRenderManipulation.HideMesh(CurrentChildObjectList); }

		CreatedChildObjectList = CreatedChildObjectList.RemoveNull();
		CreatedChildObjectList.AddRange(CurrentChildObjectList);

		AddCollisionCheckComponents();
		if (AddObjectAttributesToChild) AddObjectAttributesComponents();
		if (AddObjectSoundToChild) AddSoundComponents();
	}

	// Method to add all necessary collision components to all currently created children game objects.
	public void AddCollisionCheckComponents()
	{
		CreatedChildObjectList = CreatedChildObjectList.RemoveNull();

		uint CollisionCheckerCounter = CollisionCheckerStartIDNumber;

		foreach (GameObject CurrentChildGameObject in CreatedChildObjectList)
		{
			if (CurrentChildGameObject.GetComponent<MeshCollider>() == null) CurrentChildGameObject.AddComponent<MeshCollider>();
			if (CurrentChildGameObject.GetComponent<Rigidbody>() == null) CurrentChildGameObject.AddComponent<Rigidbody>();
			if (CurrentChildGameObject.GetComponent<CollisionChecker>() == null) CurrentChildGameObject.AddComponent<CollisionChecker>();

			CurrentChildGameObject.GetComponent<MeshCollider>().convex = ChildColliderIsConvex;
			CurrentChildGameObject.GetComponent<Rigidbody>().collisionDetectionMode = ChildCollisionMode;
			CurrentChildGameObject.GetComponent<CollisionChecker>().CheckerIDNumber = CollisionCheckerCounter++;
		}
	}

	// Method to add all necessary attribute components to all currently created children game objects.
	public void AddObjectAttributesComponents()
	{
		foreach (GameObject CurrentChildGameObject in CreatedChildObjectList)
		{
			if (CurrentChildGameObject.GetComponent<ObjectAttributesContainer>() == null) CurrentChildGameObject.AddComponent<ObjectAttributesContainer>();
			CurrentChildGameObject.GetComponent<ObjectAttributesContainer>().ContainedObjectAttributes = ChildObjectAttributes;
			CurrentChildGameObject.GetComponent<ObjectAttributesContainer>().SetGameObjectName();
		}
	}

	public void AddSoundComponents()
	{
		foreach (GameObject CurrentChildGameObject in CreatedChildObjectList)
		{
			if (CurrentChildGameObject.GetComponent<AudioSource>() == null) CurrentChildGameObject.AddComponent<AudioSource>();
			if (CurrentChildGameObject.GetComponent<ObjectGrabMonitor>() == null) CurrentChildGameObject.AddComponent<ObjectGrabMonitor>();
			if (CurrentChildGameObject.GetComponent<PlaySoundOnGrab>() == null) CurrentChildGameObject.AddComponent<PlaySoundOnGrab>();

			CurrentChildGameObject.GetComponent<AudioSource>().playOnAwake = false;
			CurrentChildGameObject.GetComponent<AudioSource>().volume = 0.6f;
			CurrentChildGameObject.GetComponent<AudioSource>().clip = ChildAudioSamplesList[UnityEngine.Random.Range(0, ChildAudioSamplesList.Count)];
			CurrentChildGameObject.GetComponent<PlaySoundOnGrab>().PlayOnlyOnce = false;
		}
	}
}