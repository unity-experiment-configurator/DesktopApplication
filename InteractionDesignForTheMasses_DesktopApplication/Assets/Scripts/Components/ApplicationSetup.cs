using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ApplicationSetup : MonoBehaviour
{
	[Header("FPS Preferences")]
	public int PreferedFPS = 60;
	public bool AlwaysTry;

	void Awake()
	{
		QualitySettings.vSyncCount = 0;
		Application.targetFrameRate = PreferedFPS;
	}

	void Update()
	{
		if (Application.targetFrameRate != PreferedFPS && AlwaysTry) Application.targetFrameRate = PreferedFPS;
	}
}
