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
// Parameters
//---------------------------------------------------------------------------

// Function AIC_NPC.AIC_NPC_C.AI_GetGoHome_Activity
struct AAIC_NPC_C_AI_GetGoHome_Activity_Params
{
	bool                                               GoHome_Activity;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.AI_FindWorkSlot
struct AAIC_NPC_C_AI_FindWorkSlot_Params
{
	struct FVector                                     Destination;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WorkSlot;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.AI_GetCanAffectNavigation
struct AAIC_NPC_C_AI_GetCanAffectNavigation_Params
{
	bool                                               CanAffectNavigation;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.AI_GetIsLookAtTargetRotation
struct AAIC_NPC_C_AI_GetIsLookAtTargetRotation_Params
{
	bool                                               IsLookAtTargetRotation;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.AI_CheckIsChunkInteractable
struct AAIC_NPC_C_AI_CheckIsChunkInteractable_Params
{
	bool                                               Interactable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.AI_SnapToFurnitureSlot
struct AAIC_NPC_C_AI_SnapToFurnitureSlot_Params
{
	bool                                               ToFinishSlot;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.AI_SpawnBow
struct AAIC_NPC_C_AI_SpawnBow_Params
{
	bool                                               IsBow;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.AI_FindAnimalsBreederPoint
struct AAIC_NPC_C_AI_FindAnimalsBreederPoint_Params
{
	struct FVector                                     Destination;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Point;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.AI_GetNeedItemName
struct AAIC_NPC_C_AI_GetNeedItemName_Params
{
	struct FName                                       NeedItem;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_NPC.AIC_NPC_C.AI_GetNPC_Status
struct AAIC_NPC_C_AI_GetNPC_Status_Params
{
	TEnumAsByte<E_NPCStatus_E_NPCStatus>               NPC_Status;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_Activity_E_Tools_Activity>     NeedTool;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       NeedItem;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_NPC.AIC_NPC_C.AI_CheckSeedsInChest
struct AAIC_NPC_C_AI_CheckSeedsInChest_Params
{
	bool                                               RemoveItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_BagMode_E_BagMode>                   BagSeeds;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsBag;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.AI_GetOutsideNPC_Ownership
struct AAIC_NPC_C_AI_GetOutsideNPC_Ownership_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               OutsideNPC_Ownership;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_NPC.AIC_NPC_C.AI_GetOptimizationStage
struct AAIC_NPC_C_AI_GetOptimizationStage_Params
{
	int                                                OptimizationStage;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_NPC.AIC_NPC_C.AI_FindFishingPoint
struct AAIC_NPC_C_AI_FindFishingPoint_Params
{
	struct FVector                                     Destination;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Find;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.AI_GetNPC_MustBeDeactivated
struct AAIC_NPC_C_AI_GetNPC_MustBeDeactivated_Params
{
	bool                                               NPC_MustBeDeactivated;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.AI_GetWorkHours
struct AAIC_NPC_C_AI_GetWorkHours_Params
{
	struct FST_Hour                                    StartWorkingTime;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_Hour                                    StopWorkingTime;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_NPC.AIC_NPC_C.AI_GetIsGetOut
struct AAIC_NPC_C_AI_GetIsGetOut_Params
{
	bool                                               GetOut;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.AI_GetWorkMonatge
struct AAIC_NPC_C_AI_GetWorkMonatge_Params
{
	class UAnimMontage*                                WorkMontage;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_NPC.AIC_NPC_C.AI_GetDead
struct AAIC_NPC_C_AI_GetDead_Params
{
	bool                                               IsDead;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.AI_GetOptimizationBlackboards
struct AAIC_NPC_C_AI_GetOptimizationBlackboards_Params
{
	struct FST_SAVE_NPC_Blackboards                    OptimizationBlackboards;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_NPC.AIC_NPC_C.AI_GetCollisionResponse
struct AAIC_NPC_C_AI_GetCollisionResponse_Params
{
	TEnumAsByte<Engine_ECollisionChannel>              Channel;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionResponse>             Resposne;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_NPC.AIC_NPC_C.AI_GetIsChangedTimeOfDay
struct AAIC_NPC_C_AI_GetIsChangedTimeOfDay_Params
{
	TEnumAsByte<E_TimeOfDay_E_TimeOfDay>               TimeOfDay;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsChanged;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.AI_GetInteractionSlotIndex
struct AAIC_NPC_C_AI_GetInteractionSlotIndex_Params
{
	int                                                InteractionSlotIndex;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_NPC.AIC_NPC_C.AI_GetAnimationState
struct AAIC_NPC_C_AI_GetAnimationState_Params
{
	bool                                               Sleeping;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Sitting;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Working;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.AI_GetQuestBlocking
struct AAIC_NPC_C_AI_GetQuestBlocking_Params
{
	bool                                               QuestBlocking;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.AI_FindRandomFurniture
struct AAIC_NPC_C_AI_FindRandomFurniture_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_FurnitureCategories_E_FurnitureCategories> FurnitureCategory;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IgnoreOwnership;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Destination;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsFurniture;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.AI_FindTavern
struct AAIC_NPC_C_AI_FindTavern_Params
{
	bool                                               FindActivityFurniture;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Occupy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Destination;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Find;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               CanSit;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.AI_GetCapsuleHalfHeight
struct AAIC_NPC_C_AI_GetCapsuleHalfHeight_Params
{
	float                                              CapsuleHalfHeight;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_NPC.AIC_NPC_C.AI_FindBuildingWorkbenches
struct AAIC_NPC_C_AI_FindBuildingWorkbenches_Params
{
	struct FVector                                     Destination;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsWorkbenches;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.AI_GetNightPatrol
struct AAIC_NPC_C_AI_GetNightPatrol_Params
{
	bool                                               NightPatrol;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.AI_FindNPCtoTalk
struct AAIC_NPC_C_AI_FindNPCtoTalk_Params
{
	struct FVector                                     Destination;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     lookAt;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsNPC;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.AI_GetBedIndex
struct AAIC_NPC_C_AI_GetBedIndex_Params
{
	int                                                BedIndex;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BedSlotIndex;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_NPC.AIC_NPC_C.AI_GetOwnership
struct AAIC_NPC_C_AI_GetOwnership_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_NPC.AIC_NPC_C.AI_CheckBuildingIsConstructed
struct AAIC_NPC_C_AI_CheckBuildingIsConstructed_Params
{
	bool                                               IsConstructed;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.AI_GetIDFromNPC
struct AAIC_NPC_C_AI_GetIDFromNPC_Params
{
	struct FString                                     NPC_ID;                                                    // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function AIC_NPC.AIC_NPC_C.AI_GetStats
struct AAIC_NPC_C_AI_GetStats_Params
{
	struct FText                                       Name;                                                      // (Parm, OutParm)
	TEnumAsByte<E_Sex_E_Sex>                           Sex;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Age;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_CharacterType_E_CharacterType>       CharacterType;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_NPC.AIC_NPC_C.AI_CheckTargetFoliage
struct AAIC_NPC_C_AI_CheckTargetFoliage_Params
{
	bool                                               IsTargetFoliage;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.AI_FindClosestFurniture
struct AAIC_NPC_C_AI_FindClosestFurniture_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_FurnitureCategories_E_FurnitureCategories> FurnitureCategory;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IgnoreOwnership;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Destination;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsFurniture;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.AI_FindWorkPlace
struct AAIC_NPC_C_AI_FindWorkPlace_Params
{
	bool                                               GetTask;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Destination;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WorkPlace;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              WorkRadius;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_TaskList                                TaskList;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsTask;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.AI_GetNPC
struct AAIC_NPC_C_AI_GetNPC_Params
{
	class ABP_NPC_C*                                   NPC;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_NPC.AIC_NPC_C.AI_FindHouse
struct AAIC_NPC_C_AI_FindHouse_Params
{
	bool                                               FindBed;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Occupy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Destination;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Find;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsBed;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.AI_GetMesh
struct AAIC_NPC_C_AI_GetMesh_Params
{
	class USkeletalMeshComponent*                      Mesh;                                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_NPC.AIC_NPC_C.AI_IncreaseNavInvoker
struct AAIC_NPC_C_AI_IncreaseNavInvoker_Params
{
	bool                                               ToBig;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.AI_FindField
struct AAIC_NPC_C_AI_FindField_Params
{
	struct FVector                                     Destination;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Field;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_FieldTasksLists                         TaskList;                                                  // (Parm, OutParm, HasGetValueTypeHash)
	bool                                               IsTask;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.AI_GetDistanceAndDirection
struct AAIC_NPC_C_AI_GetDistanceAndDirection_Params
{
	struct FVector                                     Target_Location;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Current_Location;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Distance;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Direction;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_NPC.AIC_NPC_C.AI_GetTargetLocation
struct AAIC_NPC_C_AI_GetTargetLocation_Params
{
	struct FVector                                     Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxDistance;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxDirection;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistanceToLastPoint;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OutsideLastPoint;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Location;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_NPC.AIC_NPC_C.AI_FindFoliage
struct AAIC_NPC_C_AI_FindFoliage_Params
{
	TEnumAsByte<E_Resources_E_Resources>               TargetType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Destination;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Foliage;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.AI_FindAnimal
struct AAIC_NPC_C_AI_FindAnimal_Params
{
	bool                                               ShouldBeDead;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Destination;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Animal;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.SetHeraldActivity
struct AAIC_NPC_C_SetHeraldActivity_Params
{
};

// Function AIC_NPC.AIC_NPC_C.SetActivity
struct AAIC_NPC_C_SetActivity_Params
{
};

// Function AIC_NPC.AIC_NPC_C.FamilyGetOut
struct AAIC_NPC_C_FamilyGetOut_Params
{
};

// Function AIC_NPC.AIC_NPC_C.FindGoOutsidePoint
struct AAIC_NPC_C_FindGoOutsidePoint_Params
{
	struct FVector                                     OutsidePoint;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_NPC.AIC_NPC_C.GetOutSetting
struct AAIC_NPC_C_GetOutSetting_Params
{
};

// Function AIC_NPC.AIC_NPC_C.RefreshBehaviorTrees
struct AAIC_NPC_C_RefreshBehaviorTrees_Params
{
};

// Function AIC_NPC.AIC_NPC_C.CheckIsBuilding
struct AAIC_NPC_C_CheckIsBuilding_Params
{
	struct FVector                                     CheckLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Destination;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     NewLocation;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_NPC.AIC_NPC_C.SetSceneName
struct AAIC_NPC_C_SetSceneName_Params
{
	class ABP_NPC_C*                                   NPC;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_NPC.AIC_NPC_C.Heal
struct AAIC_NPC_C_Heal_Params
{
	class ABP_PlayerCharacter_C*                       PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_NPC.AIC_NPC_C.GetDistanceAndDirection
struct AAIC_NPC_C_GetDistanceAndDirection_Params
{
	struct FVector                                     Target_Location;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Current_Location;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Distance;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Direction;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_NPC.AIC_NPC_C.UserConstructionScript
struct AAIC_NPC_C_UserConstructionScript_Params
{
};

// Function AIC_NPC.AIC_NPC_C.OnFail_0A0414E3447604926B5365B0ED2C24D3
struct AAIC_NPC_C_OnFail_0A0414E3447604926B5365B0ED2C24D3_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_NPC.AIC_NPC_C.OnSuccess_0A0414E3447604926B5365B0ED2C24D3
struct AAIC_NPC_C_OnSuccess_0A0414E3447604926B5365B0ED2C24D3_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_NPC.AIC_NPC_C.OnFail_D69365224E351F8F67AE7180121F6957
struct AAIC_NPC_C_OnFail_D69365224E351F8F67AE7180121F6957_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_NPC.AIC_NPC_C.OnSuccess_D69365224E351F8F67AE7180121F6957
struct AAIC_NPC_C_OnSuccess_D69365224E351F8F67AE7180121F6957_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_NPC.AIC_NPC_C.OnFail_FFE60B014075BFB86DA926BD8D4E619A
struct AAIC_NPC_C_OnFail_FFE60B014075BFB86DA926BD8D4E619A_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_NPC.AIC_NPC_C.OnSuccess_FFE60B014075BFB86DA926BD8D4E619A
struct AAIC_NPC_C_OnSuccess_FFE60B014075BFB86DA926BD8D4E619A_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_NPC.AIC_NPC_C.OnFail_297B00BD4C1D9B65E914BFB94009257B
struct AAIC_NPC_C_OnFail_297B00BD4C1D9B65E914BFB94009257B_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_NPC.AIC_NPC_C.OnSuccess_297B00BD4C1D9B65E914BFB94009257B
struct AAIC_NPC_C_OnSuccess_297B00BD4C1D9B65E914BFB94009257B_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_NPC.AIC_NPC_C.AI_InteractResource
struct AAIC_NPC_C_AI_InteractResource_Params
{
};

// Function AIC_NPC.AIC_NPC_C.AI_InteractFoliage
struct AAIC_NPC_C_AI_InteractFoliage_Params
{
	bool                                               Timer;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.AI_ToolInteractFoliage
struct AAIC_NPC_C_AI_ToolInteractFoliage_Params
{
};

// Function AIC_NPC.AIC_NPC_C.AI_HideHeldItem
struct AAIC_NPC_C_AI_HideHeldItem_Params
{
	bool                                               IsWorking;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.AI_AddSkills
struct AAIC_NPC_C_AI_AddSkills_Params
{
	TEnumAsByte<E_Skills_E_Skills>                     Skill;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_NPC.AIC_NPC_C.AI_UnlockThings
struct AAIC_NPC_C_AI_UnlockThings_Params
{
};

// Function AIC_NPC.AIC_NPC_C.AI_SetWorkTask
struct AAIC_NPC_C_AI_SetWorkTask_Params
{
};

// Function AIC_NPC.AIC_NPC_C.AI_SetCharacterRotation
struct AAIC_NPC_C_AI_SetCharacterRotation_Params
{
	struct FRotator                                    TargetRotation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               InterpRotation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              InterpSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_NPC.AIC_NPC_C.AI_SetCollisionResponse
struct AAIC_NPC_C_AI_SetCollisionResponse_Params
{
	TEnumAsByte<Engine_ECollisionChannel>              Channel;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionResponse>             Response;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_NPC.AIC_NPC_C.AI_OutsideInteract
struct AAIC_NPC_C_AI_OutsideInteract_Params
{
};

// Function AIC_NPC.AIC_NPC_C.AI_StopMovement
struct AAIC_NPC_C_AI_StopMovement_Params
{
};

// Function AIC_NPC.AIC_NPC_C.AI_TalkingNPC
struct AAIC_NPC_C_AI_TalkingNPC_Params
{
};

// Function AIC_NPC.AIC_NPC_C.AI_SpawnTool
struct AAIC_NPC_C_AI_SpawnTool_Params
{
	TEnumAsByte<E_Tools_E_Tools>                       Tool;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_NPC.AIC_NPC_C.AI_SetBlockTalking
struct AAIC_NPC_C_AI_SetBlockTalking_Params
{
	bool                                               BlockTalking;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.AI_SetInteractionSlotIndex
struct AAIC_NPC_C_AI_SetInteractionSlotIndex_Params
{
	int                                                InteractionSlotIndex;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_NPC.AIC_NPC_C.AI_SpawnOff-HandItem
struct AAIC_NPC_C_AI_SpawnOff_HandItem_Params
{
	TEnumAsByte<E_Tools_E_Tools>                       Item;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_NPC.AIC_NPC_C.AI_HideOff-HandItem
struct AAIC_NPC_C_AI_HideOff_HandItem_Params
{
	bool                                               IsWorking;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.AI_EndTalking
struct AAIC_NPC_C_AI_EndTalking_Params
{
};

// Function AIC_NPC.AIC_NPC_C.AI_SetIsChangedTimeOfDay
struct AAIC_NPC_C_AI_SetIsChangedTimeOfDay_Params
{
	TEnumAsByte<E_TimeOfDay_E_TimeOfDay>               TimeOfDay;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.AI_EnableDeadMethods
struct AAIC_NPC_C_AI_EnableDeadMethods_Params
{
};

// Function AIC_NPC.AIC_NPC_C.AI_SetNPC_MustBeDeactivated
struct AAIC_NPC_C_AI_SetNPC_MustBeDeactivated_Params
{
	bool                                               NPC_MustBeDeactivated;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.AI_SetNPC_Status
struct AAIC_NPC_C_AI_SetNPC_Status_Params
{
	TEnumAsByte<E_NPCStatus_E_NPCStatus>               NPC_Status;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_NPC.AIC_NPC_C.AI_SetNeedItemName
struct AAIC_NPC_C_AI_SetNeedItemName_Params
{
	struct FName                                       NeedItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_NPC.AIC_NPC_C.AI_SetProfessionClothes
struct AAIC_NPC_C_AI_SetProfessionClothes_Params
{
};

// Function AIC_NPC.AIC_NPC_C.AI_SetCasualClothes
struct AAIC_NPC_C_AI_SetCasualClothes_Params
{
};

// Function AIC_NPC.AIC_NPC_C.AI_SetFieldTask
struct AAIC_NPC_C_AI_SetFieldTask_Params
{
	struct FST_FieldTasksLists                         Field_Task;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function AIC_NPC.AIC_NPC_C.AI_RemoveAnimalReference
struct AAIC_NPC_C_AI_RemoveAnimalReference_Params
{
};

// Function AIC_NPC.AIC_NPC_C.AI_HideItemsInHands
struct AAIC_NPC_C_AI_HideItemsInHands_Params
{
	bool                                               IsWorking;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.AI_SetIsLookAtTargetRotation
struct AAIC_NPC_C_AI_SetIsLookAtTargetRotation_Params
{
	bool                                               IsLookAtTargetRotation;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.AI_SetCanAffectNavigation
struct AAIC_NPC_C_AI_SetCanAffectNavigation_Params
{
	bool                                               CanAffectNavigation;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature
struct AAIC_NPC_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAIStimulus                                 Stimulus;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.TaskTree
struct AAIC_NPC_C_TaskTree_Params
{
};

// Function AIC_NPC.AIC_NPC_C.TaskStone
struct AAIC_NPC_C_TaskStone_Params
{
};

// Function AIC_NPC.AIC_NPC_C.TaskFoliage
struct AAIC_NPC_C_TaskFoliage_Params
{
};

// Function AIC_NPC.AIC_NPC_C.TaskShoot
struct AAIC_NPC_C_TaskShoot_Params
{
};

// Function AIC_NPC.AIC_NPC_C.TaskShowInventory
struct AAIC_NPC_C_TaskShowInventory_Params
{
};

// Function AIC_NPC.AIC_NPC_C.TaskWorkbench
struct AAIC_NPC_C_TaskWorkbench_Params
{
};

// Function AIC_NPC.AIC_NPC_C.TaskHusbandryAnimal
struct AAIC_NPC_C_TaskHusbandryAnimal_Params
{
};

// Function AIC_NPC.AIC_NPC_C.TaskPrevious
struct AAIC_NPC_C_TaskPrevious_Params
{
};

// Function AIC_NPC.AIC_NPC_C.StopDoingTask
struct AAIC_NPC_C_StopDoingTask_Params
{
};

// Function AIC_NPC.AIC_NPC_C.TaskField
struct AAIC_NPC_C_TaskField_Params
{
	TEnumAsByte<E_BagMode_E_BagMode>                   Seeds;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_NPC.AIC_NPC_C.AI_GetOut
struct AAIC_NPC_C_AI_GetOut_Params
{
};

// Function AIC_NPC.AIC_NPC_C.AI_ResetNavInvoker
struct AAIC_NPC_C_AI_ResetNavInvoker_Params
{
};

// Function AIC_NPC.AIC_NPC_C.AI_MoveAside
struct AAIC_NPC_C_AI_MoveAside_Params
{
};

// Function AIC_NPC.AIC_NPC_C.UpdateWork
struct AAIC_NPC_C_UpdateWork_Params
{
};

// Function AIC_NPC.AIC_NPC_C.Illness
struct AAIC_NPC_C_Illness_Params
{
};

// Function AIC_NPC.AIC_NPC_C.AfterIllness
struct AAIC_NPC_C_AfterIllness_Params
{
};

// Function AIC_NPC.AIC_NPC_C.Vendoring
struct AAIC_NPC_C_Vendoring_Params
{
};

// Function AIC_NPC.AIC_NPC_C.Init_AI
struct AAIC_NPC_C_Init_AI_Params
{
	class ABP_NPC_C*                                   NPCReference;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               LoadGame;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.GetOutDestroy
struct AAIC_NPC_C_GetOutDestroy_Params
{
};

// Function AIC_NPC.AIC_NPC_C.ComeBack
struct AAIC_NPC_C_ComeBack_Params
{
};

// Function AIC_NPC.AIC_NPC_C.ReceiveBeginPlay
struct AAIC_NPC_C_ReceiveBeginPlay_Params
{
};

// Function AIC_NPC.AIC_NPC_C.UpdateCrowdSteering
struct AAIC_NPC_C_UpdateCrowdSteering_Params
{
	bool                                               Suspend;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.AI_SetActivity
struct AAIC_NPC_C_AI_SetActivity_Params
{
};

// Function AIC_NPC.AIC_NPC_C.AI_SetGoHome_Activity
struct AAIC_NPC_C_AI_SetGoHome_Activity_Params
{
	bool                                               GoHome_Activity;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_NPC.AIC_NPC_C.HeraldSitting
struct AAIC_NPC_C_HeraldSitting_Params
{
};

// Function AIC_NPC.AIC_NPC_C.OutsideRandomSitting
struct AAIC_NPC_C_OutsideRandomSitting_Params
{
};

// Function AIC_NPC.AIC_NPC_C.ActivityTavern
struct AAIC_NPC_C_ActivityTavern_Params
{
};

// Function AIC_NPC.AIC_NPC_C.WorkPatrol
struct AAIC_NPC_C_WorkPatrol_Params
{
};

// Function AIC_NPC.AIC_NPC_C.WorkBabysit
struct AAIC_NPC_C_WorkBabysit_Params
{
};

// Function AIC_NPC.AIC_NPC_C.GoOutside
struct AAIC_NPC_C_GoOutside_Params
{
};

// Function AIC_NPC.AIC_NPC_C.ActivityNothing
struct AAIC_NPC_C_ActivityNothing_Params
{
};

// Function AIC_NPC.AIC_NPC_C.ActivityTalking
struct AAIC_NPC_C_ActivityTalking_Params
{
};

// Function AIC_NPC.AIC_NPC_C.ActivitySitting
struct AAIC_NPC_C_ActivitySitting_Params
{
};

// Function AIC_NPC.AIC_NPC_C.ExecuteUbergraph_AIC_NPC
struct AAIC_NPC_C_ExecuteUbergraph_AIC_NPC_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
