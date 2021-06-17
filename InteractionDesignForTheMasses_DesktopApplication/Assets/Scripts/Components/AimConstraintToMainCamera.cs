using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Animations;

public class AimConstraintToMainCamera : MonoBehaviour
{
	[Header("Required Components")]
	public Camera MainCamera;
	public bool GetCurrentMainCamera = true;

	void OnEnable()
	{
		if (GetCurrentMainCamera) GetMainCamera();

		AimConstraint CurrentAimConstraint = GetComponent<AimConstraint>();

		if (CurrentAimConstraint == null) gameObject.AddComponent<AimConstraint>();
		if (GetCurrentMainCamera) GetMainCamera();

		ConstraintSource CameraConstraintSource = new ConstraintSource();
		CameraConstraintSource.sourceTransform = MainCamera.transform;
		CameraConstraintSource.weight = 1f;

		CurrentAimConstraint.AddSource(CameraConstraintSource);
		CurrentAimConstraint.constraintActive = true;
	}

	public void GetMainCamera()
	{
		MainCamera = Camera.main;
	}
}
