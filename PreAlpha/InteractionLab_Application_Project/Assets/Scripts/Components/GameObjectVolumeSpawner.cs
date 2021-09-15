// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		GameObjectVolumeSpawner.cs
//
// Date:
// 		28/08/2021
//
// Description:
//		Component that spawns a number of random game objects from a list of
//		available game objects within predetermined volume dimensions.
//		Additionally, the selection, count and transformations of the spawned
//		game objects can be randomised.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

[Serializable]
public class GameObjectVolumeSpawner : MonoBehaviour
{
	[Header("Editor Visualisation Options")]
	public bool visualisationBoundsEnabled = true;						// Condition to visualise the min and max bounds that game objects can be spawned in. This by default is enabled.
	public Color visualisationBoundsColour = new Color(1, 0, 0, 0.5f);	// Colour of the spawning bounds visualisation. The default values are R:1.0, G:0, B:0 and A:0.5.
	public Vector3 visualisationBoundsAdditionalClearance;				// Additional clearance dimensions to be added to the current max bounds estimations.

	[Header("Spawner Behaviour Options")]
	public bool spawnOnEnable = true;			// Condition to spawn game objects upon enabling this component. This by default is enabled.
	public bool destroyPreviousOnSpawn = true;	// Condition to destroy all previous spawned game objects before proceeding to spawn new ones. This by default is enabled.

	[Header("Spawning Randomisation Options")]
	public MinMaxInt spawnCountMinMax;				// The min and max spawned game objects count.
	public Transformations3D transformationsMin;	// The minimum amount of transformations to be applied to a spawned game object.
	public Transformations3D transformationsMax;	// The maximum amount of transformations to be applied to a spawned game object.
	public bool keepScaleUniform = true;			// Condition to keep the scale ratios 1:1:1 on each axis applying transformations. This by default is enabled.

	[Space(7)]
	public ListItemSelection sampleGameObjectSelection;	// Option to determine the game object sample spawning selection method.
	public List<GameObject> gameObjectSampleList;		// The game object sample list to be used when deciding which game object to be spawned.

	[Header("Indications")]
	public int currentDeterminedSpawnCount;	// Current count of spawned game objects that was randomly determined.
	
	[Space(7)]
	public Bounds currentMaxSizeGameObjectBounds;	// Current bounds detected of the largest in size game object available in the game object sample list.
	public Bounds currentMaxScaledGameObjectBounds;	// Current bounds detected of the largest in size game object available in the game object sample list with the max possible scale applied to it.
	public Bounds currentEstimatedPositionBounds;	// Current bounds estimations calculated only by the possible spawning positions bounds.
	public Bounds currentEstimatedVolumeBounds;		// Current bounds estimations calculated by adding the max possible game object size to the current possible spawning position bounds.
	public Bounds currentEstimatedClearanceBounds;	// Current bounds estimations calculated by adding the container clearance to the current spawning volume bounds.

	[Space(7)]
	public List<GameObject> pickedGameObjectList;	// List of game objects picked to be spawned.
	public List<GameObject> spawnedGameObjectList;	// List of game objects already spawned.

	// Method to visualise the spawn volume bounds.
	void OnDrawGizmos()
	{
		if (visualisationBoundsEnabled) GizmoDrawBounds();
	}

	// Method to run tasks upon enabling the component.
	void OnEnable()
	{
		if (spawnOnEnable)
		{
			DetermineSpawnGameObjectCount();
			PreparePickedGameObjectList();

			if (destroyPreviousOnSpawn) DestroyAllSpawnedObjects();

			SpawnAllPickedObjects();
			SpawnedObjectRandomiseTransform();
		}
	}

	// Method to visualise the current bounds in the Unity Editor as a gizmo.
	public void GizmoDrawBounds()
	{
		CalculateAllBounds();

		Gizmos.color = visualisationBoundsColour;
		Gizmos.matrix = Matrix4x4.TRS(transform.position, transform.rotation, transform.lossyScale);
		Gizmos.DrawCube(currentEstimatedClearanceBounds.center, currentEstimatedClearanceBounds.size);
	}

	// Method to get the largest game object from the game object sample list.
	public void GetLargestSampleObjectBounds()
	{
		// The size of each game object is going to judged by the cubic diagonal length of their bounding box.
		float lastBoundsDiagonalLength = 0;

		foreach (GameObject currentGameObjectSpawnSample in gameObjectSampleList)
		{
			if (currentGameObjectSpawnSample != null)
			{
				float currentBoundsDiagonalLength = Vector3.Distance(currentGameObjectSpawnSample.GetComponent<Renderer>().bounds.min, currentGameObjectSpawnSample.GetComponent<Renderer>().bounds.max);

				if (currentBoundsDiagonalLength > lastBoundsDiagonalLength)
				{
					currentMaxSizeGameObjectBounds.size = new Vector3(currentBoundsDiagonalLength, currentBoundsDiagonalLength, currentBoundsDiagonalLength);
					lastBoundsDiagonalLength = currentBoundsDiagonalLength;
				}
			}
		}
	}

