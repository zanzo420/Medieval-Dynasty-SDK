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

// BlueprintGeneratedClass AIC_NPC.AIC_NPC_C
// 0x006A (FullSize[0x039A] - InheritedSize[0x0330])
class AAIC_NPC_C : public ACustomDetourCrowdAIC
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UAIPerceptionComponent*                      AIPerception;                                              // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_NPC_C*                                   NPCReference;                                              // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Destination;                                               // 0x0348(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6NTH[0x4];                                     // 0x0354(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     NameFoliage;                                               // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FName                                       ItemName;                                                  // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ItemCount;                                                 // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ItemNr;                                                    // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NavInvokerRadius;                                          // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     TargetLocation;                                            // 0x037C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               GetOut;                                                    // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HasMovedAside;                                             // 0x0389(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9SRE[0x2];                                     // 0x038A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     PreviousLocation;                                          // 0x038C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasComeBack;                                               // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               GoHome_Activity;                                           // 0x0399(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AIC_NPC.AIC_NPC_C");
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
	void AI_FindHouse(bool FindBed, bool Occupy, struct FVector* Destination, bool* Find, bool* IsBed);
	void AI_GetMesh(class USkeletalMeshComponent** Mesh);
	void AI_IncreaseNavInvoker(bool* ToBig);
	void AI_FindField(struct FVector* Destination, bool* Field, struct FST_FieldTasksLists* TaskList, bool* IsTask);
	void AI_GetDistanceAndDirection(const struct FVector& Target_Location, const struct FVector& Current_Location, float* Distance, struct FVector* Direction);
	void AI_GetTargetLocation(const struct FVector& Target, float MaxDistance, float MaxDirection, float DistanceToLastPoint, bool OutsideLastPoint, struct FVector* Location);
	void AI_FindFoliage(TEnumAsByte<E_Resources_E_Resources> TargetType, struct FVector* Destination, bool* Foliage);
	void AI_FindAnimal(bool ShouldBeDead, struct FVector* Destination, bool* Animal);
	void SetHeraldActivity();
	void SetActivity();
	void FamilyGetOut();
	void FindGoOutsidePoint(struct FVector* OutsidePoint);
	void GetOutSetting();
	void RefreshBehaviorTrees();
	void CheckIsBuilding(const struct FVector& CheckLocation, const struct FVector& Destination, struct FVector* NewLocation);
	void SetSceneName(class ABP_NPC_C* NPC);
	void Heal(class ABP_PlayerCharacter_C* PlayerCharacter);
	void GetDistanceAndDirection(const struct FVector& Target_Location, const struct FVector& Current_Location, float* Distance, struct FVector* Direction);
	void UserConstructionScript();
	void OnFail_0A0414E3447604926B5365B0ED2C24D3(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnSuccess_0A0414E3447604926B5365B0ED2C24D3(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnFail_D69365224E351F8F67AE7180121F6957(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnSuccess_D69365224E351F8F67AE7180121F6957(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnFail_FFE60B014075BFB86DA926BD8D4E619A(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnSuccess_FFE60B014075BFB86DA926BD8D4E619A(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnFail_297B00BD4C1D9B65E914BFB94009257B(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnSuccess_297B00BD4C1D9B65E914BFB94009257B(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void AI_InteractResource();
	void AI_InteractFoliage(bool Timer);
	void AI_ToolInteractFoliage();
	void AI_HideHeldItem(bool IsWorking);
	void AI_AddSkills(TEnumAsByte<E_Skills_E_Skills> Skill, float Value);
	void AI_UnlockThings();
	void AI_SetWorkTask();
	void AI_SetCharacterRotation(const struct FRotator& TargetRotation, bool InterpRotation, float InterpSpeed);
	void AI_SetCollisionResponse(TEnumAsByte<Engine_ECollisionChannel> Channel, TEnumAsByte<Engine_ECollisionResponse> Response);
	void AI_OutsideInteract();
	void AI_StopMovement();
	void AI_TalkingNPC();
	void AI_SpawnTool(TEnumAsByte<E_Tools_E_Tools> Tool);
	void AI_SetBlockTalking(bool BlockTalking);
	void AI_SetInteractionSlotIndex(int InteractionSlotIndex);
	void AI_SpawnOff_HandItem(TEnumAsByte<E_Tools_E_Tools> Item);
	void AI_HideOff_HandItem(bool IsWorking);
	void AI_EndTalking();
	void AI_SetIsChangedTimeOfDay(TEnumAsByte<E_TimeOfDay_E_TimeOfDay> TimeOfDay, bool Value);
	void AI_EnableDeadMethods();
	void AI_SetNPC_MustBeDeactivated(bool NPC_MustBeDeactivated);
	void AI_SetNPC_Status(TEnumAsByte<E_NPCStatus_E_NPCStatus> NPC_Status);
	void AI_SetNeedItemName(const struct FName& NeedItem);
	void AI_SetProfessionClothes();
	void AI_SetCasualClothes();
	void AI_SetFieldTask(const struct FST_FieldTasksLists& Field_Task);
	void AI_RemoveAnimalReference();
	void AI_HideItemsInHands(bool IsWorking);
	void AI_SetIsLookAtTargetRotation(bool IsLookAtTargetRotation);
	void AI_SetCanAffectNavigation(bool CanAffectNavigation);
	void BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus);
	void TaskTree();
	void TaskStone();
	void TaskFoliage();
	void TaskShoot();
	void TaskShowInventory();
	void TaskWorkbench();
	void TaskHusbandryAnimal();
	void TaskPrevious();
	void StopDoingTask();
	void TaskField(TEnumAsByte<E_BagMode_E_BagMode> Seeds);
	void AI_GetOut();
	void AI_ResetNavInvoker();
	void AI_MoveAside();
	void UpdateWork();
	void Illness();
	void AfterIllness();
	void Vendoring();
	void Init_AI(class ABP_NPC_C* NPCReference, bool LoadGame);
	void GetOutDestroy();
	void ComeBack();
	void ReceiveBeginPlay();
	void UpdateCrowdSteering(bool Suspend);
	void AI_SetActivity();
	void AI_SetGoHome_Activity(bool GoHome_Activity);
	void HeraldSitting();
	void OutsideRandomSitting();
	void ActivityTavern();
	void WorkPatrol();
	void WorkBabysit();
	void GoOutside();
	void ActivityNothing();
	void ActivityTalking();
	void ActivitySitting();
	void ExecuteUbergraph_AIC_NPC(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
