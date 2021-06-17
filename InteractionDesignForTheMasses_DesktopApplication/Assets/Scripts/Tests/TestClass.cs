using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class TestClass<TestInput> where TestInput : Component
{
	public ResolvableObject<TestInput> TestName;
}
