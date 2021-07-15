﻿#pragma once

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

// Function BP_Sheep.BP_Sheep_C.UpdateFur
struct ABP_Sheep_C_UpdateFur_Params
{
};

// Function BP_Sheep.BP_Sheep_C.AddItems
struct ABP_Sheep_C_AddItems_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Sheep.BP_Sheep_C.UpdateCapacity
struct ABP_Sheep_C_UpdateCapacity_Params
{
};

// Function BP_Sheep.BP_Sheep_C.SetHusbandryDataFromSave
struct ABP_Sheep_C_SetHusbandryDataFromSave_Params
{
	struct FST_SAVE_HusbandryAnimals                   HusbandryData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Sheep.BP_Sheep_C.GetInteractAction
struct ABP_Sheep_C_GetInteractAction_Params
{
	struct FText                                       InteractActionText;                                        // (Parm, OutParm)
	struct FText                                       InteractSecondActionText;                                  // (Parm, OutParm)
};

// Function BP_Sheep.BP_Sheep_C.GetTaskFromActor
struct ABP_Sheep_C_GetTaskFromActor_Params
{
	struct FST_TaskList                                Task;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Sheep.BP_Sheep_C.IsInteractable
struct ABP_Sheep_C_IsInteractable_Params
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

// Function BP_Sheep.BP_Sheep_C.ReceiveBeginPlay
struct ABP_Sheep_C_ReceiveBeginPlay_Params
{
};

// Function BP_Sheep.BP_Sheep_C.EventDead
struct ABP_Sheep_C_EventDead_Params
{
};

// Function BP_Sheep.BP_Sheep_C.Interact
struct ABP_Sheep_C_Interact_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               Timer;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Sheep.BP_Sheep_C.InteractInput
struct ABP_Sheep_C_InteractInput_Params
{
	bool                                               KeyDown;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Sheep.BP_Sheep_C.InteractCancel
struct ABP_Sheep_C_InteractCancel_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Sheep.BP_Sheep_C.OnMoveFinish
struct ABP_Sheep_C_OnMoveFinish_Params
{
};

// Function BP_Sheep.BP_Sheep_C.SetTaskInActor
struct ABP_Sheep_C_SetTaskInActor_Params
{
	struct FST_TaskList                                Task;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Sheep.BP_Sheep_C.ChangeTaskIsOccupied
struct ABP_Sheep_C_ChangeTaskIsOccupied_Params
{
};

// Function BP_Sheep.BP_Sheep_C.ExecuteUbergraph_BP_Sheep
struct ABP_Sheep_C_ExecuteUbergraph_BP_Sheep_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
