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

// BlueprintGeneratedClass BP_MasterFurniture.BP_MasterFurniture_C
// 0x0228 (FullSize[0x0448] - InheritedSize[0x0220])
class ABP_MasterFurniture_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USphereComponent*                            InspectorPoint;                                            // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                            UI_Inspector;                                              // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             ActorRoot;                                                 // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               Interactable;                                              // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6QSN[0x7];                                     // 0x0241(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       InteractActionText;                                        // 0x0248(0x0018) (Edit, BlueprintVisible)
	bool                                               BuildAtTheBeginning;                                       // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               Placeable;                                                 // 0x0261(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Hidden;                                                    // 0x0262(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               RotatingRight;                                             // 0x0263(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               RotatingLeft;                                              // 0x0264(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_D3EV[0x3];                                     // 0x0265(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Rotation;                                                  // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    BaseRotation;                                              // 0x026C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    GhostMaterialReference;                                    // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>                  FurnitureMaterials;                                        // 0x0280(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_InteractSlot>                    NPC_InteractSlots;                                         // 0x0290(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         Furniture;                                                 // 0x02A0(0x0010) (Edit, BlueprintVisible, NoDestructor)
	class ABP_SystemsManager_C*                        SystemsManagerReference;                                   // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // 0x02B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               InHouse;                                                   // 0x02B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_AXS2[0x6];                                     // 0x02BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_Furniture                               FurnitureData;                                             // 0x02C0(0x0078) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FHitResult                                  PlacementHit;                                              // 0x0338(0x008C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	unsigned char                                      UnknownData_WZQA[0x4];                                     // 0x03C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUI_Inspector_Furniture_C*                   UI_InspectorReference;                                     // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_InteractSlot>                    Animal_InteractSlots;                                      // 0x03D0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_InteractSlotSettings>            InteractSlotSettings;                                      // 0x03E0(0x0010) (Edit, BlueprintVisible)
	TEnumAsByte<E_BuildingWarningType_E_BuildingWarningType> BuildingWarningType;                                       // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_C2WH[0x7];                                     // 0x03F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnDestroyFurniture;                                        // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnPlayerOccupy;                                            // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              InteractionDistance;                                       // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Constructed;                                               // 0x041C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               RemoveGrass;                                               // 0x041D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LY5X[0x2];                                     // 0x041E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              GrassRemoveRadius;                                         // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Ghost;                                                     // 0x0424(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               AllowMountedInteraction;                                   // 0x0425(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Y197[0x2];                                     // 0x0426(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnInteractionStarted;                                      // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnInteractionEnded;                                        // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MasterFurniture.BP_MasterFurniture_C");
		return ptr;
	}



	bool IsLinkedFurnitureStarted();
	void GetSlotWorldTransforms(int SlotIndex, bool* IsValidSlot, struct FTransform* InteractTransform, struct FTransform* FinalTransform);
	void ChangeCurrentCapacity(int Value, bool* Success);
	void GetSlotTransform(int SlotIndex, bool* IsValidSlot, struct FTransform* Transform);
	void GetSlotOccupied(int SlotID, bool* IsOccupied, bool* IsWantToOccupy);
	void GetFinalLocation(int SlotIndex, struct FTransform* EndTransform);
	void GetSlotType(int SlotID, bool* IsValidSlot, TEnumAsByte<E_FurnitureSlotType_E_FurnitureSlotType>* Slot_Position);
	void GetFurnitureType(TEnumAsByte<E_FurnitureType_E_FurnitureType>* FurnitureType);
	void GetCapacity(int* CurrentCapacity, int* MaxCapacity);
	void GetInteractSlot(bool* Success, struct FTransform* Transform, int* SlotID);
	void GetInventoryComponent(class UInventoryComponent_C** Inventory);
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
	void IsToolNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckTools, bool* Success);
	void GetInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, float* Condition, bool* CustomText, struct FText* Text, bool* CustomColor, struct FLinearColor* Color);
	void IsInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckCondition);
	void GetOwnershipType(TEnumAsByte<E_Ownership_E_Ownership>* Ownership);
	void GetInteractTitle(class ABP_BaseCharacter_C* BaseCharacter, bool* Show, struct FText* Title, bool* ShowAdditionalTitle1, struct FText* AdditionalTitleText1, bool* ShowAdditionalTitle2, struct FText* AdditionalTitleText2);
	void GetInteractResources(class ABP_BaseCharacter_C* BaseCharacter, bool* Show, TArray<struct FST_ItemResource>* Resources);
	void GetFluidType(TEnumAsByte<E_Fluids_E_Fluids>* FuildType);
	void GetNPCInteractTime(float* Time);
	void GetInteractTool_UI(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool, TEnumAsByte<E_BagMode_E_BagMode>* BagMode, TEnumAsByte<E_BuildingModifications_E_BuildingModifications>* BuildingMode);
	void IsToolInteractable_UI(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility);
	void IsToolInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility);
	void GetTaskFromActor(struct FST_TaskList* Task);
	void GetInteractName(class ABP_BaseCharacter_C* BaseCharacter, struct FText* InteractName);
	void GetInteractAction(struct FText* InteractActionText, struct FText* InteractSecondActionText);
	void IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance);
	void GetInteractTool(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool);
	void GetInteractCount(int* Count);
	void GetHeldItem(class ABP_MasterHoldableItem_C** HeldItem);
	void GetResourceType(TEnumAsByte<E_Resources_E_Resources>* ResourceType);
	void GetNPCInteractAnimation(TEnumAsByte<E_Sex_E_Sex> Sex, class UAnimMontage** Animation);
	void CheckOccupied(class APawn** Character);
	void GetInteractIcon(class UTexture2D** Icon);
	void CheckPointOnTheMap(const struct FVector& Location, bool* OnMap);
	void RecoverResources(class UInventoryComponent_C* Inventory);
	void OnInteractionEnded_Impl();
	void OnInteractionStarted_Impl();
	bool CheckMountedInteraction(class ABP_BaseCharacter_C* BaseCharacter);
	void UpdateResourceStack(float Intensity);
	void LoadRefillableContainerData(const struct FST_SAVE_RefillableContainers& FurnitureData);
	void LoadContainerData(const struct FST_SAVE_Containers& FurnitureData, const struct FString& SaveGameVersion);
	void LoadCampfireData(const struct FST_SAVE_Campfires& FurnitureData);
	void LoadTrapData(const struct FST_SAVE_Traps& FurnitureData);
	void GetActivityFurnitureDataToSave(struct FST_SAVE_ActivityFurnitures* FurnitureData);
	void GetFurnitureDataToSave(struct FST_SAVE_Furnitures* FurnitureData);
	void GetRefillableContainerDataToSave(struct FST_SAVE_RefillableContainers* FurnitureData);
	void GetContainerDataToSave(struct FST_SAVE_Containers* FurnitureData);
	void GetTrapDataToSave(struct FST_SAVE_Traps* FurnitureData);
	void GetCampfireDataToSave(struct FST_SAVE_Campfires* FurnitureData);
	void UpdateBaseRotation(const struct FRotator& NewBaseRotation);
	void OnOwnershipSwap(TEnumAsByte<E_Ownership_E_Ownership> NewOwnership);
	void CheckEnoughResources(bool* Success);
	void CheckObstruction(bool* CanBePlaced_);
	void DisableGhost();
	void EnableGhost();
	void CheckPlaceability(bool* PlacementPossible, bool* Hidden);
	void UserConstructionScript();
	void FurnitureNotify(const struct FName& NotifyName);
	void StopFurnitureAnim(class ABP_BaseCharacter_C* Base_Character_Ref);
	void SetVisibilityBasedAnimTickOption(Engine_EVisibilityBasedAnimTickOption AnimTickOption);
	void LinkFurniture(class ABP_MasterFurniture_C* Furniture);
	void SynchronizeWorkbenchAnim(float StartingPosition);
	void InteractInput(bool KeyDown);
	void InteractStart(class ABP_BaseCharacter_C* BaseCharacter);
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
	void DestroyFurniture();
	void FinishFurniture(bool Load);
	void ReceiveTick(float DeltaSeconds);
	void Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer);
	void ReceiveBeginPlay();
	void ShowInspectorUI();
	void InteractCancel(class ABP_BaseCharacter_C* BaseCharacter);
	void SetWantToOccupy(bool Occupy, int SlotID);
	void ExecuteFinishVisuals(bool Load);
	void ExecuteFinishLogic(bool Load);
	void InitByBuilding();
	void ToolInteract(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool UseChunkData, const struct FST_Chunks& ChunkData);
	void SetHidden(bool Hidden);
	void UpdatePlaceable(bool Placeable);
	void SetMeshMobility(TEnumAsByte<Engine_EComponentMobility> Mobility);
	void ExecuteUbergraph_BP_MasterFurniture(int EntryPoint);
	void OnInteractionEnded__DelegateSignature();
	void OnInteractionStarted__DelegateSignature();
	void OnPlayerOccupy__DelegateSignature(class ABP_MasterFurniture_C* Furniture);
	void OnDestroyFurniture__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
