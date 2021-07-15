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

// BlueprintGeneratedClass BPI_AI.BPI_AI_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_AI_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_AI.BPI_AI_C");
		return ptr;
	}



	void AI_SetGoHome_Activity(bool GoHome_Activity);
	void AI_GetGoHome_Activity(bool* GoHome_Activity);
	void AI_SetActivity();
	void AI_FindWorkSlot(struct FVector* Destination, bool* WorkSlot);
	void AI_GetCanAffectNavigation(bool* CanAffectNavigation);
	void AI_SetCanAffectNavigation(bool CanAffectNavigation);
	void UpdateCrowdSteering(bool Suspend);
	void AI_SetIsLookAtTargetRotation(bool IsLookAtTargetRotation);
	void AI_GetIsLookAtTargetRotation(bool* IsLookAtTargetRotation);
	void AI_HideItemsInHands(bool IsWorking);
	void AI_CheckIsChunkInteractable(bool* Interactable);
	void AI_SnapToFurnitureSlot(bool ToFinishSlot, bool* Success);
	void AI_RemoveAnimalReference();
	void AI_FindAnimalsBreederPoint(struct FVector* Destination, bool* Point);
	void AI_SetFieldTask(const struct FST_FieldTasksLists& Field_Task);
	void AI_SetCasualClothes();
	void AI_SetProfessionClothes();
	void AI_SetNeedItemName(const struct FName& NeedItem);
	void AI_GetNeedItemName(struct FName* NeedItem);
	void AI_GetNPC_Status(TEnumAsByte<E_NPCStatus_E_NPCStatus>* NPC_Status, TEnumAsByte<E_Tools_Activity_E_Tools_Activity>* NeedTool, struct FName* NeedItem);
	void AI_SetNPC_Status(TEnumAsByte<E_NPCStatus_E_NPCStatus> NPC_Status);
	void AI_CheckSeedsInChest(bool RemoveItem, TEnumAsByte<E_BagMode_E_BagMode> BagSeeds, bool* IsBag);
	void AI_GetOutsideNPC_Ownership(TEnumAsByte<E_Ownership_E_Ownership>* OutsideNPC_Ownership);
	void AI_GetOptimizationStage(int* OptimizationStage);
	void AI_FindFishingPoint(struct FVector* Destination, bool* Find);
	void AI_SetNPC_MustBeDeactivated(bool NPC_MustBeDeactivated);
	void AI_GetNPC_MustBeDeactivated(bool* NPC_MustBeDeactivated);
	void AI_GetWorkHours(struct FST_Hour* StartWorkingTime, struct FST_Hour* StopWorkingTime);
	void AI_GetIsGetOut(bool* GetOut);
	void AI_GetWorkMonatge(class UAnimMontage** WorkMontage);
	void AI_EnableDeadMethods();
	void AI_GetDead(bool* IsDead);
	void AI_GetOptimizationBlackboards(struct FST_SAVE_NPC_Blackboards* OptimizationBlackboards);
	void AI_GetCollisionResponse(TEnumAsByte<Engine_ECollisionChannel> Channel, TEnumAsByte<Engine_ECollisionResponse>* Resposne);
	void AI_GetIsChangedTimeOfDay(TEnumAsByte<E_TimeOfDay_E_TimeOfDay> TimeOfDay, bool* IsChanged);
	void AI_SetIsChangedTimeOfDay(TEnumAsByte<E_TimeOfDay_E_TimeOfDay> TimeOfDay, bool Value);
	void AI_EndTalking();
	void AI_HideOff_HandItem(bool IsWorking);
	void AI_SpawnOff_HandItem(TEnumAsByte<E_Tools_E_Tools> Item);
	void AI_SetInteractionSlotIndex(int InteractionSlotIndex);
	void AI_GetInteractionSlotIndex(int* InteractionSlotIndex);
	void AI_GetAnimationState(bool* Sleeping, bool* Sitting, bool* Working);
	void AI_SetBlockTalking(bool BlockTalking);
	void AI_GetQuestBlocking(bool* QuestBlocking);
	void AI_FindTavern(bool FindActivityFurniture, bool Occupy, struct FVector* Destination, bool* Find, bool* CanSit);
	void AI_GetCapsuleHalfHeight(float* CapsuleHalfHeight);
	void AI_FindBuildingWorkbenches(struct FVector* Destination, bool* IsWorkbenches);
	void AI_GetNightPatrol(bool* NightPatrol);
	void AI_SpawnTool(TEnumAsByte<E_Tools_E_Tools> Tool);
	void AI_TalkingNPC();
	void AI_FindNPCtoTalk(struct FVector* Destination, struct FVector* lookAt, bool* IsNPC);
	void AI_StopMovement();
	void AI_GetBedIndex(int* BedIndex, int* BedSlotIndex);
	void AI_OutsideInteract();
	void AI_SetCollisionResponse(TEnumAsByte<Engine_ECollisionChannel> Channel, TEnumAsByte<Engine_ECollisionResponse> Response);
	void AI_GetOwnership(TEnumAsByte<E_Ownership_E_Ownership>* Ownership);
	void AI_CheckBuildingIsConstructed(bool* IsConstructed);
	void AI_FindRandomFurniture(TEnumAsByte<E_Ownership_E_Ownership> Location, TEnumAsByte<E_FurnitureCategories_E_FurnitureCategories> FurnitureCategory, bool IgnoreOwnership, struct FVector* Destination, bool* IsFurniture);
	void AI_GetIDFromNPC(struct FString* NPC_ID);
	void AI_GetStats(struct FText* Name, TEnumAsByte<E_Sex_E_Sex>* Sex, float* Age, TEnumAsByte<E_CharacterType_E_CharacterType>* CharacterType);
	void AI_CheckTargetFoliage(bool* IsTargetFoliage);
	void AI_SetCharacterRotation(const struct FRotator& TargetRotation, bool InterpRotation, float InterpSpeed);
	void AI_FindClosestFurniture(TEnumAsByte<E_Ownership_E_Ownership> Location, TEnumAsByte<E_FurnitureCategories_E_FurnitureCategories> FurnitureCategory, bool IgnoreOwnership, struct FVector* Destination, bool* IsFurniture);
	void AI_SetWorkTask();
	void AI_FindWorkPlace(bool GetTask, struct FVector* Destination, bool* WorkPlace, float* WorkRadius, struct FST_TaskList* TaskList, bool* IsTask);
	void AI_GetNPC(class ABP_NPC_C** NPC);
	void AI_FindAnimal(bool ShouldBeDead, struct FVector* Destination, bool* Animal);
	void AI_FindHouse(bool FindBed, bool Occupy, struct FVector* Destination, bool* Find, bool* IsBed);
	void AI_GetMesh(class USkeletalMeshComponent** Mesh);
	void AI_MoveAside();
	void AI_ResetNavInvoker();
	void AI_IncreaseNavInvoker(bool* ToBig);
	void AI_UnlockThings();
	void AI_GetOut();
	void AI_FindField(struct FVector* Destination, bool* Field, struct FST_FieldTasksLists* TaskList, bool* IsTask);
	void AI_AddSkills(TEnumAsByte<E_Skills_E_Skills> Skill, float Value);
	void AI_HideHeldItem(bool IsWorking);
	void AI_ToolInteractFoliage();
	void AI_GetDistanceAndDirection(const struct FVector& Target_Location, const struct FVector& Current_Location, float* Distance, struct FVector* Direction);
	void AI_GetTargetLocation(const struct FVector& Target, float MaxDistance, float MaxDirection, float DistanceToLastPoint, bool OutsideLastPoint, struct FVector* Location);
	void AI_SpawnBow(bool* IsBow);
	void AI_FindFoliage(TEnumAsByte<E_Resources_E_Resources> TargetType, struct FVector* Destination, bool* Foliage);
	void AI_InteractFoliage(bool Timer);
	void AI_InteractResource();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
