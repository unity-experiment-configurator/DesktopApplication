using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

[RequireComponent(typeof(XRGrabInteractable))]
public class ClearGrabCollidersOnDestroy : MonoBehaviour
{
	private void OnDestroy()
	{
		gameObject.GetComponent<XRGrabInteractable>().colliders.Clear();
	}
}
