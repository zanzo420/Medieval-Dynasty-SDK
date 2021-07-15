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

// BlueprintGeneratedClass BP_NPC.BP_NPC_C
// 0x0670 (FullSize[0x13F8] - InheritedSize[0x0D88])
class ABP_NPC_C : public ABP_BaseCharacter_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0D88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USkeletalMeshComponent*                      ShadowCaster;                                              // 0x0D90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             ArrowAI;                                                   // 0x0D98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_BoostComponent_C*                        BP_BoostComponent;                                         // 0x0DA0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNavigationInvokerComponent*                 NavigationInvoker;                                         // 0x0DA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AAIC_NPC_C*                                  AINPCReference;                                            // 0x0DB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ID;                                                        // 0x0DB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FName                                       ItemName;                                                  // 0x0DC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ResourceName;                                              // 0x0DD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                         CustomNPC_DTHandler;                                       // 0x0DD8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FST_Profession                              ProfessionData;                                            // 0x0DE8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	unsigned char                                      ProfessionState;                                           // 0x0E08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_OutsideNPCTypes_E_OutsideNPCTypes>   OutsideNPCType;                                            // 0x0E09(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TEnumAsByte<E_Ownership_E_Ownership>               OutsideNPC_Ownership;                                      // 0x0E0A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_EKYJ[0x1];                                     // 0x0E0B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                WorkStateLoops;                                            // 0x0E0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_Hour                                    StartWorkingTime;                                          // 0x0E10(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_Hour                                    StopWorkingTime;                                           // 0x0E1C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                CheckUnderTheMapTimer;                                     // 0x0E28(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<TEnumAsByte<E_TimeOfDay_E_TimeOfDay>, bool>   ChangedTimeOfDay;                                          // 0x0E30(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Spawned;                                                   // 0x0E80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsStoryNPC;                                                // 0x0E81(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               NightPatrol;                                               // 0x0E82(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               HasInfant;                                                 // 0x0E83(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ChangeCollision;                                           // 0x0E84(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsComponent;                                               // 0x0E85(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Interactable;                                              // 0x0E86(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsLookAtTargetRotation;                                    // 0x0E87(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FST_QuestInfo                               QuestToGive;                                               // 0x0E88(0x03C0) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	int                                                QuestIndex;                                                // 0x1248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6D10[0x4];                                     // 0x124C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ABP_AnimalBase_C*>                    AnimalsReferences;                                         // 0x1250(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class ABP_MasterField_C*                           FieldReference;                                            // 0x1260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterBuilding_C*                        Building;                                                  // 0x1268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Vendor;                                                    // 0x1270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_NUTD[0x7];                                     // 0x1271(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_MasterFurniture_C*                       LastFurniture;                                             // 0x1278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_FoliageTarget                           FoliageTarget;                                             // 0x1280(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FVector                                     FoliageLocation;                                           // 0x12D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BedIndex;                                                  // 0x12DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BedSlotIndex;                                              // 0x12E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FurnitureIndex;                                            // 0x12E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WorkSlotIndex;                                             // 0x12E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               MustGoToKing;                                              // 0x12EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2IET[0x3];                                     // 0x12ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_TaskList                                Task;                                                      // 0x12F0(0x0020) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_FieldTasksLists                         FieldTask;                                                 // 0x1310(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               IsTargetOfTalkGoal;                                        // 0x1348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EXR2[0x7];                                     // 0x1349(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_QuestInfo>                       TalkQuestReference;                                        // 0x1350(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FTimerHandle                                FallTime;                                                  // 0x1360(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    WorkMontageComplete;                                       // 0x1368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    WorkLoopsFinished;                                         // 0x1378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FST_SAVE_NPC_Blackboards                    OptimizationBlackboards;                                   // 0x1388(0x003C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KTWI[0x4];                                     // 0x13C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                WorkMontage;                                               // 0x13C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                         VendorCat;                                                 // 0x13D0(0x0010) (Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	TEnumAsByte<E_NPCStatus_E_NPCStatus>               NPC_Status;                                                // 0x13E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_Activity_E_Tools_Activity>     ToolActivity;                                              // 0x13E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_N6O5[0x2];                                     // 0x13E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       NeedItem;                                                  // 0x13E4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OptimizationSetBlackboards;                                // 0x13EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RQ02[0x3];                                     // 0x13ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                AfterGetOrWakeUpTimer;                                     // 0x13F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_NPC.BP_NPC_C");
		return ptr;
	}



	void AI_GetGoHome_Activity(bool* GoHome_Activity);
	void AI_FindWorkSlot(struct FVector* Destination, bool* WorkSlot);
	void AI_GetCanAffectNavigation(bool* CanAffectNavigation);
	void AI_GetIsLookAtTargetRotation(bool* IsLookAtTargetRotation);
	void AI_CheckIsChunkInteractable(bool* Interactable);
	void AI_SnapToFurnitureSlot(bool ToFinishSlot, bool* Success);
	void AI_SpawnBow(bool* IsBow);
	void AI_FindAnimalsBreederPoint(struct FVector* Destination, bool* Point);
	void AI_GetNeedItemName(struct FName* NeedItem);
	void AI_GetNPC_Status(TEnumAsByte<E_NPCStatus_E_NPCStatus>* NPC_Status, TEnumAsByte<E_Tools_Activity_E_Tools_Activity>* NeedTool, struct FName* NeedItem);
	void AI_CheckSeedsInChest(bool RemoveItem, TEnumAsByte<E_BagMode_E_BagMode> BagSeeds, bool* IsBag);
	void AI_GetOutsideNPC_Ownership(TEnumAsByte<E_Ownership_E_Ownership>* OutsideNPC_Ownership);
	void AI_GetOptimizationStage(int* OptimizationStage);
	void AI_FindFishingPoint(struct FVector* Destination, bool* Find);
	void AI_GetNPC_MustBeDeactivated(bool* NPC_MustBeDeactivated);
	void AI_GetWorkHours(struct FST_Hour* StartWorkingTime, struct FST_Hour* StopWorkingTime);
	void AI_GetIsGetOut(bool* GetOut);
	void AI_GetWorkMonatge(class UAnimMontage** WorkMontage);
	void AI_GetDead(bool* IsDead);
	void AI_GetOptimizationBlackboards(struct FST_SAVE_NPC_Blackboards* OptimizationBlackboards);
	void AI_GetCollisionResponse(TEnumAsByte<Engine_ECollisionChannel> Channel, TEnumAsByte<Engine_ECollisionResponse>* Resposne);
	void AI_GetIsChangedTimeOfDay(TEnumAsByte<E_TimeOfDay_E_TimeOfDay> TimeOfDay, bool* IsChanged);
	void AI_GetInteractionSlotIndex(int* InteractionSlotIndex);
	void AI_GetAnimationState(bool* Sleeping, bool* Sitting, bool* Working);
	void AI_GetQuestBlocking(bool* QuestBlocking);
	void AI_FindRandomFurniture(TEnumAsByte<E_Ownership_E_Ownership> Location, TEnumAsByte<E_FurnitureCategories_E_FurnitureCategories> FurnitureCategory, bool IgnoreOwnership, struct FVector* Destination, bool* IsFurniture);
	void AI_FindTavern(bool FindActivityFurniture, bool Occupy, struct FVector* Destination, bool* Find, bool* CanSit);
	void AI_GetCapsuleHalfHeight(float* CapsuleHalfHeight);
	void AI_FindBuildingWorkbenches(struct FVector* Destination, bool* IsWorkbenches);
	void AI_GetNightPatrol(bool* NightPatrol);
	void AI_FindNPCtoTalk(struct FVector* Destination, struct FVector* lookAt, bool* IsNPC);
	void AI_GetBedIndex(int* BedIndex, int* BedSlotIndex);
	void AI_GetOwnership(TEnumAsByte<E_Ownership_E_Ownership>* Ownership);
	void AI_CheckBuildingIsConstructed(bool* IsConstructed);
	void AI_GetIDFromNPC(struct FString* NPC_ID);
	void AI_GetStats(struct FText* Name, TEnumAsByte<E_Sex_E_Sex>* Sex, float* Age, TEnumAsByte<E_CharacterType_E_CharacterType>* CharacterType);
	void AI_CheckTargetFoliage(bool* IsTargetFoliage);
	void AI_FindClosestFurniture(TEnumAsByte<E_Ownership_E_Ownership> Location, TEnumAsByte<E_FurnitureCategories_E_FurnitureCategories> FurnitureCategory, bool IgnoreOwnership, struct FVector* Destination, bool* IsFurniture);
	void AI_FindWorkPlace(bool GetTask, struct FVector* Destination, bool* WorkPlace, float* WorkRadius, struct FST_TaskList* TaskList, bool* IsTask);
	void AI_GetNPC(class ABP_NPC_C** NPC);
	void AI_FindAnimal(bool ShouldBeDead, struct FVector* Destination, bool* Animal);
	void AI_FindHouse(bool FindBed, bool Occupy, struct FVector* Destination, bool* Find, bool* IsBed);
	void AI_GetMesh(class USkeletalMeshComponent** Mesh);
	void AI_IncreaseNavInvoker(bool* ToBig);
	void AI_FindField(struct FVector* Destination, bool* Field, struct FST_FieldTasksLists* TaskList, bool* IsTask);
	void AI_GetDistanceAndDirection(const struct FVector& Target_Location, const struct FVector& Current_Location, float* Distance, struct FVector* Direction);
	void AI_GetTargetLocation(const struct FVector& Target, float MaxDistance, float MaxDirection, float DistanceToLastPoint, bool OutsideLastPoint, struct FVector* Location);
	void AI_FindFoliage(TEnumAsByte<E_Resources_E_Resources> TargetType, struct FVector* Destination, bool* Foliage);
	void SetMinDeadAge();
	void FixPlayersWifeAffection(const struct FString& SaveGameVersion);
	void GetToolHoldableClass(bool* NeedTool, bool* FoundTool);
	void SetGiftVendorItems(const struct FST_VendorCategory& VendorCategory);
	void SetCustomNPC_DTHandler();
	void GetDirection(float* Direction);
	class USkeletalMesh* SelectCaster();
	void ToolInteractFoliage();
	void FixCustomNPCsProfessions();
	void GetProfessionData(struct FST_Profession* ProfessionData);
	void CheckUnderTheMap();
	void SetMeshesFromPreset(TEnumAsByte<E_Profession_E_Profession> Profession, class UClass* NewClass, bool UpdateOnly);
	void OnOptimizationDeactive();
	void OnOptimizationActive();
	void OnNPCDead();
	void UnbindFurnitureEvents(class ABP_MasterFurniture_C* Furniture);
	void BindFurnitureEvents(class ABP_MasterFurniture_C* Furniture);
	void OnPlayerOccupy(class ABP_MasterFurniture_C* Furniture);
	void OnDayChanged();
	void SetNPCBehaviorFromSave();
	void GetTransformByRoot(const struct FTransform& Transform, const struct FVector& WorldLocation, const struct FTransform& ActorTransform, struct FVector* Location, struct FVector* Direction);
	void FindTavern(bool FindActivityFurniture, bool Occupy, struct FVector* Destination, bool* Find, bool* CanSit);
	void EndTalking();
	void SetSceneName();
	void RespawnInfant();
	void SetRelationsReference(const struct FString& FatherID, const struct FString& MotherID, const struct FString& PartnerID, TArray<struct FString>* SiblingsID, TArray<struct FString>* ChildrenID, const struct FString& HouseID, const struct FString& WorkPlaceID, int Liking, int Affection, bool IsPregnant, int TimeToBirth);
	void Destroy_NPC();
	void SetNPCDataFromSave(const struct FST_SAVE_NPC& NPCData, bool ResetEQ, const struct FString& SaveGameVersion);
	void GetNPCDataToSave(struct FST_SAVE_NPC* NPCData);
	void Set_New_Collision(bool IsCollision);
	void OnDialogueEnded();
	void OnDialogueStarted();
	void OnCharacterTypeChanged();
	void OnSeasonChanged();
	void FindTool(TEnumAsByte<E_Tools_E_Tools> ToolType, bool* Found_, struct FST_ItemDetails* ItemDetails);
	void GetProfession(TEnumAsByte<E_Profession_E_Profession>* Profession);
	void GetBlackboardValues_ResourceName(struct FName* ResourceName);
	void SetBlackboardValues_ResourceName(const struct FName& ResourceName);
	void GetBlackboardValues_Building(TEnumAsByte<E_Buildings_E_Buildings>* Building);
	void GetBlackboardValues_Seeds(TEnumAsByte<E_BagMode_E_BagMode>* Seeds);
	void SetBlackboardValues_Building(TEnumAsByte<E_Buildings_E_Buildings> Building);
	void SetBlackboardValues_Seeds(TEnumAsByte<E_BagMode_E_BagMode> Seeds);
	void GetBlackboardValues_Talk(TEnumAsByte<E_Talk_E_Talk>* Talk);
	void GetBlackboardValues_CurrentResourceState(TEnumAsByte<E_ResourceState_E_ResourceState>* ResourceState);
	void SetBlackboardValues_Talk(TEnumAsByte<E_Talk_E_Talk> Talk);
	void SetBlackboardValues_CurrentResourceState(TEnumAsByte<E_ResourceState_E_ResourceState> ResourceState);
	void GetBlackboardValues_ResourceState(TEnumAsByte<E_ResourceState_E_ResourceState>* ResourceState);
	void SetBlackboardValues_ResourceState(TEnumAsByte<E_ResourceState_E_ResourceState> ResourceState);
	void GetBlackboardValues_TaskState(TEnumAsByte<E_TaskState_E_TaskState>* TaskState);
	void GetBlackboardValues_CurrentTask(TEnumAsByte<E_Tasks_E_Tasks>* Task);
	void GetBlackboardValues_Task(TEnumAsByte<E_Tasks_E_Tasks>* Task);
	void GetBlackboardValues_WorkTask(TEnumAsByte<E_Tasks_E_Tasks>* WorkTask);
	void GetBlackboardValues_Rest(TEnumAsByte<E_Rest_E_Rest>* Rest);
	void GetBlackboardValues_CurrentNPCBehavior(TEnumAsByte<E_NPCBehavior_E_NPCBehavior>* NPCBehavior);
	void SetBlackboardValues_TaskState(TEnumAsByte<E_TaskState_E_TaskState> TaskState);
	void SetBlackboardValues_CurrentTask(TEnumAsByte<E_Tasks_E_Tasks> Task);
	void SetBlackboardValues_Task(TEnumAsByte<E_Tasks_E_Tasks> Task);
	void SetBlackboardValues_WorkTask(TEnumAsByte<E_Tasks_E_Tasks> WorkTask);
	void SetBlackboardValues_Rest(TEnumAsByte<E_Rest_E_Rest> Rest);
	void SetBlackboardValues_CurrentNPCBehavior(TEnumAsByte<E_NPCBehavior_E_NPCBehavior> NPCBehavior);
	void GetBlackboardValues_NPCBehavior(TEnumAsByte<E_NPCBehavior_E_NPCBehavior>* NPCBehavior);
	void GetBlackboardValues_DailyCycle(TEnumAsByte<E_DailyCycle_E_DailyCycle>* DailyCycle);
	void GetBlackboardValues_Int(TEnumAsByte<E_NPC_BlackboardInt_E_NPC_BlackboardInt> Blackboard_Int, int* Int);
	void SetBlackboardValues_NPCBehavior(TEnumAsByte<E_NPCBehavior_E_NPCBehavior> NPCBehavior);
	void SetBlackboardValues_DailyCycle(TEnumAsByte<E_DailyCycle_E_DailyCycle> DailyCycle);
	void SetBlackboardValues_Int(TEnumAsByte<E_NPC_BlackboardInt_E_NPC_BlackboardInt> Blackboard_Int, int Int);
	void GetBlackboardValues_Vector(TEnumAsByte<E_NPC_BlackboardVector_E_NPC_BlackboardVector> Blackboard_Vector, struct FVector* VectorValue);
	void GetBlackboardValues_Boolean(TEnumAsByte<E_NPC_BlackboardBoolean_E_NPC_BlackboardBoolean> BlackboardBoolean, bool* BooleanValue);
	void GetBlackboardValues_Object(TEnumAsByte<E_NPC_BlackboardObject_E_NPC_BlackboardObject> BlackboardObject, class UObject** Object);
	void SetBlackboardValues_Vector(TEnumAsByte<E_NPC_BlackboardVector_E_NPC_BlackboardVector> Blackboard_Vector, const struct FVector& Value);
	void SetBlackboardValues_Boolean(TEnumAsByte<E_NPC_BlackboardBoolean_E_NPC_BlackboardBoolean> BlackboardBoolean, bool Value);
	void SetBlackboardValues_Object(TEnumAsByte<E_NPC_BlackboardObject_E_NPC_BlackboardObject> BlacboardObject, class UObject* Object);
	void FindCampfire(TEnumAsByte<E_Ownership_E_Ownership> LocationType, bool IgnoreOwnership, struct FVector* Destination, bool* IsFurniture);
	void CheckBagOfSeedsInInventoryOrChest(bool RemoveItem_, TEnumAsByte<E_Seeds_E_Seeds> SeedType, bool* IsBag);
	struct FRotator GetLookingRotation();
	void AddItemToInventory(const struct FName& Item_ID, int Count, float CurrentHP, float MaxHP, int Capacity, float Freshness, int* AddedAtIndex);
	void FindHouse(bool FindBed, bool Occupy, struct FVector* Destination, bool* Find, bool* IsBed);
	void CheckForTalkGoal(class UDialogue** Dialogue, bool* Found);
	void IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance);
	void GetHeldItem(class ABP_MasterHoldableItem_C** HeldItem);
	void OnLoaded_2A48D8854175C5A6A7FC3D82664B3D26(class UClass* Loaded);
	void OnLoaded_306E1C1447AE3C11220DDC9AADCA6AB0(class UClass* Loaded);
	void OnLoaded_BB2717E64866BD380FC9D781DB1EF03A(class UClass* Loaded);
	void OnLoaded_9AA73FD8484CD67355ABCEB05F2C8AB7(class UClass* Loaded);
	void AI_GetOut();
	void AI_ResetNavInvoker();
	void AI_MoveAside();
	void UpdateCrowdSteering(bool Suspend);
	void ReceiveBeginPlay();
	void AI_InteractResource();
	void AI_InteractFoliage(bool Timer);
	void AI_HideHeldItem(bool IsWorking);
	void Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer);
	void AI_AddSkills(TEnumAsByte<E_Skills_E_Skills> Skill, float Value);
	void AI_UnlockThings();
	void RemoveFromWorkPlace();
	void AI_SetWorkTask();
	void GoToKing();
	void ResetTaskList();
	void AI_ToolInteractFoliage();
	void GetUp();
	void ReceiveTick(float DeltaSeconds);
	void AI_SetCharacterRotation(const struct FRotator& TargetRotation, bool InterpRotation, float InterpSpeed);
	void MakeSomeNoise();
	void StopShouting();
	void ShowInspectorUI();
	void Init_NPC(bool LoadGame);
	void AI_SetCollisionResponse(TEnumAsByte<Engine_ECollisionChannel> Channel, TEnumAsByte<Engine_ECollisionResponse> Response);
	void AI_OutsideInteract();
	void ResetTaskStateAfterSkip();
	void LoadNPCDataFromSave(const struct FST_SAVE_NPC& NPCData, bool ResetEQ, const struct FString& SaveGameVersion);
	void SetMesh(class USkeletalMesh* NewHeadMesh, class USkeletalMesh* NewTorsoMesh, class USkeletalMesh* NewHandsMesh, class USkeletalMesh* NewLegsMesh, class USkeletalMesh* NewFeetMesh, class USkeletalMesh* NewHatSKMesh, class USkeletalMesh* NewHoodMesh, class USkeletalMesh* NewHairMesh, class USkeletalMesh* NewBackpackMesh, class USkeletalMesh* NewPouchMesh, class UClass* NewClass, bool UpdateOnly);
	void SetMeshAndMaterials(class USkeletalMesh* HeadMesh, class USkeletalMesh* TorsoMesh, class USkeletalMesh* HandsMesh, class USkeletalMesh* LegsMesh, class USkeletalMesh* FeetMesh, class USkeletalMesh* HatSKMesh, class USkeletalMesh* HoodMesh, class USkeletalMesh* Backpack, class USkeletalMesh* Pouch, class UClass* AnimClass, TArray<struct FST_MeshDynamicMaterials> DynamicMaterials);
	void AI_StopMovement();
	void AI_TalkingNPC();
	void EnableNPC();
	void DisableNPC();
	void StartFalling();
	void TeleportToLandscape();
	void EndFalling();
	void AI_SpawnTool(TEnumAsByte<E_Tools_E_Tools> Tool);
	void AnimNotify_WorkMontageComplete(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState);
	void AnimNotify_WorkLoopsFinished(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState, int Loop);
	void InitSetSkills(bool Birth);
	void OnGetUp();
	void AI_SetBlockTalking(bool BlockTalking);
	void OnWakeUp();
	void AI_SetInteractionSlotIndex(int InteractionSlotIndex);
	void AI_SpawnOff_HandItem(TEnumAsByte<E_Tools_E_Tools> Item);
	void AI_HideOff_HandItem(bool IsWorking);
	void AI_EndTalking();
	void AI_SetIsChangedTimeOfDay(TEnumAsByte<E_TimeOfDay_E_TimeOfDay> TimeOfDay, bool Value);
	void StuffDone();
	void BindSitSleep();
	void AI_EnableDeadMethods();
	void UpdateOnDead();
	void RemoveFamilyFromHouse();
	void AI_SetNPC_MustBeDeactivated(bool NPC_MustBeDeactivated);
	void NoneOptimization();
	void CloseOptimization();
	void MediumOptimization();
	void FarOptimization();
	void Update_Camera_Event_2(class UCurveFloat* LerpCurve);
	void AI_SetNPC_Status(TEnumAsByte<E_NPCStatus_E_NPCStatus> NPC_Status);
	void AI_SetNeedItemName(const struct FName& NeedItem);
	void AI_SetCasualClothes();
	void AI_SetProfessionClothes();
	void AI_SetFieldTask(const struct FST_FieldTasksLists& Field_Task);
	void AI_RemoveAnimalReference();
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void AI_HideItemsInHands(bool IsWorking);
	void AfterGetOrWakeUp();
	void AI_SetIsLookAtTargetRotation(bool IsLookAtTargetRotation);
	void AI_SetCanAffectNavigation(bool CanAffectNavigation);
	void AI_SetActivity();
	void AI_SetGoHome_Activity(bool GoHome_Activity);
	void PlayPickingUpMontage(class UObject* Instigator, bool PreferTwoHanded);
	void Set_Sitting_Event(bool IsSitting, TEnumAsByte<E_SitDownPosition_E_SitDownPosition> SitDownPosition);
	void Set_Sleeping_Event(bool IsSleeping, TEnumAsByte<E_SleepingDirection_E_SleepingDirection> SleepingDirection, bool UseBedSleepingPose);
	void ExecuteUbergraph_BP_NPC(int EntryPoint);
	void WorkLoopsFinished__DelegateSignature(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState, int Loop);
	void WorkMontageComplete__DelegateSignature(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
