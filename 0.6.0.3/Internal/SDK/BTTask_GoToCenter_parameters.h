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

// Function BTTask_GoToCenter.BTTask_GoToCenter_C.OnFail_E0DDE5D54E6E587AEC5516A74AA50DA0
struct UBTTask_GoToCenter_C_OnFail_E0DDE5D54E6E587AEC5516A74AA50DA0_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToCenter.BTTask_GoToCenter_C.OnSuccess_E0DDE5D54E6E587AEC5516A74AA50DA0
struct UBTTask_GoToCenter_C_OnSuccess_E0DDE5D54E6E587AEC5516A74AA50DA0_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToCenter.BTTask_GoToCenter_C.ReceiveExecuteAI
struct UBTTask_GoToCenter_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToCenter.BTTask_GoToCenter_C.Finish
struct UBTTask_GoToCenter_C_Finish_Params
{
};

// Function BTTask_GoToCenter.BTTask_GoToCenter_C.ReceiveAbortAI
struct UBTTask_GoToCenter_C_ReceiveAbortAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToCenter.BTTask_GoToCenter_C.ExecuteUbergraph_BTTask_GoToCenter
struct UBTTask_GoToCenter_C_ExecuteUbergraph_BTTask_GoToCenter_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
