using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class NamedValue
{
	public string Name;
	public object Value;

	public NamedValue()
	{
		Name = "";
		Value = null;
	}

	public NamedValue(string InputName)
	{
		Name = InputName;
		Value = null;
	}

	public NamedValue(object InputValue)
	{
		Name = "";
		Value = InputValue;
	}

	public NamedValue(string InputName, object InputValue)
	{
		Name = InputName;
		Value = InputValue;
	}
}
