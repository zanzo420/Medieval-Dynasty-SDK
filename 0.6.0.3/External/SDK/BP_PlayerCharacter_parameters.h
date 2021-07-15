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

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetInteractionEndpoint
struct ABP_PlayerCharacter_C_GetInteractionEndpoint_Params
{
	float                                              Distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     EndPoint;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetPhysicsHandle
struct ABP_PlayerCharacter_C_GetPhysicsHandle_Params
{
	class UPhysicsHandleComponent*                     PhysicsHandle;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnWaitForCraftingInteraction
struct ABP_PlayerCharacter_C_OnWaitForCraftingInteraction_Params
{
	class ABP_MasterFurniture_Workbench_C*             InteractedWorkbench;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     InteractLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsFovChanging
struct ABP_PlayerCharacter_C_IsFovChanging_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCloseCraftingInteraction
struct ABP_PlayerCharacter_C_OnCloseCraftingInteraction_Params
{
	class ABP_MasterFurniture_Workbench_C*             InteractedWorkbench;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     InteractLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetRandomPointOnTerrain
struct ABP_PlayerCharacter_C_GetRandomPointOnTerrain_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMeshComponent*                              Mesh;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	struct FVector                                     Location;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.FindRandomPointForUnstuck
struct ABP_PlayerCharacter_C_FindRandomPointForUnstuck_Params
{
	struct FVector                                     RandomLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TryToUnstuckPlayer
struct ABP_PlayerCharacter_C_TryToUnstuckPlayer_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	struct FVector                                     TargetLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    TargetRotation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractTimerFinish
struct ABP_PlayerCharacter_C_InteractTimerFinish_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractTimerActor
struct ABP_PlayerCharacter_C_InteractTimerActor_Params
{
	struct FHitResult                                  HitReference;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               FinishedInteraction;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractTimerFoliage
struct ABP_PlayerCharacter_C_InteractTimerFoliage_Params
{
	class UBP_MasterFoliage_C*                         MasterFoliage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  HitReference;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               FinishedInteraction;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractTimer
struct ABP_PlayerCharacter_C_InteractTimer_Params
{
	bool                                               FinishedInteraction;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnDismountingPawnFinished
struct ABP_PlayerCharacter_C_OnDismountingPawnFinished_Params
{
	class AActor*                                      oldPawnMount;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PrepareToDismount
struct ABP_PlayerCharacter_C_PrepareToDismount_Params
{
	class AActor*                                      mountOrRider;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMountActionResponse                        Response;                                                  // (Parm, OutParm, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PrepareToMount
struct ABP_PlayerCharacter_C_PrepareToMount_Params
{
	class AActor*                                      mountOrRider;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      linkedActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMountActionResponse                        Response;                                                  // (Parm, OutParm, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetLookingRotation
struct ABP_PlayerCharacter_C_GetLookingRotation_Params
{
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnMountingPawnFinished
struct ABP_PlayerCharacter_C_OnMountingPawnFinished_Params
{
	class AActor*                                      newMountActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.MoveToMountingLocation
struct ABP_PlayerCharacter_C_MoveToMountingLocation_Params
{
	struct FVector                                     Location;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Orientation;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetFPCameraFOV
struct ABP_PlayerCharacter_C_SetFPCameraFOV_Params
{
	float                                              InFieldOfView;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetCameraViewDirection
struct ABP_PlayerCharacter_C_GetCameraViewDirection_Params
{
	struct FVector                                     Forward;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetFPCameraFOV
struct ABP_PlayerCharacter_C_GetFPCameraFOV_Params
{
	float                                              FieldOfView;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChooseCameraSettings
struct ABP_PlayerCharacter_C_ChooseCameraSettings_Params
{
	struct FST_CameraSettings                          TargetCameraSettings;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.LerpCameraSettings
struct ABP_PlayerCharacter_C_LerpCameraSettings_Params
{
	float                                              LerpAlpha;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                         TargetSpringArm;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Attach Components
struct ABP_PlayerCharacter_C_Attach_Components_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayerPush
struct ABP_PlayerCharacter_C_PlayerPush_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateDefaultFov
struct ABP_PlayerCharacter_C_UpdateDefaultFov_Params
{
	float                                              InFieldOfView;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Unstuck
struct ABP_PlayerCharacter_C_Unstuck_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReEquipHeldItemsForInteraction
struct ABP_PlayerCharacter_C_ReEquipHeldItemsForInteraction_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.HideHeldItemsForInteraction
struct ABP_PlayerCharacter_C_HideHeldItemsForInteraction_Params
{
	TEnumAsByte<E_Tools_E_Tools>                       ToolType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EquipToolForInteraction
struct ABP_PlayerCharacter_C_EquipToolForInteraction_Params
{
	class ABP_MasterHoldableItem_C*                    Holdable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_E_Tools>                       WantedTool;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SelectedSlotWithToolUpdate
struct ABP_PlayerCharacter_C_SelectedSlotWithToolUpdate_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetLastHitActorInteractionDistance
struct ABP_PlayerCharacter_C_GetLastHitActorInteractionDistance_Params
{
	float                                              Distance;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnEndWorkbenchInteraction
struct ABP_PlayerCharacter_C_OnEndWorkbenchInteraction_Params
{
	class ABP_MasterFurniture_Workbench_C*             InteractedWorkbench;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             InteractComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     InteractLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.On Start Workbench Interaction
struct ABP_PlayerCharacter_C_On_Start_Workbench_Interaction_Params
{
	class ABP_MasterFurniture_Workbench_C*             InteractedWorkbench;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             InteractComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     InteractLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ChangeCamera;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UseLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UseLookAt;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    LookAtRotation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ResetPitch;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetInBuildingMode
struct ABP_PlayerCharacter_C_SetInBuildingMode_Params
{
	bool                                               Active;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateGhosts
struct ABP_PlayerCharacter_C_UpdateGhosts_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SpawnOffHandItem
struct ABP_PlayerCharacter_C_SpawnOffHandItem_Params
{
	class UClass*                                      Class;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  SpawnTransform;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	Engine_ESpawnActorCollisionHandlingMethod          CollisionHandlingOverride;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Owner;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BaseCharacter_C*                         PlayerCharacterReference;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Capacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentHP;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       Instigator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterHoldableItem_C*                    Output_Get;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DestroyOffHandItem
struct ABP_PlayerCharacter_C_DestroyOffHandItem_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DestroyHeldItem
struct ABP_PlayerCharacter_C_DestroyHeldItem_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SpawnHeldItem
struct ABP_PlayerCharacter_C_SpawnHeldItem_Params
{
	class UClass*                                      Class;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  SpawnTransform;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	Engine_ESpawnActorCollisionHandlingMethod          CollisionHandlingOverride;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Owner;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BaseCharacter_C*                         PlayerCharacterReference;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Capacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentHP;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       Instigator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterHoldableItem_C*                    Output_Get;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.On ALS_Aiming Changed
struct ABP_PlayerCharacter_C_On_ALS_Aiming_Changed_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Holster Weapon
struct ABP_PlayerCharacter_C_Holster_Weapon_Params
{
	bool                                               IsSwitch;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsSwitch;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsValidHeldItem;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractionDetect
struct ABP_PlayerCharacter_C_InteractionDetect_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.On ALS_ViewMode Changed
struct ABP_PlayerCharacter_C_On_ALS_ViewMode_Changed_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReEquipHeldItems
struct ABP_PlayerCharacter_C_ReEquipHeldItems_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Hide Held Items
struct ABP_PlayerCharacter_C_Hide_Held_Items_Params
{
	class AActor*                                      InteractedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StopBarterWithNPC
struct ABP_PlayerCharacter_C_StopBarterWithNPC_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartBarterWithNPC
struct ABP_PlayerCharacter_C_StartBarterWithNPC_Params
{
	class ABP_NPC_C*                                   NPCReference;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               GiftGiving;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.isPlayer
struct ABP_PlayerCharacter_C_isPlayer_Params
{
	bool                                               Player;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class APC_Player_C*                                PlayerController;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TryToGetResourcesForBuilding
struct ABP_PlayerCharacter_C_TryToGetResourcesForBuilding_Params
{
	class ABP_MasterBuilding_C*                        Building;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterBuildModule_C*                     Module;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SwapHeldItemToHands
struct ABP_PlayerCharacter_C_SwapHeldItemToHands_Params
{
	bool                                               _2Hand;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.RevertHeldItem
struct ABP_PlayerCharacter_C_RevertHeldItem_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SwapHeldItem
struct ABP_PlayerCharacter_C_SwapHeldItem_Params
{
	struct FName                                       ItemName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ArrayID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ToggleGameMenu
struct ABP_PlayerCharacter_C_ToggleGameMenu_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SelectQuickSlot
struct ABP_PlayerCharacter_C_SelectQuickSlot_Params
{
	int                                                SelectedQuickSlotID;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DrawWeapon_;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractRange
struct ABP_PlayerCharacter_C_InteractRange_Params
{
	float                                              InteractionRange;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     StartVector;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     EndVector;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UserConstructionScript
struct ABP_PlayerCharacter_C_UserConstructionScript_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.FOV__FinishedFunc
struct ABP_PlayerCharacter_C_FOV__FinishedFunc_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.FOV__UpdateFunc
struct ABP_PlayerCharacter_C_FOV__UpdateFunc_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CameraLerp__FinishedFunc
struct ABP_PlayerCharacter_C_CameraLerp__FinishedFunc_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CameraLerp__UpdateFunc
struct ABP_PlayerCharacter_C_CameraLerp__UpdateFunc_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_8
struct ABP_PlayerCharacter_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_8_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_PageUp_K2Node_InputKeyEvent_7
struct ABP_PlayerCharacter_C_InpActEvt_PageUp_K2Node_InputKeyEvent_7_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_NumPadNine_K2Node_InputKeyEvent_6
struct ABP_PlayerCharacter_C_InpActEvt_NumPadNine_K2Node_InputKeyEvent_6_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_NumPadEight_K2Node_InputKeyEvent_5
struct ABP_PlayerCharacter_C_InpActEvt_NumPadEight_K2Node_InputKeyEvent_5_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_NumPadSeven_K2Node_InputKeyEvent_4
struct ABP_PlayerCharacter_C_InpActEvt_NumPadSeven_K2Node_InputKeyEvent_4_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_NumPadSix_K2Node_InputKeyEvent_3
struct ABP_PlayerCharacter_C_InpActEvt_NumPadSix_K2Node_InputKeyEvent_3_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_NumPadFive_K2Node_InputKeyEvent_2
struct ABP_PlayerCharacter_C_InpActEvt_NumPadFive_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent_1
struct ABP_PlayerCharacter_C_InpActEvt_NumPadFour_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractOpenGate
struct ABP_PlayerCharacter_C_InteractOpenGate_Params
{
	bool                                               Timer;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractCloseGate
struct ABP_PlayerCharacter_C_InteractCloseGate_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractLineTrace
struct ABP_PlayerCharacter_C_InteractLineTrace_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_Torch
struct ABP_PlayerCharacter_C_PressedInput_Torch_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_QuickSlot1
struct ABP_PlayerCharacter_C_PressedInput_QuickSlot1_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_QuickSlot2
struct ABP_PlayerCharacter_C_PressedInput_QuickSlot2_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_QuickSlot3
struct ABP_PlayerCharacter_C_PressedInput_QuickSlot3_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_QuickSlot4
struct ABP_PlayerCharacter_C_PressedInput_QuickSlot4_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_QuickSlot5
struct ABP_PlayerCharacter_C_PressedInput_QuickSlot5_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_QuickSlot6
struct ABP_PlayerCharacter_C_PressedInput_QuickSlot6_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_QuickSlot7
struct ABP_PlayerCharacter_C_PressedInput_QuickSlot7_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_QuickSlot8
struct ABP_PlayerCharacter_C_PressedInput_QuickSlot8_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_InteractAction
struct ABP_PlayerCharacter_C_PressedInput_InteractAction_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_InteractAction
struct ABP_PlayerCharacter_C_ReleasedInput_InteractAction_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_Sprint
struct ABP_PlayerCharacter_C_PressedInput_Sprint_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_Sprint
struct ABP_PlayerCharacter_C_ReleasedInput_Sprint_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_InspectorMode
struct ABP_PlayerCharacter_C_PressedInput_InspectorMode_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_HolsterHoldableItem
struct ABP_PlayerCharacter_C_PressedInput_HolsterHoldableItem_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_ChoiceMenu
struct ABP_PlayerCharacter_C_PressedInput_ChoiceMenu_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_ChoiceMenu
struct ABP_PlayerCharacter_C_ReleasedInput_ChoiceMenu_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_RotateGhostRight
struct ABP_PlayerCharacter_C_PressedInput_RotateGhostRight_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_RotateGhostRight
struct ABP_PlayerCharacter_C_ReleasedInput_RotateGhostRight_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnequipItem
struct ABP_PlayerCharacter_C_UnequipItem_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.JumpEvent
struct ABP_PlayerCharacter_C_JumpEvent_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_SelectRotationMode_2
struct ABP_PlayerCharacter_C_PressedInput_SelectRotationMode_2_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_SelectRotationMode_3
struct ABP_PlayerCharacter_C_PressedInput_SelectRotationMode_3_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_WalkAction
struct ABP_PlayerCharacter_C_PressedInput_WalkAction_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Backwards_Axis
struct ABP_PlayerCharacter_C_Backwards_Axis_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Left_Axis
struct ABP_PlayerCharacter_C_Left_Axis_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_StanceAction
struct ABP_PlayerCharacter_C_PressedInput_StanceAction_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_StanceAction
struct ABP_PlayerCharacter_C_ReleasedInput_StanceAction_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_CameraAction
struct ABP_PlayerCharacter_C_PressedInput_CameraAction_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_CameraAction
struct ABP_PlayerCharacter_C_ReleasedInput_CameraAction_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_JumpAction
struct ABP_PlayerCharacter_C_PressedInput_JumpAction_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_JumpAction
struct ABP_PlayerCharacter_C_ReleasedInput_JumpAction_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_InspectorMode
struct ABP_PlayerCharacter_C_ReleasedInput_InspectorMode_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EquipTorchTimer
struct ABP_PlayerCharacter_C_EquipTorchTimer_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_RotateGhostLeft
struct ABP_PlayerCharacter_C_ReleasedInput_RotateGhostLeft_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_RotateGhostLeft
struct ABP_PlayerCharacter_C_PressedInput_RotateGhostLeft_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TimedInteraction
struct ABP_PlayerCharacter_C_TimedInteraction_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PickingItem
struct ABP_PlayerCharacter_C_PickingItem_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InteractTimerDone
struct ABP_PlayerCharacter_C_InteractTimerDone_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Down_Axis
struct ABP_PlayerCharacter_C_Down_Axis_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.MouseWheelAxisChange
struct ABP_PlayerCharacter_C_MouseWheelAxisChange_Params
{
	float                                              Axis_Value;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_RightAction
struct ABP_PlayerCharacter_C_PressedInput_RightAction_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_RightAction
struct ABP_PlayerCharacter_C_ReleasedInput_RightAction_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_LeftAction
struct ABP_PlayerCharacter_C_ReleasedInput_LeftAction_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_LeftAction
struct ABP_PlayerCharacter_C_PressedInput_LeftAction_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Right_Axis
struct ABP_PlayerCharacter_C_Right_Axis_Params
{
	float                                              Axis_Value;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_UI_NextSection
struct ABP_PlayerCharacter_C_ReleasedInput_UI_NextSection_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_UI_NextSection
struct ABP_PlayerCharacter_C_PressedInput_UI_NextSection_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_UI_PreviousSelection
struct ABP_PlayerCharacter_C_ReleasedInput_UI_PreviousSelection_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_UI_PreviousSection
struct ABP_PlayerCharacter_C_PressedInput_UI_PreviousSection_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_UI_Left
struct ABP_PlayerCharacter_C_ReleasedInput_UI_Left_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_UI_Left
struct ABP_PlayerCharacter_C_PressedInput_UI_Left_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_UI_Right
struct ABP_PlayerCharacter_C_ReleasedInput_UI_Right_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_UI_Right
struct ABP_PlayerCharacter_C_PressedInput_UI_Right_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_UI_Up
struct ABP_PlayerCharacter_C_ReleasedInput_UI_Up_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_UI_Up
struct ABP_PlayerCharacter_C_PressedInput_UI_Up_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReleasedInput_UI_Down
struct ABP_PlayerCharacter_C_ReleasedInput_UI_Down_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_UI_Down
struct ABP_PlayerCharacter_C_PressedInput_UI_Down_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_UI_Cancel
struct ABP_PlayerCharacter_C_PressedInput_UI_Cancel_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PressedInput_GameMenu
struct ABP_PlayerCharacter_C_PressedInput_GameMenu_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveBeginPlay
struct ABP_PlayerCharacter_C_ReceiveBeginPlay_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveTick
struct ABP_PlayerCharacter_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartInteractionTrace
struct ABP_PlayerCharacter_C_StartInteractionTrace_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveAnyDamage
struct ABP_PlayerCharacter_C_ReceiveAnyDamage_Params
{
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InstigatedBy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartCameraFade Pawn
struct ABP_PlayerCharacter_C_StartCameraFade_Pawn_Params
{
	float                                              FromAlpha;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ToAlpha;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bShouldFadeAudio;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bHoldWhenFinished;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bReverseOnFinish;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.On Camera Fade Finished
struct ABP_PlayerCharacter_C_On_Camera_Fade_Finished_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__BP_StageInteractionComponent_K2Node_ComponentBoundEvent_0_OnLoopStageFinished__DelegateSignature
struct ABP_PlayerCharacter_C_BndEvt__BP_StageInteractionComponent_K2Node_ComponentBoundEvent_0_OnLoopStageFinished__DelegateSignature_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Swoon
struct ABP_PlayerCharacter_C_Swoon_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.AddCharacterRotation_BPI
struct ABP_PlayerCharacter_C_AddCharacterRotation_BPI_Params
{
	struct FRotator                                    AddAmount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetMesh
struct ABP_PlayerCharacter_C_SetMesh_Params
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

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetInteractionTimer
struct ABP_PlayerCharacter_C_SetInteractionTimer_Params
{
	float                                              Time;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLookAtLoopReached
struct ABP_PlayerCharacter_C_OnLookAtLoopReached_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnSeasonChanged_End_Event_1
struct ABP_PlayerCharacter_C_OnSeasonChanged_End_Event_1_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateDeathScreen
struct ABP_PlayerCharacter_C_CreateDeathScreen_Params
{
	TEnumAsByte<E_DeathType_E_DeathType>               DeathType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PrepareForMounting
struct ABP_PlayerCharacter_C_PrepareForMounting_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnGoToSleep
struct ABP_PlayerCharacter_C_OnGoToSleep_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ResetCameraPitch
struct ABP_PlayerCharacter_C_ResetCameraPitch_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayerLookAt
struct ABP_PlayerCharacter_C_PlayerLookAt_Params
{
	class AActor*                                      Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     TargetLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.FinishStageInteraction
struct ABP_PlayerCharacter_C_FinishStageInteraction_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChangePlayerInput
struct ABP_PlayerCharacter_C_ChangePlayerInput_Params
{
	bool                                               DisablePlayerInput;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayerMoveForInteraction
struct ABP_PlayerCharacter_C_PlayerMoveForInteraction_Params
{
	class AActor*                                      Instigator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     LookAtTarget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RotateDuringMovement;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UsePlayerLookAt;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ResetLookAtPitch;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Limit Camera Rotation
struct ABP_PlayerCharacter_C_Limit_Camera_Rotation_Params
{
	struct FST_CameraRotationLimits                    CameraRotationLimits;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Limit Stage Interaction Camera Rotation
struct ABP_PlayerCharacter_C_Limit_Stage_Interaction_Camera_Rotation_Params
{
	bool                                               bUseHeadForFullBodyAnimations;                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bUsePlayerCamera;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bLimitPlayerCamera;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Stop Character Movement
struct ABP_PlayerCharacter_C_Stop_Character_Movement_Params
{
	bool                                               bStopMovementInput;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Stop Character Rotation
struct ABP_PlayerCharacter_C_Stop_Character_Rotation_Params
{
	bool                                               StopRotationInput;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Change Camera
struct ABP_PlayerCharacter_C_Change_Camera_Params
{
	bool                                               bUsePlayerCamera;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              BlendTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetupStageInteraction
struct ABP_PlayerCharacter_C_SetupStageInteraction_Params
{
	class AActor*                                      InteractedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<TEnumAsByte<E_BaseInteractionStages_E_BaseInteractionStages>, struct FName> SectionsToPlay;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UAnimMontage*                                MontageToPlay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartingPosition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AutomaticPlay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                NumberOfAutomaticLoops;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SwapItemsOnInteraction;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnequipWithEquipTimer
struct ABP_PlayerCharacter_C_UnequipWithEquipTimer_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnequipToEmptySlot
struct ABP_PlayerCharacter_C_UnequipToEmptySlot_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnequipToolTimer
struct ABP_PlayerCharacter_C_UnequipToolTimer_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EquipToolTimer
struct ABP_PlayerCharacter_C_EquipToolTimer_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SelectQuickSlotWithHolster
struct ABP_PlayerCharacter_C_SelectQuickSlotWithHolster_Params
{
	int                                                SelectedQuickSlotID;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DrawWeapon_;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartingInventory
struct ABP_PlayerCharacter_C_StartingInventory_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetNewTimeCameraFOVLerp
struct ABP_PlayerCharacter_C_SetNewTimeCameraFOVLerp_Params
{
	float                                              NewTime;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReverseFromEndCameraFOVLerp
struct ABP_PlayerCharacter_C_ReverseFromEndCameraFOVLerp_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReverseCameraFOVLerp
struct ABP_PlayerCharacter_C_ReverseCameraFOVLerp_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayCameraFOVLerp
struct ABP_PlayerCharacter_C_PlayCameraFOVLerp_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayFromStartCameraFOVLerp
struct ABP_PlayerCharacter_C_PlayFromStartCameraFOVLerp_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StopCameraFOVLerp
struct ABP_PlayerCharacter_C_StopCameraFOVLerp_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.FOVLerpUpdateSettings
struct ABP_PlayerCharacter_C_FOVLerpUpdateSettings_Params
{
	class UCurveFloat*                                 FloatCurve;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NewRate;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TargetFOV;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Update Camera Event
struct ABP_PlayerCharacter_C_Update_Camera_Event_Params
{
	class UCurveFloat*                                 LerpCurve;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExecuteUbergraph_BP_PlayerCharacter
struct ABP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DespawnedOffHandItem__DelegateSignature
struct ABP_PlayerCharacter_C_DespawnedOffHandItem__DelegateSignature_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SpawnedOffHandItem__DelegateSignature
struct ABP_PlayerCharacter_C_SpawnedOffHandItem__DelegateSignature_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DespawnedHeldItem__DelegateSignature
struct ABP_PlayerCharacter_C_DespawnedHeldItem__DelegateSignature_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SpawnedHeldItem__DelegateSignature
struct ABP_PlayerCharacter_C_SpawnedHeldItem__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
