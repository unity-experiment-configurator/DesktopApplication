using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AddComponentsExample : MonoBehaviour
{
	List<Component> CompList = new List<Component> { new MeshCollider(), new Rigidbody() };
	
	// Start is called before the first frame update
	void Start()
	{
		ObjectComponentManagement.AddMultipleComponents(CompList, gameObject);
	}
}
