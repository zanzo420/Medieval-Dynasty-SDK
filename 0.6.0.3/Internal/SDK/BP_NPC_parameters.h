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

// Function BP_NPC.BP_NPC_C.AI_GetGoHome_Activity
struct ABP_NPC_C_AI_GetGoHome_Activity_Params
{
	bool                                               GoHome_Activity;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.AI_FindWorkSlot
struct ABP_NPC_C_AI_FindWorkSlot_Params
{
	struct FVector                                     Destination;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WorkSlot;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.AI_GetCanAffectNavigation
struct ABP_NPC_C_AI_GetCanAffectNavigation_Params
{
	bool                                               CanAffectNavigation;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.AI_GetIsLookAtTargetRotation
struct ABP_NPC_C_AI_GetIsLookAtTargetRotation_Params
{
	bool                                               IsLookAtTargetRotation;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.AI_CheckIsChunkInteractable
struct ABP_NPC_C_AI_CheckIsChunkInteractable_Params
{
	bool                                               Interactable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.AI_SnapToFurnitureSlot
struct ABP_NPC_C_AI_SnapToFurnitureSlot_Params
{
	bool                                               ToFinishSlot;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.AI_SpawnBow
struct ABP_NPC_C_AI_SpawnBow_Params
{
	bool                                               IsBow;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.AI_FindAnimalsBreederPoint
struct ABP_NPC_C_AI_FindAnimalsBreederPoint_Params
{
	struct FVector                                     Destination;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Point;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.AI_GetNeedItemName
struct ABP_NPC_C_AI_GetNeedItemName_Params
{
	struct FName                                       NeedItem;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.AI_GetNPC_Status
struct ABP_NPC_C_AI_GetNPC_Status_Params
{
	TEnumAsByte<E_NPCStatus_E_NPCStatus>               NPC_Status;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_Activity_E_Tools_Activity>     NeedTool;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       NeedItem;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.AI_CheckSeedsInChest
struct ABP_NPC_C_AI_CheckSeedsInChest_Params
{
	bool                                               RemoveItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_BagMode_E_BagMode>                   BagSeeds;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsBag;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.AI_GetOutsideNPC_Ownership
struct ABP_NPC_C_AI_GetOutsideNPC_Ownership_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               OutsideNPC_Ownership;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.AI_GetOptimizationStage
struct ABP_NPC_C_AI_GetOptimizationStage_Params
{
	int                                                OptimizationStage;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.AI_FindFishingPoint
struct ABP_NPC_C_AI_FindFishingPoint_Params
{
	struct FVector                                     Destination;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Find;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.AI_GetNPC_MustBeDeactivated
struct ABP_NPC_C_AI_GetNPC_MustBeDeactivated_Params
{
	bool                                               NPC_MustBeDeactivated;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.AI_GetWorkHours
struct ABP_NPC_C_AI_GetWorkHours_Params
{
	struct FST_Hour                                    StartWorkingTime;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_Hour                                    StopWorkingTime;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.AI_GetIsGetOut
struct ABP_NPC_C_AI_GetIsGetOut_Params
{
	bool                                               GetOut;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.AI_GetWorkMonatge
struct ABP_NPC_C_AI_GetWorkMonatge_Params
{
	class UAnimMontage*                                WorkMontage;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.AI_GetDead
struct ABP_NPC_C_AI_GetDead_Params
{
	bool                                               IsDead;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.AI_GetOptimizationBlackboards
struct ABP_NPC_C_AI_GetOptimizationBlackboards_Params
{
	struct FST_SAVE_NPC_Blackboards                    OptimizationBlackboards;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.AI_GetCollisionResponse
struct ABP_NPC_C_AI_GetCollisionResponse_Params
{
	TEnumAsByte<Engine_ECollisionChannel>              Channel;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionResponse>             Resposne;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.AI_GetIsChangedTimeOfDay
struct ABP_NPC_C_AI_GetIsChangedTimeOfDay_Params
{
	TEnumAsByte<E_TimeOfDay_E_TimeOfDay>               TimeOfDay;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsChanged;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.AI_GetInteractionSlotIndex
struct ABP_NPC_C_AI_GetInteractionSlotIndex_Params
{
	int                                                InteractionSlotIndex;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.AI_GetAnimationState
struct ABP_NPC_C_AI_GetAnimationState_Params
{
	bool                                               Sleeping;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Sitting;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Working;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.AI_GetQuestBlocking
struct ABP_NPC_C_AI_GetQuestBlocking_Params
{
	bool                                               QuestBlocking;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.AI_FindRandomFurniture
struct ABP_NPC_C_AI_FindRandomFurniture_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_FurnitureCategories_E_FurnitureCategories> FurnitureCategory;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IgnoreOwnership;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Destination;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsFurniture;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.AI_FindTavern
struct ABP_NPC_C_AI_FindTavern_Params
{
	bool                                               FindActivityFurniture;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Occupy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Destination;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Find;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               CanSit;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.AI_GetCapsuleHalfHeight
struct ABP_NPC_C_AI_GetCapsuleHalfHeight_Params
{
	float                                              CapsuleHalfHeight;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.AI_FindBuildingWorkbenches
struct ABP_NPC_C_AI_FindBuildingWorkbenches_Params
{
	struct FVector                                     Destination;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsWorkbenches;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.AI_GetNightPatrol
struct ABP_NPC_C_AI_GetNightPatrol_Params
{
	bool                                               NightPatrol;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.AI_FindNPCtoTalk
struct ABP_NPC_C_AI_FindNPCtoTalk_Params
{
	struct FVector                                     Destination;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     lookAt;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsNPC;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.AI_GetBedIndex
struct ABP_NPC_C_AI_GetBedIndex_Params
{
	int                                                BedIndex;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BedSlotIndex;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.AI_GetOwnership
struct ABP_NPC_C_AI_GetOwnership_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.AI_CheckBuildingIsConstructed
struct ABP_NPC_C_AI_CheckBuildingIsConstructed_Params
{
	bool                                               IsConstructed;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.AI_GetIDFromNPC
struct ABP_NPC_C_AI_GetIDFromNPC_Params
{
	struct FString                                     NPC_ID;                                                    // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.AI_GetStats
struct ABP_NPC_C_AI_GetStats_Params
{
	struct FText                                       Name;                                                      // (Parm, OutParm)
	TEnumAsByte<E_Sex_E_Sex>                           Sex;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Age;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_CharacterType_E_CharacterType>       CharacterType;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.AI_CheckTargetFoliage
struct ABP_NPC_C_AI_CheckTargetFoliage_Params
{
	bool                                               IsTargetFoliage;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.AI_FindClosestFurniture
struct ABP_NPC_C_AI_FindClosestFurniture_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_FurnitureCategories_E_FurnitureCategories> FurnitureCategory;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IgnoreOwnership;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Destination;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsFurniture;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.AI_FindWorkPlace
struct ABP_NPC_C_AI_FindWorkPlace_Params
{
	bool                                               GetTask;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Destination;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WorkPlace;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              WorkRadius;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_TaskList                                TaskList;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsTask;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.AI_GetNPC
struct ABP_NPC_C_AI_GetNPC_Params
{
	class ABP_NPC_C*                                   NPC;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.AI_FindAnimal
struct ABP_NPC_C_AI_FindAnimal_Params
{
	bool                                               ShouldBeDead;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Destination;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Animal;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.AI_FindHouse
struct ABP_NPC_C_AI_FindHouse_Params
{
	bool                                               FindBed;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Occupy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Destination;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Find;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsBed;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.AI_GetMesh
struct ABP_NPC_C_AI_GetMesh_Params
{
	class USkeletalMeshComponent*                      Mesh;                                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.AI_IncreaseNavInvoker
struct ABP_NPC_C_AI_IncreaseNavInvoker_Params
{
	bool                                               ToBig;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.AI_FindField
struct ABP_NPC_C_AI_FindField_Params
{
	struct FVector                                     Destination;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Field;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_FieldTasksLists                         TaskList;                                                  // (Parm, OutParm, HasGetValueTypeHash)
	bool                                               IsTask;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.AI_GetDistanceAndDirection
struct ABP_NPC_C_AI_GetDistanceAndDirection_Params
{
	struct FVector                                     Target_Location;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Current_Location;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Distance;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Direction;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.AI_GetTargetLocation
struct ABP_NPC_C_AI_GetTargetLocation_Params
{
	struct FVector                                     Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxDistance;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxDirection;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistanceToLastPoint;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OutsideLastPoint;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Location;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.AI_FindFoliage
struct ABP_NPC_C_AI_FindFoliage_Params
{
	TEnumAsByte<E_Resources_E_Resources>               TargetType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Destination;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Foliage;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.SetMinDeadAge
struct ABP_NPC_C_SetMinDeadAge_Params
{
};

// Function BP_NPC.BP_NPC_C.FixPlayersWifeAffection
struct ABP_NPC_C_FixPlayersWifeAffection_Params
{
	struct FString                                     SaveGameVersion;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.GetToolHoldableClass
struct ABP_NPC_C_GetToolHoldableClass_Params
{
	bool                                               NeedTool;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               FoundTool;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.SetGiftVendorItems
struct ABP_NPC_C_SetGiftVendorItems_Params
{
	struct FST_VendorCategory                          VendorCategory;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.SetCustomNPC_DTHandler
struct ABP_NPC_C_SetCustomNPC_DTHandler_Params
{
};

// Function BP_NPC.BP_NPC_C.GetDirection
struct ABP_NPC_C_GetDirection_Params
{
	float                                              Direction;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.SelectCaster
struct ABP_NPC_C_SelectCaster_Params
{
	class USkeletalMesh*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.ToolInteractFoliage
struct ABP_NPC_C_ToolInteractFoliage_Params
{
};

// Function BP_NPC.BP_NPC_C.FixCustomNPCsProfessions
struct ABP_NPC_C_FixCustomNPCsProfessions_Params
{
};

// Function BP_NPC.BP_NPC_C.GetProfessionData
struct ABP_NPC_C_GetProfessionData_Params
{
	struct FST_Profession                              ProfessionData;                                            // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.CheckUnderTheMap
struct ABP_NPC_C_CheckUnderTheMap_Params
{
};

// Function BP_NPC.BP_NPC_C.SetMeshesFromPreset
struct ABP_NPC_C_SetMeshesFromPreset_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      NewClass;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UpdateOnly;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.OnOptimizationDeactive
struct ABP_NPC_C_OnOptimizationDeactive_Params
{
};

// Function BP_NPC.BP_NPC_C.OnOptimizationActive
struct ABP_NPC_C_OnOptimizationActive_Params
{
};

// Function BP_NPC.BP_NPC_C.OnNPCDead
struct ABP_NPC_C_OnNPCDead_Params
{
};

// Function BP_NPC.BP_NPC_C.UnbindFurnitureEvents
struct ABP_NPC_C_UnbindFurnitureEvents_Params
{
	class ABP_MasterFurniture_C*                       Furniture;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.BindFurnitureEvents
struct ABP_NPC_C_BindFurnitureEvents_Params
{
	class ABP_MasterFurniture_C*                       Furniture;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.OnPlayerOccupy
struct ABP_NPC_C_OnPlayerOccupy_Params
{
	class ABP_MasterFurniture_C*                       Furniture;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.OnDayChanged
struct ABP_NPC_C_OnDayChanged_Params
{
};

// Function BP_NPC.BP_NPC_C.SetNPCBehaviorFromSave
struct ABP_NPC_C_SetNPCBehaviorFromSave_Params
{
};

// Function BP_NPC.BP_NPC_C.GetTransformByRoot
struct ABP_NPC_C_GetTransformByRoot_Params
{
	struct FTransform                                  Transform;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FVector                                     WorldLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  ActorTransform;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FVector                                     Location;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Direction;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.FindTavern
struct ABP_NPC_C_FindTavern_Params
{
	bool                                               FindActivityFurniture;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Occupy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Destination;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Find;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               CanSit;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.EndTalking
struct ABP_NPC_C_EndTalking_Params
{
};

// Function BP_NPC.BP_NPC_C.SetSceneName
struct ABP_NPC_C_SetSceneName_Params
{
};

// Function BP_NPC.BP_NPC_C.RespawnInfant
struct ABP_NPC_C_RespawnInfant_Params
{
};

// Function BP_NPC.BP_NPC_C.SetRelationsReference
struct ABP_NPC_C_SetRelationsReference_Params
{
	struct FString                                     FatherID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     MotherID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     PartnerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FString>                             SiblingsID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FString>                             ChildrenID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FString                                     HouseID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     WorkPlaceID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Liking;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Affection;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsPregnant;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                TimeToBirth;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.Destroy NPC
struct ABP_NPC_C_Destroy_NPC_Params
{
};

// Function BP_NPC.BP_NPC_C.SetNPCDataFromSave
struct ABP_NPC_C_SetNPCDataFromSave_Params
{
	struct FST_SAVE_NPC                                NPCData;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                               ResetEQ;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     SaveGameVersion;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.GetNPCDataToSave
struct ABP_NPC_C_GetNPCDataToSave_Params
{
	struct FST_SAVE_NPC                                NPCData;                                                   // (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.Set New Collision
struct ABP_NPC_C_Set_New_Collision_Params
{
	bool                                               IsCollision;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.OnDialogueEnded
struct ABP_NPC_C_OnDialogueEnded_Params
{
};

// Function BP_NPC.BP_NPC_C.OnDialogueStarted
struct ABP_NPC_C_OnDialogueStarted_Params
{
};

// Function BP_NPC.BP_NPC_C.OnCharacterTypeChanged
struct ABP_NPC_C_OnCharacterTypeChanged_Params
{
};

// Function BP_NPC.BP_NPC_C.OnSeasonChanged
struct ABP_NPC_C_OnSeasonChanged_Params
{
};

// Function BP_NPC.BP_NPC_C.FindTool
struct ABP_NPC_C_FindTool_Params
{
	TEnumAsByte<E_Tools_E_Tools>                       ToolType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Found_;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_ItemDetails                             ItemDetails;                                               // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.GetProfession
struct ABP_NPC_C_GetProfession_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.GetBlackboardValues_ResourceName
struct ABP_NPC_C_GetBlackboardValues_ResourceName_Params
{
	struct FName                                       ResourceName;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.SetBlackboardValues_ResourceName
struct ABP_NPC_C_SetBlackboardValues_ResourceName_Params
{
	struct FName                                       ResourceName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.GetBlackboardValues_Building
struct ABP_NPC_C_GetBlackboardValues_Building_Params
{
	TEnumAsByte<E_Buildings_E_Buildings>               Building;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.GetBlackboardValues_Seeds
struct ABP_NPC_C_GetBlackboardValues_Seeds_Params
{
	TEnumAsByte<E_BagMode_E_BagMode>                   Seeds;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.SetBlackboardValues_Building
struct ABP_NPC_C_SetBlackboardValues_Building_Params
{
	TEnumAsByte<E_Buildings_E_Buildings>               Building;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.SetBlackboardValues_Seeds
struct ABP_NPC_C_SetBlackboardValues_Seeds_Params
{
	TEnumAsByte<E_BagMode_E_BagMode>                   Seeds;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.GetBlackboardValues_Talk
struct ABP_NPC_C_GetBlackboardValues_Talk_Params
{
	TEnumAsByte<E_Talk_E_Talk>                         Talk;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.GetBlackboardValues_CurrentResourceState
struct ABP_NPC_C_GetBlackboardValues_CurrentResourceState_Params
{
	TEnumAsByte<E_ResourceState_E_ResourceState>       ResourceState;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.SetBlackboardValues_Talk
struct ABP_NPC_C_SetBlackboardValues_Talk_Params
{
	TEnumAsByte<E_Talk_E_Talk>                         Talk;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.SetBlackboardValues_CurrentResourceState
struct ABP_NPC_C_SetBlackboardValues_CurrentResourceState_Params
{
	TEnumAsByte<E_ResourceState_E_ResourceState>       ResourceState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.GetBlackboardValues_ResourceState
struct ABP_NPC_C_GetBlackboardValues_ResourceState_Params
{
	TEnumAsByte<E_ResourceState_E_ResourceState>       ResourceState;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.SetBlackboardValues_ResourceState
struct ABP_NPC_C_SetBlackboardValues_ResourceState_Params
{
	TEnumAsByte<E_ResourceState_E_ResourceState>       ResourceState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.GetBlackboardValues_TaskState
struct ABP_NPC_C_GetBlackboardValues_TaskState_Params
{
	TEnumAsByte<E_TaskState_E_TaskState>               TaskState;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.GetBlackboardValues_CurrentTask
struct ABP_NPC_C_GetBlackboardValues_CurrentTask_Params
{
	TEnumAsByte<E_Tasks_E_Tasks>                       Task;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.GetBlackboardValues_Task
struct ABP_NPC_C_GetBlackboardValues_Task_Params
{
	TEnumAsByte<E_Tasks_E_Tasks>                       Task;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.GetBlackboardValues_WorkTask
struct ABP_NPC_C_GetBlackboardValues_WorkTask_Params
{
	TEnumAsByte<E_Tasks_E_Tasks>                       WorkTask;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.GetBlackboardValues_Rest
struct ABP_NPC_C_GetBlackboardValues_Rest_Params
{
	TEnumAsByte<E_Rest_E_Rest>                         Rest;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.GetBlackboardValues_CurrentNPCBehavior
struct ABP_NPC_C_GetBlackboardValues_CurrentNPCBehavior_Params
{
	TEnumAsByte<E_NPCBehavior_E_NPCBehavior>           NPCBehavior;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.SetBlackboardValues_TaskState
struct ABP_NPC_C_SetBlackboardValues_TaskState_Params
{
	TEnumAsByte<E_TaskState_E_TaskState>               TaskState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.SetBlackboardValues_CurrentTask
struct ABP_NPC_C_SetBlackboardValues_CurrentTask_Params
{
	TEnumAsByte<E_Tasks_E_Tasks>                       Task;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.SetBlackboardValues_Task
struct ABP_NPC_C_SetBlackboardValues_Task_Params
{
	TEnumAsByte<E_Tasks_E_Tasks>                       Task;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.SetBlackboardValues_WorkTask
struct ABP_NPC_C_SetBlackboardValues_WorkTask_Params
{
	TEnumAsByte<E_Tasks_E_Tasks>                       WorkTask;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.SetBlackboardValues_Rest
struct ABP_NPC_C_SetBlackboardValues_Rest_Params
{
	TEnumAsByte<E_Rest_E_Rest>                         Rest;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.SetBlackboardValues_CurrentNPCBehavior
struct ABP_NPC_C_SetBlackboardValues_CurrentNPCBehavior_Params
{
	TEnumAsByte<E_NPCBehavior_E_NPCBehavior>           NPCBehavior;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.GetBlackboardValues_NPCBehavior
struct ABP_NPC_C_GetBlackboardValues_NPCBehavior_Params
{
	TEnumAsByte<E_NPCBehavior_E_NPCBehavior>           NPCBehavior;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.GetBlackboardValues_DailyCycle
struct ABP_NPC_C_GetBlackboardValues_DailyCycle_Params
{
	TEnumAsByte<E_DailyCycle_E_DailyCycle>             DailyCycle;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.GetBlackboardValues_Int
struct ABP_NPC_C_GetBlackboardValues_Int_Params
{
	TEnumAsByte<E_NPC_BlackboardInt_E_NPC_BlackboardInt> Blackboard_Int;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Int;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.SetBlackboardValues_NPCBehavior
struct ABP_NPC_C_SetBlackboardValues_NPCBehavior_Params
{
	TEnumAsByte<E_NPCBehavior_E_NPCBehavior>           NPCBehavior;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.SetBlackboardValues_DailyCycle
struct ABP_NPC_C_SetBlackboardValues_DailyCycle_Params
{
	TEnumAsByte<E_DailyCycle_E_DailyCycle>             DailyCycle;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.SetBlackboardValues_Int
struct ABP_NPC_C_SetBlackboardValues_Int_Params
{
	TEnumAsByte<E_NPC_BlackboardInt_E_NPC_BlackboardInt> Blackboard_Int;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Int;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.GetBlackboardValues_Vector
struct ABP_NPC_C_GetBlackboardValues_Vector_Params
{
	TEnumAsByte<E_NPC_BlackboardVector_E_NPC_BlackboardVector> Blackboard_Vector;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     VectorValue;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.GetBlackboardValues_Boolean
struct ABP_NPC_C_GetBlackboardValues_Boolean_Params
{
	TEnumAsByte<E_NPC_BlackboardBoolean_E_NPC_BlackboardBoolean> BlackboardBoolean;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BooleanValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.GetBlackboardValues_Object
struct ABP_NPC_C_GetBlackboardValues_Object_Params
{
	TEnumAsByte<E_NPC_BlackboardObject_E_NPC_BlackboardObject> BlackboardObject;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     Object;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.SetBlackboardValues_Vector
struct ABP_NPC_C_SetBlackboardValues_Vector_Params
{
	TEnumAsByte<E_NPC_BlackboardVector_E_NPC_BlackboardVector> Blackboard_Vector;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.SetBlackboardValues_Boolean
struct ABP_NPC_C_SetBlackboardValues_Boolean_Params
{
	TEnumAsByte<E_NPC_BlackboardBoolean_E_NPC_BlackboardBoolean> BlackboardBoolean;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.SetBlackboardValues_Object
struct ABP_NPC_C_SetBlackboardValues_Object_Params
{
	TEnumAsByte<E_NPC_BlackboardObject_E_NPC_BlackboardObject> BlacboardObject;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     Object;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.FindCampfire
struct ABP_NPC_C_FindCampfire_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               LocationType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IgnoreOwnership;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Destination;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsFurniture;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.CheckBagOfSeedsInInventoryOrChest
struct ABP_NPC_C_CheckBagOfSeedsInInventoryOrChest_Params
{
	bool                                               RemoveItem_;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Seeds_E_Seeds>                       SeedType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsBag;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.GetLookingRotation
struct ABP_NPC_C_GetLookingRotation_Params
{
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.AddItemToInventory
struct ABP_NPC_C_AddItemToInventory_Params
{
	struct FName                                       Item_ID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Count;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentHP;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxHP;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Capacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Freshness;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AddedAtIndex;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.FindHouse
struct ABP_NPC_C_FindHouse_Params
{
	bool                                               FindBed;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Occupy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Destination;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Find;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsBed;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.CheckForTalkGoal
struct ABP_NPC_C_CheckForTalkGoal_Params
{
	class UDialogue*                                   Dialogue;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Found;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.IsInteractable
struct ABP_NPC_C_IsInteractable_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Interactable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Possibility;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShowPressUI;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShowTimerUI;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShowOnlyName;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Time;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Distance;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.GetHeldItem
struct ABP_NPC_C_GetHeldItem_Params
{
	class ABP_MasterHoldableItem_C*                    HeldItem;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.OnLoaded_2A48D8854175C5A6A7FC3D82664B3D26
struct ABP_NPC_C_OnLoaded_2A48D8854175C5A6A7FC3D82664B3D26_Params
{
	class UClass*                                      Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.OnLoaded_306E1C1447AE3C11220DDC9AADCA6AB0
struct ABP_NPC_C_OnLoaded_306E1C1447AE3C11220DDC9AADCA6AB0_Params
{
	class UClass*                                      Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.OnLoaded_BB2717E64866BD380FC9D781DB1EF03A
struct ABP_NPC_C_OnLoaded_BB2717E64866BD380FC9D781DB1EF03A_Params
{
	class UClass*                                      Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.OnLoaded_9AA73FD8484CD67355ABCEB05F2C8AB7
struct ABP_NPC_C_OnLoaded_9AA73FD8484CD67355ABCEB05F2C8AB7_Params
{
	class UClass*                                      Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.AI_GetOut
struct ABP_NPC_C_AI_GetOut_Params
{
};

// Function BP_NPC.BP_NPC_C.AI_ResetNavInvoker
struct ABP_NPC_C_AI_ResetNavInvoker_Params
{
};

// Function BP_NPC.BP_NPC_C.AI_MoveAside
struct ABP_NPC_C_AI_MoveAside_Params
{
};

// Function BP_NPC.BP_NPC_C.UpdateCrowdSteering
struct ABP_NPC_C_UpdateCrowdSteering_Params
{
	bool                                               Suspend;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.ReceiveBeginPlay
struct ABP_NPC_C_ReceiveBeginPlay_Params
{
};

// Function BP_NPC.BP_NPC_C.AI_InteractResource
struct ABP_NPC_C_AI_InteractResource_Params
{
};

// Function BP_NPC.BP_NPC_C.AI_InteractFoliage
struct ABP_NPC_C_AI_InteractFoliage_Params
{
	bool                                               Timer;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.AI_HideHeldItem
struct ABP_NPC_C_AI_HideHeldItem_Params
{
	bool                                               IsWorking;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.Interact
struct ABP_NPC_C_Interact_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               Timer;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.AI_AddSkills
struct ABP_NPC_C_AI_AddSkills_Params
{
	TEnumAsByte<E_Skills_E_Skills>                     Skill;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.AI_UnlockThings
struct ABP_NPC_C_AI_UnlockThings_Params
{
};

// Function BP_NPC.BP_NPC_C.RemoveFromWorkPlace
struct ABP_NPC_C_RemoveFromWorkPlace_Params
{
};

// Function BP_NPC.BP_NPC_C.AI_SetWorkTask
struct ABP_NPC_C_AI_SetWorkTask_Params
{
};

// Function BP_NPC.BP_NPC_C.GoToKing
struct ABP_NPC_C_GoToKing_Params
{
};

// Function BP_NPC.BP_NPC_C.ResetTaskList
struct ABP_NPC_C_ResetTaskList_Params
{
};

// Function BP_NPC.BP_NPC_C.AI_ToolInteractFoliage
struct ABP_NPC_C_AI_ToolInteractFoliage_Params
{
};

// Function BP_NPC.BP_NPC_C.GetUp
struct ABP_NPC_C_GetUp_Params
{
};

// Function BP_NPC.BP_NPC_C.ReceiveTick
struct ABP_NPC_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.AI_SetCharacterRotation
struct ABP_NPC_C_AI_SetCharacterRotation_Params
{
	struct FRotator                                    TargetRotation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               InterpRotation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              InterpSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.MakeSomeNoise
struct ABP_NPC_C_MakeSomeNoise_Params
{
};

// Function BP_NPC.BP_NPC_C.StopShouting
struct ABP_NPC_C_StopShouting_Params
{
};

// Function BP_NPC.BP_NPC_C.ShowInspectorUI
struct ABP_NPC_C_ShowInspectorUI_Params
{
};

// Function BP_NPC.BP_NPC_C.Init_NPC
struct ABP_NPC_C_Init_NPC_Params
{
	bool                                               LoadGame;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.AI_SetCollisionResponse
struct ABP_NPC_C_AI_SetCollisionResponse_Params
{
	TEnumAsByte<Engine_ECollisionChannel>              Channel;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECollisionResponse>             Response;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.AI_OutsideInteract
struct ABP_NPC_C_AI_OutsideInteract_Params
{
};

// Function BP_NPC.BP_NPC_C.ResetTaskStateAfterSkip
struct ABP_NPC_C_ResetTaskStateAfterSkip_Params
{
};

// Function BP_NPC.BP_NPC_C.LoadNPCDataFromSave
struct ABP_NPC_C_LoadNPCDataFromSave_Params
{
	struct FST_SAVE_NPC                                NPCData;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                               ResetEQ;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     SaveGameVersion;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.SetMesh
struct ABP_NPC_C_SetMesh_Params
{
	class USkeletalMesh*                               NewHeadMesh;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               NewTorsoMesh;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               NewHandsMesh;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               NewLegsMesh;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               NewFeetMesh;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               NewHatSKMesh;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               NewHoodMesh;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               NewHairMesh;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               NewBackpackMesh;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               NewPouchMesh;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      NewClass;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UpdateOnly;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.SetMeshAndMaterials
struct ABP_NPC_C_SetMeshAndMaterials_Params
{
	class USkeletalMesh*                               HeadMesh;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               TorsoMesh;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               HandsMesh;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               LegsMesh;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               FeetMesh;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               HatSKMesh;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               HoodMesh;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               Backpack;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               Pouch;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      AnimClass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_MeshDynamicMaterials>            DynamicMaterials;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function BP_NPC.BP_NPC_C.AI_StopMovement
struct ABP_NPC_C_AI_StopMovement_Params
{
};

// Function BP_NPC.BP_NPC_C.AI_TalkingNPC
struct ABP_NPC_C_AI_TalkingNPC_Params
{
};

// Function BP_NPC.BP_NPC_C.EnableNPC
struct ABP_NPC_C_EnableNPC_Params
{
};

// Function BP_NPC.BP_NPC_C.DisableNPC
struct ABP_NPC_C_DisableNPC_Params
{
};

// Function BP_NPC.BP_NPC_C.StartFalling
struct ABP_NPC_C_StartFalling_Params
{
};

// Function BP_NPC.BP_NPC_C.TeleportToLandscape
struct ABP_NPC_C_TeleportToLandscape_Params
{
};

// Function BP_NPC.BP_NPC_C.EndFalling
struct ABP_NPC_C_EndFalling_Params
{
};

// Function BP_NPC.BP_NPC_C.AI_SpawnTool
struct ABP_NPC_C_AI_SpawnTool_Params
{
	TEnumAsByte<E_Tools_E_Tools>                       Tool;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.AnimNotify_WorkMontageComplete
struct ABP_NPC_C_AnimNotify_WorkMontageComplete_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ProfessionState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.AnimNotify_WorkLoopsFinished
struct ABP_NPC_C_AnimNotify_WorkLoopsFinished_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ProfessionState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Loop;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.InitSetSkills
struct ABP_NPC_C_InitSetSkills_Params
{
	bool                                               Birth;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.OnGetUp
struct ABP_NPC_C_OnGetUp_Params
{
};

// Function BP_NPC.BP_NPC_C.AI_SetBlockTalking
struct ABP_NPC_C_AI_SetBlockTalking_Params
{
	bool                                               BlockTalking;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.OnWakeUp
struct ABP_NPC_C_OnWakeUp_Params
{
};

// Function BP_NPC.BP_NPC_C.AI_SetInteractionSlotIndex
struct ABP_NPC_C_AI_SetInteractionSlotIndex_Params
{
	int                                                InteractionSlotIndex;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.AI_SpawnOff-HandItem
struct ABP_NPC_C_AI_SpawnOff_HandItem_Params
{
	TEnumAsByte<E_Tools_E_Tools>                       Item;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.AI_HideOff-HandItem
struct ABP_NPC_C_AI_HideOff_HandItem_Params
{
	bool                                               IsWorking;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.AI_EndTalking
struct ABP_NPC_C_AI_EndTalking_Params
{
};

// Function BP_NPC.BP_NPC_C.AI_SetIsChangedTimeOfDay
struct ABP_NPC_C_AI_SetIsChangedTimeOfDay_Params
{
	TEnumAsByte<E_TimeOfDay_E_TimeOfDay>               TimeOfDay;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.StuffDone
struct ABP_NPC_C_StuffDone_Params
{
};

// Function BP_NPC.BP_NPC_C.BindSitSleep
struct ABP_NPC_C_BindSitSleep_Params
{
};

// Function BP_NPC.BP_NPC_C.AI_EnableDeadMethods
struct ABP_NPC_C_AI_EnableDeadMethods_Params
{
};

// Function BP_NPC.BP_NPC_C.UpdateOnDead
struct ABP_NPC_C_UpdateOnDead_Params
{
};

// Function BP_NPC.BP_NPC_C.RemoveFamilyFromHouse
struct ABP_NPC_C_RemoveFamilyFromHouse_Params
{
};

// Function BP_NPC.BP_NPC_C.AI_SetNPC_MustBeDeactivated
struct ABP_NPC_C_AI_SetNPC_MustBeDeactivated_Params
{
	bool                                               NPC_MustBeDeactivated;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.NoneOptimization
struct ABP_NPC_C_NoneOptimization_Params
{
};

// Function BP_NPC.BP_NPC_C.CloseOptimization
struct ABP_NPC_C_CloseOptimization_Params
{
};

// Function BP_NPC.BP_NPC_C.MediumOptimization
struct ABP_NPC_C_MediumOptimization_Params
{
};

// Function BP_NPC.BP_NPC_C.FarOptimization
struct ABP_NPC_C_FarOptimization_Params
{
};

// Function BP_NPC.BP_NPC_C.Update Camera Event_2
struct ABP_NPC_C_Update_Camera_Event_2_Params
{
	class UCurveFloat*                                 LerpCurve;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.AI_SetNPC_Status
struct ABP_NPC_C_AI_SetNPC_Status_Params
{
	TEnumAsByte<E_NPCStatus_E_NPCStatus>               NPC_Status;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.AI_SetNeedItemName
struct ABP_NPC_C_AI_SetNeedItemName_Params
{
	struct FName                                       NeedItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.AI_SetCasualClothes
struct ABP_NPC_C_AI_SetCasualClothes_Params
{
};

// Function BP_NPC.BP_NPC_C.AI_SetProfessionClothes
struct ABP_NPC_C_AI_SetProfessionClothes_Params
{
};

// Function BP_NPC.BP_NPC_C.AI_SetFieldTask
struct ABP_NPC_C_AI_SetFieldTask_Params
{
	struct FST_FieldTasksLists                         Field_Task;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.AI_RemoveAnimalReference
struct ABP_NPC_C_AI_RemoveAnimalReference_Params
{
};

// Function BP_NPC.BP_NPC_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct ABP_NPC_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     NormalImpulse;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_NPC.BP_NPC_C.AI_HideItemsInHands
struct ABP_NPC_C_AI_HideItemsInHands_Params
{
	bool                                               IsWorking;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.AfterGetOrWakeUp
struct ABP_NPC_C_AfterGetOrWakeUp_Params
{
};

// Function BP_NPC.BP_NPC_C.AI_SetIsLookAtTargetRotation
struct ABP_NPC_C_AI_SetIsLookAtTargetRotation_Params
{
	bool                                               IsLookAtTargetRotation;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.AI_SetCanAffectNavigation
struct ABP_NPC_C_AI_SetCanAffectNavigation_Params
{
	bool                                               CanAffectNavigation;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.AI_SetActivity
struct ABP_NPC_C_AI_SetActivity_Params
{
};

// Function BP_NPC.BP_NPC_C.AI_SetGoHome_Activity
struct ABP_NPC_C_AI_SetGoHome_Activity_Params
{
	bool                                               GoHome_Activity;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.PlayPickingUpMontage
struct ABP_NPC_C_PlayPickingUpMontage_Params
{
	class UObject*                                     Instigator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PreferTwoHanded;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.Set Sitting Event
struct ABP_NPC_C_Set_Sitting_Event_Params
{
	bool                                               IsSitting;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_SitDownPosition_E_SitDownPosition>   SitDownPosition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.Set Sleeping Event
struct ABP_NPC_C_Set_Sleeping_Event_Params
{
	bool                                               IsSleeping;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_SleepingDirection_E_SleepingDirection> SleepingDirection;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseBedSleepingPose;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPC.BP_NPC_C.ExecuteUbergraph_BP_NPC
struct ABP_NPC_C_ExecuteUbergraph_BP_NPC_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.WorkLoopsFinished__DelegateSignature
struct ABP_NPC_C_WorkLoopsFinished__DelegateSignature_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ProfessionState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Loop;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPC.BP_NPC_C.WorkMontageComplete__DelegateSignature
struct ABP_NPC_C_WorkMontageComplete__DelegateSignature_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ProfessionState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
