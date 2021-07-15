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

// BlueprintGeneratedClass BP_MasterFoliage.BP_MasterFoliage_C
// 0x01F1 (FullSize[0x0891] - InheritedSize[0x06A0])
class UBP_MasterFoliage_C : public UFoliageInstancedStaticMeshComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	bool                                               UsePickingAnimation;                                       // 0x06A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               PreferTwoHandedAnimation;                                  // 0x06A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RO6Q[0x6];                                     // 0x06AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<bool>                                       Interactable;                                              // 0x06B0(0x0010) (Edit, BlueprintVisible)
	struct FText                                       InteractText;                                              // 0x06C0(0x0018) (Edit, BlueprintVisible)
	struct FText                                       InteractTimerText;                                         // 0x06D8(0x0018) (Edit, BlueprintVisible)
	struct FText                                       InteractNameText;                                          // 0x06F0(0x0018) (Edit, BlueprintVisible)
	struct FString                                     ID_Replace;                                                // 0x0708(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                               Replace;                                                   // 0x0718(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NXUP[0x7];                                     // 0x0719(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFoliageType_InstancedStaticMesh*            ReplaceFoliageType;                                        // 0x0720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFoliageType_InstancedStaticMesh*            FoliageType;                                               // 0x0728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Resources_E_Resources>               ResourceType;                                              // 0x0730(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DropItems;                                                 // 0x0731(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AdditionalStage;                                           // 0x0732(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PFCM[0x5];                                     // 0x0733(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      StageClass;                                                // 0x0738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Skills_E_Skills>                     Skill;                                                     // 0x0740(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TI7B[0x3];                                     // 0x0741(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ValueSkill;                                                // 0x0744(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_E_Tools>                       ToolType;                                                  // 0x0748(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_W91F[0x7];                                     // 0x0749(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_SystemsManager_C*                        SystemsManagerReference;                                   // 0x0750(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BaseCondition;                                             // 0x0758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ResourceCondition;                                         // 0x075C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               CollisionCheck;                                            // 0x075D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_X0Y4[0x2];                                     // 0x075E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                NPC_InteractFemaleMontage;                                 // 0x0760(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                NPC_InteractMaleMontage;                                   // 0x0768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NPC_InteractTime;                                          // 0x0770(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7JP2[0x4];                                     // 0x0774(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_ItemSeasonalSource                      Items;                                                     // 0x0778(0x0040) (Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<bool>                                       NPC_Interactable;                                          // 0x07B8(0x0010) (Edit, BlueprintVisible)
	TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes>   Technology_AdditionalStage;                                // 0x07C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_J71R[0x3];                                     // 0x07C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ValueTechnology_AdditionalStage;                           // 0x07CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes>   Technology_OnItemsDrop;                                    // 0x07D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_F6E3[0x3];                                     // 0x07D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ValueTechnology_OnItemsDrop;                               // 0x07D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes>   Technology_OnDestroy;                                      // 0x07D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3SUD[0x3];                                     // 0x07D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ValueTechnology_OnDestroy;                                 // 0x07DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ABP_BaseCharacter_C*                         BaseCharacterRef;                                          // 0x07E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  HitRef;                                                    // 0x07E8(0x008C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	int                                                NumberOfSeasonsToReset;                                    // 0x0874(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DownAtTheBeginning;                                        // 0x0878(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8COH[0x7];                                     // 0x0879(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ID;                                                        // 0x0880(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               RemoveForever;                                             // 0x0890(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MasterFoliage.BP_MasterFoliage_C");
		return ptr;
	}



	void IsGrabbable(bool* Grabbable);
	void IsItemNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckItems, bool* Success);
	void GetInteractItem(class ABP_BaseCharacter_C* BaseCharacter, struct FDataTableRowHandle* ItemHandler);
	void IsItemInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility);
	void GetInteractAdditionalStatus(class ABP_BaseCharacter_C* BaseCharacter, bool* CustomColor, struct FLinearColor* Color, struct FText* Status);
	void IsInteractAdditionalStatus(class ABP_BaseCharacter_C* BaseCharacter, bool* ShowStatus);
	void GetFishData(struct FST_ItemResource* Item, struct FTransform* Transform);
	void GetID(struct FString* ID);
	void GetInteractionDistance(float* Distance);
	void GetOff_HandItem(class ABP_MasterHoldableItem_C** Off_HandItem);
	void IsInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckCondition);
	void GetInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, float* Condition, bool* CustomText, struct FText* Text, bool* CustomColor, struct FLinearColor* Color);
	void IsToolNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckTools, bool* Success);
	void GetOwnershipType(TEnumAsByte<E_Ownership_E_Ownership>* Ownership);
	void GetInteractTitle(class ABP_BaseCharacter_C* BaseCharacter, bool* Show, struct FText* Title, bool* ShowAdditionalTitle1, struct FText* AdditionalTitleText1, bool* ShowAdditionalTitle2, struct FText* AdditionalTitleText2);
	void GetInteractResources(class ABP_BaseCharacter_C* BaseCharacter, bool* Show, TArray<struct FST_ItemResource>* Resources);
	void GetFluidType(TEnumAsByte<E_Fluids_E_Fluids>* FuildType);
	void IsToolInteractable_UI(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility);
	void GetInteractTool_UI(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool, TEnumAsByte<E_BagMode_E_BagMode>* BagMode, TEnumAsByte<E_BuildingModifications_E_BuildingModifications>* BuildingMode);
	void GetNPCInteractTime(float* Time);
	void IsToolInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility);
	void GetTaskFromActor(struct FST_TaskList* Task);
	void GetInteractIcon(class UTexture2D** Icon);
	void CheckOccupied(class APawn** Character);
	void GetNPCInteractAnimation(TEnumAsByte<E_Sex_E_Sex> Sex, class UAnimMontage** Animation);
	void GetResourceType(TEnumAsByte<E_Resources_E_Resources>* ResourceType);
	void GetHeldItem(class ABP_MasterHoldableItem_C** HeldItem);
	void GetInteractCount(int* Count);
	void GetInteractTool(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool);
	void IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance);
	void GetInteractAction(struct FText* InteractActionText, struct FText* InteractSecondActionText);
	void GetInteractName(class ABP_BaseCharacter_C* BaseCharacter, struct FText* InteractName);
	void GenerateCollectedResources(class ABP_BaseCharacter_C* BaseCharacter);
	void GetResources(TArray<struct FST_ItemSource>* Resources);
	void ConvertItemsToTable(class UBP_CharacterStatsComponent_C* StatsComponent, TArray<struct FST_ItemResource>* FinalResources);
	void InteractInput(bool KeyDown);
	void InteractCancel(class ABP_BaseCharacter_C* BaseCharacter);
	void SetOccupied(class APawn* Character);
	void SetTaskInActor(const struct FST_TaskList& Task);
	void ChangeTaskIsOccupied();
	void IsLookedAt(bool Active);
	void ShowInspectorUI();
	void InteractWithImpaledItem(class ABP_BaseCharacter_C* BaseCharacter);
	void AddImpaledItem(class AActor* ImpaledItem);
	void RemoveImpaledItem(class AActor* ImpaledItem);
	void StartAttackFunction(bool Timer, const struct FName& Socket);
	void StopAttackFunction();
	void ReceiveBeginPlay();
	void ToolInteract(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool UseChunkData, const struct FST_Chunks& ChunkData);
	void Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer);
	void PerformActorInteraction();
	void InteractStart(class ABP_BaseCharacter_C* BaseCharacter);
	void ExecuteUbergraph_BP_MasterFoliage(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
