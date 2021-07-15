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

// Function BTTask_GoToCampfire.BTTask_GoToCampfire_C.OnFail_BB73AEC34DB57581E2A02EA2338F2A10
struct UBTTask_GoToCampfire_C_OnFail_BB73AEC34DB57581E2A02EA2338F2A10_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToCampfire.BTTask_GoToCampfire_C.OnSuccess_BB73AEC34DB57581E2A02EA2338F2A10
struct UBTTask_GoToCampfire_C_OnSuccess_BB73AEC34DB57581E2A02EA2338F2A10_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToCampfire.BTTask_GoToCampfire_C.ReceiveExecuteAI
struct UBTTask_GoToCampfire_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToCampfire.BTTask_GoToCampfire_C.Finish
struct UBTTask_GoToCampfire_C_Finish_Params
{
};

// Function BTTask_GoToCampfire.BTTask_GoToCampfire_C.ReceiveAbortAI
struct UBTTask_GoToCampfire_C_ReceiveAbortAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToCampfire.BTTask_GoToCampfire_C.ExecuteUbergraph_BTTask_GoToCampfire
struct UBTTask_GoToCampfire_C_ExecuteUbergraph_BTTask_GoToCampfire_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
