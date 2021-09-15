// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Lab Application.
//
// Copyright (C) Mnemoscene LTD.
// All Rights Reserved.
//
// File:
// 		DestroyIfComponentExists.cs
//
// Date:
// 		7/09/2021
//
// Description:
//		Component that destroys other game objects that host a specified
//		component type or its own host game object, depending on the specified
//		context or destruction target.
//
// -----------------------------------------------------------------------------

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class DestroyIfComponentExists : MonoBehaviour
{
	[Header("Destroy Game Object Options")]
	public bool destroyGameObjectIfComponentExists = true;			// Condition to search and destroy the specified existing component's host game objects.
	public Component targetComponentType;							// The component type that will be searched for.
	public ObjectContext searchComponentObjectContext;				// The option of within what context the search should be done.
	public ObjectActionDirection deleteExistingGameObjectTarget;	// The option on which game objects to destroy upon finding game objects hosting the specified component type.

	[Header("Component Existence Check Event Options")]
	public bool checkComponentExistanceOnAwake;			// Condition to execute the search and destroy process at the "Awake" Unity event.
	public bool checkComponentExistanceOnEnable;		// Condition to execute the search and destroy process at the "OnEnable" Unity event.
	public bool checkComponentExistanceOnFixedUpdate;	// Condition to execute the search and destroy process at the "FixedUpdate" Unity event.
	public bool checkComponentExistanceOnUpdate = true;	// Condition to execute the search and destroy process at the "Update" Unity event.
	public bool checkComponentExistanceOnDestroy;		// Condition to execute the search and destroy process at the "Destroy" Unity event.

	[Header("Indications")]
	public List<GameObject> currentFoundComponentHostGameObjectList;	// Indicator displaying the currently found game objects that host the specified component type according to the search context option.

	// Method to run tasks once at the earliest unity event.
	void Awake()
	{
		if (checkComponentExistanceOnAwake) MainProcess();
	}

	// Method to execute tasks upon enabling the component.
	void OnEnable()
	{
		if (checkComponentExistanceOnEnable) MainProcess();
	}

	// Method to run tasks every frame at a fixed interval of time.
	void FixedUpdate()
	{
		if (checkComponentExistanceOnFixedUpdate) MainProcess();
	}

	// Method to run tasks every frame.
	void Update()
	{
		if (checkComponentExistanceOnFixedUpdate) MainProcess();
	}

	// Method to run final tasks right before destroying this component.
	void OnDestroy()
	{
		if (checkComponentExistanceOnDestroy) MainProcess();
	}


	// Method to search for the target component type object according to the context options and register their host game objects.
	public void ComponentSearch()
	{
		currentFoundComponentHostGameObjectList.Clear();

		if (searchComponentObjectContext == ObjectContext.AllGameObjects)
		{
			foreach (Component currentFoundComponent in FindObjectsOfType(targetComponentType.GetType()))
			{
				currentFoundComponentHostGameObjectList.Add(currentFoundComponent.gameObject);
			}
		}
		else if (searchComponentObjectContext == ObjectContext.CurrentGameObject)
		{
			if (GetComponent(targetComponentType.GetType()) != null)
			{
				currentFoundComponentHostGameObjectList.Add(gameObject);
			}
		}
		else if (searchComponentObjectContext == ObjectContext.OtherGameObjects)
		{
			foreach (Component currentFoundComponent in FindObjectsOfType(targetComponentType.GetType()))
			{
				if (currentFoundComponent.gameObject != gameObject) currentFoundComponentHostGameObjectList.Add(currentFoundComponent.gameObject);
			}
		}
	}

	// Method to destroy the registered game objects that host the specified component type.
	public void DestroyFoundGameObject()
	{
		if (deleteExistingGameObjectTarget == ObjectActionDirection.Both)
		{
			foreach (GameObject currentGameObject in currentFoundComponentHostGameObjectList)
			{
				Destroy(currentGameObject);
			}

			Destroy(gameObject);
		}
		else if (deleteExistingGameObjectTarget == ObjectActionDirection.Other)
		{
			foreach (GameObject currentGameObject in currentFoundComponentHostGameObjectList)
			{
				Destroy(currentGameObject);
			}

			currentFoundComponentHostGameObjectList.Clear();
		}
		else if (deleteExistingGameObjectTarget == ObjectActionDirection.Self)
		{
			Destroy(gameObject);
		}
	}

	// Method to run the main process.
	public void MainProcess()
	{
		if (destroyGameObjectIfComponentExists)
		{
			ComponentSearch();
			DestroyFoundGameObject();
		}
	}
}