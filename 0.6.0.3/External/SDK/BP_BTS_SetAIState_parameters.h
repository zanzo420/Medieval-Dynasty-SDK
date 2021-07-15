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

// Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.On Time Of Day Changed
struct UBP_BTS_SetAIState_C_On_Time_Of_Day_Changed_Params
{
	TEnumAsByte<E_TimeOfDay_E_TimeOfDay>               TimeOfDay;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.fnInactiveResting
struct UBP_BTS_SetAIState_C_fnInactiveResting_Params
{
};

// Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.fnCheckMovement
struct UBP_BTS_SetAIState_C_fnCheckMovement_Params
{
};

// Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.fnEnableComponents
struct UBP_BTS_SetAIState_C_fnEnableComponents_Params
{
};

// Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.fnCheckPlayerDistance
struct UBP_BTS_SetAIState_C_fnCheckPlayerDistance_Params
{
};

// Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.fnDetermineAIState
struct UBP_BTS_SetAIState_C_fnDetermineAIState_Params
{
};

// Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.EventCheckPlayerDistance
struct UBP_BTS_SetAIState_C_EventCheckPlayerDistance_Params
{
};

// Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.EventCheckMovement
struct UBP_BTS_SetAIState_C_EventCheckMovement_Params
{
};

// Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.ReceiveActivationAI
struct UBP_BTS_SetAIState_C_ReceiveActivationAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.ResetEatDoOnce
struct UBP_BTS_SetAIState_C_ResetEatDoOnce_Params
{
};

// Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.ResetDrinkDoOnce
struct UBP_BTS_SetAIState_C_ResetDrinkDoOnce_Params
{
};

// Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.ResetEngageAnim
struct UBP_BTS_SetAIState_C_ResetEngageAnim_Params
{
};

// Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.StopEngageAnim
struct UBP_BTS_SetAIState_C_StopEngageAnim_Params
{
};

// Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.StopAnim
struct UBP_BTS_SetAIState_C_StopAnim_Params
{
};

// Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.EventSetNewCollision
struct UBP_BTS_SetAIState_C_EventSetNewCollision_Params
{
};

// Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.ReceiveTickAI
struct UBP_BTS_SetAIState_C_ReceiveTickAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.EventDisengage
struct UBP_BTS_SetAIState_C_EventDisengage_Params
{
};

// Function BP_BTS_SetAIState.BP_BTS_SetAIState_C.ExecuteUbergraph_BP_BTS_SetAIState
struct UBP_BTS_SetAIState_C_ExecuteUbergraph_BP_BTS_SetAIState_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
