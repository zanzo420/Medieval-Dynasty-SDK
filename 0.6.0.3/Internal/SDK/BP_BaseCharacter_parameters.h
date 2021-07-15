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

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetCharacterController
struct ABP_BaseCharacter_C_GetCharacterController_Params
{
	class AController*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetCharacterMount
struct ABP_BaseCharacter_C_GetCharacterMount_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetCharacterPawn
struct ABP_BaseCharacter_C_GetCharacterPawn_Params
{
	class APawn*                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.IsCharacterMountable
struct ABP_BaseCharacter_C_IsCharacterMountable_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.IsMounted
struct ABP_BaseCharacter_C_IsMounted_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.PerformDismountPawn
struct ABP_BaseCharacter_C_PerformDismountPawn_Params
{
	class APawn*                                       mountOrRider;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.PerformMountPawn
struct ABP_BaseCharacter_C_PerformMountPawn_Params
{
	class APawn*                                       mountOrRider;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.PrepareToDismount
struct ABP_BaseCharacter_C_PrepareToDismount_Params
{
	class AActor*                                      mountOrRider;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMountActionResponse                        Response;                                                  // (Parm, OutParm, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.PrepareToMount
struct ABP_BaseCharacter_C_PrepareToMount_Params
{
	class AActor*                                      mountOrRider;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      linkedActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMountActionResponse                        Response;                                                  // (Parm, OutParm, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.BeginDismountingPawn
struct ABP_BaseCharacter_C_BeginDismountingPawn_Params
{
	class APawn*                                       dismountedPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.BeginMountingPawn
struct ABP_BaseCharacter_C_BeginMountingPawn_Params
{
	class APawn*                                       newMountPawn;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetAllRiderSkeletalMeshes
struct ABP_BaseCharacter_C_GetAllRiderSkeletalMeshes_Params
{
	TArray<class USkeletalMeshComponent*>              ReturnValue;                                               // (Parm, OutParm, ReturnParm, ContainsInstancedReference)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetDebugId
struct ABP_BaseCharacter_C_GetDebugId_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetMountRiderComponent
struct ABP_BaseCharacter_C_GetMountRiderComponent_Params
{
	class UMountRiderComponent*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetRiderMesh
struct ABP_BaseCharacter_C_GetRiderMesh_Params
{
	class UMeshComponent*                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetSeatId
struct ABP_BaseCharacter_C_GetSeatId_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.IsDriver
struct ABP_BaseCharacter_C_IsDriver_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.IsSeatedOnMount
struct ABP_BaseCharacter_C_IsSeatedOnMount_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.MoveToMountingLocation
struct ABP_BaseCharacter_C_MoveToMountingLocation_Params
{
	struct FVector                                     Location;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Orientation;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnChangeToNewSeatCompleted
struct ABP_BaseCharacter_C_OnChangeToNewSeatCompleted_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnDismountingPawnFinished
struct ABP_BaseCharacter_C_OnDismountingPawnFinished_Params
{
	class AActor*                                      oldPawnMount;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnMountingPawnFinished
struct ABP_BaseCharacter_C_OnMountingPawnFinished_Params
{
	class AActor*                                      newMountActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnMoveToMountingLocationCompleted
struct ABP_BaseCharacter_C_OnMoveToMountingLocationCompleted_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayDismountingAnimation
struct ABP_BaseCharacter_C_PlayDismountingAnimation_Params
{
	AdsMountingSystem_EMountingDirection               Position;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayMountingAnimation
struct ABP_BaseCharacter_C_PlayMountingAnimation_Params
{
	AdsMountingSystem_EMountingDirection               Position;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayMoveToSeatAnimation
struct ABP_BaseCharacter_C_PlayMoveToSeatAnimation_Params
{
	int                                                currentSeatId;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                oldSeatId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.SetRiderCollisionEnabled
struct ABP_BaseCharacter_C_SetRiderCollisionEnabled_Params
{
	bool                                               shouldEnable;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.StartPawnDismounting
struct ABP_BaseCharacter_C_StartPawnDismounting_Params
{
	class AActor*                                      oldPawnMount;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMountActionResponse                        mountingResponse;                                          // (Parm, OutParm, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.StartPawnMounting
struct ABP_BaseCharacter_C_StartPawnMounting_Params
{
	class AActor*                                      newMountActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      linkedActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMountActionResponse                        mountingResponse;                                          // (Parm, OutParm, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.IsGrabbable
struct ABP_BaseCharacter_C_IsGrabbable_Params
{
	bool                                               Grabbable;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.IsItemNeeded
struct ABP_BaseCharacter_C_IsItemNeeded_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CheckItems;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractItem
struct ABP_BaseCharacter_C_GetInteractItem_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                         ItemHandler;                                               // (Parm, OutParm, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.IsItemInteractable
struct ABP_BaseCharacter_C_IsItemInteractable_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Interactable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Possibility;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractAdditionalStatus
struct ABP_BaseCharacter_C_GetInteractAdditionalStatus_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CustomColor;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Color;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Status;                                                    // (Parm, OutParm)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.IsInteractAdditionalStatus
struct ABP_BaseCharacter_C_IsInteractAdditionalStatus_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShowStatus;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetFishData
struct ABP_BaseCharacter_C_GetFishData_Params
{
	struct FST_ItemResource                            Item;                                                      // (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  Transform;                                                 // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetID
struct ABP_BaseCharacter_C_GetID_Params
{
	struct FString                                     ID;                                                        // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractionDistance
struct ABP_BaseCharacter_C_GetInteractionDistance_Params
{
	float                                              Distance;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetOff-HandItem
struct ABP_BaseCharacter_C_GetOff_HandItem_Params
{
	class ABP_MasterHoldableItem_C*                    Off_HandItem;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractCondition
struct ABP_BaseCharacter_C_GetInteractCondition_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                              Condition;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CustomText;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Text;                                                      // (Parm, OutParm)
	bool                                               CustomColor;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Color;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.IsInteractCondition
struct ABP_BaseCharacter_C_IsInteractCondition_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CheckCondition;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.IsToolNeeded
struct ABP_BaseCharacter_C_IsToolNeeded_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CheckTools;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetOwnershipType
struct ABP_BaseCharacter_C_GetOwnershipType_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractTitle
struct ABP_BaseCharacter_C_GetInteractTitle_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Show;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Title;                                                     // (Parm, OutParm)
	bool                                               ShowAdditionalTitle1;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       AdditionalTitleText1;                                      // (Parm, OutParm)
	bool                                               ShowAdditionalTitle2;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       AdditionalTitleText2;                                      // (Parm, OutParm)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractResources
struct ABP_BaseCharacter_C_GetInteractResources_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Show;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FST_ItemResource>                    Resources;                                                 // (Parm, OutParm)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetFluidType
struct ABP_BaseCharacter_C_GetFluidType_Params
{
	TEnumAsByte<E_Fluids_E_Fluids>                     FuildType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractTool_UI
struct ABP_BaseCharacter_C_GetInteractTool_UI_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_E_Tools>                       Tool;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_BagMode_E_BagMode>                   BagMode;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_BuildingModifications_E_BuildingModifications> BuildingMode;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.IsToolInteractable_UI
struct ABP_BaseCharacter_C_IsToolInteractable_UI_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Interactable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Possibility;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetNPCInteractTime
struct ABP_BaseCharacter_C_GetNPCInteractTime_Params
{
	float                                              Time;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.IsToolInteractable
struct ABP_BaseCharacter_C_IsToolInteractable_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Interactable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Possibility;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetTaskFromActor
struct ABP_BaseCharacter_C_GetTaskFromActor_Params
{
	struct FST_TaskList                                Task;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractIcon
struct ABP_BaseCharacter_C_GetInteractIcon_Params
{
	class UTexture2D*                                  Icon;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.CheckOccupied
struct ABP_BaseCharacter_C_CheckOccupied_Params
{
	class APawn*                                       Character;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetNPCInteractAnimation
struct ABP_BaseCharacter_C_GetNPCInteractAnimation_Params
{
	TEnumAsByte<E_Sex_E_Sex>                           Sex;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Animation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetResourceType
struct ABP_BaseCharacter_C_GetResourceType_Params
{
	TEnumAsByte<E_Resources_E_Resources>               ResourceType;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetHeldItem
struct ABP_BaseCharacter_C_GetHeldItem_Params
{
	class ABP_MasterHoldableItem_C*                    HeldItem;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractName
struct ABP_BaseCharacter_C_GetInteractName_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       InteractName;                                              // (Parm, OutParm)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractAction
struct ABP_BaseCharacter_C_GetInteractAction_Params
{
	struct FText                                       InteractActionText;                                        // (Parm, OutParm)
	struct FText                                       InteractSecondActionText;                                  // (Parm, OutParm)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.IsInteractable
struct ABP_BaseCharacter_C_IsInteractable_Params
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

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractTool
struct ABP_BaseCharacter_C_GetInteractTool_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_E_Tools>                       Tool;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractCount
struct ABP_BaseCharacter_C_GetInteractCount_Params
{
	int                                                Count;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetInteractionEndpoint
struct ABP_BaseCharacter_C_GetInteractionEndpoint_Params
{
	float                                              Distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     EndPoint;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetPhysicsHandle
struct ABP_BaseCharacter_C_GetPhysicsHandle_Params
{
	class UPhysicsHandleComponent*                     PhysicsHandle;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayMountAnimation
struct ABP_BaseCharacter_C_PlayMountAnimation_Params
{
	AdsMountingSystem_EMountingDirection               Position;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_MountAnimType_E_MountAnimType>       Type;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetProfessionData
struct ABP_BaseCharacter_C_GetProfessionData_Params
{
	struct FST_Profession                              ProfessionData;                                            // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetIsInDialogue_BPI
struct ABP_BaseCharacter_C_GetIsInDialogue_BPI_Params
{
	bool                                               IsInDialogue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetSystemManager
struct ABP_BaseCharacter_C_GetSystemManager_Params
{
	class ABP_SystemsManager_C*                        SystemManager;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetBaseCharacterWorldLocation
struct ABP_BaseCharacter_C_GetBaseCharacterWorldLocation_Params
{
	struct FVector                                     Location;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayHolsterAnimation
struct ABP_BaseCharacter_C_PlayHolsterAnimation_Params
{
	float                                              PlayRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_E_Tools>                       ToolType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TakeOutDuration;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetHeadTransform
struct ABP_BaseCharacter_C_GetHeadTransform_Params
{
	struct FTransform                                  HeadTransform;                                             // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetStatsComponent
struct ABP_BaseCharacter_C_GetStatsComponent_Params
{
	class UBP_CharacterStatsComponent_C*               StatsComponent;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetProfession
struct ABP_BaseCharacter_C_GetProfession_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetCurrentPickUpAnim
struct ABP_BaseCharacter_C_GetCurrentPickUpAnim_Params
{
	class UAnimMontage*                                PickUpMontage;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetIsAnyMontageFromMapPlaying
struct ABP_BaseCharacter_C_GetIsAnyMontageFromMapPlaying_Params
{
	bool                                               Return_Value;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.isPlayer
struct ABP_BaseCharacter_C_isPlayer_Params
{
	bool                                               Player;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class APC_Player_C*                                PlayerController;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetCameraViewDirection
struct ABP_BaseCharacter_C_GetCameraViewDirection_Params
{
	struct FVector                                     Forward;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Get ALS_Stance BPI
struct ABP_BaseCharacter_C_Get_ALS_Stance_BPI_Params
{
	TEnumAsByte<E_Stance_E_Stance>                     Stance;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetDirection
struct ABP_BaseCharacter_C_GetDirection_Params
{
	float                                              Direction;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnWaitForCraftingInteraction
struct ABP_BaseCharacter_C_OnWaitForCraftingInteraction_Params
{
	class ABP_MasterFurniture_Workbench_C*             InteractedWorkbench;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     InteractLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnCloseCraftingInteraction
struct ABP_BaseCharacter_C_OnCloseCraftingInteraction_Params
{
	class ABP_MasterFurniture_Workbench_C*             InteractedWorkbench;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     InteractLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDrunkMovement
struct ABP_BaseCharacter_C_UpdateDrunkMovement_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.IsWearingCorrectPreset
struct ABP_BaseCharacter_C_IsWearingCorrectPreset_Params
{
	bool                                               CheckProfession;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.SnapToSlot
struct ABP_BaseCharacter_C_SnapToSlot_Params
{
	struct FTransform                                  TargetTransform;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	class AActor*                                      InteractedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDefaultFov
struct ABP_BaseCharacter_C_UpdateDefaultFov_Params
{
	float                                              InFieldOfView;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetAnimClassForNPC
struct ABP_BaseCharacter_C_GetAnimClassForNPC_Params
{
	class UClass*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateStitchColor
struct ABP_BaseCharacter_C_UpdateStitchColor_Params
{
	struct FST_ColorTable                              Dye;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    Material;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateDyeColor
struct ABP_BaseCharacter_C_UpdateDyeColor_Params
{
	struct FST_ColorTable                              Dye;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    Material;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.InitializeComponentMaterials
struct ABP_BaseCharacter_C_InitializeComponentMaterials_Params
{
	class USkeletalMeshComponent*                      SkeletalComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetHeadAndHair
struct ABP_BaseCharacter_C_GetHeadAndHair_Params
{
	class USkeletalMesh*                               Head;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               Hair;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetHeadAndHairRow
struct ABP_BaseCharacter_C_GetHeadAndHairRow_Params
{
	struct FST_NPCMeshesGen                            ST_NPCMeshesGen;                                           // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.InitializeMeshFromPreset
struct ABP_BaseCharacter_C_InitializeMeshFromPreset_Params
{
	class USkeletalMeshComponent*                      SkeletalComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_NPCItemColors                           Mesh;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.CombinePresets
struct ABP_BaseCharacter_C_CombinePresets_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_NPCsPresets                             BasePreset;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FName                                       PresetID;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_NPCsMeshesDyes                          Meshes;                                                    // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetPresetForProfession
struct ABP_BaseCharacter_C_GetPresetForProfession_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_NPCsPresets                             Preset;                                                    // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.SetMeshesFromPreset
struct ABP_BaseCharacter_C_SetMeshesFromPreset_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      NewClass;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UpdateOnly;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetFPCameraFOV
struct ABP_BaseCharacter_C_GetFPCameraFOV_Params
{
	float                                              FieldOfView;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.EquipToolForInteraction
struct ABP_BaseCharacter_C_EquipToolForInteraction_Params
{
	class ABP_MasterHoldableItem_C*                    Holdable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_E_Tools>                       WantedTool;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.SetRandomHairColor
struct ABP_BaseCharacter_C_SetRandomHairColor_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnPlayerOccupy
struct ABP_BaseCharacter_C_OnPlayerOccupy_Params
{
	class ABP_MasterFurniture_C*                       Furniture;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnDayChanged
struct ABP_BaseCharacter_C_OnDayChanged_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.SwapHouses
struct ABP_BaseCharacter_C_SwapHouses_Params
{
	class ABP_MasterBuilding_C*                        House1;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_BaseCharacter_C*>                 Family1;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ABP_MasterBuilding_C*                        House2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_BaseCharacter_C*>                 Family2;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Succeed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.BindFurnitureEvents
struct ABP_BaseCharacter_C_BindFurnitureEvents_Params
{
	class ABP_MasterFurniture_C*                       Furniture;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.UnbindFurnitureEvents
struct ABP_BaseCharacter_C_UnbindFurnitureEvents_Params
{
	class ABP_MasterFurniture_C*                       Furniture;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnDestroyFurniture
struct ABP_BaseCharacter_C_OnDestroyFurniture_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.CheckToSwap
struct ABP_BaseCharacter_C_CheckToSwap_Params
{
	class ABP_MasterBuilding_C*                        New_House;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanSwap;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ABP_MasterBuilding_C*                        House1;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_BaseCharacter_C*>                 Family1;                                                   // (Parm, OutParm)
	class ABP_MasterBuilding_C*                        House2;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_BaseCharacter_C*>                 Family2;                                                   // (Parm, OutParm)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnEndWorkbenchInteraction
struct ABP_BaseCharacter_C_OnEndWorkbenchInteraction_Params
{
	class ABP_MasterFurniture_Workbench_C*             InteractedWorkbench;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             InteractComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     InteractLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.On Start Workbench Interaction
struct ABP_BaseCharacter_C_On_Start_Workbench_Interaction_Params
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

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetCrouchingSpeed
struct ABP_BaseCharacter_C_GetCrouchingSpeed_Params
{
	float                                              CrouchingSpeed;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.SetEarMorph
struct ABP_BaseCharacter_C_SetEarMorph_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.VisibilityCheck
struct ABP_BaseCharacter_C_VisibilityCheck_Params
{
	struct FVector                                     StartVector;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Radius;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TEnumAsByte<Engine_EObjectTypeQuery>>       ObjectTypes;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class AActor*                                      ActorToIgnore;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Observed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateCharacterSpeedByCharacterType
struct ABP_BaseCharacter_C_UpdateCharacterSpeedByCharacterType_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Destroy NPC
struct ABP_BaseCharacter_C_Destroy_NPC_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.SetNPCDataFromSave
struct ABP_BaseCharacter_C_SetNPCDataFromSave_Params
{
	struct FST_SAVE_NPC                                NPCData;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                               ResetEQ;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     SaveGameVersion;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetNPCDataToSave
struct ABP_BaseCharacter_C_GetNPCDataToSave_Params
{
	struct FST_SAVE_NPC                                NPCData;                                                   // (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnDialogueEnded
struct ABP_BaseCharacter_C_OnDialogueEnded_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnDialogueStarted
struct ABP_BaseCharacter_C_OnDialogueStarted_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnCharacterTypeChanged
struct ABP_BaseCharacter_C_OnCharacterTypeChanged_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnSeasonChanged
struct ABP_BaseCharacter_C_OnSeasonChanged_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.CheckItemForInteraction
struct ABP_BaseCharacter_C_CheckItemForInteraction_Params
{
	class ABP_MasterHoldableItem_C*                    Holdable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_E_Tools>                       WantedToolType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnAfterPoseChanged
struct ABP_BaseCharacter_C_OnAfterPoseChanged_Params
{
	TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose>       AfterIdlePose;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.SetIsInjured
struct ABP_BaseCharacter_C_SetIsInjured_Params
{
	bool                                               IsInjured;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.SetIsSick
struct ABP_BaseCharacter_C_SetIsSick_Params
{
	bool                                               IsSick;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.SpawnHands
struct ABP_BaseCharacter_C_SpawnHands_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.SpawnOffHandItem
struct ABP_BaseCharacter_C_SpawnOffHandItem_Params
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

// Function BP_BaseCharacter.BP_BaseCharacter_C.SpawnHeldItem
struct ABP_BaseCharacter_C_SpawnHeldItem_Params
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

// Function BP_BaseCharacter.BP_BaseCharacter_C.CheckIfUsingHands
struct ABP_BaseCharacter_C_CheckIfUsingHands_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.DestroyOffHandItem
struct ABP_BaseCharacter_C_DestroyOffHandItem_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.DestroyHeldItem
struct ABP_BaseCharacter_C_DestroyHeldItem_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnOwnershipSwap
struct ABP_BaseCharacter_C_OnOwnershipSwap_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               NewOwnership;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateOldness
struct ABP_BaseCharacter_C_UpdateOldness_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.SetOldness
struct ABP_BaseCharacter_C_SetOldness_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.IsMontagePlaying
struct ABP_BaseCharacter_C_IsMontagePlaying_Params
{
	class UAnimMontage*                                Montage;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.DespawnAnimHoldable
struct ABP_BaseCharacter_C_DespawnAnimHoldable_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.EquipAnimHoldable
struct ABP_BaseCharacter_C_EquipAnimHoldable_Params
{
	class UClass*                                      ItemClass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsOffHand;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetMouseUpDownAxisInput
struct ABP_BaseCharacter_C_GetMouseUpDownAxisInput_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetMouseLeftRightAxisInput
struct ABP_BaseCharacter_C_GetMouseLeftRightAxisInput_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetLookingRotation
struct ABP_BaseCharacter_C_GetLookingRotation_Params
{
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Holster Weapon
struct ABP_BaseCharacter_C_Holster_Weapon_Params
{
	bool                                               IsSwitch;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsSwitch;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsValidHeldItem;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateStrengthAlpha
struct ABP_BaseCharacter_C_UpdateStrengthAlpha_Params
{
	float                                              Alpha;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Copy&SetCharacterParameters
struct ABP_BaseCharacter_C_Copy_SetCharacterParameters_Params
{
	struct FString                                     CopyID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FST_CharacterMeshes                         CopyCharacterMeshes;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	struct FST_CharacterStats                          CopyCharacterStats;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FST_CharacterRelations                      CopyCharacterRelations;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FST_CharacterSkillsAndTallents              CopyCharacterSkillsAndTallents;                            // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TMap<struct FName, struct FST_InventoryItemsArray> CopyCharacterInventory;                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FST_ItemInventorys>                  CopyCharacterQuickSlots;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TMap<TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories>, struct FST_ItemInventorys> CopyCharacterArmor;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector                                     CopyActorLocation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    CopyActorRotation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.SetFPCameraFOV
struct ABP_BaseCharacter_C_SetFPCameraFOV_Params
{
	float                                              InFieldOfView;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Attach Components
struct ABP_BaseCharacter_C_Attach_Components_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.SetCanPerfromHitAction
struct ABP_BaseCharacter_C_SetCanPerfromHitAction_Params
{
	bool                                               CanPerfromHitAction;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Update Range Strength
struct ABP_BaseCharacter_C_Update_Range_Strength_Params
{
	float                                              Strength;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.CreateNewMeshMaterials
struct ABP_BaseCharacter_C_CreateNewMeshMaterials_Params
{
	class UMeshComponent*                              Mesh;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_ColorTable                              Dye;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.ResetMeshMaterials
struct ABP_BaseCharacter_C_ResetMeshMaterials_Params
{
	class UMeshComponent*                              Mesh;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetDynamicMaterialsArray
struct ABP_BaseCharacter_C_GetDynamicMaterialsArray_Params
{
	class UMeshComponent*                              Mesh;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterialReferences;                                 // (Parm, OutParm)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetDynamicMaterialStruct
struct ABP_BaseCharacter_C_GetDynamicMaterialStruct_Params
{
	class UMeshComponent*                              Mesh;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_MeshDynamicMaterials                    Array_Element;                                             // (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.GetDynamicMaterialIndex
struct ABP_BaseCharacter_C_GetDynamicMaterialIndex_Params
{
	class UMeshComponent*                              Mesh;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.ClearMaterials
struct ABP_BaseCharacter_C_ClearMaterials_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.InitializeMaterials
struct ABP_BaseCharacter_C_InitializeMaterials_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateHoldableItemActionSpeed
struct ABP_BaseCharacter_C_UpdateHoldableItemActionSpeed_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.SetRandomSkinTone
struct ABP_BaseCharacter_C_SetRandomSkinTone_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.CalculateEncumberedSpeed
struct ABP_BaseCharacter_C_CalculateEncumberedSpeed_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.MakeMovementNoise
struct ABP_BaseCharacter_C_MakeMovementNoise_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayerMovementInput
struct ABP_BaseCharacter_C_PlayerMovementInput_Params
{
	bool                                               Is_Forward_Axis;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.CalculateActorLocationAndRotationInRagdoll
struct ABP_BaseCharacter_C_CalculateActorLocationAndRotationInRagdoll_Params
{
	struct FRotator                                    RagdollRotation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     RagdollLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    ActorRotation;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     ActorLocation;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.CanSprint
struct ABP_BaseCharacter_C_CanSprint_Params
{
	bool                                               CanSprint;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.CustomAcceleration
struct ABP_BaseCharacter_C_CustomAcceleration_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.On ALS_ViewMode Changed
struct ABP_BaseCharacter_C_On_ALS_ViewMode_Changed_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.DebugMode
struct ABP_BaseCharacter_C_DebugMode_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.ChooseVelocity
struct ABP_BaseCharacter_C_ChooseVelocity_Params
{
	struct FVector                                     Velocity;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.LimitRotation
struct ABP_BaseCharacter_C_LimitRotation_Params
{
	float                                              AimYawLimit;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InterpSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.On ALS_Aiming Changed
struct ABP_BaseCharacter_C_On_ALS_Aiming_Changed_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.LerpCameraSettings
struct ABP_BaseCharacter_C_LerpCameraSettings_Params
{
	float                                              LerpAlpha;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                         TargetSpringArm;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.ChooseCameraSettings
struct ABP_BaseCharacter_C_ChooseCameraSettings_Params
{
	struct FST_CameraSettings                          TargetCameraSettings;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.CalculateRotationRate
struct ABP_BaseCharacter_C_CalculateRotationRate_Params
{
	float                                              SlowSpeed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SlowSpeedRate;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FastSpeed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FastSpeedRate;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.LookingDirectionWithOffset
struct ABP_BaseCharacter_C_LookingDirectionWithOffset_Params
{
	float                                              OffsetInterpSpeed;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NE_Angle;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NW_Angle;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SE_Angle;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SW_Angle;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Buffer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    TargetRotation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.AddCharacterRotation
struct ABP_BaseCharacter_C_AddCharacterRotation_Params
{
	struct FRotator                                    AddAmount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.ChooseGroundFriction
struct ABP_BaseCharacter_C_ChooseGroundFriction_Params
{
	float                                              MaxWalkSpeed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.ChooseBrakingDeceleration
struct ABP_BaseCharacter_C_ChooseBrakingDeceleration_Params
{
	float                                              MaxWalkSpeed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.ChooseMaxAcceleration
struct ABP_BaseCharacter_C_ChooseMaxAcceleration_Params
{
	float                                              MaxWalkSpeed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.ChooseMaxWalkSpeed
struct ABP_BaseCharacter_C_ChooseMaxWalkSpeed_Params
{
	float                                              MaxWalkSpeed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateALS_CharacterMovementSettings
struct ABP_BaseCharacter_C_UpdateALS_CharacterMovementSettings_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.SetCharacterRotation
struct ABP_BaseCharacter_C_SetCharacterRotation_Params
{
	struct FRotator                                    TargetRotation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               InterpRotation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              InterpSpeed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.On ALS_RotationMode Changed
struct ABP_BaseCharacter_C_On_ALS_RotationMode_Changed_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.On ALS_Stance Changed
struct ABP_BaseCharacter_C_On_ALS_Stance_Changed_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.On ALS_Gait Changed
struct ABP_BaseCharacter_C_On_ALS_Gait_Changed_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.On ALS_MovementMode Changed
struct ABP_BaseCharacter_C_On_ALS_MovementMode_Changed_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.On PawnMovementMode Changed
struct ABP_BaseCharacter_C_On_PawnMovementMode_Changed_Params
{
	TEnumAsByte<Engine_EMovementMode>                  PrevMovementMode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EMovementMode>                  NewMovementMode;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      PrevCustomMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      NewCustomMove;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.CalculateEssentialVariables
struct ABP_BaseCharacter_C_CalculateEssentialVariables_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.UserConstructionScript
struct ABP_BaseCharacter_C_UserConstructionScript_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.EyesStateTL__FinishedFunc
struct ABP_BaseCharacter_C_EyesStateTL__FinishedFunc_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.EyesStateTL__UpdateFunc
struct ABP_BaseCharacter_C_EyesStateTL__UpdateFunc_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Blinking__FinishedFunc
struct ABP_BaseCharacter_C_Blinking__FinishedFunc_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Blinking__UpdateFunc
struct ABP_BaseCharacter_C_Blinking__UpdateFunc_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.FistFightingTimeline__FinishedFunc
struct ABP_BaseCharacter_C_FistFightingTimeline__FinishedFunc_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.FistFightingTimeline__UpdateFunc
struct ABP_BaseCharacter_C_FistFightingTimeline__UpdateFunc_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Interact
struct ABP_BaseCharacter_C_Interact_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               Timer;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.InteractInput
struct ABP_BaseCharacter_C_InteractInput_Params
{
	bool                                               KeyDown;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.InteractStart
struct ABP_BaseCharacter_C_InteractStart_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.InteractCancel
struct ABP_BaseCharacter_C_InteractCancel_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.SetOccupied
struct ABP_BaseCharacter_C_SetOccupied_Params
{
	class APawn*                                       Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.SetTaskInActor
struct ABP_BaseCharacter_C_SetTaskInActor_Params
{
	struct FST_TaskList                                Task;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.ChangeTaskIsOccupied
struct ABP_BaseCharacter_C_ChangeTaskIsOccupied_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.ToolInteract
struct ABP_BaseCharacter_C_ToolInteract_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               UseChunkData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_Chunks                                  ChunkData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.PerformActorInteraction
struct ABP_BaseCharacter_C_PerformActorInteraction_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.IsLookedAt
struct ABP_BaseCharacter_C_IsLookedAt_Params
{
	bool                                               Active;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.InteractWithImpaledItem
struct ABP_BaseCharacter_C_InteractWithImpaledItem_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.AddImpaledItem
struct ABP_BaseCharacter_C_AddImpaledItem_Params
{
	class AActor*                                      ImpaledItem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.RemoveImpaledItem
struct ABP_BaseCharacter_C_RemoveImpaledItem_Params
{
	class AActor*                                      ImpaledItem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.StartAttackFunction
struct ABP_BaseCharacter_C_StartAttackFunction_Params
{
	bool                                               Timer;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       Socket;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.StopAttackFunction
struct ABP_BaseCharacter_C_StopAttackFunction_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_RotationMode BPI
struct ABP_BaseCharacter_C_Set_ALS_RotationMode_BPI_Params
{
	TEnumAsByte<E_RotationMode_E_RotationMode>         ALS_RotationMode_BPI;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_Pivot BPI
struct ABP_BaseCharacter_C_AnimNotify_Pivot_BPI_Params
{
	struct FST_PivotParams                             PivotParams;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_TurningInPlace BPI
struct ABP_BaseCharacter_C_AnimNotify_TurningInPlace_BPI_Params
{
	class UAnimMontage*                                TurnInPlaceMontage;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldTurnInPlace;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               TurningInPlace;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               TurningRight;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_IdleEntryState BPI
struct ABP_BaseCharacter_C_AnimNotify_IdleEntryState_BPI_Params
{
	TEnumAsByte<E_IdleEntryState_E_IdleEntryState>     IdleEntryState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Aiming BPI
struct ABP_BaseCharacter_C_Set_ALS_Aiming_BPI_Params
{
	bool                                               Aiming;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Play_GetUp_Anim BPI
struct ABP_BaseCharacter_C_Play_GetUp_Anim_BPI_Params
{
	bool                                               FaceDown;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.SavePoseSnapshot_BPI
struct ABP_BaseCharacter_C_SavePoseSnapshot_BPI_Params
{
	struct FName                                       PoseName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_ViewMode BPI
struct ABP_BaseCharacter_C_Set_ALS_ViewMode_BPI_Params
{
	TEnumAsByte<E_ViewMode_E_ViewMode>                 ViewMode;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.ShowTraces_BPI
struct ABP_BaseCharacter_C_ShowTraces_BPI_Params
{
	bool                                               ShowTraces;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set WalkingSpeed BPI
struct ABP_BaseCharacter_C_Set_WalkingSpeed_BPI_Params
{
	float                                              WalkingSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set RunningSpeed BPI
struct ABP_BaseCharacter_C_Set_RunningSpeed_BPI_Params
{
	float                                              RunningSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set SprintingSpeed BPI
struct ABP_BaseCharacter_C_Set_SprintingSpeed_BPI_Params
{
	float                                              SprintingSpeed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set CrouchingSpeed BPI
struct ABP_BaseCharacter_C_Set_CrouchingSpeed_BPI_Params
{
	float                                              CrouchingSpeed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set RF_BPI
struct ABP_BaseCharacter_C_Set_RF_BPI_Params
{
	bool                                               RF;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.SetToolType
struct ABP_BaseCharacter_C_SetToolType_Params
{
	TEnumAsByte<E_Tools_E_Tools>                       ToolType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_SnapPoint
struct ABP_BaseCharacter_C_AnimNotify_SnapPoint_Params
{
	class USceneComponent*                             SnapComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TargetSnapAlpha;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ResetSnapAlpha;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Reset;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       LeftHandSocketName;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       RightHandSocketName;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.ChangeAnimLoopState
struct ABP_BaseCharacter_C_ChangeAnimLoopState_Params
{
	bool                                               IsLooping;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_StartSnappingIK
struct ABP_BaseCharacter_C_AnimNotify_StartSnappingIK_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_StopSnappingIK
struct ABP_BaseCharacter_C_AnimNotify_StopSnappingIK_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnStartStageInteraction
struct ABP_BaseCharacter_C_OnStartStageInteraction_Params
{
	class AActor*                                      InteractedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                MontageToPlay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartingPosition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       StartingSection;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoopStageInteraction
struct ABP_BaseCharacter_C_OnLoopStageInteraction_Params
{
	class AActor*                                      InteractedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                MontageToPlay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartingPosition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       StartingSection;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnEndStageInteraction
struct ABP_BaseCharacter_C_OnEndStageInteraction_Params
{
	class AActor*                                      InteractedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                MontageToPlay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartingPosition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       StartingSection;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set Range Strength
struct ABP_BaseCharacter_C_Set_Range_Strength_Params
{
	float                                              Strength;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.SetStrengthAlpha
struct ABP_BaseCharacter_C_SetStrengthAlpha_Params
{
	float                                              Alpha;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OverrideCanPerfromHitAction
struct ABP_BaseCharacter_C_OverrideCanPerfromHitAction_Params
{
	bool                                               CanPerfromHitAction;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayPickUpAnim
struct ABP_BaseCharacter_C_PlayPickUpAnim_Params
{
	class UObject*                                     Instigator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PreferTwoHanded;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayerMoveForInteraction
struct ABP_BaseCharacter_C_PlayerMoveForInteraction_Params
{
	class AActor*                                      Instigator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     LookAtTarget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RotateDuringMovement;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UsePlayerLookAt;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ResetLookAtPitch;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayerLookAt
struct ABP_BaseCharacter_C_PlayerLookAt_Params
{
	class AActor*                                      Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     TargetLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_LimitCamera
struct ABP_BaseCharacter_C_AnimNotify_LimitCamera_Params
{
	struct FST_CameraRotationLimits                    CameraLimits;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_StopRotation
struct ABP_BaseCharacter_C_AnimNotify_StopRotation_Params
{
	bool                                               StopRotationInput;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_StopMovement
struct ABP_BaseCharacter_C_AnimNotify_StopMovement_Params
{
	bool                                               bStopMovementInput;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayCraftingAnimation
struct ABP_BaseCharacter_C_PlayCraftingAnimation_Params
{
	TEnumAsByte<E_Workbenches_E_Workbenches>           WorkbenchType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CraftingTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.SelectPickUpAnim
struct ABP_BaseCharacter_C_SelectPickUpAnim_Params
{
	class UObject*                                     Instigator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PreferTwoHanded;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set IdleStandingPose BPI
struct ABP_BaseCharacter_C_Set_IdleStandingPose_BPI_Params
{
	TEnumAsByte<E_StandingIdles_E_StandingIdles>       Standing_Idle_Pose;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose>       DoAfterPose;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set IdleTalkingPose BPI
struct ABP_BaseCharacter_C_Set_IdleTalkingPose_BPI_Params
{
	TEnumAsByte<E_TalkingIdles_E_TalkingIdles>         Talking_Idle_Pose;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose>       DoAfterPose;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set IdleLookingPose BPI
struct ABP_BaseCharacter_C_Set_IdleLookingPose_BPI_Params
{
	TEnumAsByte<E_LookingIdles_E_LookingIdles>         Looking_Idle_Pose;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose>       DoAfterPose;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set IdleOtherPose BPI
struct ABP_BaseCharacter_C_Set_IdleOtherPose_BPI_Params
{
	TEnumAsByte<E_OtherIdles_E_OtherIdles>             Other_Idle_Pose;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose>       DoAfterPose;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_WorkMontageComplete
struct ABP_BaseCharacter_C_AnimNotify_WorkMontageComplete_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ProfessionState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_WorkMontageInterrupted
struct ABP_BaseCharacter_C_AnimNotify_WorkMontageInterrupted_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ProfessionState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_WorkLoopIncreased
struct ABP_BaseCharacter_C_AnimNotify_WorkLoopIncreased_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ProfessionState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Loop;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_WorkLoopsFinished
struct ABP_BaseCharacter_C_AnimNotify_WorkLoopsFinished_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ProfessionState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Loop;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_BreakMontageComplete
struct ABP_BaseCharacter_C_AnimNotify_BreakMontageComplete_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      BreakAnimID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_BreakMontageBlendOut
struct ABP_BaseCharacter_C_AnimNotify_BreakMontageBlendOut_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      BreakAnimID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_BreakMontageInterrupted
struct ABP_BaseCharacter_C_AnimNotify_BreakMontageInterrupted_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      BreakAnimID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.WaitForCrafting
struct ABP_BaseCharacter_C_WaitForCrafting_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.ReceiveTick
struct ABP_BaseCharacter_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.ReceiveBeginPlay
struct ABP_BaseCharacter_C_ReceiveBeginPlay_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.SetMesh
struct ABP_BaseCharacter_C_SetMesh_Params
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

// Function BP_BaseCharacter.BP_BaseCharacter_C.SetupStageInteraction
struct ABP_BaseCharacter_C_SetupStageInteraction_Params
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

// Function BP_BaseCharacter.BP_BaseCharacter_C.Stop Character Rotation
struct ABP_BaseCharacter_C_Stop_Character_Rotation_Params
{
	bool                                               StopRotationInput;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Change Camera
struct ABP_BaseCharacter_C_Change_Camera_Params
{
	bool                                               bUsePlayerCamera;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              BlendTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.StartCameraFade Pawn
struct ABP_BaseCharacter_C_StartCameraFade_Pawn_Params
{
	float                                              FromAlpha;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ToAlpha;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bShouldFadeAudio;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bHoldWhenFinished;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bReverseOnFinish;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.FinishStageInteraction
struct ABP_BaseCharacter_C_FinishStageInteraction_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Swoon
struct ABP_BaseCharacter_C_Swoon_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Stop Character Movement
struct ABP_BaseCharacter_C_Stop_Character_Movement_Params
{
	bool                                               bStopMovementInput;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Limit Stage Interaction Camera Rotation
struct ABP_BaseCharacter_C_Limit_Stage_Interaction_Camera_Rotation_Params
{
	bool                                               bUseHeadForFullBodyAnimations;                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bUsePlayerCamera;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bLimitPlayerCamera;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Limit Camera Rotation
struct ABP_BaseCharacter_C_Limit_Camera_Rotation_Params
{
	struct FST_CameraRotationLimits                    CameraRotationLimits;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.HoldableAction
struct ABP_BaseCharacter_C_HoldableAction_Params
{
	TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings> MontagesSettings;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               UseLookingDown;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              LookingDownAngle;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Loop;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Attack;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               OverrideMontage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IgnorePlayingMontage;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.HoldableHitAction
struct ABP_BaseCharacter_C_HoldableHitAction_Params
{
	struct FST_MontagesSettings                        Action_Montage_Settings;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayPickingUpMontage
struct ABP_BaseCharacter_C_PlayPickingUpMontage_Params
{
	class UObject*                                     Instigator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PreferTwoHanded;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.SetMeshAndMaterials
struct ABP_BaseCharacter_C_SetMeshAndMaterials_Params
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

// Function BP_BaseCharacter.BP_BaseCharacter_C.ChangePlayerInput
struct ABP_BaseCharacter_C_ChangePlayerInput_Params
{
	bool                                               DisablePlayerInput;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.SelectPickUpAnimation
struct ABP_BaseCharacter_C_SelectPickUpAnimation_Params
{
	class UObject*                                     Instigator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PreferTwoHanded;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.CancelAnimationLoops
struct ABP_BaseCharacter_C_CancelAnimationLoops_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.SetMontageType
struct ABP_BaseCharacter_C_SetMontageType_Params
{
	TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes> Montage_Type;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.ReceiveAnyDamage
struct ABP_BaseCharacter_C_ReceiveAnyDamage_Params
{
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InstigatedBy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.SetMontageSettings
struct ABP_BaseCharacter_C_SetMontageSettings_Params
{
	TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings> MontagesSettings;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.BndEvt__BP_CharacterStatsComponent_K2Node_ComponentBoundEvent_0_OnHealthChange__DelegateSignature
struct ABP_BaseCharacter_C_BndEvt__BP_CharacterStatsComponent_K2Node_ComponentBoundEvent_0_OnHealthChange__DelegateSignature_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.ShowInspectorUI
struct ABP_BaseCharacter_C_ShowInspectorUI_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.ChangeMontageNextSection
struct ABP_BaseCharacter_C_ChangeMontageNextSection_Params
{
	struct FName                                       SectionNameToChange;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       NextSection;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.SetIsInWater
struct ABP_BaseCharacter_C_SetIsInWater_Params
{
	bool                                               InWater;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Intensity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.PhysicsTimer
struct ABP_BaseCharacter_C_PhysicsTimer_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Ragdoll
struct ABP_BaseCharacter_C_Ragdoll_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Un_Ragdoll Event
struct ABP_BaseCharacter_C_Un_Ragdoll_Event_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.To_Ragdoll Event
struct ABP_BaseCharacter_C_To_Ragdoll_Event_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Un_Ragdoll ( MULTICAST )
struct ABP_BaseCharacter_C_Un_Ragdoll___MULTICAST___Params
{
	bool                                               OnGround;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.To_Ragdoll ( MULTICAST )
struct ABP_BaseCharacter_C_To_Ragdoll___MULTICAST___Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnLanded
struct ABP_BaseCharacter_C_OnLanded_Params
{
	struct FHitResult                                  Hit;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.K2_OnEndCrouch
struct ABP_BaseCharacter_C_K2_OnEndCrouch_Params
{
	float                                              HalfHeightAdjust;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ScaledHalfHeightAdjust;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.K2_OnStartCrouch
struct ABP_BaseCharacter_C_K2_OnStartCrouch_Params
{
	float                                              HalfHeightAdjust;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ScaledHalfHeightAdjust;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.K2_OnMovementModeChanged
struct ABP_BaseCharacter_C_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<Engine_EMovementMode>                  PrevMovementMode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EMovementMode>                  NewMovementMode;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      PrevCustomMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      NewCustomMode;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.SetMountAnimalType BPI
struct ABP_BaseCharacter_C_SetMountAnimalType_BPI_Params
{
	TEnumAsByte<E_Animals_E_Animals>                   MountAnimalType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.SetEnableIK_BPI
struct ABP_BaseCharacter_C_SetEnableIK_BPI_Params
{
	bool                                               IK_Enabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.EndCombat
struct ABP_BaseCharacter_C_EndCombat_Params
{
	class AActor*                                      CombatCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.StartCombat
struct ABP_BaseCharacter_C_StartCombat_Params
{
	class AActor*                                      CombatCauser;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateIKAlpha
struct ABP_BaseCharacter_C_UpdateIKAlpha_Params
{
	float                                              Alpha;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayMountSpecial
struct ABP_BaseCharacter_C_PlayMountSpecial_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayMountStopAnimation
struct ABP_BaseCharacter_C_PlayMountStopAnimation_Params
{
	int                                                AnimIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set Caught Prey BPI
struct ABP_BaseCharacter_C_Set_Caught_Prey_BPI_Params
{
	bool                                               CaughtPrey;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnDeath
struct ABP_BaseCharacter_C_OnDeath_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set IdlePoseByID BPI
struct ABP_BaseCharacter_C_Set_IdlePoseByID_BPI_Params
{
	TEnumAsByte<E_IdleStates_E_IdleStates>             Idle_State;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      PoseID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose>       DoAfterPose;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Knockback
struct ABP_BaseCharacter_C_Knockback_Params
{
	struct FVector                                     KnockbackDirection;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              KnockbackStrength;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_AnimObjectNotify
struct ABP_BaseCharacter_C_AnimNotify_AnimObjectNotify_Params
{
	TEnumAsByte<E_NotifyObject_E_NotifyObject>         ObjectToNotify;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       NotifyName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.ForceStanding
struct ABP_BaseCharacter_C_ForceStanding_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set BreakState BPI
struct ABP_BaseCharacter_C_Set_BreakState_BPI_Params
{
	bool                                               IsTakingBreak;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RandomizeAnim;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      BreakAnimID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set WorkState BPI
struct ABP_BaseCharacter_C_Set_WorkState_BPI_Params
{
	bool                                               IsWorking;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ProfessionState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Loops;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.ResetCameraPitch
struct ABP_BaseCharacter_C_ResetCameraPitch_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set IdleState BPI
struct ABP_BaseCharacter_C_Set_IdleState_BPI_Params
{
	bool                                               IsInIdleState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_IdleStates_E_IdleStates>             IdleState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_HolsterWeapon
struct ABP_BaseCharacter_C_AnimNotify_HolsterWeapon_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_SpawnAnimItem
struct ABP_BaseCharacter_C_AnimNotify_SpawnAnimItem_Params
{
	class UClass*                                      ItemClass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsOffHand;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.AnimNotify_DespawnAnimItem
struct ABP_BaseCharacter_C_AnimNotify_DespawnAnimItem_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set Sitting BPI
struct ABP_BaseCharacter_C_Set_Sitting_BPI_Params
{
	bool                                               Sitting;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_SitDownPosition_E_SitDownPosition>   SitDownPosition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set Sleeping BPI
struct ABP_BaseCharacter_C_Set_Sleeping_BPI_Params
{
	bool                                               Sleeping;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_SleepingDirection_E_SleepingDirection> SleepingDirection;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseBedSleepingPose;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.StopAiming
struct ABP_BaseCharacter_C_StopAiming_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.StartAiming
struct ABP_BaseCharacter_C_StartAiming_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_MovementMode BPI
struct ABP_BaseCharacter_C_Set_ALS_MovementMode_BPI_Params
{
	TEnumAsByte<E_MovementMode_E_MovementMode>         ALS_MovementMode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Gait BPI
struct ABP_BaseCharacter_C_Set_ALS_Gait_BPI_Params
{
	TEnumAsByte<E_Gait_E_Gait>                         ALS_Gait;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Stance BPI
struct ABP_BaseCharacter_C_Set_ALS_Stance_BPI_Params
{
	TEnumAsByte<E_Stance_E_Stance>                     ALS_Stance;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.CameraShake_BPI
struct ABP_BaseCharacter_C_CameraShake_BPI_Params
{
	class UClass*                                      ShakeClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Scale;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.AddCharacterRotation_BPI
struct ABP_BaseCharacter_C_AddCharacterRotation_BPI_Params
{
	struct FRotator                                    AddAmount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.To_Ragdoll ( SERVER )
struct ABP_BaseCharacter_C_To_Ragdoll___SERVER___Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Un_Ragdoll ( SERVER )
struct ABP_BaseCharacter_C_Un_Ragdoll___SERVER___Params
{
	bool                                               OnGround;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateRagdoll ( MULTICAST )
struct ABP_BaseCharacter_C_UpdateRagdoll___MULTICAST___Params
{
	struct FVector                                     ActorLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateRagdoll ( SERVER )
struct ABP_BaseCharacter_C_UpdateRagdoll___SERVER___Params
{
	struct FVector                                     RagdollVelocity;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     RagdollLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    ActorRotation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     ActorLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Gait Event ( SERVER )
struct ABP_BaseCharacter_C_Set_ALS_Gait_Event___SERVER___Params
{
	TEnumAsByte<E_Gait_E_Gait>                         ALS_Gait;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Gait Event ( MULTICAST )
struct ABP_BaseCharacter_C_Set_ALS_Gait_Event___MULTICAST___Params
{
	TEnumAsByte<E_Gait_E_Gait>                         ALS_Gait;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_RotationMode Event ( SERVER )
struct ABP_BaseCharacter_C_Set_ALS_RotationMode_Event___SERVER___Params
{
	TEnumAsByte<E_RotationMode_E_RotationMode>         ALS_RotationMode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_RotationMode Event ( MULTICAST )
struct ABP_BaseCharacter_C_Set_ALS_RotationMode_Event___MULTICAST___Params
{
	TEnumAsByte<E_RotationMode_E_RotationMode>         ALS_RotationMode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Aiming Event ( SERVER )
struct ABP_BaseCharacter_C_Set_ALS_Aiming_Event___SERVER___Params
{
	bool                                               ALS_Aiming;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Aiming Event ( MULTICAST )
struct ABP_BaseCharacter_C_Set_ALS_Aiming_Event___MULTICAST___Params
{
	bool                                               ALS_Aiming;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Play Networked Montage ( MULTICAST )
struct ABP_BaseCharacter_C_Play_Networked_Montage___MULTICAST___Params
{
	class UAnimMontage*                                MontageToPlay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InPlayRate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InTimeToStartMontageAt;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bStopAllMontages;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Play Networked Montage ( SERVER )
struct ABP_BaseCharacter_C_Play_Networked_Montage___SERVER___Params
{
	class UAnimMontage*                                MontageToPlay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InPlayRate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InTimeToStartMontageAt;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bStopAllMontages;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set CharacterRotation Event ( SERVER )
struct ABP_BaseCharacter_C_Set_CharacterRotation_Event___SERVER___Params
{
	struct FRotator                                    TargetRotation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    CharacterRotation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set LookingRotation Event ( SERVER )
struct ABP_BaseCharacter_C_Set_LookingRotation_Event___SERVER___Params
{
	struct FRotator                                    LookingRotation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set MovementInput Event ( SERVER )
struct ABP_BaseCharacter_C_Set_MovementInput_Event___SERVER___Params
{
	struct FVector                                     MovementInput;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.SetEnableIK_Event
struct ABP_BaseCharacter_C_SetEnableIK_Event_Params
{
	bool                                               IK_Enabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set CaughtPrey Event
struct ABP_BaseCharacter_C_Set_CaughtPrey_Event_Params
{
	bool                                               CaughtPrey;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set IdlePose Event
struct ABP_BaseCharacter_C_Set_IdlePose_Event_Params
{
	TEnumAsByte<E_IdleStates_E_IdleStates>             Idle_State;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      PoseID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AfterIdlePose_E_AfterIdlePose>       DoAfterPose;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ForceStanding Event
struct ABP_BaseCharacter_C_Set_ForceStanding_Event_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set BreakState Event
struct ABP_BaseCharacter_C_Set_BreakState_Event_Params
{
	bool                                               IsTakingBreak;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RandomizeAnim;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      BreakAnimID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set WorkState Event
struct ABP_BaseCharacter_C_Set_WorkState_Event_Params
{
	bool                                               IsWorking;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ProfessionState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Loops;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set IdleState Event
struct ABP_BaseCharacter_C_Set_IdleState_Event_Params
{
	bool                                               IsInIdleState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_IdleStates_E_IdleStates>             IdleState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set Sitting Event
struct ABP_BaseCharacter_C_Set_Sitting_Event_Params
{
	bool                                               IsSitting;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_SitDownPosition_E_SitDownPosition>   SitDownPosition;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set Sleeping Event
struct ABP_BaseCharacter_C_Set_Sleeping_Event_Params
{
	bool                                               IsSleeping;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_SleepingDirection_E_SleepingDirection> SleepingDirection;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseBedSleepingPose;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_MovementMode Event
struct ABP_BaseCharacter_C_Set_ALS_MovementMode_Event_Params
{
	TEnumAsByte<E_MovementMode_E_MovementMode>         New_ALS_MovementMode;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Gait Event
struct ABP_BaseCharacter_C_Set_ALS_Gait_Event_Params
{
	TEnumAsByte<E_Gait_E_Gait>                         New_ALS_Gait;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Stance Event
struct ABP_BaseCharacter_C_Set_ALS_Stance_Event_Params
{
	TEnumAsByte<E_Stance_E_Stance>                     New_ALS_Stance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_RotationMode Event
struct ABP_BaseCharacter_C_Set_ALS_RotationMode_Event_Params
{
	TEnumAsByte<E_RotationMode_E_RotationMode>         New_ALS_RotationMode;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_Aiming Event
struct ABP_BaseCharacter_C_Set_ALS_Aiming_Event_Params
{
	bool                                               ALS_Aiming;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set ALS_ViewMode Event
struct ABP_BaseCharacter_C_Set_ALS_ViewMode_Event_Params
{
	TEnumAsByte<E_ViewMode_E_ViewMode>                 ALS_ViewMode;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set WalkingSpeed Event
struct ABP_BaseCharacter_C_Set_WalkingSpeed_Event_Params
{
	float                                              WalkingSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set RunningSpeed Event
struct ABP_BaseCharacter_C_Set_RunningSpeed_Event_Params
{
	float                                              RunningSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set SprintingSpeed Event
struct ABP_BaseCharacter_C_Set_SprintingSpeed_Event_Params
{
	float                                              SprintingSpeed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Set CrouchingSpeed Event
struct ABP_BaseCharacter_C_Set_CrouchingSpeed_Event_Params
{
	float                                              CrouchingSpeed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.ShouldHolster
struct ABP_BaseCharacter_C_ShouldHolster_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnCraftingAnimEnded
struct ABP_BaseCharacter_C_OnCraftingAnimEnded_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.CraftingClosed
struct ABP_BaseCharacter_C_CraftingClosed_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.WaitCrafting
struct ABP_BaseCharacter_C_WaitCrafting_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Stop Blinking
struct ABP_BaseCharacter_C_Stop_Blinking_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OpenEyes
struct ABP_BaseCharacter_C_OpenEyes_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.CloseEyes
struct ABP_BaseCharacter_C_CloseEyes_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.BlinkMorph
struct ABP_BaseCharacter_C_BlinkMorph_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.StartBlinking
struct ABP_BaseCharacter_C_StartBlinking_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Blink
struct ABP_BaseCharacter_C_Blink_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnIdleAnimEnd
struct ABP_BaseCharacter_C_OnIdleAnimEnd_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnIdleAnimStart
struct ABP_BaseCharacter_C_OnIdleAnimStart_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.EndFalling
struct ABP_BaseCharacter_C_EndFalling_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.StartFalling
struct ABP_BaseCharacter_C_StartFalling_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.FallingEvent
struct ABP_BaseCharacter_C_FallingEvent_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.ReverseFistTL
struct ABP_BaseCharacter_C_ReverseFistTL_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.StartFistTL
struct ABP_BaseCharacter_C_StartFistTL_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.FistFighting
struct ABP_BaseCharacter_C_FistFighting_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.EndCrafting
struct ABP_BaseCharacter_C_EndCrafting_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.StartCrafting
struct ABP_BaseCharacter_C_StartCrafting_Params
{
	TEnumAsByte<E_Workbenches_E_Workbenches>           WorkbenchType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CraftingTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnSleepIdle
struct ABP_BaseCharacter_C_OnSleepIdle_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnSitIdle
struct ABP_BaseCharacter_C_OnSitIdle_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnWakeUp
struct ABP_BaseCharacter_C_OnWakeUp_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnGoToSleep
struct ABP_BaseCharacter_C_OnGoToSleep_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnSit
struct ABP_BaseCharacter_C_OnSit_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnGetUp
struct ABP_BaseCharacter_C_OnGetUp_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.FOVLerpUpdateSettings
struct ABP_BaseCharacter_C_FOVLerpUpdateSettings_Params
{
	class UCurveFloat*                                 FloatCurve;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NewRate;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TargetFOV;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.SetNewTimeCameraFOVLerp
struct ABP_BaseCharacter_C_SetNewTimeCameraFOVLerp_Params
{
	float                                              NewTime;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.ReverseFromEndCameraFOVLerp
struct ABP_BaseCharacter_C_ReverseFromEndCameraFOVLerp_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.ReverseCameraFOVLerp
struct ABP_BaseCharacter_C_ReverseCameraFOVLerp_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayCameraFOVLerp
struct ABP_BaseCharacter_C_PlayCameraFOVLerp_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.PlayFromStartCameraFOVLerp
struct ABP_BaseCharacter_C_PlayFromStartCameraFOVLerp_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.StopCameraFOVLerp
struct ABP_BaseCharacter_C_StopCameraFOVLerp_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.Update Camera Event
struct ABP_BaseCharacter_C_Update_Camera_Event_Params
{
	class UCurveFloat*                                 LerpCurve;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnCombatEnded
struct ABP_BaseCharacter_C_OnCombatEnded_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnCombatStarted
struct ABP_BaseCharacter_C_OnCombatStarted_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.ExecuteUbergraph_BP_BaseCharacter
struct ABP_BaseCharacter_C_ExecuteUbergraph_BP_BaseCharacter_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnCraftingAnimEnd__DelegateSignature
struct ABP_BaseCharacter_C_OnCraftingAnimEnd__DelegateSignature_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnWaitForCrafting__DelegateSignature
struct ABP_BaseCharacter_C_OnWaitForCrafting__DelegateSignature_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnCharacterActivated__DelegateSignature
struct ABP_BaseCharacter_C_OnCharacterActivated__DelegateSignature_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnCharacterDeactivated__DelegateSignature
struct ABP_BaseCharacter_C_OnCharacterDeactivated__DelegateSignature_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnStoppingCrafting__DelegateSignature
struct ABP_BaseCharacter_C_OnStoppingCrafting__DelegateSignature_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnEndCrafting__DelegateSignature
struct ABP_BaseCharacter_C_OnEndCrafting__DelegateSignature_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnStartCrafting__DelegateSignature
struct ABP_BaseCharacter_C_OnStartCrafting__DelegateSignature_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnSleepFinished__DelegateSignature
struct ABP_BaseCharacter_C_OnSleepFinished__DelegateSignature_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnSleepStarted__DelegateSignature
struct ABP_BaseCharacter_C_OnSleepStarted__DelegateSignature_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnSitFinished__DelegateSignature
struct ABP_BaseCharacter_C_OnSitFinished__DelegateSignature_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnSitStarted__DelegateSignature
struct ABP_BaseCharacter_C_OnSitStarted__DelegateSignature_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnInteractionFinished__DelegateSignature
struct ABP_BaseCharacter_C_OnInteractionFinished__DelegateSignature_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnIdleAnimFinished__DelegateSignature
struct ABP_BaseCharacter_C_OnIdleAnimFinished__DelegateSignature_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnIdleAnimEntered__DelegateSignature
struct ABP_BaseCharacter_C_OnIdleAnimEntered__DelegateSignature_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnSleepIdleEntered__DelegateSignature
struct ABP_BaseCharacter_C_OnSleepIdleEntered__DelegateSignature_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnSitIdleEntered__DelegateSignature
struct ABP_BaseCharacter_C_OnSitIdleEntered__DelegateSignature_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.OnMovementFinished__DelegateSignature
struct ABP_BaseCharacter_C_OnMovementFinished__DelegateSignature_Params
{
};

// Function BP_BaseCharacter.BP_BaseCharacter_C.CameraFadeFinished__DelegateSignature
struct ABP_BaseCharacter_C_CameraFadeFinished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
