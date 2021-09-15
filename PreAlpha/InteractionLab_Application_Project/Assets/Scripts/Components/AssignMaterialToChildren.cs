// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		AssignMaterialToChildren.cs
//
// Date:
// 		31/08/2021
//
// Description:
//		Component that assigns to the current host game object's children a
//		new material as selected from a list of sample materials. The children
//		need to have a renderer type component in order to assign a new material
//		to it.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class AssignMaterialToChildren : MonoBehaviour
{
	[Header("Material Assignment Options")]
	public bool assignMaterialOnEnable = true;			// Condition to run the material assignment to the detected renderer upon enabling this component.
	public ListItemSelection sampleMaterialSelection;	// Option to determine the game object sample spawning selection method.
	public List<Material> sampleMaterialList;			// The material sample list to be used when deciding which material to be assigned to a child's renderer component.

	[Header("Indications")]
	public bool assignMaterialThisCycle;	// Indicator displaying if the material assignment to the detected renderer process will execute this coming cycle.

	[Space(7)]
	public Renderer[] detectedRendererArray;	// List of detected renderer type components.
	public List<Material> pickedMaterialList;	// List of materials picked to be spawned.
	public List<Material> assignedMaterialList; // List of materials already assigned.

	// Method to run tasks upon enabling the component.
	void OnEnable()
	{
		if (assignMaterialOnEnable) assignMaterialThisCycle = true;
	}

	// Method to run tasks every frame.
	void Update()
	{
		if (assignMaterialThisCycle)
		{
			DetectRendererComponents();
			PreparePickedMaterialList();
			AssignAllPickedMaterials();

			assignMaterialThisCycle = false;
		}
	}

	// Method to detect all renderer components in all of the host game object's children.
	public void DetectRendererComponents()
	{
		detectedRendererArray = gameObject.GetComponentsInChildren<Renderer>(true);
	}

	// Method that will prepare a list of sample materials based on the current assigning options to have ready for the assignment process.
	public void PreparePickedMaterialList()
	{
		pickedMaterialList.Clear();

		// Prepare a list of game objects by sequentially picking game objects from the game object samples list.
		if (sampleMaterialSelection == ListItemSelection.Sequence)
		{
			int currentSampleMaterialCounter = 0;

			for (int assignMaterialCount = 0; assignMaterialCount < detectedRendererArray.Length; assignMaterialCount++)
			{
				if (currentSampleMaterialCounter >= sampleMaterialList.Count) currentSampleMaterialCounter = 0;

				pickedMaterialList.Add(sampleMaterialList[currentSampleMaterialCounter]);

				++currentSampleMaterialCounter;
			}
		}

		// Prepare a list of game objects by reverse-sequentially picking game objects from the game object samples list.
		else if (sampleMaterialSelection == ListItemSelection.ReverseSequence)
		{
			int currentSampleGameObjectCounter = sampleMaterialList.Count - 1;

			for (int spawnGameObjectCount = 0; spawnGameObjectCount < detectedRendererArray.Length; spawnGameObjectCount++)
			{
				if (currentSampleGameObjectCounter < 0) currentSampleGameObjectCounter = sampleMaterialList.Count - 1;

				pickedMaterialList.Add(sampleMaterialList[currentSampleGameObjectCounter]);

				--currentSampleGameObjectCounter;
			}
		}

		// Prepare a list of game objects by randomly picking game objects from the game object samples list.
		else if (sampleMaterialSelection == ListItemSelection.Random)
		{
			for (int spawnGameObjectCount = 0; spawnGameObjectCount < detectedRendererArray.Length; spawnGameObjectCount++)
			{
				pickedMaterialList.Add(sampleMaterialList[UnityEngine.Random.Range(0, sampleMaterialList.Count - 1)]);
			}
		}
	}

	// Method to assign the material in the picked material list to its according renderer component based on the index number.
	public void AssignPickedMaterial(int indexNumber)
	{
		detectedRendererArray[indexNumber].material = pickedMaterialList[indexNumber];
	}

	// Method to remove the material in the picked material list from its according renderer component based on the index number.
	public void RemovePickedMaterial(int indexNumber)
	{
		if (detectedRendererArray[indexNumber].material == pickedMaterialList[indexNumber]) detectedRendererArray[indexNumber].material = null;
	}

	// Method to assign all materials in the picked material list to all their according renderer components.
	public void AssignAllPickedMaterials()
	{
		for (int assignMaterialCounter = 0; assignMaterialCounter < detectedRendererArray.Length; assignMaterialCounter++)
		{
			AssignPickedMaterial(assignMaterialCounter);
		}
	}

	// Method to remove all materials in the picked material list from all their according renderer components.
	public void RemoveAllPickedMaterials()
	{
		for (int removeMaterialCounter = 0; removeMaterialCounter < detectedRendererArray.Length; removeMaterialCounter++)
		{
			RemovePickedMaterial(removeMaterialCounter);
		}
	}
}