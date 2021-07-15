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

// BlueprintGeneratedClass BP_CaveBlocker.BP_CaveBlocker_C
// 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
class ABP_CaveBlocker_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CaveBlocker.BP_CaveBlocker_C");
		return ptr;
	}



	void IsGrabbable(bool* Grabbable);
	void IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance);
	void IsItemInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility);
	void IsToolInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility);
	void IsToolInteractable_UI(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility);
	void GetInteractName(class ABP_BaseCharacter_C* BaseCharacter, struct FText* InteractName);
	void GetInteractAction(struct FText* InteractActionText, struct FText* InteractSecondActionText);
	void GetInteractItem(class ABP_BaseCharacter_C* BaseCharacter, struct FDataTableRowHandle* ItemHandler);
	void GetInteractTool(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool);
	void GetInteractTool_UI(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool, TEnumAsByte<E_BagMode_E_BagMode>* BagMode, TEnumAsByte<E_BuildingModifications_E_BuildingModifications>* BuildingMode);
	void GetInteractCount(int* Count);
	void GetHeldItem(class ABP_MasterHoldableItem_C** HeldItem);
	void GetResourceType(TEnumAsByte<E_Resources_E_Resources>* ResourceType);
	void CheckOccupied(class APawn** Character);
	void IsInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckCondition);
	void GetInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, float* Condition, bool* CustomText, struct FText* Text, bool* CustomColor, struct FLinearColor* Color);
	void IsInteractAdditionalStatus(class ABP_BaseCharacter_C* BaseCharacter, bool* ShowStatus);
	void GetInteractAdditionalStatus(class ABP_BaseCharacter_C* BaseCharacter, bool* CustomColor, struct FLinearColor* Color, struct FText* Status);
	void GetInteractIcon(class UTexture2D** Icon);
	void GetTaskFromActor(struct FST_TaskList* Task);
	void GetInteractResources(class ABP_BaseCharacter_C* BaseCharacter, bool* Show, TArray<struct FST_ItemResource>* Resources);
	void GetInteractTitle(class ABP_BaseCharacter_C* BaseCharacter, bool* Show, struct FText* Title, bool* ShowAdditionalTitle1, struct FText* AdditionalTitleText1, bool* ShowAdditionalTitle2, struct FText* AdditionalTitleText2);
	void GetNPCInteractAnimation(TEnumAsByte<E_Sex_E_Sex> Sex, class UAnimMontage** Animation);
	void GetNPCInteractTime(float* Time);
	void GetFluidType(TEnumAsByte<E_Fluids_E_Fluids>* FuildType);
	void GetOwnershipType(TEnumAsByte<E_Ownership_E_Ownership>* Ownership);
	void IsToolNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckTools, bool* Success);
	void GetOff_HandItem(class ABP_MasterHoldableItem_C** Off_HandItem);
	void IsItemNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckItems, bool* Success);
	void GetInteractionDistance(float* Distance);
	void GetID(struct FString* ID);
	void GetFishData(struct FST_ItemResource* Item, struct FTransform* Transform);
	void Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer);
	void InteractInput(bool KeyDown);
	void InteractStart(class ABP_BaseCharacter_C* BaseCharacter);
	void InteractCancel(class ABP_BaseCharacter_C* BaseCharacter);
	void SetOccupied(class APawn* Character);
	void SetTaskInActor(const struct FST_TaskList& Task);
	void ChangeTaskIsOccupied();
	void ToolInteract(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool UseChunkData, const struct FST_Chunks& ChunkData);
	void PerformActorInteraction();
	void IsLookedAt(bool Active);
	void ShowInspectorUI();
	void InteractWithImpaledItem(class ABP_BaseCharacter_C* BaseCharacter);
	void AddImpaledItem(class AActor* ImpaledItem);
	void RemoveImpaledItem(class AActor* ImpaledItem);
	void StartAttackFunction(bool Timer, const struct FName& Socket);
	void StopAttackFunction();
	void EnableBlocker();
	void DisableBlocker();
	void ExecuteUbergraph_BP_CaveBlocker(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
