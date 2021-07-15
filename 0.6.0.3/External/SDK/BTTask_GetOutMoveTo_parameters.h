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

// Function BTTask_GetOutMoveTo.BTTask_GetOutMoveTo_C.OnFail_29EB4C704D9F0E6FF12D58B82CCA1F77
struct UBTTask_GetOutMoveTo_C_OnFail_29EB4C704D9F0E6FF12D58B82CCA1F77_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GetOutMoveTo.BTTask_GetOutMoveTo_C.OnSuccess_29EB4C704D9F0E6FF12D58B82CCA1F77
struct UBTTask_GetOutMoveTo_C_OnSuccess_29EB4C704D9F0E6FF12D58B82CCA1F77_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GetOutMoveTo.BTTask_GetOutMoveTo_C.ReceiveExecuteAI
struct UBTTask_GetOutMoveTo_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GetOutMoveTo.BTTask_GetOutMoveTo_C.Finish
struct UBTTask_GetOutMoveTo_C_Finish_Params
{
};

// Function BTTask_GetOutMoveTo.BTTask_GetOutMoveTo_C.Destroy
struct UBTTask_GetOutMoveTo_C_Destroy_Params
{
};

// Function BTTask_GetOutMoveTo.BTTask_GetOutMoveTo_C.ExecuteUbergraph_BTTask_GetOutMoveTo
struct UBTTask_GetOutMoveTo_C_ExecuteUbergraph_BTTask_GetOutMoveTo_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
