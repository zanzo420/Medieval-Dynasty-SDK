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

// BlueprintGeneratedClass BP_BoidWithCollision.BP_BoidWithCollision_C
// 0x0030 (FullSize[0x0368] - InheritedSize[0x0338])
class ABP_BoidWithCollision_C : public ABoidSkeletal
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0338(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FST_ItemResource                            FishResource;                                              // 0x0340(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_Flock_C*                                 BP_Flock_Ref;                                              // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SkillForKillValue;                                         // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TechnologyForKillValue;                                    // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BoidWithCollision.BP_BoidWithCollision_C");
		return ptr;
	}



	void IsGrabbable(bool* Grabbable);
	void IsItemNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckItems, bool* Success);
	void GetInteractAdditionalStatus(class ABP_BaseCharacter_C* BaseCharacter, bool* CustomColor, struct FLinearColor* Color, struct FText* Status);
	void IsInteractAdditionalStatus(class ABP_BaseCharacter_C* BaseCharacter, bool* ShowStatus);
	void GetInteractItem(class ABP_BaseCharacter_C* BaseCharacter, struct FDataTableRowHandle* ItemHandler);
	void IsItemInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility);
	void GetFishData(struct FST_ItemResource* Item, struct FTransform* Transform);
	void IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance);
	void IsToolInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility);
	void IsToolInteractable_UI(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility);
	void GetInteractName(class ABP_BaseCharacter_C* BaseCharacter, struct FText* InteractName);
	void GetInteractAction(struct FText* InteractActionText, struct FText* InteractSecondActionText);
	void GetInteractTool(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool);
	void GetInteractTool_UI(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool, TEnumAsByte<E_BagMode_E_BagMode>* BagMode, TEnumAsByte<E_BuildingModifications_E_BuildingModifications>* BuildingMode);
	void GetInteractCount(int* Count);
	void GetHeldItem(class ABP_MasterHoldableItem_C** HeldItem);
	void GetResourceType(TEnumAsByte<E_Resources_E_Resources>* ResourceType);
	void CheckOccupied(class APawn** Character);
	void IsInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckCondition);
	void GetInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, float* Condition, bool* CustomText, struct FText* Text, bool* CustomColor, struct FLinearColor* Color);
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
	void GetInteractionDistance(float* Distance);
	void GetID(struct FString* ID);
	void OnGoalReached(class ABoid* Boid);
	void Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer);
	void InteractInput(bool KeyDown);
	void InteractStart(class ABP_BaseCharacter_C* BaseCharacter);
	void InteractCancel(class ABP_BaseCharacter_C* BaseCharacter);
	void SetOccupied(class APawn* Character);
	void SetTaskInActor(const struct FST_TaskList& Task);
	void ChangeTaskIsOccupied();
	void PerformActorInteraction();
	void IsLookedAt(bool Active);
	void ShowInspectorUI();
	void InteractWithImpaledItem(class ABP_BaseCharacter_C* BaseCharacter);
	void AddImpaledItem(class AActor* ImpaledItem);
	void RemoveImpaledItem(class AActor* ImpaledItem);
	void StartAttackFunction(bool Timer, const struct FName& Socket);
	void StopAttackFunction();
	void ReceiveBeginPlay();
	void ToolInteract(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool UseChunkData, const struct FST_Chunks& ChunkData);
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void OnSpawnedBP();
	void ExecuteUbergraph_BP_BoidWithCollision(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
