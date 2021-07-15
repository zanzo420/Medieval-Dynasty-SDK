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

// BlueprintGeneratedClass BP_Trap_Rat.BP_Trap_Rat_C
// 0x0010 (FullSize[0x0538] - InheritedSize[0x0528])
class ABP_Trap_Rat_C : public ABP_MasterTrap_SkeletalMesh_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0528(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USkeletalMeshComponent*                      Rat;                                                       // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Trap_Rat.BP_Trap_Rat_C");
		return ptr;
	}



	void OnNotifyEnd_EF555A7444D700EAA566EBA7ADC7B683(const struct FName& NotifyName);
	void OnNotifyBegin_EF555A7444D700EAA566EBA7ADC7B683(const struct FName& NotifyName);
	void OnInterrupted_EF555A7444D700EAA566EBA7ADC7B683(const struct FName& NotifyName);
	void OnBlendOut_EF555A7444D700EAA566EBA7ADC7B683(const struct FName& NotifyName);
	void OnCompleted_EF555A7444D700EAA566EBA7ADC7B683(const struct FName& NotifyName);
	void OnNotifyEnd_0547A66147ADF188FCFA77A050A96CB8(const struct FName& NotifyName);
	void OnNotifyBegin_0547A66147ADF188FCFA77A050A96CB8(const struct FName& NotifyName);
	void OnInterrupted_0547A66147ADF188FCFA77A050A96CB8(const struct FName& NotifyName);
	void OnBlendOut_0547A66147ADF188FCFA77A050A96CB8(const struct FName& NotifyName);
	void OnCompleted_0547A66147ADF188FCFA77A050A96CB8(const struct FName& NotifyName);
	void ActivateTrap(bool Load);
	void DeactivateTrap();
	void Catch(bool Load);
	void PickUpAnimal(class ABP_BaseCharacter_C* BaseCharacter);
	void ExecuteUbergraph_BP_Trap_Rat(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
