using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectRoleTrigger : MonoBehaviour
{
	[Header("Object Role Options")]
	public ObjectRoleTag TargetObjectRoleTag = ObjectRoleTag.Target;
	public bool PermanentActivation;
	
	[Header("Audio Playback Options")]
	public AudioSource TargetAudioSource;
	public FindReferenceCondition FindTargetAudioSource = FindReferenceCondition.OnlyIfNull;
	public bool PlayAudioOnTrigger = true;

	[Header("Create Asset Otpions")]
	public List<GameObject> CreationGameObjectList;
	public bool CreateGameObjectsOnTrigger = true;
	
	public bool ActiveTrigger { get; private set; }
	private bool ActivatedOnce;

	void OnEnable()
	{
		if (FindTargetAudioSource == FindReferenceCondition.OnlyIfNull && TargetAudioSource == null) TargetAudioSource = GetComponent<AudioSource>();
		else if (FindTargetAudioSource == FindReferenceCondition.Always) TargetAudioSource = GetComponent<AudioSource>();
	}

	void OnTriggerEnter(Collider CurrentColliderData)
	{
		ObjectAttributesContainer CurrentObjectAttributes = CurrentColliderData.gameObject.GetComponent<ObjectAttributesContainer>();

		if (CurrentObjectAttributes != null)
		{
			if (CurrentObjectAttributes.ContainedObjectAttributes.RoleTag == TargetObjectRoleTag)
			{
				if (PermanentActivation && !ActivatedOnce)
				{
					ActiveTrigger = true;
					RunTasks();

					ActivatedOnce = true;
				}
				else
				{
					ActiveTrigger = true;
					RunTasks();
				}
			}
			else
			{
				ActiveTrigger = false;
			}
		}
	}

	public void RunTasks()
	{
		if (ActiveTrigger && CreateGameObjectsOnTrigger && !ActivatedOnce)
		{
			foreach (GameObject CurrentGameObject in CreationGameObjectList) Instantiate(CurrentGameObject);
		}
	}
}
