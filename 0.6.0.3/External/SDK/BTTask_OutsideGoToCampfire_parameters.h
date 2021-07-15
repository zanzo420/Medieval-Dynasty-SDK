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

// Function BTTask_OutsideGoToCampfire.BTTask_OutsideGoToCampfire_C.OnFail_D254CEB340ECD50BA470C2924CAE3CE5
struct UBTTask_OutsideGoToCampfire_C_OnFail_D254CEB340ECD50BA470C2924CAE3CE5_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_OutsideGoToCampfire.BTTask_OutsideGoToCampfire_C.OnSuccess_D254CEB340ECD50BA470C2924CAE3CE5
struct UBTTask_OutsideGoToCampfire_C_OnSuccess_D254CEB340ECD50BA470C2924CAE3CE5_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_OutsideGoToCampfire.BTTask_OutsideGoToCampfire_C.ReceiveExecuteAI
struct UBTTask_OutsideGoToCampfire_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_OutsideGoToCampfire.BTTask_OutsideGoToCampfire_C.Finish
struct UBTTask_OutsideGoToCampfire_C_Finish_Params
{
};

// Function BTTask_OutsideGoToCampfire.BTTask_OutsideGoToCampfire_C.ReceiveAbortAI
struct UBTTask_OutsideGoToCampfire_C_ReceiveAbortAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_OutsideGoToCampfire.BTTask_OutsideGoToCampfire_C.ExecuteUbergraph_BTTask_OutsideGoToCampfire
struct UBTTask_OutsideGoToCampfire_C_ExecuteUbergraph_BTTask_OutsideGoToCampfire_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
