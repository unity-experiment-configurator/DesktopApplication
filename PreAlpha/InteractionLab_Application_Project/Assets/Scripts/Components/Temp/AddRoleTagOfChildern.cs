using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AddRoleTagOfChildern : MonoBehaviour
{
	public ObjectRoleTag addRoleTag = ObjectRoleTag.Target;

	// Update is called once per frame
	void Update()
	{
		foreach(CommonAttributesContainer currentCommonAttributeContainer in GetComponentsInChildren<CommonAttributesContainer>())
		{
			if (!currentCommonAttributeContainer.commonAttributes.roleTagList.Contains(ObjectRoleTag.Target)) currentCommonAttributeContainer.commonAttributes.roleTagList.Add(addRoleTag);
		}
	}
}