	// Method to get the largest game object from the game object sample list and apply the max possible scale to it.
	public void GetMaxScaleLargestSampleObjectBounds()
	{
		Vector3 scaledMaxSizeObjectBoundsMin = new Vector3(currentMaxSizeGameObjectBounds.min.x * transformationsMax.scale.x / 10,
															currentMaxSizeGameObjectBounds.min.y * transformationsMax.scale.y / 10,
															currentMaxSizeGameObjectBounds.min.z * transformationsMax.scale.z / 10);

		Vector3 scaledMaxSizeObjectBoundsMax = new Vector3(currentMaxSizeGameObjectBounds.max.x * transformationsMax.scale.x / 10,
															currentMaxSizeGameObjectBounds.max.y * transformationsMax.scale.y / 10,
															currentMaxSizeGameObjectBounds.max.z * transformationsMax.scale.z / 10);

		currentMaxScaledGameObjectBounds.min = scaledMaxSizeObjectBoundsMin;
		currentMaxScaledGameObjectBounds.max = scaledMaxSizeObjectBoundsMax;
	}

	// Method to calculate the current spawning position bounds by getting the min and max positions of the possible transformations.
	public void CalculatePositionBounds()
	{
		currentEstimatedPositionBounds.min = transformationsMin.position;
		currentEstimatedPositionBounds.max = transformationsMax.position;
	}

	// Method to calculate the current spawning volume bounds by adding to the current position bounds the max possible size of the largest game object from the game object sample list.
	public void CalculateVolumeBounds()
	{
		Vector3 objectSizeExtendedPositionBoundsMin = new Vector3(currentEstimatedPositionBounds.min.x - (currentMaxScaledGameObjectBounds.size.x / 2),
																currentEstimatedPositionBounds.min.y - (currentMaxScaledGameObjectBounds.size.y / 2),
																currentEstimatedPositionBounds.min.z - (currentMaxScaledGameObjectBounds.size.z / 2));

		Vector3 objectSizeExtendedPositionBoundsMax = new Vector3(currentEstimatedPositionBounds.max.x + (currentMaxScaledGameObjectBounds.size.x / 2),
																currentEstimatedPositionBounds.max.y + (currentMaxScaledGameObjectBounds.size.y / 2),
																currentEstimatedPositionBounds.max.z + (currentMaxScaledGameObjectBounds.size.z / 2));

		currentEstimatedVolumeBounds.min = objectSizeExtendedPositionBoundsMin;
		currentEstimatedVolumeBounds.max = objectSizeExtendedPositionBoundsMax;
	}

	// Method to calculate the current clearance bounds by adding to the current volume bounds the set clearance amount.
	public void CalculateClearanceBounds()
	{
		currentEstimatedClearanceBounds.min = currentEstimatedVolumeBounds.min - (visualisationBoundsAdditionalClearance / 2);
		currentEstimatedClearanceBounds.max = currentEstimatedVolumeBounds.max + (visualisationBoundsAdditionalClearance / 2);
	}

	// Method to calculate all spawner bounds.
	public void CalculateAllBounds()
	{
		GetLargestSampleObjectBounds();
		GetMaxScaleLargestSampleObjectBounds();
		CalculatePositionBounds();
		CalculateVolumeBounds();
		CalculateClearanceBounds();
	}

	// Method that determines the count of game objects to be spawned.
	public void DetermineSpawnGameObjectCount()
	{
		currentDeterminedSpawnCount = UnityEngine.Random.Range(spawnCountMinMax.min, spawnCountMinMax.max + 1);
	}

	// Method that will prepare a list of sample game objects based on the current spawning options to have ready for the spawning process.
	public void PreparePickedGameObjectList()
	{
		pickedGameObjectList.Clear();

		// Prepare a list of game objects by sequentially picking game objects from the game object samples list.
		if (sampleGameObjectSelection == ListItemSelection.Sequence)
		{
			int currentSampleGameObjectCounter = 0;
			
			for (int spawnGameObjectCount = 0; spawnGameObjectCount < currentDeterminedSpawnCount; spawnGameObjectCount++)
			{
				if (currentSampleGameObjectCounter >= gameObjectSampleList.Count) currentSampleGameObjectCounter = 0;

				pickedGameObjectList.Add(gameObjectSampleList[currentSampleGameObjectCounter]);

				++currentSampleGameObjectCounter;
			}
		}

		// Prepare a list of game objects by reverse-sequentially picking game objects from the game object samples list.
		else if (sampleGameObjectSelection == ListItemSelection.ReverseSequence)
		{
			int currentSampleGameObjectCounter = gameObjectSampleList.Count - 1;

			for (int spawnGameObjectCount = 0; spawnGameObjectCount < currentDeterminedSpawnCount; spawnGameObjectCount++)
			{
				if (currentSampleGameObjectCounter < 0) currentSampleGameObjectCounter = gameObjectSampleList.Count - 1;

				pickedGameObjectList.Add(gameObjectSampleList[currentSampleGameObjectCounter]);

				--currentSampleGameObjectCounter;
			}
		}

		// Prepare a list of game objects by randomly picking game objects from the game object samples list.
		else if (sampleGameObjectSelection == ListItemSelection.Random)
		{
			if (gameObjectSampleList.Count > 0)
			{
				for (int spawnGameObjectCount = 0; spawnGameObjectCount < currentDeterminedSpawnCount; spawnGameObjectCount++)
				{
					pickedGameObjectList.Add(gameObjectSampleList[UnityEngine.Random.Range(0, gameObjectSampleList.Count)]);
				}
			}
			else Debug.LogWarning("Could not pick game objects. The sample game object list is empty.");
		}
	}

