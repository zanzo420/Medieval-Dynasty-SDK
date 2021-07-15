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

// Function BP_Goat_Female.BP_Goat_Female_C.GetInteractAction
struct ABP_Goat_Female_C_GetInteractAction_Params
{
	struct FText                                       InteractActionText;                                        // (Parm, OutParm)
	struct FText                                       InteractSecondActionText;                                  // (Parm, OutParm)
};

// Function BP_Goat_Female.BP_Goat_Female_C.IsInteractable
struct ABP_Goat_Female_C_IsInteractable_Params
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

// Function BP_Goat_Female.BP_Goat_Female_C.ReceiveBeginPlay
struct ABP_Goat_Female_C_ReceiveBeginPlay_Params
{
};

// Function BP_Goat_Female.BP_Goat_Female_C.Interact
struct ABP_Goat_Female_C_Interact_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               Timer;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Goat_Female.BP_Goat_Female_C.InteractInput
struct ABP_Goat_Female_C_InteractInput_Params
{
	bool                                               KeyDown;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Goat_Female.BP_Goat_Female_C.InteractCancel
struct ABP_Goat_Female_C_InteractCancel_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Goat_Female.BP_Goat_Female_C.OnMoveFinish
struct ABP_Goat_Female_C_OnMoveFinish_Params
{
};

// Function BP_Goat_Female.BP_Goat_Female_C.SetTaskInActor
struct ABP_Goat_Female_C_SetTaskInActor_Params
{
	struct FST_TaskList                                Task;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Goat_Female.BP_Goat_Female_C.ChangeTaskIsOccupied
struct ABP_Goat_Female_C_ChangeTaskIsOccupied_Params
{
};

// Function BP_Goat_Female.BP_Goat_Female_C.AddMilkToPlayer
struct ABP_Goat_Female_C_AddMilkToPlayer_Params
{
};

// Function BP_Goat_Female.BP_Goat_Female_C.ExecuteUbergraph_BP_Goat_Female
struct ABP_Goat_Female_C_ExecuteUbergraph_BP_Goat_Female_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
