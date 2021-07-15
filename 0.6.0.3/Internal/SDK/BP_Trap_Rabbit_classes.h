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

// BlueprintGeneratedClass BP_Trap_Rabbit.BP_Trap_Rabbit_C
// 0x0010 (FullSize[0x0538] - InheritedSize[0x0528])
class ABP_Trap_Rabbit_C : public ABP_MasterTrap_SkeletalMesh_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0528(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USkeletalMeshComponent*                      Rabbit;                                                    // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Trap_Rabbit.BP_Trap_Rabbit_C");
		return ptr;
	}



	void OnNotifyEnd_9CAF97F4492F26FF8D23E291A01C0A01(const struct FName& NotifyName);
	void OnNotifyBegin_9CAF97F4492F26FF8D23E291A01C0A01(const struct FName& NotifyName);
	void OnInterrupted_9CAF97F4492F26FF8D23E291A01C0A01(const struct FName& NotifyName);
	void OnBlendOut_9CAF97F4492F26FF8D23E291A01C0A01(const struct FName& NotifyName);
	void OnCompleted_9CAF97F4492F26FF8D23E291A01C0A01(const struct FName& NotifyName);
	void OnNotifyEnd_A99CB12E42209295B2895A8F695D1A5A(const struct FName& NotifyName);
	void OnNotifyBegin_A99CB12E42209295B2895A8F695D1A5A(const struct FName& NotifyName);
	void OnInterrupted_A99CB12E42209295B2895A8F695D1A5A(const struct FName& NotifyName);
	void OnBlendOut_A99CB12E42209295B2895A8F695D1A5A(const struct FName& NotifyName);
	void OnCompleted_A99CB12E42209295B2895A8F695D1A5A(const struct FName& NotifyName);
	void ActivateTrap(bool Load);
	void DeactivateTrap();
	void Catch(bool Load);
	void PickUpAnimal(class ABP_BaseCharacter_C* BaseCharacter);
	void ExecuteUbergraph_BP_Trap_Rabbit(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
