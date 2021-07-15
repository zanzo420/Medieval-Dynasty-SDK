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

// BlueprintGeneratedClass BP_Trap_FishingNetSmall.BP_Trap_FishingNetSmall_C
// 0x0048 (FullSize[0x0578] - InheritedSize[0x0530])
class ABP_Trap_FishingNetSmall_C : public ABP_MasterTrap_StaticMesh_Net_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0530(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USkeletalMeshComponent*                      Fish4_f;                                                   // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Fish3_b;                                                   // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Fish2_f;                                                   // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Fish1_b;                                                   // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Fish3_f;                                                   // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Fish4_b;                                                   // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Fish2_b;                                                   // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Fish1_f;                                                   // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Trap_FishingNetSmall.BP_Trap_FishingNetSmall_C");
		return ptr;
	}



	void Catch(bool Load);
	void PickUpAnimal(class ABP_BaseCharacter_C* BaseCharacter);
	void ExecuteUbergraph_BP_Trap_FishingNetSmall(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
