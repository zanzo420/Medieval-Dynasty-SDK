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

// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckSocketCompatibility
struct ABP_MasterBuilding_C_CheckSocketCompatibility_Params
{
	struct FDataTableRowHandle                         BuildingHandler;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetSocketLocation
struct ABP_MasterBuilding_C_GetSocketLocation_Params
{
	struct FTransform                                  Transform;                                                 // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetBuildingHandlers
struct ABP_MasterBuilding_C_GetBuildingHandlers_Params
{
	struct FDataTableRowHandle                         HandlerToCompare;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	TArray<struct FDataTableRowHandle>                 BuildingHandlers;                                          // (Parm, OutParm)
	bool                                               Compatibility;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetBuildingReference
struct ABP_MasterBuilding_C_GetBuildingReference_Params
{
	class ABP_MasterBuilding_C*                        MasterBuilding;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetEntrances
struct ABP_MasterBuilding_C_GetEntrances_Params
{
	TArray<struct FVector>                             Entrances;                                                 // (Parm, OutParm)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetBuildingType
struct ABP_MasterBuilding_C_GetBuildingType_Params
{
	TEnumAsByte<E_Buildings_E_Buildings>               GetBuildingType;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.IsGrabbable
struct ABP_MasterBuilding_C_IsGrabbable_Params
{
	bool                                               Grabbable;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.IsItemNeeded
struct ABP_MasterBuilding_C_IsItemNeeded_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CheckItems;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetInteractItem
struct ABP_MasterBuilding_C_GetInteractItem_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                         ItemHandler;                                               // (Parm, OutParm, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.IsItemInteractable
struct ABP_MasterBuilding_C_IsItemInteractable_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Interactable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Possibility;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetInteractAdditionalStatus
struct ABP_MasterBuilding_C_GetInteractAdditionalStatus_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CustomColor;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Color;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Status;                                                    // (Parm, OutParm)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.IsInteractAdditionalStatus
struct ABP_MasterBuilding_C_IsInteractAdditionalStatus_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShowStatus;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetFishData
struct ABP_MasterBuilding_C_GetFishData_Params
{
	struct FST_ItemResource                            Item;                                                      // (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  Transform;                                                 // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetID
struct ABP_MasterBuilding_C_GetID_Params
{
	struct FString                                     ID;                                                        // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetInteractionDistance
struct ABP_MasterBuilding_C_GetInteractionDistance_Params
{
	float                                              Distance;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetOff-HandItem
struct ABP_MasterBuilding_C_GetOff_HandItem_Params
{
	class ABP_MasterHoldableItem_C*                    Off_HandItem;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetInteractCondition
struct ABP_MasterBuilding_C_GetInteractCondition_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                              Condition;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CustomText;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Text;                                                      // (Parm, OutParm)
	bool                                               CustomColor;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Color;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.IsInteractCondition
struct ABP_MasterBuilding_C_IsInteractCondition_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CheckCondition;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.IsToolNeeded
struct ABP_MasterBuilding_C_IsToolNeeded_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CheckTools;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetOwnershipType
struct ABP_MasterBuilding_C_GetOwnershipType_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetInteractTitle
struct ABP_MasterBuilding_C_GetInteractTitle_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Show;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Title;                                                     // (Parm, OutParm)
	bool                                               ShowAdditionalTitle1;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       AdditionalTitleText1;                                      // (Parm, OutParm)
	bool                                               ShowAdditionalTitle2;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       AdditionalTitleText2;                                      // (Parm, OutParm)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetInteractResources
struct ABP_MasterBuilding_C_GetInteractResources_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Show;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FST_ItemResource>                    Resources;                                                 // (Parm, OutParm)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetFluidType
struct ABP_MasterBuilding_C_GetFluidType_Params
{
	TEnumAsByte<E_Fluids_E_Fluids>                     FuildType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetInteractTool_UI
struct ABP_MasterBuilding_C_GetInteractTool_UI_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_E_Tools>                       Tool;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_BagMode_E_BagMode>                   BagMode;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_BuildingModifications_E_BuildingModifications> BuildingMode;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.IsToolInteractable_UI
struct ABP_MasterBuilding_C_IsToolInteractable_UI_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Interactable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Possibility;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetNPCInteractTime
struct ABP_MasterBuilding_C_GetNPCInteractTime_Params
{
	float                                              Time;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.IsToolInteractable
struct ABP_MasterBuilding_C_IsToolInteractable_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Interactable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Possibility;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetTaskFromActor
struct ABP_MasterBuilding_C_GetTaskFromActor_Params
{
	struct FST_TaskList                                Task;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetInteractIcon
struct ABP_MasterBuilding_C_GetInteractIcon_Params
{
	class UTexture2D*                                  Icon;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckOccupied
struct ABP_MasterBuilding_C_CheckOccupied_Params
{
	class APawn*                                       Character;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetNPCInteractAnimation
struct ABP_MasterBuilding_C_GetNPCInteractAnimation_Params
{
	TEnumAsByte<E_Sex_E_Sex>                           Sex;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Animation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetResourceType
struct ABP_MasterBuilding_C_GetResourceType_Params
{
	TEnumAsByte<E_Resources_E_Resources>               ResourceType;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetHeldItem
struct ABP_MasterBuilding_C_GetHeldItem_Params
{
	class ABP_MasterHoldableItem_C*                    HeldItem;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetInteractName
struct ABP_MasterBuilding_C_GetInteractName_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       InteractName;                                              // (Parm, OutParm)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetInteractAction
struct ABP_MasterBuilding_C_GetInteractAction_Params
{
	struct FText                                       InteractActionText;                                        // (Parm, OutParm)
	struct FText                                       InteractSecondActionText;                                  // (Parm, OutParm)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.IsInteractable
struct ABP_MasterBuilding_C_IsInteractable_Params
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

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetInteractTool
struct ABP_MasterBuilding_C_GetInteractTool_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_E_Tools>                       Tool;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetInteractCount
struct ABP_MasterBuilding_C_GetInteractCount_Params
{
	int                                                Count;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.DecreaseToolBuffer
struct ABP_MasterBuilding_C_DecreaseToolBuffer_Params
{
	TEnumAsByte<E_Tools_Activity_E_Tools_Activity>     ToolActivity;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckWork
struct ABP_MasterBuilding_C_CheckWork_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckTool
struct ABP_MasterBuilding_C_CheckTool_Params
{
	TEnumAsByte<E_Tools_Activity_E_Tools_Activity>     ToolActivity;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Tools_E_Tools>                       ToolForAnimation;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckPointOnTheMap
struct ABP_MasterBuilding_C_CheckPointOnTheMap_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OnMap;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.SetShopType
struct ABP_MasterBuilding_C_SetShopType_Params
{
	TEnumAsByte<E_ShopType_E_ShopType>                 Type;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InitTradingData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.OnPeopleOrAnimalsListChanged
struct ABP_MasterBuilding_C_OnPeopleOrAnimalsListChanged_Params
{
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.WoodDemand
struct ABP_MasterBuilding_C_WoodDemand_Params
{
	float                                              Demand;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.WaterDemand
struct ABP_MasterBuilding_C_WaterDemand_Params
{
	float                                              Demand;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.FoodDemand
struct ABP_MasterBuilding_C_FoodDemand_Params
{
	float                                              Demand;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.HasResouces
struct ABP_MasterBuilding_C_HasResouces_Params
{
	bool                                               Resources;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.HasTools
struct ABP_MasterBuilding_C_HasTools_Params
{
	bool                                               Tools;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.UnoccupyWorkSlot
struct ABP_MasterBuilding_C_UnoccupyWorkSlot_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  SlotTransform;                                             // (Parm, OutParm, IsPlainOldData, NoDestructor)
	bool                                               HaveStartPoint;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  StartPoint;                                                // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.UnoccupyWorkSlots
struct ABP_MasterBuilding_C_UnoccupyWorkSlots_Params
{
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.OccupyWorkSlot
struct ABP_MasterBuilding_C_OccupyWorkSlot_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  SlotTransform;                                             // (Parm, OutParm, IsPlainOldData, NoDestructor)
	bool                                               HaveStartPoint;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  StartPointTransform;                                       // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetRandomUnoccupiedWorkSlot
struct ABP_MasterBuilding_C_GetRandomUnoccupiedWorkSlot_Params
{
	int                                                WorkSlotIndexToIgnore;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WorkSlotIndex;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetUnoccupiedWorkSlot
struct ABP_MasterBuilding_C_GetUnoccupiedWorkSlot_Params
{
	int                                                WorkSlotIndex;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.SetSocket
struct ABP_MasterBuilding_C_SetSocket_Params
{
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.RecoverResources
struct ABP_MasterBuilding_C_RecoverResources_Params
{
	class UInventoryComponent_C*                       Inventory;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetTax
struct ABP_MasterBuilding_C_GetTax_Params
{
	int                                                Price;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckItemInChest
struct ABP_MasterBuilding_C_CheckItemInChest_Params
{
	bool                                               RemoveItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       Item;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsItem;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetNumbersOfAnimals
struct ABP_MasterBuilding_C_GetNumbersOfAnimals_Params
{
	TEnumAsByte<E_Animals_E_Animals>                   AnimalType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                YoungFemaleCount;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                YoungMaleCount;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FemaleCount;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaleCount;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.CanBeDestroyed?
struct ABP_MasterBuilding_C_CanBeDestroyed__Params
{
	bool                                               CanBeDestroyed_;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.HasWood
struct ABP_MasterBuilding_C_HasWood_Params
{
	bool                                               wood;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.HasWater
struct ABP_MasterBuilding_C_HasWater_Params
{
	bool                                               water;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.HasFood
struct ABP_MasterBuilding_C_HasFood_Params
{
	bool                                               Food;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.HasAnimals
struct ABP_MasterBuilding_C_HasAnimals_Params
{
	bool                                               Animals;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.HasWorkers
struct ABP_MasterBuilding_C_HasWorkers_Params
{
	bool                                               Workers;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.InitNPCBuildingAfterLoad
struct ABP_MasterBuilding_C_InitNPCBuildingAfterLoad_Params
{
	TArray<struct FST_SAVE_Containers>                 Containers;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FString                                     SaveGameVersion;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetNPCDataToSave
struct ABP_MasterBuilding_C_GetNPCDataToSave_Params
{
	struct FST_SAVE_NPC_Building                       BuildingData;                                              // (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetNumberOfFurnitures
struct ABP_MasterBuilding_C_GetNumberOfFurnitures_Params
{
	int                                                Value;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.FindProductionItem
struct ABP_MasterBuilding_C_FindProductionItem_Params
{
	struct FST_Production_Recipe                       Recipe;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TArray<struct FST_Production_Progress>             OldProduction;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_Production_Progress                     RecipeProgress;                                            // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.IsDamaged
struct ABP_MasterBuilding_C_IsDamaged_Params
{
	bool                                               Damaged;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.RemoveAllAnimals
struct ABP_MasterBuilding_C_RemoveAllAnimals_Params
{
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateProductionOnBuildingChangeLevel
struct ABP_MasterBuilding_C_UpdateProductionOnBuildingChangeLevel_Params
{
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.IsLastUnconstructedModule
struct ABP_MasterBuilding_C_IsLastUnconstructedModule_Params
{
	bool                                               Last;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.IsChestEmpty
struct ABP_MasterBuilding_C_IsChestEmpty_Params
{
	bool                                               IsEmpty;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.UnoccupySleepSlot
struct ABP_MasterBuilding_C_UnoccupySleepSlot_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  SlotTransform;                                             // (Parm, OutParm, IsPlainOldData, NoDestructor)
	bool                                               HaveStartPoint;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  StartPoint;                                                // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.UnoccupySleepSlots
struct ABP_MasterBuilding_C_UnoccupySleepSlots_Params
{
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.OccupySleepSlot
struct ABP_MasterBuilding_C_OccupySleepSlot_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  SlotTransform;                                             // (Parm, OutParm, IsPlainOldData, NoDestructor)
	bool                                               HaveStartPoint;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  StartPointTransform;                                       // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetUnoccupiedSleepSlot
struct ABP_MasterBuilding_C_GetUnoccupiedSleepSlot_Params
{
	int                                                SleepSlotIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.RemoveAllPeople
struct ABP_MasterBuilding_C_RemoveAllPeople_Params
{
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetNumberOfDoors
struct ABP_MasterBuilding_C_GetNumberOfDoors_Params
{
	bool                                               OnlyConstructed;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                NumberOfDoors;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetAnimalRange
struct ABP_MasterBuilding_C_GetAnimalRange_Params
{
	struct FTransform                                  VolumeTransform;                                           // (Parm, OutParm, IsPlainOldData, NoDestructor)
	struct FVector                                     BoxExtent;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.TeleportPeople
struct ABP_MasterBuilding_C_TeleportPeople_Params
{
	bool                                               PlayerIncluded;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetPeopleID
struct ABP_MasterBuilding_C_GetPeopleID_Params
{
	TArray<struct FString>                             ID;                                                        // (Parm, OutParm)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.UpdatePlacement
struct ABP_MasterBuilding_C_UpdatePlacement_Params
{
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckSocketPlacement
struct ABP_MasterBuilding_C_CheckSocketPlacement_Params
{
	bool                                               OverrideTransform;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  Transform;                                                 // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.InitEconomy
struct ABP_MasterBuilding_C_InitEconomy_Params
{
	bool                                               Load;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FST_SAVE_Production_Progress>        ProductionDataFromFile;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FST_SAVE_Trade_Progress>             TradeDataFromFile;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TMap<TEnumAsByte<E_Tools_Activity_E_Tools_Activity>, struct FST_ToolCost> ToolsCostsFromFile;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                              WoodBufferFromFile;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FoodBufferFromFile;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WaterBufferFromFile;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.SeasonalDecreaseBuildingCondition
struct ABP_MasterBuilding_C_SeasonalDecreaseBuildingCondition_Params
{
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateBuildingCondition
struct ABP_MasterBuilding_C_UpdateBuildingCondition_Params
{
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetDataToSave
struct ABP_MasterBuilding_C_GetDataToSave_Params
{
	struct FST_SAVE_Buildings                          BuildingData;                                              // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.InitAfterLoad
struct ABP_MasterBuilding_C_InitAfterLoad_Params
{
	struct FString                                     ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     CustomName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                              ZLocation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_SAVE_Modules>                    ModulesData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FST_SAVE_Containers>                 Containers;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FST_SAVE_RefillableContainers>       RefillableContainers;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FST_SAVE_Campfires>                  Campfires;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FST_SAVE_Production_Progress>        Production;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FST_SAVE_Trade_Progress>             Trade;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TMap<TEnumAsByte<E_Profession_E_Profession>, int>  WorkIntensityFromFile;                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	TMap<TEnumAsByte<E_Tools_Activity_E_Tools_Activity>, struct FST_ToolCost> ToolsCostsFromFile;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              WoodBufferFromFile;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FoodBufferFromFile;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WaterBufferFromFile;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FurnitureCreatedFromFile;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_Event_BuildingMultipliers               EventMultipliersFromFile;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     SaveGameVersion;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<E_ShopType_E_ShopType>                 ShopTypeFromFile;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.SetID
struct ABP_MasterBuilding_C_SetID_Params
{
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.AutoAssigningPeople
struct ABP_MasterBuilding_C_AutoAssigningPeople_Params
{
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckIfBuildingIsConstructed
struct ABP_MasterBuilding_C_CheckIfBuildingIsConstructed_Params
{
	bool                                               Load;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateLevelOfWarming
struct ABP_MasterBuilding_C_UpdateLevelOfWarming_Params
{
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.ChangeModule
struct ABP_MasterBuilding_C_ChangeModule_Params
{
	int                                                SocketID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Module_ID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetBuildingModulesDataFromSlot
struct ABP_MasterBuilding_C_GetBuildingModulesDataFromSlot_Params
{
	int                                                SocketID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FST_Module>                          ModulesData;                                               // (Parm, OutParm)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetBuildingModuleDataFromSlot
struct ABP_MasterBuilding_C_GetBuildingModuleDataFromSlot_Params
{
	int                                                ModuleID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_BuildingModuleSocket                    SocketData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_Module                                  ModuleData;                                                // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.SetStairs
struct ABP_MasterBuilding_C_SetStairs_Params
{
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.ChangeBuildingLevel
struct ABP_MasterBuilding_C_ChangeBuildingLevel_Params
{
	int                                                NewLevel;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.OnOwnershipSwap
struct ABP_MasterBuilding_C_OnOwnershipSwap_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               NewOwnership;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetDependentFieldsCurrentTask
struct ABP_MasterBuilding_C_GetDependentFieldsCurrentTask_Params
{
	class ABP_MasterField_C*                           Field;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_FieldActivities_E_FieldActivities>   FieldActivity;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsTask;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsItem;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Tools_Activity_E_Tools_Activity>     NeedToolActivity;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       NeedItem;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_FieldTasksLists                         Task;                                                      // (Parm, OutParm, HasGetValueTypeHash)
	int                                                ChunkId;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetFurniture
struct ABP_MasterBuilding_C_GetFurniture_Params
{
	TEnumAsByte<E_FurnitureCategories_E_FurnitureCategories> FurnitureCategory;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class ABP_MasterFurniture_C*>               Furniture;                                                 // (Parm, OutParm)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.RemoveFurniture
struct ABP_MasterBuilding_C_RemoveFurniture_Params
{
	class ABP_MasterFurniture_C*                       Furniture;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetFieldTask
struct ABP_MasterBuilding_C_GetFieldTask_Params
{
	struct FST_FieldTasksLists                         Task;                                                      // (Parm, OutParm, HasGetValueTypeHash)
	bool                                               IsTask;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsItem;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Tools_Activity_E_Tools_Activity>     NeedToolActivity;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       NeedItem;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.ChangeTaskOccupied
struct ABP_MasterBuilding_C_ChangeTaskOccupied_Params
{
	struct FST_TaskList                                Task;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetBuildingTask
struct ABP_MasterBuilding_C_GetBuildingTask_Params
{
	struct FST_TaskList                                Task;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsTask;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetDependentFieldsTask
struct ABP_MasterBuilding_C_GetDependentFieldsTask_Params
{
	struct FST_FieldTasksLists                         Task;                                                      // (Parm, OutParm, HasGetValueTypeHash)
	bool                                               IsTask;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsItem;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Tools_Activity_E_Tools_Activity>     NeedToolAcitvity;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       NeedItem;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GetDependentBuildingsTask
struct ABP_MasterBuilding_C_GetDependentBuildingsTask_Params
{
	struct FST_TaskList                                Task;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsTask;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.AddFurniture
struct ABP_MasterBuilding_C_AddFurniture_Params
{
	class ABP_MasterFurniture_C*                       Furniture;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.SortTaskList
struct ABP_MasterBuilding_C_SortTaskList_Params
{
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateTaskList
struct ABP_MasterBuilding_C_UpdateTaskList_Params
{
	struct FST_TaskList                                Task;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsAdd;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.RemoveAnimal
struct ABP_MasterBuilding_C_RemoveAnimal_Params
{
	class ABP_AnimalBase_C*                            Animal;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.AddAnimal
struct ABP_MasterBuilding_C_AddAnimal_Params
{
	class ABP_AnimalBase_C*                            Animal;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckIsMaxAnimal
struct ABP_MasterBuilding_C_CheckIsMaxAnimal_Params
{
	bool                                               IsFull;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GenerateBuilding
struct ABP_MasterBuilding_C_GenerateBuilding_Params
{
	bool                                               Init;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Load;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FST_SAVE_Modules>                    LoadModulesData;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckObstruction
struct ABP_MasterBuilding_C_CheckObstruction_Params
{
	bool                                               CanBePlaced_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckIsOccupied
struct ABP_MasterBuilding_C_CheckIsOccupied_Params
{
	bool                                               Occupied;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.RemovePeople
struct ABP_MasterBuilding_C_RemovePeople_Params
{
	class ABP_BaseCharacter_C*                         Person;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckIsMaxPeople
struct ABP_MasterBuilding_C_CheckIsMaxPeople_Params
{
	bool                                               IsFull;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.AddPeople
struct ABP_MasterBuilding_C_AddPeople_Params
{
	class ABP_BaseCharacter_C*                         Person;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.GenerateDestruction
struct ABP_MasterBuilding_C_GenerateDestruction_Params
{
	float                                              Intensity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateBaseRotation
struct ABP_MasterBuilding_C_UpdateBaseRotation_Params
{
	struct FRotator                                    NewBaseRotation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.CheckBasementPlaceability
struct ABP_MasterBuilding_C_CheckBasementPlaceability_Params
{
	bool                                               PlacementPossible;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Min;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.UserConstructionScript
struct ABP_MasterBuilding_C_UserConstructionScript_Params
{
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.Interact
struct ABP_MasterBuilding_C_Interact_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               Timer;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.InteractInput
struct ABP_MasterBuilding_C_InteractInput_Params
{
	bool                                               KeyDown;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.InteractStart
struct ABP_MasterBuilding_C_InteractStart_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.InteractCancel
struct ABP_MasterBuilding_C_InteractCancel_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.SetOccupied
struct ABP_MasterBuilding_C_SetOccupied_Params
{
	class APawn*                                       Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.SetTaskInActor
struct ABP_MasterBuilding_C_SetTaskInActor_Params
{
	struct FST_TaskList                                Task;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.ChangeTaskIsOccupied
struct ABP_MasterBuilding_C_ChangeTaskIsOccupied_Params
{
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.PerformActorInteraction
struct ABP_MasterBuilding_C_PerformActorInteraction_Params
{
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.IsLookedAt
struct ABP_MasterBuilding_C_IsLookedAt_Params
{
	bool                                               Active;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.InteractWithImpaledItem
struct ABP_MasterBuilding_C_InteractWithImpaledItem_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.AddImpaledItem
struct ABP_MasterBuilding_C_AddImpaledItem_Params
{
	class AActor*                                      ImpaledItem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.RemoveImpaledItem
struct ABP_MasterBuilding_C_RemoveImpaledItem_Params
{
	class AActor*                                      ImpaledItem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.StartAttackFunction
struct ABP_MasterBuilding_C_StartAttackFunction_Params
{
	bool                                               Timer;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       Socket;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.StopAttackFunction
struct ABP_MasterBuilding_C_StopAttackFunction_Params
{
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.CreateBuildingGhost
struct ABP_MasterBuilding_C_CreateBuildingGhost_Params
{
	bool                                               Load;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.FinishedBuilding
struct ABP_MasterBuilding_C_FinishedBuilding_Params
{
	bool                                               Load;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.DestroyBuilding
struct ABP_MasterBuilding_C_DestroyBuilding_Params
{
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.SetOccupiedBuilding
struct ABP_MasterBuilding_C_SetOccupiedBuilding_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Occupied;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.ToolInteract
struct ABP_MasterBuilding_C_ToolInteract_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               UseChunkData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_Chunks                                  ChunkData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.ReceiveBeginPlay
struct ABP_MasterBuilding_C_ReceiveBeginPlay_Params
{
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.BndEvt__InteriorVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_MasterBuilding_C_BndEvt__InteriorVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.BndEvt__InteriorVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABP_MasterBuilding_C_BndEvt__InteriorVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.ShowInspectorUI
struct ABP_MasterBuilding_C_ShowInspectorUI_Params
{
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.ExecuteFinishVisuals
struct ABP_MasterBuilding_C_ExecuteFinishVisuals_Params
{
	bool                                               Load;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.ExecuteFinishLogic
struct ABP_MasterBuilding_C_ExecuteFinishLogic_Params
{
	bool                                               Load;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.ExecuteInitialVisuals
struct ABP_MasterBuilding_C_ExecuteInitialVisuals_Params
{
	bool                                               Load;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.ExecuteInitialLogic
struct ABP_MasterBuilding_C_ExecuteInitialLogic_Params
{
	bool                                               Load;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.UpdateGhost
struct ABP_MasterBuilding_C_UpdateGhost_Params
{
	bool                                               CheckPlacement;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.CreateFurnitures
struct ABP_MasterBuilding_C_CreateFurnitures_Params
{
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.SeasonalUpdate
struct ABP_MasterBuilding_C_SeasonalUpdate_Params
{
};

// Function BP_MasterBuilding.BP_MasterBuilding_C.ExecuteUbergraph_BP_MasterBuilding
struct ABP_MasterBuilding_C_ExecuteUbergraph_BP_MasterBuilding_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
