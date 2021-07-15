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

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.IsGrabbable
struct ABP_FlowmapRiverSystem_C_IsGrabbable_Params
{
	bool                                               Grabbable;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.IsItemNeeded
struct ABP_FlowmapRiverSystem_C_IsItemNeeded_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CheckItems;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetInteractItem
struct ABP_FlowmapRiverSystem_C_GetInteractItem_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                         ItemHandler;                                               // (Parm, OutParm, NoDestructor)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.IsItemInteractable
struct ABP_FlowmapRiverSystem_C_IsItemInteractable_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Interactable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Possibility;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetInteractAdditionalStatus
struct ABP_FlowmapRiverSystem_C_GetInteractAdditionalStatus_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CustomColor;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Color;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Status;                                                    // (Parm, OutParm)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.IsInteractAdditionalStatus
struct ABP_FlowmapRiverSystem_C_IsInteractAdditionalStatus_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShowStatus;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetFishData
struct ABP_FlowmapRiverSystem_C_GetFishData_Params
{
	struct FST_ItemResource                            Item;                                                      // (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  Transform;                                                 // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetID
struct ABP_FlowmapRiverSystem_C_GetID_Params
{
	struct FString                                     ID;                                                        // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetInteractionDistance
struct ABP_FlowmapRiverSystem_C_GetInteractionDistance_Params
{
	float                                              Distance;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetOff-HandItem
struct ABP_FlowmapRiverSystem_C_GetOff_HandItem_Params
{
	class ABP_MasterHoldableItem_C*                    Off_HandItem;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.IsToolNeeded
struct ABP_FlowmapRiverSystem_C_IsToolNeeded_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CheckTools;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetInteractCondition
struct ABP_FlowmapRiverSystem_C_GetInteractCondition_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                              Condition;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CustomText;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Text;                                                      // (Parm, OutParm)
	bool                                               CustomColor;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Color;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.IsInteractCondition
struct ABP_FlowmapRiverSystem_C_IsInteractCondition_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CheckCondition;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetOwnershipType
struct ABP_FlowmapRiverSystem_C_GetOwnershipType_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetInteractTitle
struct ABP_FlowmapRiverSystem_C_GetInteractTitle_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Show;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Title;                                                     // (Parm, OutParm)
	bool                                               ShowAdditionalTitle1;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       AdditionalTitleText1;                                      // (Parm, OutParm)
	bool                                               ShowAdditionalTitle2;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       AdditionalTitleText2;                                      // (Parm, OutParm)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetInteractResources
struct ABP_FlowmapRiverSystem_C_GetInteractResources_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Show;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FST_ItemResource>                    Resources;                                                 // (Parm, OutParm)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetFluidType
struct ABP_FlowmapRiverSystem_C_GetFluidType_Params
{
	TEnumAsByte<E_Fluids_E_Fluids>                     FuildType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetNPCInteractTime
struct ABP_FlowmapRiverSystem_C_GetNPCInteractTime_Params
{
	float                                              Time;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetInteractTool_UI
struct ABP_FlowmapRiverSystem_C_GetInteractTool_UI_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_E_Tools>                       Tool;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_BagMode_E_BagMode>                   BagMode;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_BuildingModifications_E_BuildingModifications> BuildingMode;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.IsToolInteractable_UI
struct ABP_FlowmapRiverSystem_C_IsToolInteractable_UI_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Interactable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Possibility;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.IsToolInteractable
struct ABP_FlowmapRiverSystem_C_IsToolInteractable_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Interactable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Possibility;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetTaskFromActor
struct ABP_FlowmapRiverSystem_C_GetTaskFromActor_Params
{
	struct FST_TaskList                                Task;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetInteractName
struct ABP_FlowmapRiverSystem_C_GetInteractName_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       InteractName;                                              // (Parm, OutParm)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetInteractAction
struct ABP_FlowmapRiverSystem_C_GetInteractAction_Params
{
	struct FText                                       InteractActionText;                                        // (Parm, OutParm)
	struct FText                                       InteractSecondActionText;                                  // (Parm, OutParm)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.IsInteractable
struct ABP_FlowmapRiverSystem_C_IsInteractable_Params
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

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetInteractTool
struct ABP_FlowmapRiverSystem_C_GetInteractTool_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_E_Tools>                       Tool;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetInteractCount
struct ABP_FlowmapRiverSystem_C_GetInteractCount_Params
{
	int                                                Count;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetHeldItem
struct ABP_FlowmapRiverSystem_C_GetHeldItem_Params
{
	class ABP_MasterHoldableItem_C*                    HeldItem;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetResourceType
struct ABP_FlowmapRiverSystem_C_GetResourceType_Params
{
	TEnumAsByte<E_Resources_E_Resources>               ResourceType;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetNPCInteractAnimation
struct ABP_FlowmapRiverSystem_C_GetNPCInteractAnimation_Params
{
	TEnumAsByte<E_Sex_E_Sex>                           Sex;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Animation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.CheckOccupied
struct ABP_FlowmapRiverSystem_C_CheckOccupied_Params
{
	class APawn*                                       Character;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetInteractIcon
struct ABP_FlowmapRiverSystem_C_GetInteractIcon_Params
{
	class UTexture2D*                                  Icon;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.GetDistanceBetweenPoints
struct ABP_FlowmapRiverSystem_C_GetDistanceBetweenPoints_Params
{
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.UpdateRiverSplines
struct ABP_FlowmapRiverSystem_C_UpdateRiverSplines_Params
{
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.UpdateRiverMeshesScaleLocationTangent
struct ABP_FlowmapRiverSystem_C_UpdateRiverMeshesScaleLocationTangent_Params
{
	class USplineComponent*                            RiverSplineComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.RefreshRiverSplits
struct ABP_FlowmapRiverSystem_C_RefreshRiverSplits_Params
{
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.SetupRiverVolumes
struct ABP_FlowmapRiverSystem_C_SetupRiverVolumes_Params
{
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.SetupAttachment
struct ABP_FlowmapRiverSystem_C_SetupAttachment_Params
{
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.SetupSplineVisualizers
struct ABP_FlowmapRiverSystem_C_SetupSplineVisualizers_Params
{
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.SetupRiverMeshes
struct ABP_FlowmapRiverSystem_C_SetupRiverMeshes_Params
{
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.UserConstructionScript
struct ABP_FlowmapRiverSystem_C_UserConstructionScript_Params
{
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.InteractInput
struct ABP_FlowmapRiverSystem_C_InteractInput_Params
{
	bool                                               KeyDown;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.InteractCancel
struct ABP_FlowmapRiverSystem_C_InteractCancel_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.SetOccupied
struct ABP_FlowmapRiverSystem_C_SetOccupied_Params
{
	class APawn*                                       Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.SetTaskInActor
struct ABP_FlowmapRiverSystem_C_SetTaskInActor_Params
{
	struct FST_TaskList                                Task;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.ChangeTaskIsOccupied
struct ABP_FlowmapRiverSystem_C_ChangeTaskIsOccupied_Params
{
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.ToolInteract
struct ABP_FlowmapRiverSystem_C_ToolInteract_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               UseChunkData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_Chunks                                  ChunkData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.PerformActorInteraction
struct ABP_FlowmapRiverSystem_C_PerformActorInteraction_Params
{
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.IsLookedAt
struct ABP_FlowmapRiverSystem_C_IsLookedAt_Params
{
	bool                                               Active;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.ShowInspectorUI
struct ABP_FlowmapRiverSystem_C_ShowInspectorUI_Params
{
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.InteractWithImpaledItem
struct ABP_FlowmapRiverSystem_C_InteractWithImpaledItem_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.AddImpaledItem
struct ABP_FlowmapRiverSystem_C_AddImpaledItem_Params
{
	class AActor*                                      ImpaledItem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.RemoveImpaledItem
struct ABP_FlowmapRiverSystem_C_RemoveImpaledItem_Params
{
	class AActor*                                      ImpaledItem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.StartAttackFunction
struct ABP_FlowmapRiverSystem_C_StartAttackFunction_Params
{
	bool                                               Timer;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       Socket;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.StopAttackFunction
struct ABP_FlowmapRiverSystem_C_StopAttackFunction_Params
{
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.UpdateRiver
struct ABP_FlowmapRiverSystem_C_UpdateRiver_Params
{
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.Interact
struct ABP_FlowmapRiverSystem_C_Interact_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               Timer;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.InteractStart
struct ABP_FlowmapRiverSystem_C_InteractStart_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.ReceiveBeginPlay
struct ABP_FlowmapRiverSystem_C_ReceiveBeginPlay_Params
{
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.ReceiveTick
struct ABP_FlowmapRiverSystem_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FlowmapRiverSystem.BP_FlowmapRiverSystem_C.ExecuteUbergraph_BP_FlowmapRiverSystem
struct ABP_FlowmapRiverSystem_C_ExecuteUbergraph_BP_FlowmapRiverSystem_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
