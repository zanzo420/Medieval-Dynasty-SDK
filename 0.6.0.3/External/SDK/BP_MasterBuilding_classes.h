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

// BlueprintGeneratedClass BP_MasterBuilding.BP_MasterBuilding_C
// 0x0538 (FullSize[0x0758] - InheritedSize[0x0220])
class ABP_MasterBuilding_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UNavModifierComponent*                       NavModifier;                                               // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             DetectionTrace_C;                                          // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            InspectorPoint;                                            // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               AnimalVolume;                                              // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNavigationInvokerComponent*                 NavigationInvoker;                                         // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               InteriorVolume;                                            // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                            UI_Inspector;                                              // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               AllowedToBuild;                                            // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             TeleportPoint;                                             // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        BaseBuildingMesh;                                          // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        SkeletonBuildingMesh;                                      // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             BuildingParent;                                            // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             DetectionTrace_UR;                                         // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             DetectionTrace_DL;                                         // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             DetectionTrace_DR;                                         // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             DetectionTrace_UL;                                         // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Scene;                                                     // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UArrowComponent*>                     BuildingFoundationArrows;                                  // 0x02B0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UMaterialInstanceDynamic*                    GhostMaterialReference;                                    // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Placeable;                                                 // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MYUV[0x7];                                     // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMaterialInterface*>                  BeginBaseMaterials;                                        // 0x02D0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               RotatingRight;                                             // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               RotatingLeft;                                              // 0x02E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_60A0[0x2];                                     // 0x02E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BuildingRotation;                                          // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     CustomName;                                                // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FRotator                                    BaseRotation;                                              // 0x02F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IE66[0x4];                                     // 0x0304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMaterialInterface*>                  BuidingSkeletonMaterials;                                  // 0x0308(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class ABP_MasterBuildModule_C*>             BuildingModules;                                           // 0x0318(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FText                                       InteractActionText;                                        // 0x0328(0x0018) (Edit, BlueprintVisible)
	struct FText                                       InteractSecondActionText;                                  // 0x0340(0x0018) (Edit, BlueprintVisible)
	float                                              InteractionTime;                                           // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_E_Tools>                       InteractToolType;                                          // 0x035C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BBIM[0x3];                                     // 0x035D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                InteractAnimationMontage;                                  // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ID;                                                        // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	float                                              DistanceCheck;                                             // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SFTT[0x4];                                     // 0x037C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_SystemsManager_C*                        SystemsManagerReference;                                   // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class ABP_BaseCharacter_C*>                 People;                                                    // 0x0388(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FST_Building                                CurrentBuildingType;                                       // 0x0398(0x00D0) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class AActor*                                      OccupyingActorReference;                                   // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BuildingHeight;                                            // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BaseTemperature;                                           // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_SlotSettings>                    SleepSlots;                                                // 0x0478(0x0010) (Edit, BlueprintVisible, ContainsInstancedReference)
	float                                              TraceHeight;                                               // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2BPE[0x4];                                     // 0x048C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TEnumAsByte<E_Tools_E_Tools>>               ToolsNeededForWork;                                        // 0x0490(0x0010) (Edit, BlueprintVisible)
	TArray<TEnumAsByte<E_Buildings_E_Buildings>>       DependentBuildings;                                        // 0x04A0(0x0010) (Edit, BlueprintVisible)
	TArray<class ABP_MasterBuilding_C*>                DependentBuildingsReferences;                              // 0x04B0(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               DependentFields;                                           // 0x04C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0HK4[0x7];                                     // 0x04C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ABP_MasterField_C*>                   DependentFieldsReferences;                                 // 0x04C8(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               Constructed;                                               // 0x04D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Destructed;                                                // 0x04D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_57OV[0x6];                                     // 0x04DA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TEnumAsByte<E_BuildingActivities_E_BuildingActivities>> BuildingActivities;                                        // 0x04E0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class ABP_AnimalBase_C*>                    ListOfAnimals;                                             // 0x04F0(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FST_TaskList>                        TaskList;                                                  // 0x0500(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_FurnitureCategory>               ListOfFurniture;                                           // 0x0510(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               BuildAtTheBeginning;                                       // 0x0520(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               OnlyBase;                                                  // 0x0521(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // 0x0522(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6GCF[0x1];                                     // 0x0523(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LevelOfWarming;                                            // 0x0524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TEnumAsByte<E_Resources_E_Resources>>       ExtractedResources;                                        // 0x0528(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_FoliageTargetsData>              FoliageTargets;                                            // 0x0538(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UUI_Inspector_Building_C*                    UI_InspectorReference;                                     // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PlayerInInterior;                                          // 0x0550(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RAAP[0x7];                                     // 0x0551(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FDataTableRowHandle>                 BuildingHandlers;                                          // 0x0558(0x0010) (Edit, BlueprintVisible)
	int                                                CurrentBuildingLevel;                                      // 0x0568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TEnumAsByte<E_ShopType_E_ShopType>                 ShopType;                                                  // 0x056C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZFKT[0x3];                                     // 0x056D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UChildActorComponent*>                ModuleComponents;                                          // 0x0570(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class AActor*>                              QueueActorsReferences;                                     // 0x0580(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              Condition;                                                 // 0x0590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Destroyable;                                               // 0x0594(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GWE8[0x3];                                     // 0x0595(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumberOfConstructedModules;                                // 0x0598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumberOfUnconstructedModules;                              // 0x059C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsWorking;                                                 // 0x05A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JIBK[0x3];                                     // 0x05A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_Hour                                    StartWorkingTime;                                          // 0x05A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_Hour                                    StopWorkingTime;                                           // 0x05B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WZNK[0x4];                                     // 0x05BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_Production_Progress>             CurrentProduction;                                         // 0x05C0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               PlaceableOnWater;                                          // 0x05D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               PlaceableOnlyOnWater;                                      // 0x05D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JQ4Z[0x2];                                     // 0x05D2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     AnimalVolumeLocation;                                      // 0x05D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    AnimalVolumeRotation;                                      // 0x05E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     AnimalVolumeSize;                                          // 0x05EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_BuildingWarningType_E_BuildingWarningType> BuildingWarningType;                                       // 0x05F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QG4K[0x7];                                     // 0x05F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_Production_Progress>             InactiveProduction;                                        // 0x0600(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_Trading_Progress>                CurrentTrade;                                              // 0x0610(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_Trading_Progress>                InactiveTrade;                                             // 0x0620(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<TEnumAsByte<E_Profession_E_Profession>, int>  WorkIntensityByProfession;                                 // 0x0630(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Ghost;                                                     // 0x0680(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0KA5[0x7];                                     // 0x0681(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<TEnumAsByte<E_Tools_Activity_E_Tools_Activity>, struct FST_ToolCost> ToolsBuffer;                                               // 0x0688(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              FoodBuffer;                                                // 0x06D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WaterBuffer;                                               // 0x06DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WoodBuffer;                                                // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ED3W[0x4];                                     // 0x06E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      AreaClass;                                                 // 0x06E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FurnitureCreated;                                          // 0x06F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_058D[0x3];                                     // 0x06F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_Event_BuildingMultipliers               EventMultipliers;                                          // 0x06F4(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_SpawnPointWildAnimal_C*>          WildAnimalsPoints;                                         // 0x06F8(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_Flock_Fish_C*>                    FishesPoints;                                              // 0x0708(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               RemoveGrass;                                               // 0x0718(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CLVX[0x7];                                     // 0x0719(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_BuildSocket_C*                           Socket;                                                    // 0x0720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_SlotSettings>                    WorkSlots;                                                 // 0x0728(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                              FoodDemandValue;                                           // 0x0738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WaterDemandValue;                                          // 0x073C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WoodDemandValue;                                           // 0x0740(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5D9H[0x4];                                     // 0x0744(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TEnumAsByte<E_Tools_Activity_E_Tools_Activity>> AdditionalTools;                                           // 0x0748(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MasterBuilding.BP_MasterBuilding_C");
		return ptr;
	}



	void CheckSocketCompatibility(const struct FDataTableRowHandle& BuildingHandler, bool* Success);
	void GetSocketLocation(struct FTransform* Transform);
	void GetBuildingHandlers(const struct FDataTableRowHandle& HandlerToCompare, TArray<struct FDataTableRowHandle>* BuildingHandlers, bool* Compatibility);
	void GetBuildingReference(class ABP_MasterBuilding_C** MasterBuilding);
	void GetEntrances(TArray<struct FVector>* Entrances);
	void GetBuildingType(TEnumAsByte<E_Buildings_E_Buildings>* GetBuildingType);
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
	void GetInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, float* Condition, bool* CustomText, struct FText* Text, bool* CustomColor, struct FLinearColor* Color);
	void IsInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckCondition);
	void IsToolNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckTools, bool* Success);
	void GetOwnershipType(TEnumAsByte<E_Ownership_E_Ownership>* Ownership);
	void GetInteractTitle(class ABP_BaseCharacter_C* BaseCharacter, bool* Show, struct FText* Title, bool* ShowAdditionalTitle1, struct FText* AdditionalTitleText1, bool* ShowAdditionalTitle2, struct FText* AdditionalTitleText2);
	void GetInteractResources(class ABP_BaseCharacter_C* BaseCharacter, bool* Show, TArray<struct FST_ItemResource>* Resources);
	void GetFluidType(TEnumAsByte<E_Fluids_E_Fluids>* FuildType);
	void GetInteractTool_UI(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool, TEnumAsByte<E_BagMode_E_BagMode>* BagMode, TEnumAsByte<E_BuildingModifications_E_BuildingModifications>* BuildingMode);
	void IsToolInteractable_UI(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility);
	void GetNPCInteractTime(float* Time);
	void IsToolInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility);
	void GetTaskFromActor(struct FST_TaskList* Task);
	void GetInteractIcon(class UTexture2D** Icon);
	void CheckOccupied(class APawn** Character);
	void GetNPCInteractAnimation(TEnumAsByte<E_Sex_E_Sex> Sex, class UAnimMontage** Animation);
	void GetResourceType(TEnumAsByte<E_Resources_E_Resources>* ResourceType);
	void GetHeldItem(class ABP_MasterHoldableItem_C** HeldItem);
	void GetInteractName(class ABP_BaseCharacter_C* BaseCharacter, struct FText* InteractName);
	void GetInteractAction(struct FText* InteractActionText, struct FText* InteractSecondActionText);
	void IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance);
	void GetInteractTool(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool);
	void GetInteractCount(int* Count);
	void DecreaseToolBuffer(TEnumAsByte<E_Tools_Activity_E_Tools_Activity> ToolActivity, float Value);
	void CheckWork(TEnumAsByte<E_Profession_E_Profession> Profession, bool* Success);
	void CheckTool(TEnumAsByte<E_Tools_Activity_E_Tools_Activity> ToolActivity, float Value, TEnumAsByte<E_Profession_E_Profession> Profession, bool* Success, TEnumAsByte<E_Tools_E_Tools>* ToolForAnimation);
	void CheckPointOnTheMap(const struct FVector& Location, bool* OnMap);
	void SetShopType(TEnumAsByte<E_ShopType_E_ShopType> Type, bool InitTradingData);
	void OnPeopleOrAnimalsListChanged();
	void WoodDemand(float* Demand);
	void WaterDemand(float* Demand);
	void FoodDemand(float* Demand);
	void HasResouces(bool* Resources);
	void HasTools(bool* Tools);
	void UnoccupyWorkSlot(int Index, struct FTransform* SlotTransform, bool* HaveStartPoint, struct FTransform* StartPoint);
	void UnoccupyWorkSlots();
	void OccupyWorkSlot(int Index, struct FTransform* SlotTransform, bool* HaveStartPoint, struct FTransform* StartPointTransform);
	void GetRandomUnoccupiedWorkSlot(int WorkSlotIndexToIgnore, int* WorkSlotIndex, bool* Success);
	void GetUnoccupiedWorkSlot(int* WorkSlotIndex, bool* Success);
	void SetSocket();
	void RecoverResources(class UInventoryComponent_C* Inventory);
	void GetTax(int* Price);
	void CheckItemInChest(bool RemoveItem, const struct FName& Item, bool* IsItem);
	void GetNumbersOfAnimals(TEnumAsByte<E_Animals_E_Animals> AnimalType, int* YoungFemaleCount, int* YoungMaleCount, int* FemaleCount, int* MaleCount);
	void CanBeDestroyed_(bool* CanBeDestroyed_);
	void HasWood(bool* wood);
	void HasWater(bool* water);
	void HasFood(bool* Food);
	void HasAnimals(bool* Animals);
	void HasWorkers(bool* Workers);
	void InitNPCBuildingAfterLoad(TArray<struct FST_SAVE_Containers>* Containers, const struct FString& SaveGameVersion);
	void GetNPCDataToSave(struct FST_SAVE_NPC_Building* BuildingData);
	void GetNumberOfFurnitures(int* Value);
	void FindProductionItem(const struct FST_Production_Recipe& Recipe, TArray<struct FST_Production_Progress>* OldProduction, bool* Success, struct FST_Production_Progress* RecipeProgress);
	void IsDamaged(bool* Damaged);
	void RemoveAllAnimals();
	void UpdateProductionOnBuildingChangeLevel();
	void IsLastUnconstructedModule(bool* Last);
	void IsChestEmpty(bool* IsEmpty);
	void UnoccupySleepSlot(int Index, struct FTransform* SlotTransform, bool* HaveStartPoint, struct FTransform* StartPoint);
	void UnoccupySleepSlots();
	void OccupySleepSlot(int Index, struct FTransform* SlotTransform, bool* HaveStartPoint, struct FTransform* StartPointTransform);
	void GetUnoccupiedSleepSlot(int* SleepSlotIndex, bool* Success);
	void RemoveAllPeople();
	void GetNumberOfDoors(bool OnlyConstructed, int* NumberOfDoors);
	void GetAnimalRange(struct FTransform* VolumeTransform, struct FVector* BoxExtent);
	void TeleportPeople(bool PlayerIncluded);
	void GetPeopleID(TArray<struct FString>* ID);
	void UpdatePlacement();
	void CheckSocketPlacement(bool* OverrideTransform, struct FTransform* Transform);
	void InitEconomy(bool Load, TArray<struct FST_SAVE_Production_Progress>* ProductionDataFromFile, TArray<struct FST_SAVE_Trade_Progress>* TradeDataFromFile, TMap<TEnumAsByte<E_Tools_Activity_E_Tools_Activity>, struct FST_ToolCost> ToolsCostsFromFile, float WoodBufferFromFile, float FoodBufferFromFile, float WaterBufferFromFile);
	void SeasonalDecreaseBuildingCondition();
	void UpdateBuildingCondition();
	void GetDataToSave(struct FST_SAVE_Buildings* BuildingData);
	void InitAfterLoad(const struct FString& ID, const struct FString& CustomName, float ZLocation, TArray<struct FST_SAVE_Modules>* ModulesData, TArray<struct FST_SAVE_Containers>* Containers, TArray<struct FST_SAVE_RefillableContainers>* RefillableContainers, TArray<struct FST_SAVE_Campfires>* Campfires, TArray<struct FST_SAVE_Production_Progress>* Production, TArray<struct FST_SAVE_Trade_Progress>* Trade, TMap<TEnumAsByte<E_Profession_E_Profession>, int> WorkIntensityFromFile, TMap<TEnumAsByte<E_Tools_Activity_E_Tools_Activity>, struct FST_ToolCost> ToolsCostsFromFile, float WoodBufferFromFile, float FoodBufferFromFile, float WaterBufferFromFile, bool FurnitureCreatedFromFile, const struct FST_Event_BuildingMultipliers& EventMultipliersFromFile, const struct FString& SaveGameVersion, TEnumAsByte<E_ShopType_E_ShopType> ShopTypeFromFile);
	void SetID();
	void AutoAssigningPeople();
	void CheckIfBuildingIsConstructed(bool Load);
	void UpdateLevelOfWarming();
	void ChangeModule(int SocketID, int Module_ID);
	void GetBuildingModulesDataFromSlot(int SocketID, bool* Success, TArray<struct FST_Module>* ModulesData);
	void GetBuildingModuleDataFromSlot(int ModuleID, const struct FST_BuildingModuleSocket& SocketData, bool* Success, struct FST_Module* ModuleData);
	void SetStairs();
	void ChangeBuildingLevel(int NewLevel);
	void OnOwnershipSwap(TEnumAsByte<E_Ownership_E_Ownership> NewOwnership);
	void GetDependentFieldsCurrentTask(class ABP_MasterField_C* Field, TEnumAsByte<E_FieldActivities_E_FieldActivities> FieldActivity, bool* IsTask, bool* IsItem, TEnumAsByte<E_Tools_Activity_E_Tools_Activity>* NeedToolActivity, struct FName* NeedItem, struct FST_FieldTasksLists* Task, int* ChunkId);
	void GetFurniture(TEnumAsByte<E_FurnitureCategories_E_FurnitureCategories> FurnitureCategory, bool* Success, TArray<class ABP_MasterFurniture_C*>* Furniture);
	void RemoveFurniture(class ABP_MasterFurniture_C* Furniture);
	void GetFieldTask(struct FST_FieldTasksLists* Task, bool* IsTask, bool* IsItem, TEnumAsByte<E_Tools_Activity_E_Tools_Activity>* NeedToolActivity, struct FName* NeedItem);
	void ChangeTaskOccupied(const struct FST_TaskList& Task);
	void GetBuildingTask(struct FST_TaskList* Task, bool* IsTask);
	void GetDependentFieldsTask(struct FST_FieldTasksLists* Task, bool* IsTask, bool* IsItem, TEnumAsByte<E_Tools_Activity_E_Tools_Activity>* NeedToolAcitvity, struct FName* NeedItem);
	void GetDependentBuildingsTask(struct FST_TaskList* Task, bool* IsTask);
	void AddFurniture(class ABP_MasterFurniture_C* Furniture);
	void SortTaskList();
	void UpdateTaskList(const struct FST_TaskList& Task, bool IsAdd);
	void RemoveAnimal(class ABP_AnimalBase_C* Animal);
	void AddAnimal(class ABP_AnimalBase_C* Animal);
	void CheckIsMaxAnimal(bool* IsFull);
	void GenerateBuilding(bool Init, bool Load, TArray<struct FST_SAVE_Modules>* LoadModulesData);
	void CheckObstruction(bool* CanBePlaced_);
	void CheckIsOccupied(bool* Occupied);
	void RemovePeople(class ABP_BaseCharacter_C* Person);
	void CheckIsMaxPeople(bool* IsFull);
	void AddPeople(class ABP_BaseCharacter_C* Person);
	void GenerateDestruction(float Intensity);
	void UpdateBaseRotation(const struct FRotator& NewBaseRotation);
	void CheckBasementPlaceability(bool* PlacementPossible, float* Min);
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
	void InteractWithImpaledItem(class ABP_BaseCharacter_C* BaseCharacter);
	void AddImpaledItem(class AActor* ImpaledItem);
	void RemoveImpaledItem(class AActor* ImpaledItem);
	void StartAttackFunction(bool Timer, const struct FName& Socket);
	void StopAttackFunction();
	void CreateBuildingGhost(bool Load);
	void FinishedBuilding(bool Load);
	void DestroyBuilding();
	void SetOccupiedBuilding(class AActor* Actor, bool Occupied);
	void ToolInteract(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool UseChunkData, const struct FST_Chunks& ChunkData);
	void ReceiveBeginPlay();
	void BndEvt__InteriorVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__InteriorVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ShowInspectorUI();
	void ExecuteFinishVisuals(bool Load);
	void ExecuteFinishLogic(bool Load);
	void ExecuteInitialVisuals(bool Load);
	void ExecuteInitialLogic(bool Load);
	void UpdateGhost(bool CheckPlacement);
	void CreateFurnitures();
	void SeasonalUpdate();
	void ExecuteUbergraph_BP_MasterBuilding(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
