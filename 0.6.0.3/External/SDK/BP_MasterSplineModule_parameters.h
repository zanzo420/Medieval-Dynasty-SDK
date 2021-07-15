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

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.IsGrabbable
struct UBP_MasterSplineModule_C_IsGrabbable_Params
{
	bool                                               Grabbable;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.IsItemNeeded
struct UBP_MasterSplineModule_C_IsItemNeeded_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CheckItems;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.GetInteractItem
struct UBP_MasterSplineModule_C_GetInteractItem_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                         ItemHandler;                                               // (Parm, OutParm, NoDestructor)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.IsItemInteractable
struct UBP_MasterSplineModule_C_IsItemInteractable_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Interactable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Possibility;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.GetInteractAdditionalStatus
struct UBP_MasterSplineModule_C_GetInteractAdditionalStatus_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CustomColor;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Color;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Status;                                                    // (Parm, OutParm)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.IsInteractAdditionalStatus
struct UBP_MasterSplineModule_C_IsInteractAdditionalStatus_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShowStatus;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.GetFishData
struct UBP_MasterSplineModule_C_GetFishData_Params
{
	struct FST_ItemResource                            Item;                                                      // (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  Transform;                                                 // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.GetID
struct UBP_MasterSplineModule_C_GetID_Params
{
	struct FString                                     ID;                                                        // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.GetInteractionDistance
struct UBP_MasterSplineModule_C_GetInteractionDistance_Params
{
	float                                              Distance;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.GetOff-HandItem
struct UBP_MasterSplineModule_C_GetOff_HandItem_Params
{
	class ABP_MasterHoldableItem_C*                    Off_HandItem;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.IsToolNeeded
struct UBP_MasterSplineModule_C_IsToolNeeded_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CheckTools;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.GetInteractCondition
struct UBP_MasterSplineModule_C_GetInteractCondition_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                              Condition;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CustomText;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Text;                                                      // (Parm, OutParm)
	bool                                               CustomColor;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Color;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.IsInteractCondition
struct UBP_MasterSplineModule_C_IsInteractCondition_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CheckCondition;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.GetOwnershipType
struct UBP_MasterSplineModule_C_GetOwnershipType_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.GetInteractTitle
struct UBP_MasterSplineModule_C_GetInteractTitle_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Show;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Title;                                                     // (Parm, OutParm)
	bool                                               ShowAdditionalTitle1;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       AdditionalTitleText1;                                      // (Parm, OutParm)
	bool                                               ShowAdditionalTitle2;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       AdditionalTitleText2;                                      // (Parm, OutParm)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.IsInteractable
struct UBP_MasterSplineModule_C_IsInteractable_Params
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

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.IsToolInteractable
struct UBP_MasterSplineModule_C_IsToolInteractable_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Interactable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Possibility;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.IsToolInteractable_UI
struct UBP_MasterSplineModule_C_IsToolInteractable_UI_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Interactable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Possibility;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.GetInteractName
struct UBP_MasterSplineModule_C_GetInteractName_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       InteractName;                                              // (Parm, OutParm)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.GetInteractAction
struct UBP_MasterSplineModule_C_GetInteractAction_Params
{
	struct FText                                       InteractActionText;                                        // (Parm, OutParm)
	struct FText                                       InteractSecondActionText;                                  // (Parm, OutParm)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.GetInteractTool
struct UBP_MasterSplineModule_C_GetInteractTool_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_E_Tools>                       Tool;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.GetInteractTool_UI
struct UBP_MasterSplineModule_C_GetInteractTool_UI_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_E_Tools>                       Tool;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_BagMode_E_BagMode>                   BagMode;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_BuildingModifications_E_BuildingModifications> BuildingMode;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.GetInteractCount
struct UBP_MasterSplineModule_C_GetInteractCount_Params
{
	int                                                Count;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.GetHeldItem
struct UBP_MasterSplineModule_C_GetHeldItem_Params
{
	class ABP_MasterHoldableItem_C*                    HeldItem;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.GetResourceType
struct UBP_MasterSplineModule_C_GetResourceType_Params
{
	TEnumAsByte<E_Resources_E_Resources>               ResourceType;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.CheckOccupied
struct UBP_MasterSplineModule_C_CheckOccupied_Params
{
	class APawn*                                       Character;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.GetInteractIcon
struct UBP_MasterSplineModule_C_GetInteractIcon_Params
{
	class UTexture2D*                                  Icon;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.GetTaskFromActor
struct UBP_MasterSplineModule_C_GetTaskFromActor_Params
{
	struct FST_TaskList                                Task;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.GetInteractResources
struct UBP_MasterSplineModule_C_GetInteractResources_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Show;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FST_ItemResource>                    Resources;                                                 // (Parm, OutParm)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.GetNPCInteractAnimation
struct UBP_MasterSplineModule_C_GetNPCInteractAnimation_Params
{
	TEnumAsByte<E_Sex_E_Sex>                           Sex;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Animation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.GetNPCInteractTime
struct UBP_MasterSplineModule_C_GetNPCInteractTime_Params
{
	float                                              Time;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.GetFluidType
struct UBP_MasterSplineModule_C_GetFluidType_Params
{
	TEnumAsByte<E_Fluids_E_Fluids>                     FuildType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.RecoverResources
struct UBP_MasterSplineModule_C_RecoverResources_Params
{
	class UInventoryComponent_C*                       Inventory;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.OnOwnershipSwap
struct UBP_MasterSplineModule_C_OnOwnershipSwap_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               NewOwnership;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.RemoveItem
struct UBP_MasterSplineModule_C_RemoveItem_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_ItemResource>                    Items;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.DecreaseCondition
struct UBP_MasterSplineModule_C_DecreaseCondition_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.IncreaseCondition
struct UBP_MasterSplineModule_C_IncreaseCondition_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.UpdateCondition
struct UBP_MasterSplineModule_C_UpdateCondition_Params
{
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.UpdateMeshCondition
struct UBP_MasterSplineModule_C_UpdateMeshCondition_Params
{
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.SetModuleBaseMaterial
struct UBP_MasterSplineModule_C_SetModuleBaseMaterial_Params
{
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.SetGhostCollision
struct UBP_MasterSplineModule_C_SetGhostCollision_Params
{
	bool                                               Enabled;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.SetModuleCollision
struct UBP_MasterSplineModule_C_SetModuleCollision_Params
{
	bool                                               Enabled;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.SetModuleGhost
struct UBP_MasterSplineModule_C_SetModuleGhost_Params
{
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.SetDetectionGhost
struct UBP_MasterSplineModule_C_SetDetectionGhost_Params
{
	class UMaterialInstance*                           GhostMaterialReference;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.Init
struct UBP_MasterSplineModule_C_Init_Params
{
	class ABP_MasterSplineStructure_C*                 SplineStructureReference;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ModuleID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.InteractInput
struct UBP_MasterSplineModule_C_InteractInput_Params
{
	bool                                               KeyDown;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.InteractStart
struct UBP_MasterSplineModule_C_InteractStart_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.InteractCancel
struct UBP_MasterSplineModule_C_InteractCancel_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.SetOccupied
struct UBP_MasterSplineModule_C_SetOccupied_Params
{
	class APawn*                                       Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.SetTaskInActor
struct UBP_MasterSplineModule_C_SetTaskInActor_Params
{
	struct FST_TaskList                                Task;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.ChangeTaskIsOccupied
struct UBP_MasterSplineModule_C_ChangeTaskIsOccupied_Params
{
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.PerformActorInteraction
struct UBP_MasterSplineModule_C_PerformActorInteraction_Params
{
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.IsLookedAt
struct UBP_MasterSplineModule_C_IsLookedAt_Params
{
	bool                                               Active;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.ShowInspectorUI
struct UBP_MasterSplineModule_C_ShowInspectorUI_Params
{
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.InteractWithImpaledItem
struct UBP_MasterSplineModule_C_InteractWithImpaledItem_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.AddImpaledItem
struct UBP_MasterSplineModule_C_AddImpaledItem_Params
{
	class AActor*                                      ImpaledItem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.RemoveImpaledItem
struct UBP_MasterSplineModule_C_RemoveImpaledItem_Params
{
	class AActor*                                      ImpaledItem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.StartAttackFunction
struct UBP_MasterSplineModule_C_StartAttackFunction_Params
{
	bool                                               Timer;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       Socket;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.StopAttackFunction
struct UBP_MasterSplineModule_C_StopAttackFunction_Params
{
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.Interact
struct UBP_MasterSplineModule_C_Interact_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               Timer;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.Upgrade
struct UBP_MasterSplineModule_C_Upgrade_Params
{
	bool                                               Load;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.Downgrade
struct UBP_MasterSplineModule_C_Downgrade_Params
{
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.ConstructedModule
struct UBP_MasterSplineModule_C_ConstructedModule_Params
{
	bool                                               Load;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.Repair
struct UBP_MasterSplineModule_C_Repair_Params
{
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.UnconstructedModule
struct UBP_MasterSplineModule_C_UnconstructedModule_Params
{
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.ToolInteract
struct UBP_MasterSplineModule_C_ToolInteract_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               UseChunkData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_Chunks                                  ChunkData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function BP_MasterSplineModule.BP_MasterSplineModule_C.ExecuteUbergraph_BP_MasterSplineModule
struct UBP_MasterSplineModule_C_ExecuteUbergraph_BP_MasterSplineModule_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
