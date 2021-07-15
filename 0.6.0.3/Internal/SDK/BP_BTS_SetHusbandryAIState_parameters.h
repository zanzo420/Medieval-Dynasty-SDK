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

// Function BP_BTS_SetHusbandryAIState.BP_BTS_SetHusbandryAIState_C.OnTimeOfDayChanged
struct UBP_BTS_SetHusbandryAIState_C_OnTimeOfDayChanged_Params
{
	TEnumAsByte<E_TimeOfDay_E_TimeOfDay>               TimeOfDay;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTS_SetHusbandryAIState.BP_BTS_SetHusbandryAIState_C.fnDetermineAIState
struct UBP_BTS_SetHusbandryAIState_C_fnDetermineAIState_Params
{
};

// Function BP_BTS_SetHusbandryAIState.BP_BTS_SetHusbandryAIState_C.ReceiveTickAI
struct UBP_BTS_SetHusbandryAIState_C_ReceiveTickAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTS_SetHusbandryAIState.BP_BTS_SetHusbandryAIState_C.ReceiveActivationAI
struct UBP_BTS_SetHusbandryAIState_C_ReceiveActivationAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTS_SetHusbandryAIState.BP_BTS_SetHusbandryAIState_C.ResetEatDoOnce
struct UBP_BTS_SetHusbandryAIState_C_ResetEatDoOnce_Params
{
};

// Function BP_BTS_SetHusbandryAIState.BP_BTS_SetHusbandryAIState_C.ResetDrinkDoOnce
struct UBP_BTS_SetHusbandryAIState_C_ResetDrinkDoOnce_Params
{
};

// Function BP_BTS_SetHusbandryAIState.BP_BTS_SetHusbandryAIState_C.ResetEngageAnim
struct UBP_BTS_SetHusbandryAIState_C_ResetEngageAnim_Params
{
};

// Function BP_BTS_SetHusbandryAIState.BP_BTS_SetHusbandryAIState_C.StopEngageAnim
struct UBP_BTS_SetHusbandryAIState_C_StopEngageAnim_Params
{
};

// Function BP_BTS_SetHusbandryAIState.BP_BTS_SetHusbandryAIState_C.StopAnim
struct UBP_BTS_SetHusbandryAIState_C_StopAnim_Params
{
};

// Function BP_BTS_SetHusbandryAIState.BP_BTS_SetHusbandryAIState_C.ExecuteUbergraph_BP_BTS_SetHusbandryAIState
struct UBP_BTS_SetHusbandryAIState_C_ExecuteUbergraph_BP_BTS_SetHusbandryAIState_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
