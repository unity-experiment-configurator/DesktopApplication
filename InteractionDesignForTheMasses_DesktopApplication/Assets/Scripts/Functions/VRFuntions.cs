using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

public static  class VRFuntions
{
	public static bool VRDisplaySubsystemActive()
	{
		var xrDisplaySubsystems = new List<XRDisplaySubsystem>();
		SubsystemManager.GetInstances<XRDisplaySubsystem>(xrDisplaySubsystems);
		foreach (var xrDisplay in xrDisplaySubsystems)
		{
			if (xrDisplay.running)
			{
				return true;
			}
		}

		return false;
	}
}
