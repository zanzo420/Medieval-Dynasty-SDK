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

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.IsGrabbable
struct ABP_MasterSplineStructure_C_IsGrabbable_Params
{
	bool                                               Grabbable;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.IsItemNeeded
struct ABP_MasterSplineStructure_C_IsItemNeeded_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CheckItems;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetInteractItem
struct ABP_MasterSplineStructure_C_GetInteractItem_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                         ItemHandler;                                               // (Parm, OutParm, NoDestructor)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.IsItemInteractable
struct ABP_MasterSplineStructure_C_IsItemInteractable_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Interactable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Possibility;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetInteractAdditionalStatus
struct ABP_MasterSplineStructure_C_GetInteractAdditionalStatus_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CustomColor;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Color;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Status;                                                    // (Parm, OutParm)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.IsInteractAdditionalStatus
struct ABP_MasterSplineStructure_C_IsInteractAdditionalStatus_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShowStatus;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetFishData
struct ABP_MasterSplineStructure_C_GetFishData_Params
{
	struct FST_ItemResource                            Item;                                                      // (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  Transform;                                                 // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetID
struct ABP_MasterSplineStructure_C_GetID_Params
{
	struct FString                                     ID;                                                        // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetInteractionDistance
struct ABP_MasterSplineStructure_C_GetInteractionDistance_Params
{
	float                                              Distance;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetOff-HandItem
struct ABP_MasterSplineStructure_C_GetOff_HandItem_Params
{
	class ABP_MasterHoldableItem_C*                    Off_HandItem;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetInteractCondition
struct ABP_MasterSplineStructure_C_GetInteractCondition_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                              Condition;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CustomText;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Text;                                                      // (Parm, OutParm)
	bool                                               CustomColor;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Color;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.IsInteractCondition
struct ABP_MasterSplineStructure_C_IsInteractCondition_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CheckCondition;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.IsToolNeeded
struct ABP_MasterSplineStructure_C_IsToolNeeded_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CheckTools;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetOwnershipType
struct ABP_MasterSplineStructure_C_GetOwnershipType_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetInteractTitle
struct ABP_MasterSplineStructure_C_GetInteractTitle_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Show;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Title;                                                     // (Parm, OutParm)
	bool                                               ShowAdditionalTitle1;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       AdditionalTitleText1;                                      // (Parm, OutParm)
	bool                                               ShowAdditionalTitle2;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       AdditionalTitleText2;                                      // (Parm, OutParm)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetInteractResources
struct ABP_MasterSplineStructure_C_GetInteractResources_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Show;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FST_ItemResource>                    Resources;                                                 // (Parm, OutParm)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetFluidType
struct ABP_MasterSplineStructure_C_GetFluidType_Params
{
	TEnumAsByte<E_Fluids_E_Fluids>                     FuildType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetNPCInteractTime
struct ABP_MasterSplineStructure_C_GetNPCInteractTime_Params
{
	float                                              Time;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetInteractTool_UI
struct ABP_MasterSplineStructure_C_GetInteractTool_UI_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_E_Tools>                       Tool;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_BagMode_E_BagMode>                   BagMode;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_BuildingModifications_E_BuildingModifications> BuildingMode;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.IsToolInteractable_UI
struct ABP_MasterSplineStructure_C_IsToolInteractable_UI_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Interactable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Possibility;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.IsToolInteractable
struct ABP_MasterSplineStructure_C_IsToolInteractable_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Interactable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Possibility;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetTaskFromActor
struct ABP_MasterSplineStructure_C_GetTaskFromActor_Params
{
	struct FST_TaskList                                Task;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetInteractName
struct ABP_MasterSplineStructure_C_GetInteractName_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       InteractName;                                              // (Parm, OutParm)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetInteractAction
struct ABP_MasterSplineStructure_C_GetInteractAction_Params
{
	struct FText                                       InteractActionText;                                        // (Parm, OutParm)
	struct FText                                       InteractSecondActionText;                                  // (Parm, OutParm)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.IsInteractable
struct ABP_MasterSplineStructure_C_IsInteractable_Params
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

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetInteractTool
struct ABP_MasterSplineStructure_C_GetInteractTool_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_E_Tools>                       Tool;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetInteractCount
struct ABP_MasterSplineStructure_C_GetInteractCount_Params
{
	int                                                Count;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetHeldItem
struct ABP_MasterSplineStructure_C_GetHeldItem_Params
{
	class ABP_MasterHoldableItem_C*                    HeldItem;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetResourceType
struct ABP_MasterSplineStructure_C_GetResourceType_Params
{
	TEnumAsByte<E_Resources_E_Resources>               ResourceType;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetNPCInteractAnimation
struct ABP_MasterSplineStructure_C_GetNPCInteractAnimation_Params
{
	TEnumAsByte<E_Sex_E_Sex>                           Sex;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Animation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.CheckOccupied
struct ABP_MasterSplineStructure_C_CheckOccupied_Params
{
	class APawn*                                       Character;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetInteractIcon
struct ABP_MasterSplineStructure_C_GetInteractIcon_Params
{
	class UTexture2D*                                  Icon;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.CheckPointOnTheMap
struct ABP_MasterSplineStructure_C_CheckPointOnTheMap_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OnMap;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.CheckPosibleToBuild
struct ABP_MasterSplineStructure_C_CheckPosibleToBuild_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GenerateCollision
struct ABP_MasterSplineStructure_C_GenerateCollision_Params
{
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.UpdateSplineMesh
struct ABP_MasterSplineStructure_C_UpdateSplineMesh_Params
{
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.GetDataToSave
struct ABP_MasterSplineStructure_C_GetDataToSave_Params
{
	struct FST_SAVE_SplineStructures                   SplineStructureData;                                       // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.InitAfterLoad
struct ABP_MasterSplineStructure_C_InitAfterLoad_Params
{
	struct FST_SAVE_SplineStructures                   SplineStructureData;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.ResetSplineStructure
struct ABP_MasterSplineStructure_C_ResetSplineStructure_Params
{
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.RemoveItem
struct ABP_MasterSplineStructure_C_RemoveItem_Params
{
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.CheckCost
struct ABP_MasterSplineStructure_C_CheckCost_Params
{
	bool                                               CanBePlaced_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.CheckObstruction
struct ABP_MasterSplineStructure_C_CheckObstruction_Params
{
	bool                                               CanBePlaced_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.CheckSplineStructureIsConstructed
struct ABP_MasterSplineStructure_C_CheckSplineStructureIsConstructed_Params
{
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.OnOwnershipSwap
struct ABP_MasterSplineStructure_C_OnOwnershipSwap_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               NewOwnership;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.CalculatePoints
struct ABP_MasterSplineStructure_C_CalculatePoints_Params
{
	struct FVector                                     BeginLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     EndLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.UserConstructionScript
struct ABP_MasterSplineStructure_C_UserConstructionScript_Params
{
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.Interact
struct ABP_MasterSplineStructure_C_Interact_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               Timer;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.InteractInput
struct ABP_MasterSplineStructure_C_InteractInput_Params
{
	bool                                               KeyDown;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.InteractStart
struct ABP_MasterSplineStructure_C_InteractStart_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.InteractCancel
struct ABP_MasterSplineStructure_C_InteractCancel_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.SetOccupied
struct ABP_MasterSplineStructure_C_SetOccupied_Params
{
	class APawn*                                       Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.SetTaskInActor
struct ABP_MasterSplineStructure_C_SetTaskInActor_Params
{
	struct FST_TaskList                                Task;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.ChangeTaskIsOccupied
struct ABP_MasterSplineStructure_C_ChangeTaskIsOccupied_Params
{
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.ToolInteract
struct ABP_MasterSplineStructure_C_ToolInteract_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               UseChunkData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_Chunks                                  ChunkData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.PerformActorInteraction
struct ABP_MasterSplineStructure_C_PerformActorInteraction_Params
{
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.IsLookedAt
struct ABP_MasterSplineStructure_C_IsLookedAt_Params
{
	bool                                               Active;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.ShowInspectorUI
struct ABP_MasterSplineStructure_C_ShowInspectorUI_Params
{
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.InteractWithImpaledItem
struct ABP_MasterSplineStructure_C_InteractWithImpaledItem_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.AddImpaledItem
struct ABP_MasterSplineStructure_C_AddImpaledItem_Params
{
	class AActor*                                      ImpaledItem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.RemoveImpaledItem
struct ABP_MasterSplineStructure_C_RemoveImpaledItem_Params
{
	class AActor*                                      ImpaledItem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.StartAttackFunction
struct ABP_MasterSplineStructure_C_StartAttackFunction_Params
{
	bool                                               Timer;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       Socket;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.StopAttackFunction
struct ABP_MasterSplineStructure_C_StopAttackFunction_Params
{
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.SetFirstPoint
struct ABP_MasterSplineStructure_C_SetFirstPoint_Params
{
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.SetSplineLocation
struct ABP_MasterSplineStructure_C_SetSplineLocation_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Load;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.SetSecondPoint
struct ABP_MasterSplineStructure_C_SetSecondPoint_Params
{
	struct FVector                                     Location;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Load;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.CreateSplineGhost
struct ABP_MasterSplineStructure_C_CreateSplineGhost_Params
{
	bool                                               Load;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.DestroySpline
struct ABP_MasterSplineStructure_C_DestroySpline_Params
{
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.ReceiveBeginPlay
struct ABP_MasterSplineStructure_C_ReceiveBeginPlay_Params
{
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.ExecuteInitialVisuals
struct ABP_MasterSplineStructure_C_ExecuteInitialVisuals_Params
{
	bool                                               Load;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.ExecuteInitialLogic
struct ABP_MasterSplineStructure_C_ExecuteInitialLogic_Params
{
	bool                                               Load;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.FinishedBuilding
struct ABP_MasterSplineStructure_C_FinishedBuilding_Params
{
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.ExecuteFinishVisuals
struct ABP_MasterSplineStructure_C_ExecuteFinishVisuals_Params
{
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.ExecuteFinishLogic
struct ABP_MasterSplineStructure_C_ExecuteFinishLogic_Params
{
};

// Function BP_MasterSplineStructure.BP_MasterSplineStructure_C.ExecuteUbergraph_BP_MasterSplineStructure
struct ABP_MasterSplineStructure_C_ExecuteUbergraph_BP_MasterSplineStructure_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
