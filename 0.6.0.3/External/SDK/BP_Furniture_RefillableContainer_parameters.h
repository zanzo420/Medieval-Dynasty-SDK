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

// Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.ChangeCurrentCapacity
struct ABP_Furniture_RefillableContainer_C_ChangeCurrentCapacity_Params
{
	int                                                Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.RemoveItems
struct ABP_Furniture_RefillableContainer_C_RemoveItems_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.GetInteractAction
struct ABP_Furniture_RefillableContainer_C_GetInteractAction_Params
{
	struct FText                                       InteractActionText;                                        // (Parm, OutParm)
	struct FText                                       InteractSecondActionText;                                  // (Parm, OutParm)
};

// Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.IsInteractable
struct ABP_Furniture_RefillableContainer_C_IsInteractable_Params
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

// Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.IsItemNeeded
struct ABP_Furniture_RefillableContainer_C_IsItemNeeded_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CheckItems;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.GetInteractItem
struct ABP_Furniture_RefillableContainer_C_GetInteractItem_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                         ItemHandler;                                               // (Parm, OutParm, NoDestructor)
};

// Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.IsItemInteractable
struct ABP_Furniture_RefillableContainer_C_IsItemInteractable_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Interactable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Possibility;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.GetInteractCondition
struct ABP_Furniture_RefillableContainer_C_GetInteractCondition_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                              Condition;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CustomText;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Text;                                                      // (Parm, OutParm)
	bool                                               CustomColor;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Color;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.IsInteractCondition
struct ABP_Furniture_RefillableContainer_C_IsInteractCondition_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CheckCondition;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.LoadRefillableContainerData
struct ABP_Furniture_RefillableContainer_C_LoadRefillableContainerData_Params
{
	struct FST_SAVE_RefillableContainers               FurnitureData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.GetRefillableContainerDataToSave
struct ABP_Furniture_RefillableContainer_C_GetRefillableContainerDataToSave_Params
{
	struct FST_SAVE_RefillableContainers               FurnitureData;                                             // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.UpdateCapacityAnimation
struct ABP_Furniture_RefillableContainer_C_UpdateCapacityAnimation_Params
{
	float                                              CapacityRatio;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.GetCapacity
struct ABP_Furniture_RefillableContainer_C_GetCapacity_Params
{
	int                                                CurrentCapacity;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxCapacity;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.UpdateCapacity
struct ABP_Furniture_RefillableContainer_C_UpdateCapacity_Params
{
	int                                                Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.ReceiveBeginPlay
struct ABP_Furniture_RefillableContainer_C_ReceiveBeginPlay_Params
{
};

// Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.Interact
struct ABP_Furniture_RefillableContainer_C_Interact_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               Timer;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.InitByBuilding
struct ABP_Furniture_RefillableContainer_C_InitByBuilding_Params
{
};

// Function BP_Furniture_RefillableContainer.BP_Furniture_RefillableContainer_C.ExecuteUbergraph_BP_Furniture_RefillableContainer
struct ABP_Furniture_RefillableContainer_C_ExecuteUbergraph_BP_Furniture_RefillableContainer_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
