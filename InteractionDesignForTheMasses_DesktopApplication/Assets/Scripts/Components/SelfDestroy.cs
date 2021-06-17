using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SelfDestroy : MonoBehaviour
{
	[Header("Time Options")]
	public float TimeAmount = 3;
	public float CurrentTime = 0;

	void Update()
	{
		if (CurrentTime >= TimeAmount) Destroy(gameObject);
		else CurrentTime += Time.deltaTime;
	}
}
