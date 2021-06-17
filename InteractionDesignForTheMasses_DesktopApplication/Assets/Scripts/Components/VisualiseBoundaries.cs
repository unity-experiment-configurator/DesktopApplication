using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VisualiseBoundaries : MonoBehaviour
{
	public GameObject OtherObject;
	
	void OnDrawGizmosSelected()
	{
		if (OtherObject != null)
		{
			if (gameObject.GetComponent<Collider>().bounds.Intersects(OtherObject.GetComponent<Collider>().bounds))
			{
				Gizmos.color = new Color(1, 0, 0, 0.5f);
			}
			else
			{
				Gizmos.color = new Color(0, 1, 0, 0.5f);
			}
		}
		else
		{
			Gizmos.color = new Color(0, 0, 1, 0.5f);
		}

		Gizmos.DrawCube(gameObject.GetComponent<Collider>().bounds.center, gameObject.GetComponent<Collider>().bounds.size);

	}
}