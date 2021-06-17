using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class PreserveDuringSceneChange : MonoBehaviour
{
	public bool PreserveDuringSceneChanges = true;

	private void Start()
	{
		if (PreserveDuringSceneChanges) { DontDestroyOnLoad(gameObject); }
	}

	private void OnEnable()
	{
		if (PreserveDuringSceneChanges) { DontDestroyOnLoad(gameObject); }
	}

	private void Update()
	{
		if (PreserveDuringSceneChanges) { DontDestroyOnLoad(gameObject); }
	}
}
