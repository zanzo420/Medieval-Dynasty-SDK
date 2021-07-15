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

// BlueprintGeneratedClass BP_Trap_Bird.BP_Trap_Bird_C
// 0x0018 (FullSize[0x0540] - InheritedSize[0x0528])
class ABP_Trap_Bird_C : public ABP_MasterTrap_SkeletalMesh_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0528(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                        Feather2;                                                  // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Feather1;                                                  // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Trap_Bird.BP_Trap_Bird_C");
		return ptr;
	}



	void OnNotifyEnd_5F3ABEDD4194AC71E5DFFA8724CC778B(const struct FName& NotifyName);
	void OnNotifyBegin_5F3ABEDD4194AC71E5DFFA8724CC778B(const struct FName& NotifyName);
	void OnInterrupted_5F3ABEDD4194AC71E5DFFA8724CC778B(const struct FName& NotifyName);
	void OnBlendOut_5F3ABEDD4194AC71E5DFFA8724CC778B(const struct FName& NotifyName);
	void OnCompleted_5F3ABEDD4194AC71E5DFFA8724CC778B(const struct FName& NotifyName);
	void OnNotifyEnd_4E90994C4E910164FED18EAB8AC2C2A8(const struct FName& NotifyName);
	void OnNotifyBegin_4E90994C4E910164FED18EAB8AC2C2A8(const struct FName& NotifyName);
	void OnInterrupted_4E90994C4E910164FED18EAB8AC2C2A8(const struct FName& NotifyName);
	void OnBlendOut_4E90994C4E910164FED18EAB8AC2C2A8(const struct FName& NotifyName);
	void OnCompleted_4E90994C4E910164FED18EAB8AC2C2A8(const struct FName& NotifyName);
	void ActivateTrap(bool Load);
	void DeactivateTrap();
	void Catch(bool Load);
	void PickUpAnimal(class ABP_BaseCharacter_C* BaseCharacter);
	void ExecuteUbergraph_BP_Trap_Bird(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
