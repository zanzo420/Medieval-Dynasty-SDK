#pragma once

// Name: Medieval Dynasty, Version: 0.6.0.3


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GroupManager.BP_GroupManager_C
// 0x005D (FullSize[0x027D] - InheritedSize[0x0220])
class ABP_GroupManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBillboardComponent*                         Billboard;                                                 // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<class ABP_GroundAnimalBase_C*>              Group;                                                     // 0x0238(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class ABP_GroundAnimalBase_C*                      GroupLeader;                                               // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Active;                                                    // 0x0250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<BP_Enum_GroupManager_EngageBehavior_EBP_Enum_GroupManager_EngageBehavior> EngageBehaviorMethod;                                      // 0x0251(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<BP_Enum_GroundEngageBehavior_EBP_Enum_GroundEngageBehavior> GroupEngageBehavior;                                       // 0x0252(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ChooseRandomLeader_;                                       // 0x0253(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              NewLeaderRate;                                             // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                LeaderTimerHandle;                                         // 0x0258(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FName                                       EngageActor;                                               // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_GroundAnimalBase_C*                      OldGroupLeader;                                            // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               NoDamageByMembers;                                         // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ChooseLeader;                                              // 0x0271(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               SetNoDamage;                                               // 0x0272(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_2R85[0x1];                                     // 0x0273(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       GroupTag;                                                  // 0x0274(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AddGroupTag;                                               // 0x027C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GroupManager.BP_GroupManager_C");
		return ptr;
	}



	void fnPopulateBehavior();
	void OnRep_AddGroupTag();
	void fnSetNoDamageTags();
	void OnRep_SetNoDamage();
	void fnSetNewLeader();
	void OnRep_ChooseLeader();
	void fnSetGroupEngageBehavior(class AActor* EngagedActor);
	void fnGetRandomMember(class ABP_GroundAnimalBase_C** RandomMember);
	void ReceiveBeginPlay();
	void EventSetGroup();
	void EventChooseNewLeader();
	void EventLeaveGroup(class ABP_GroundAnimalBase_C* Animal);
	void ExecuteUbergraph_BP_GroupManager(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
