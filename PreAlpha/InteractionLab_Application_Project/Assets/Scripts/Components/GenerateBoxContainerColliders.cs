using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GenerateBoxContainerColliders : MonoBehaviour
{
	[Header("Editor Visualisation Options")]
	public bool visualisationBoundsEnabled = true;						// Condition to visualise the min and max bounds that game objects can be spawned in. This by default is enabled.
	public Color visualisationBoundsColour = new Color(0, 1, 0, 0.5f);	// Colour of the spawning bounds visualisation. The default values are R:0, G:1.0, B:0 and A:0.5.
	public Vector3 visualisationBoundsAdditionalClearance;				// Additional clearance dimensions to be added to the current max bounds estimations.

	[Header("Box Container Options")]
	public bool generateContainerCollidersOnEnbale = true;	// Condition to generate box container colliders upon enabling this component.
	public Vector3 sizeDimensions = new Vector3(1, 1, 1);	// Size dimensions of the box container. The default value are X:1.0, Y:1.0 Z:1.0.
	public Vector3 centreOffset;							// Position offset of the box container.

	[Space(7)]
	public PhysicMaterial colliderPhysicMaterial;
	public float colliderWallThickness = 0.1f;	// The thickness of the colliders that the box container will be composed by.

	[Space(7)]
	public TimeFrame containerExistanceTimeFrame;	// Time period to keep the box container active.
	public float containerExistanceTime = 3f;		// If the time frame is set to "timed", this is the time in seconds of how long should the game objects be contained after spawning them. The default value is 3 seconds.

	[Space(7)]
	public float currentContainerDestructionTimer;		// Indicator displaying the time current time counted until the destruction of the box container if its time frame is set to timed.
	public BoxCollider[] currentGeneratedColliderArray; // Array containing all current box container colliders.

	// Method to visualise the spawn volume bounds.
	void OnDrawGizmos()
	{
		if (visualisationBoundsEnabled) GizmoDrawBounds();
	}

	// Method to run tasks upon enabling the component.
	void OnEnable()
	{
		if (generateContainerCollidersOnEnbale && containerExistanceTimeFrame != TimeFrame.Never) GenerateBoxContainer();
	}

	// Method to run tasks every frame.
	void Update()
	{
		if (containerExistanceTimeFrame == TimeFrame.Timed)
		{
			if (currentContainerDestructionTimer < containerExistanceTime) currentContainerDestructionTimer += Time.deltaTime;
			else DestroyBoxContainer();
		}
	}

	// Method to visualise the current bounds in the Unity Editor as a gizmo.
	public void GizmoDrawBounds()
	{
		Gizmos.color = visualisationBoundsColour;
		Gizmos.matrix = Matrix4x4.TRS(transform.position, transform.rotation, transform.lossyScale);
		Gizmos.DrawCube(centreOffset, sizeDimensions + (visualisationBoundsAdditionalClearance / 2));
	}

	// Method to generate the box container colliders.
	public void GenerateBoxContainer()
	{
		DestroyBoxContainer();

		currentGeneratedColliderArray = new BoxCollider[6];

		// Right side wall box collider of the box container.
		currentGeneratedColliderArray[0] = gameObject.AddComponent<BoxCollider>();
		currentGeneratedColliderArray[0].material = colliderPhysicMaterial;
		currentGeneratedColliderArray[0].center = new Vector3((sizeDimensions.x / 2) + (colliderWallThickness / 2), 0, 0) + centreOffset;
		currentGeneratedColliderArray[0].size = new Vector3(colliderWallThickness, sizeDimensions.y, sizeDimensions.z);

		// Left side wall box collider of the box container.
		currentGeneratedColliderArray[1] = gameObject.AddComponent<BoxCollider>();
		currentGeneratedColliderArray[1].material = colliderPhysicMaterial;
		currentGeneratedColliderArray[1].center = new Vector3((sizeDimensions.x / -2) + (colliderWallThickness / -2), 0, 0) + centreOffset;
		currentGeneratedColliderArray[1].size = new Vector3(colliderWallThickness, sizeDimensions.y, sizeDimensions.z);

		// Top side wall box collider of the box container.
		currentGeneratedColliderArray[2] = gameObject.AddComponent<BoxCollider>();
		currentGeneratedColliderArray[2].material = colliderPhysicMaterial;
		currentGeneratedColliderArray[2].center = new Vector3(0, (sizeDimensions.y / 2) + (colliderWallThickness / 2), 0) + centreOffset;
		currentGeneratedColliderArray[2].size = new Vector3(sizeDimensions.x, colliderWallThickness, sizeDimensions.z);

		// Bottom side wall box collider of the box container.
		currentGeneratedColliderArray[3] = gameObject.AddComponent<BoxCollider>();
		currentGeneratedColliderArray[3].material = colliderPhysicMaterial;
		currentGeneratedColliderArray[3].center = new Vector3(0, (sizeDimensions.y / -2) + (colliderWallThickness / -2), 0) + centreOffset;
		currentGeneratedColliderArray[3].size = new Vector3(sizeDimensions.x, colliderWallThickness, sizeDimensions.z);

		// Front side wall box collider of the box container.
		currentGeneratedColliderArray[4] = gameObject.AddComponent<BoxCollider>();
		currentGeneratedColliderArray[4].material = colliderPhysicMaterial;
		currentGeneratedColliderArray[4].center = new Vector3(0, 0, (sizeDimensions.z / 2) + (colliderWallThickness / 2)) + centreOffset;
		currentGeneratedColliderArray[4].size = new Vector3(sizeDimensions.x, sizeDimensions.y, colliderWallThickness);

		// Back side wall box collider of the box container.
		currentGeneratedColliderArray[5] = gameObject.AddComponent<BoxCollider>();
		currentGeneratedColliderArray[5].material = colliderPhysicMaterial;
		currentGeneratedColliderArray[5].center = new Vector3(0, 0, (sizeDimensions.z / -2) + (colliderWallThickness / -2)) + centreOffset;
		currentGeneratedColliderArray[5].size = new Vector3(sizeDimensions.x, sizeDimensions.y, colliderWallThickness);
	}

	// Method to destroy the current box container colliders.
	public void DestroyBoxContainer()
	{
		if (currentGeneratedColliderArray.Length > 0)
		{
			foreach (BoxCollider currentBoxCollider in currentGeneratedColliderArray)
			{
				if (currentBoxCollider != null) Destroy(currentBoxCollider);
			}

			// Clear the collider array after destroying all colliders in it.
			Array.Clear(currentGeneratedColliderArray, 0, currentGeneratedColliderArray.Length);
		}
	}
}