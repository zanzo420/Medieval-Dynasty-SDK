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

// Function BTTask_GoToWorkSlot.BTTask_GoToWorkSlot_C.OnFail_F0DE4E6643F18890478429B2CDF0A5F2
struct UBTTask_GoToWorkSlot_C_OnFail_F0DE4E6643F18890478429B2CDF0A5F2_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToWorkSlot.BTTask_GoToWorkSlot_C.OnSuccess_F0DE4E6643F18890478429B2CDF0A5F2
struct UBTTask_GoToWorkSlot_C_OnSuccess_F0DE4E6643F18890478429B2CDF0A5F2_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToWorkSlot.BTTask_GoToWorkSlot_C.ReceiveExecuteAI
struct UBTTask_GoToWorkSlot_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToWorkSlot.BTTask_GoToWorkSlot_C.Finish
struct UBTTask_GoToWorkSlot_C_Finish_Params
{
};

// Function BTTask_GoToWorkSlot.BTTask_GoToWorkSlot_C.ReceiveAbortAI
struct UBTTask_GoToWorkSlot_C_ReceiveAbortAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToWorkSlot.BTTask_GoToWorkSlot_C.ExecuteUbergraph_BTTask_GoToWorkSlot
struct UBTTask_GoToWorkSlot_C_ExecuteUbergraph_BTTask_GoToWorkSlot_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
