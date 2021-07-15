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

// Function BTTask_GoToWorkbench.BTTask_GoToWorkbench_C.OnFail_DA618AB9402EC49DA505A58FA1FFFA32
struct UBTTask_GoToWorkbench_C_OnFail_DA618AB9402EC49DA505A58FA1FFFA32_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToWorkbench.BTTask_GoToWorkbench_C.OnSuccess_DA618AB9402EC49DA505A58FA1FFFA32
struct UBTTask_GoToWorkbench_C_OnSuccess_DA618AB9402EC49DA505A58FA1FFFA32_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToWorkbench.BTTask_GoToWorkbench_C.ReceiveExecuteAI
struct UBTTask_GoToWorkbench_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToWorkbench.BTTask_GoToWorkbench_C.ReceiveTickAI
struct UBTTask_GoToWorkbench_C_ReceiveTickAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToWorkbench.BTTask_GoToWorkbench_C.Finish
struct UBTTask_GoToWorkbench_C_Finish_Params
{
};

// Function BTTask_GoToWorkbench.BTTask_GoToWorkbench_C.ReceiveAbortAI
struct UBTTask_GoToWorkbench_C_ReceiveAbortAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToWorkbench.BTTask_GoToWorkbench_C.ExecuteUbergraph_BTTask_GoToWorkbench
struct UBTTask_GoToWorkbench_C_ExecuteUbergraph_BTTask_GoToWorkbench_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
