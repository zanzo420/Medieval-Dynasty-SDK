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

// Function BTTask_GoToTavern.BTTask_GoToTavern_C.OnFail_79CBDB584EE56D91FC8324979BE957C6
struct UBTTask_GoToTavern_C_OnFail_79CBDB584EE56D91FC8324979BE957C6_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToTavern.BTTask_GoToTavern_C.OnSuccess_79CBDB584EE56D91FC8324979BE957C6
struct UBTTask_GoToTavern_C_OnSuccess_79CBDB584EE56D91FC8324979BE957C6_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToTavern.BTTask_GoToTavern_C.ReceiveExecuteAI
struct UBTTask_GoToTavern_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToTavern.BTTask_GoToTavern_C.Finish
struct UBTTask_GoToTavern_C_Finish_Params
{
};

// Function BTTask_GoToTavern.BTTask_GoToTavern_C.ReceiveAbortAI
struct UBTTask_GoToTavern_C_ReceiveAbortAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToTavern.BTTask_GoToTavern_C.ExecuteUbergraph_BTTask_GoToTavern
struct UBTTask_GoToTavern_C_ExecuteUbergraph_BTTask_GoToTavern_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
