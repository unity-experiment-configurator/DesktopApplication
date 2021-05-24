// -----------------------------------------------------------------------------
//
// Project:
// 		Interaction Design For The Masses Project.
//
// Copyright (C) "Mnemoscene LTD".
// All Rights Reserved.
//
// File:
// 		FindAmongDistractorsExperiment.cs
//
// Date:
// 		24/05/2021
//
// Description: 
//
//
// -----------------------------------------------------------------------------

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FindAmongDistractorsExperiment : MonoBehaviour
{
	public bool LocateSceneDataBaseAutomatically = true;
	public SceneDataBase CurrentSceneDataBase;



	void Start()
	{
		if (LocateSceneDataBaseAutomatically)
		{
			CurrentSceneDataBase = FindSceneDatabase.Find();
		}

		CreateDistractors();
	}

	void CreateDistractors()
	{
		for (int DistractorCount = 0; DistractorCount < CurrentSceneDataBase.ConstructionData.DistractorCount; DistractorCount++)
		{
			string CurrentDistractorPicked = CurrentSceneDataBase.ConstructionData.DistractorTypes[Random.Range(0, CurrentSceneDataBase.ConstructionData.DistractorTypes.Count - 1)];

			bool MatchFound = false;

			foreach (AssetDefinition<GameObject> CurrentModelDefinition in CurrentSceneDataBase.ModelDefinitionList)
			{
				foreach (string CurrentValidModelName in CurrentModelDefinition.AssetNameList)
				{
					if (CurrentDistractorPicked == CurrentValidModelName)
					{
						MatchFound = true;
						GameObject CurrentGameObject = Instantiate(CurrentModelDefinition.AssetObject, new Vector3(Random.Range(-0.4f, 0.4f), 1.05f, Random.Range(-0.4f, 0.4f)), new Quaternion(0f,Random.Range(-15f, 15f),0f,0f));
						CurrentGameObject.transform.localScale = new Vector3(Random.Range(0.08f, 0.15f), 0.1f, 0.1f);
						CurrentGameObject.GetComponent<Renderer>().material = CurrentSceneDataBase.MaterialDefinitionList[0].AssetObject;

						break;
					}
				}

				if (MatchFound) { break; }
			}
		}
	}


}
