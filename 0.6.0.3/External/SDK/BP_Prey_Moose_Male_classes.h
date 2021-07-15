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

// BlueprintGeneratedClass BP_Prey_Moose_Male.BP_Prey_Moose_Male_C
// 0x0018 (FullSize[0x0C00] - InheritedSize[0x0BE8])
class ABP_Prey_Moose_Male_C : public ABP_PreyAI_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0BE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UPhysicsConstraintComponent*                 PhysicsConstraint;                                         // 0x0BF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                           CapsuleCollider_Body;                                      // 0x0BF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Prey_Moose_Male.BP_Prey_Moose_Male_C");
		return ptr;
	}



	void AnimNotify_DeathEnd();
	void EventDead();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Prey_Moose_Male(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
