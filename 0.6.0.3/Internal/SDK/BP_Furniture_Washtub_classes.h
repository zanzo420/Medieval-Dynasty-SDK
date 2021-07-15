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

// BlueprintGeneratedClass BP_Furniture_Washtub.BP_Furniture_Washtub_C
// 0x0080 (FullSize[0x04E8] - InheritedSize[0x0468])
class ABP_Furniture_Washtub_C : public ABP_Furniture_RefillableContainer_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0468(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USphereComponent*                            ObstructionMesh;                                           // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      water;                                                     // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Mesh;                                                      // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UWashtub_AnimBP_C*                           FillWashtubAnimRef;                                        // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InteractionTime;                                           // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1BPP[0x4];                                     // 0x0494(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings> MontageSettings;                                           // 0x0498(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Furniture_Washtub.BP_Furniture_Washtub_C");
		return ptr;
	}



	void RemoveItems(class ABP_BaseCharacter_C* BaseCharacter);
	void IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance);
	void GetInteractAction(struct FText* InteractActionText, struct FText* InteractSecondActionText);
	void OnOwnershipSwap(TEnumAsByte<E_Ownership_E_Ownership> NewOwnership);
	void CheckObstruction(bool* CanBePlaced_);
	void GetFluidType(TEnumAsByte<E_Fluids_E_Fluids>* FuildType);
	void UpdateCapacityAnimation(float CapacityRatio);
	void DisableGhost();
	void EnableGhost();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void InteractStart(class ABP_BaseCharacter_C* BaseCharacter);
	void Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer);
	void ExecuteUbergraph_BP_Furniture_Washtub(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
