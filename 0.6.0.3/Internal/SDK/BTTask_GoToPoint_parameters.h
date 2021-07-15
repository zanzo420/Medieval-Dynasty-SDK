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

// Function BTTask_GoToPoint.BTTask_GoToPoint_C.OnFail_4C725ACE474ACC526129799B3233F46E
struct UBTTask_GoToPoint_C_OnFail_4C725ACE474ACC526129799B3233F46E_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToPoint.BTTask_GoToPoint_C.OnSuccess_4C725ACE474ACC526129799B3233F46E
struct UBTTask_GoToPoint_C_OnSuccess_4C725ACE474ACC526129799B3233F46E_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToPoint.BTTask_GoToPoint_C.ReceiveExecuteAI
struct UBTTask_GoToPoint_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToPoint.BTTask_GoToPoint_C.FinishOnIdle
struct UBTTask_GoToPoint_C_FinishOnIdle_Params
{
};

// Function BTTask_GoToPoint.BTTask_GoToPoint_C.ReceiveAbortAI
struct UBTTask_GoToPoint_C_ReceiveAbortAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToPoint.BTTask_GoToPoint_C.Finish
struct UBTTask_GoToPoint_C_Finish_Params
{
};

// Function BTTask_GoToPoint.BTTask_GoToPoint_C.ExecuteUbergraph_BTTask_GoToPoint
struct UBTTask_GoToPoint_C_ExecuteUbergraph_BTTask_GoToPoint_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