	// Method to spawn a game object from the picked game object list based on the index number.
	public void SpawnPickedGameObject(int indexNumber)
	{
		spawnedGameObjectList.Add(Instantiate(pickedGameObjectList[indexNumber], gameObject.transform));
	}


	// Method to destroy a game object from the spawned game object list based on the index number.
	public void DestroySpawnedGameObject(int indexNumber)
	{
		Destroy(spawnedGameObjectList[indexNumber]);
		spawnedGameObjectList.RemoveAt(indexNumber);
	}


	// Method to spawn all game objects that have been picked.
	public void SpawnAllPickedObjects()
	{
		if (pickedGameObjectList.Count > 0)
		{
			foreach (GameObject currentPickedGameObject in pickedGameObjectList)
			{
				if (currentPickedGameObject != null)
				{
					spawnedGameObjectList.Add(Instantiate(currentPickedGameObject, gameObject.transform));
				}
			}
		}
		else Debug.LogWarning("Could not spawn game objects. The picked game object list is currently empty.");
	}

	// Method to destroy all currently listed spawned game objects and clear the spawned game object list.
	public void DestroyAllSpawnedObjects()
	{
		foreach (GameObject currentSpawnedGameObject in spawnedGameObjectList)
		{
			Destroy(currentSpawnedGameObject);
		}

		spawnedGameObjectList.Clear();
	}

	// Method to randomise the transformations of the listed spawned game objects.
	public void SpawnedObjectRandomiseTransform()
	{
		foreach (GameObject currentSpawnedGameObject in spawnedGameObjectList)
		{
			currentSpawnedGameObject.transform.localPosition = new Vector3(UnityEngine.Random.Range(transformationsMin.position.x, transformationsMax.position.x),
																			UnityEngine.Random.Range(transformationsMin.position.y, transformationsMax.position.y),
																			UnityEngine.Random.Range(transformationsMin.position.z, transformationsMax.position.z));

			currentSpawnedGameObject.transform.localEulerAngles = new Vector3(UnityEngine.Random.Range(transformationsMin.rotation.x, transformationsMax.rotation.x),
																			UnityEngine.Random.Range(transformationsMin.rotation.y, transformationsMax.rotation.y),
																			UnityEngine.Random.Range(transformationsMin.rotation.z, transformationsMax.rotation.z));
			
			// If enabled, keep the scaling to an equal value on all axes.
			if (keepScaleUniform)
			{
				// The min and max range of randomisation will be the average value of all three min axes and the average value of all three max axes.
				float scaleAverageMin = (transformationsMin.scale.x + transformationsMin.scale.y + transformationsMin.scale.z) / 3;
				float scaleAverageMax = (transformationsMax.scale.x + transformationsMax.scale.y + transformationsMax.scale.z) / 3;
				float currentUniformScaleValue = UnityEngine.Random.Range(scaleAverageMin, scaleAverageMax);

				currentSpawnedGameObject.transform.localScale = new Vector3(currentUniformScaleValue * currentSpawnedGameObject.transform.localScale.x,
																			currentUniformScaleValue * currentSpawnedGameObject.transform.localScale.y,
																			currentUniformScaleValue * currentSpawnedGameObject.transform.localScale.z);
			}
			else
			{
				currentSpawnedGameObject.transform.localScale = new Vector3(UnityEngine.Random.Range(transformationsMin.scale.x, transformationsMax.scale.x) * currentSpawnedGameObject.transform.localScale.x,
																				UnityEngine.Random.Range(transformationsMin.scale.y, transformationsMax.scale.y) * currentSpawnedGameObject.transform.localScale.x,
																				UnityEngine.Random.Range(transformationsMin.scale.z, transformationsMax.scale.z) * currentSpawnedGameObject.transform.localScale.x);
			}
		}
	}
}