using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class ComponentFieldListing
{
	public Component TargetComponent;
	public List<string> RequestedParameterNameList;

	public object GetIndexValue(int IndexNumber)
	{
		return TargetComponent.GetType().GetField(RequestedParameterNameList[IndexNumber]).GetValue(TargetComponent);
	}
	
	public NamedValue GetIndexNamedValue(int IndexNumber)
	{
		return new NamedValue(RequestedParameterNameList[IndexNumber], TargetComponent.GetType().GetField(RequestedParameterNameList[IndexNumber]).GetValue(TargetComponent));
	}

	public string GetIndexFormatedStringValue(int IndexNumber, string Prefix, string Separator, string Suffix)
	{
		return Prefix + RequestedParameterNameList[IndexNumber] + Separator + (TargetComponent.GetType().GetField(RequestedParameterNameList[IndexNumber]).GetValue(TargetComponent)).ToString() + Suffix;
	}

	public List<object> GetAllValues()
	{
		List<object> OutputObjectList = new List<object>();
		
		for (int RequestedParameterNameCount = 0; RequestedParameterNameCount < RequestedParameterNameList.Count; RequestedParameterNameCount++)
		{
			OutputObjectList.Add(GetIndexValue(RequestedParameterNameCount));
		}

		return OutputObjectList;
	}

	public List<NamedValue> GetAllNamedValues()
	{
		List<NamedValue> OutputNamedValueList = new List<NamedValue>();

		for (int RequestedParameterNameCount = 0; RequestedParameterNameCount < RequestedParameterNameList.Count; RequestedParameterNameCount++)
		{
			OutputNamedValueList.Add(GetIndexNamedValue(RequestedParameterNameCount));
		}

		return OutputNamedValueList;
	}

	public List<string> GetAllFormatedStringValue(string Prefix, string Separator, string Suffix)
	{
		List<string> OutputStringList = new List<string>();

		for (int RequestedParameterNameCount = 0; RequestedParameterNameCount < RequestedParameterNameList.Count; RequestedParameterNameCount++)
		{
			OutputStringList.Add(GetIndexFormatedStringValue(RequestedParameterNameCount, Prefix, Separator, Suffix));
		}

		return OutputStringList;
	}
}
