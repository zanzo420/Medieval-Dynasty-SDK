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

// BlueprintGeneratedClass BP_MasterInteractiveResource.BP_MasterInteractiveResource_C
// 0x00F0 (FullSize[0x0310] - InheritedSize[0x0220])
class ABP_MasterInteractiveResource_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                        ResourceMesh;                                              // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<bool>                                       Interactable;                                              // 0x0230(0x0010) (Edit, BlueprintVisible)
	TEnumAsByte<E_Tools_E_Tools>                       ToolType;                                                  // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CFKP[0x7];                                     // 0x0241(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                NPC_InteractFemaleMontage;                                 // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                NPC_InteractMaleMontage;                                   // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NPC_InteractTime;                                          // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YOUW[0x4];                                     // 0x025C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<bool>                                       NPC_Interactable;                                          // 0x0260(0x0010) (Edit, BlueprintVisible)
	float                                              BaseCondition;                                             // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Resources_E_Resources>               ResourceType;                                              // 0x0274(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GOW0[0x3];                                     // 0x0275(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_ItemSource>                      Items;                                                     // 0x0278(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_ItemGeneratorSettings>           ItemsGenerator;                                            // 0x0288(0x0010) (Edit, BlueprintVisible)
	int                                                NumberOfSeasonsToReset;                                    // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DropItems;                                                 // 0x029C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Replace;                                                   // 0x029D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Skills_E_Skills>                     Skill;                                                     // 0x029E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ACNO[0x1];                                     // 0x029F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ValueSkill;                                                // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes>   Technology_OnDestroy;                                      // 0x02A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2H4W[0x3];                                     // 0x02A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ValueTechnology_OnDestroy;                                 // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes>   Technology_OnItemsDrop;                                    // 0x02AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NECZ[0x3];                                     // 0x02AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ValueTechnology_OnItemsDrop;                               // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Debug;                                                     // 0x02B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7UC9[0x3];                                     // 0x02B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMesh*                                 BaseResourceMesh;                                          // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SystemsManager_C*                        SystemsManagerReference;                                   // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                                 DepletedResourceMesh;                                      // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Depleted;                                                  // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TG8Q[0x3];                                     // 0x02D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BaseExtraction;                                            // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentNumberOfSeasonsToReset;                             // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YN55[0x4];                                     // 0x02DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       InteractionName_Full;                                      // 0x02E0(0x0018) (Edit, BlueprintVisible)
	struct FText                                       InteractionName_Empty;                                     // 0x02F8(0x0018) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MasterInteractiveResource.BP_MasterInteractiveResource_C");
		return ptr;
	}



	void IsGrabbable(bool* Grabbable);
	void IsItemNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckItems, bool* Success);
	void GetInteractAdditionalStatus(class ABP_BaseCharacter_C* BaseCharacter, bool* CustomColor, struct FLinearColor* Color, struct FText* Status);
	void IsInteractAdditionalStatus(class ABP_BaseCharacter_C* BaseCharacter, bool* ShowStatus);
	void GetInteractItem(class ABP_BaseCharacter_C* BaseCharacter, struct FDataTableRowHandle* ItemHandler);
	void IsItemInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility);
	void GetFishData(struct FST_ItemResource* Item, struct FTransform* Transform);
	void GetID(struct FString* ID);
	void GetInteractionDistance(float* Distance);
	void GetOff_HandItem(class ABP_MasterHoldableItem_C** Off_HandItem);
	void GetInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, float* Condition, bool* CustomText, struct FText* Text, bool* CustomColor, struct FLinearColor* Color);
	void IsInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckCondition);
	void IsToolNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckTools, bool* Success);
	void GetOwnershipType(TEnumAsByte<E_Ownership_E_Ownership>* Ownership);
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
	void GetInteractIcon(class UTexture2D** Icon);
	void GetTaskFromActor(struct FST_TaskList* Task);
	void GetInteractResources(class ABP_BaseCharacter_C* BaseCharacter, bool* Show, TArray<struct FST_ItemResource>* Resources);
	void GetInteractTitle(class ABP_BaseCharacter_C* BaseCharacter, bool* Show, struct FText* Title, bool* ShowAdditionalTitle1, struct FText* AdditionalTitleText1, bool* ShowAdditionalTitle2, struct FText* AdditionalTitleText2);
	void GetNPCInteractAnimation(TEnumAsByte<E_Sex_E_Sex> Sex, class UAnimMontage** Animation);
	void GetNPCInteractTime(float* Time);
	void GetFluidType(TEnumAsByte<E_Fluids_E_Fluids>* FuildType);
	void SetLoadedData(float Condition, int SeasonsToReset);
	void ResetResource();
	void GenerateCollectedResources(class ABP_BaseCharacter_C* BaseCharacter);
	void GenerateDroppedResources(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit);
	void ConvertItemsToTable(TArray<struct FST_ItemResource>* Resources);
	void UserConstructionScript();
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
	void ExecuteUbergraph_BP_MasterInteractiveResource(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
