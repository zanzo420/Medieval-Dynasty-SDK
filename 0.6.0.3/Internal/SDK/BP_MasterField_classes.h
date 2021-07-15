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

// BlueprintGeneratedClass BP_MasterField.BP_MasterField_C
// 0x026A (FullSize[0x048A] - InheritedSize[0x0220])
class ABP_MasterField_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USphereComponent*                            InspectorPoint;                                            // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               AllowedToBuild;                                            // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             TempLocationA;                                             // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInstancedStaticMeshComponent*               InstancedStaticMesh;                                       // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Ghost;                                                     // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             TempLocationB;                                             // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_SystemsManager_C*                        SystemsManagerReference;                                   // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               BuildAtTheBeginning;                                       // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_M6GE[0x3];                                     // 0x0269(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   InitSize;                                                  // 0x026C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // 0x0274(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TEnumAsByte<E_FieldCategories_E_FieldCategories>   FieldType;                                                 // 0x0275(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_FieldPlantType_E_FieldPlantType>     PlantType;                                                 // 0x0276(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               LoopedCycle;                                               // 0x0277(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Placeable;                                                 // 0x0278(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsFirstCorner;                                             // 0x0279(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ED5H[0x2];                                     // 0x027A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PlaceStepSize;                                             // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ChunkSize;                                                 // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_D79P[0x4];                                     // 0x0284(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CustomName;                                                // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FVector>                             Corners;                                                   // 0x0298(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_Chunks>                          ListOfChunks;                                              // 0x02A8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int                                                XSize;                                                     // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                YSize;                                                     // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_PlantSlot>                       ListOfSlots;                                               // 0x02C0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       InteractNameText;                                          // 0x02D0(0x0018) (Edit, BlueprintVisible)
	float                                              InteractionTime;                                           // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GMXH[0x4];                                     // 0x02EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                InteractAnimation;                                         // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OffsetFromChunkCenter;                                     // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PVNZ[0x4];                                     // 0x02FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                InteractFemaleAnimation;                                   // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RandomMaxOffsetFromChunkCenter;                            // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_069V[0x4];                                     // 0x030C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMesh*                                 Mesh;                                                      // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_M8LT[0x8];                                     // 0x0318(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  MeshTransform;                                             // 0x0320(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FVector                                     InstanceOffset;                                            // 0x0350(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistanceCheck;                                             // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TEnumAsByte<E_Seeds_E_Seeds>>               AcceptableSeeds;                                           // 0x0360(0x0010) (Edit, BlueprintVisible)
	class UMaterialInstanceDynamic*                    GhostMaterialReference;                                    // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinGhostSize;                                              // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              GhostHeight;                                               // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_SeedCount>                       NumberOfChunksPerSeed;                                     // 0x0380(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_FieldTasksLists>                 FieldTaskList;                                             // 0x0390(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                NumberOfPlants;                                            // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SizeLimit;                                                 // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   Mesh_Wheat_Spring2;                                        // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   Mesh_Wheat_Autumn2;                                        // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   Mesh_Rye2;                                                 // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   Mesh_Oat2;                                                 // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   Mesh_Flax2;                                                // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   Mesh_Beetroot2;                                            // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   Mesh_Onion2;                                               // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   Mesh_Cabbage_Spring2;                                      // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   Mesh_Cabbage_Summer2;                                      // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   Mesh_Carrot_Spring2;                                       // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   Mesh_Carrot_Winter2;                                       // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TEnumAsByte<E_FieldPlantStages_E_FieldPlantStages>> HarvestedStages;                                           // 0x0400(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UHierarchicalInstancedStaticMeshComponent*   Mesh__Wheat_Harvested2;                                    // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   Mesh_Rye_Harvested2;                                       // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   Mesh_Oat_Harvested2;                                       // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   Mesh_Flax_Harvested2;                                      // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   Mesh_Beetroot_Harvested2;                                  // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   Mesh_Onion_Harvested2;                                     // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   Mesh_Cabbage_Harvested2;                                   // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   Mesh_Carrot_Harvested2;                                    // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location1;                                                 // 0x0450(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location2;                                                 // 0x045C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_BuildingWarningType_E_BuildingWarningType> BuildingWarningType;                                       // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PNOL[0x7];                                     // 0x0469(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    GhostConstructedMaterialReference;                         // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUI_Inspector_Field_C*>               InspectorWidgets;                                          // 0x0478(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                               Loaded;                                                    // 0x0488(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               NoBarn;                                                    // 0x0489(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MasterField.BP_MasterField_C");
		return ptr;
	}



	void IsGrabbable(bool* Grabbable);
	void IsItemInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility);
	void GetInteractItem(class ABP_BaseCharacter_C* BaseCharacter, struct FDataTableRowHandle* ItemHandler);
	void IsItemNeeded(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckItems, bool* Success);
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
	void IsToolInteractable_UI(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility);
	void GetInteractTool_UI(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool, TEnumAsByte<E_BagMode_E_BagMode>* BagMode, TEnumAsByte<E_BuildingModifications_E_BuildingModifications>* BuildingMode);
	void GetNPCInteractTime(float* Time);
	void IsToolInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility);
	void GetTaskFromActor(struct FST_TaskList* Task);
	void GetInteractIcon(class UTexture2D** Icon);
	void GetInteractName(class ABP_BaseCharacter_C* BaseCharacter, struct FText* InteractName);
	void GetInteractAction(struct FText* InteractActionText, struct FText* InteractSecondActionText);
	void IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance);
	void GetInteractTool(class ABP_BaseCharacter_C* BaseCharacter, TEnumAsByte<E_Tools_E_Tools>* Tool);
	void GetInteractCount(int* Count);
	void GetHeldItem(class ABP_MasterHoldableItem_C** HeldItem);
	void GetResourceType(TEnumAsByte<E_Resources_E_Resources>* ResourceType);
	void GetNPCInteractAnimation(TEnumAsByte<E_Sex_E_Sex> Sex, class UAnimMontage** Animation);
	void CheckOccupied(class APawn** Character);
	void CheckPointOnTheMap(const struct FVector& Location, bool* OnMap);
	void IsChunkInteractableForNPC(int ChunkId, class ABP_MasterBuilding_C* WorkPlace, bool* Success);
	void IgnorePlantSlotRotation(TEnumAsByte<E_FieldPlantStages_E_FieldPlantStages> PlantStage, bool* Ignore);
	void DisableInspector();
	void EnableInspector();
	void RefreshTasksList();
	void GetChunkStageForCycle(struct FST_Chunks* ChunkData);
	void InitAfterLoad(const struct FST_SAVE_Fields& FieldData, bool OldSave);
	void GetDataToSave(struct FST_SAVE_Fields* FieldData);
	void OnOwnershipSwap(TEnumAsByte<E_Ownership_E_Ownership> NewOwnership);
	void SortTasksList();
	void ChunkInteraction(class ABP_BaseCharacter_C* BaseCharacter, bool Timer, const struct FHitResult& Hit);
	void UpdateTasksList(TEnumAsByte<E_FieldActivities_E_FieldActivities> NextActivities, int ChunkId, const struct FVector& ChunkDestination, bool Sort);
	void CheckChunkHarvested(int ChunkId);
	void PlantSlotInteraction(float CheckRadius, const struct FVector& Location, float SkilledFarmerBoost, TArray<struct FST_ItemResourceOwner>* Items, int* Count);
	void ToolInteraction(class ABP_BaseCharacter_C* BaseCharacter, bool UseChunkData, const struct FST_Chunks& ChunkData);
	void UpdateMeshes();
	void GetAdditionalMeshComponentForStage(TEnumAsByte<E_FieldPlantStages_E_FieldPlantStages> PlantStage, class UHierarchicalInstancedStaticMeshComponent** StaticMeshComponent);
	void UpdateChunkGround(int ChunkId);
	void SeasonalUpdateChunk(int ChunkId);
	void SeasonalUpdateField();
	void UpdateFieldGround();
	void CreateChunks(float BeginFertility, bool* Success);
	void SetChunkTargetSeed(int ChunkId, const struct FST_Seed& Seed);
	void SetPlaceable(bool Placeable);
	void CheckObstruction(bool Load, bool* CanBePlaced_);
	void SetSecondCorner(const struct FVector& Location);
	void SetFirstCorner(const struct FVector& Location);
	void GetMeshComponentForStage(TEnumAsByte<E_FieldPlantStages_E_FieldPlantStages> PlantStage, class UHierarchicalInstancedStaticMeshComponent** StaticMeshComponent);
	void UpdateAllInstances();
	void UpdateChunkInstances(int ChunkId, bool Load);
	void UpdateInstance(int SlotID, TEnumAsByte<E_FieldPlantStages_E_FieldPlantStages> TargetPlantStage, const struct FST_PlantSlot& Slot);
	void InitInstances();
	void GetSeedForPlantStage(TEnumAsByte<E_FieldPlantStages_E_FieldPlantStages> PlantStage, bool* Success, struct FST_Seed* Seed);
	void CanBeDestroyed_(bool* CanBeDestroyed_);
	void FieldWasGrubbedUp_(bool* FieldWasGrubbedUp_);
	void GenerateDestruction(float Intensity);
	void CreateAreaMarkers();
	void GetTerrainHitLocation(const struct FVector& CheckLocation, float CheckDistance, bool* Success, struct FVector* HitLocation);
	void FindClosestFoliageSpawnPoint(TArray<struct FTransform>* SpawnPoints, const struct FTransform& RootTransform, float Tolerance, bool* Succes, int* ID);
	void CheckFoliageInFieldBounds(const struct FTransform& Transform, bool* Success, struct FST_Chunks* Chunk);
	void CalculateFoliageSpawnPoints(const struct FVector& CenterLocation, int NumberOfFoliage, TArray<struct FTransform>* FoliageSpawnTransforms, bool* Success);
	void GetChunkOccupied(int ChunkId, bool* Occupied);
	void SetChunkOccupied(int ChunkId, bool Occupied);
	void CalculateCenterLocationXY(const struct FVector& V0, const struct FVector& v2, bool* Success, struct FVector* CenterLocation);
	void FindClosestChunk(const struct FVector& RootLocation, TEnumAsByte<E_ChunkStates_E_ChunkStates> ChunkState, bool IgnoreChunkState, bool OnlyNoOccupied, bool* Success, struct FST_Chunks* Chunk, float* Distance);
	void GetHitChunk(const struct FVector& HitLocation, bool* Success, struct FST_Chunks* Chunk);
	void CheckFieldBounds(const struct FVector& HitLocation, bool OnlyCheck, bool* Success, struct FST_Chunks* Chunk);
	void CheckBounds(const struct FVector& HitLocation, const struct FVector& V0, const struct FVector& v1, const struct FVector& v2, const struct FVector& V3, bool* Success);
	void SortFieldCornerVertices(TArray<struct FVector>* SortedVertices);
	void UserConstructionScript();
	void InteractInput(bool KeyDown);
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
	void CreateField(bool Load);
	void InitField();
	void Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer);
	void InteractStart(class ABP_BaseCharacter_C* BaseCharacter);
	void InteractCancel(class ABP_BaseCharacter_C* BaseCharacter);
	void SeasonalChanges();
	void ToolInteract(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool UseChunkData, const struct FST_Chunks& ChunkData);
	void ReceiveBeginPlay();
	void ShowInspectorUI();
	void InitTaskList();
	void InitMeshes(bool Load);
	void ExecuteUbergraph_BP_MasterField(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
