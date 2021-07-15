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

// BlueprintGeneratedClass BP_Prey_Deer_Female_Young.BP_Prey_Deer_Female_Young_C
// 0x0020 (FullSize[0x0C08] - InheritedSize[0x0BE8])
class ABP_Prey_Deer_Female_Young_C : public ABP_PreyAI_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0BE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UPhysicsConstraintComponent*                 PhysicsConstraint;                                         // 0x0BF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                           CapsuleCollider_Body;                                      // 0x0BF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_Comp_GrowOld_C*                          BP_Comp_GrowOld;                                           // 0x0C00(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Prey_Deer_Female_Young.BP_Prey_Deer_Female_Young_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void EventDead();
	void ExecuteUbergraph_BP_Prey_Deer_Female_Young(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
