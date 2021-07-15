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

// Function BTTask_GoToWorkPlace.BTTask_GoToWorkPlace_C.OnFail_14C3BD034E1C077E2326BA9A5E72E153
struct UBTTask_GoToWorkPlace_C_OnFail_14C3BD034E1C077E2326BA9A5E72E153_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToWorkPlace.BTTask_GoToWorkPlace_C.OnSuccess_14C3BD034E1C077E2326BA9A5E72E153
struct UBTTask_GoToWorkPlace_C_OnSuccess_14C3BD034E1C077E2326BA9A5E72E153_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToWorkPlace.BTTask_GoToWorkPlace_C.ReceiveExecuteAI
struct UBTTask_GoToWorkPlace_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToWorkPlace.BTTask_GoToWorkPlace_C.Finish
struct UBTTask_GoToWorkPlace_C_Finish_Params
{
};

// Function BTTask_GoToWorkPlace.BTTask_GoToWorkPlace_C.ReceiveAbortAI
struct UBTTask_GoToWorkPlace_C_ReceiveAbortAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToWorkPlace.BTTask_GoToWorkPlace_C.ExecuteUbergraph_BTTask_GoToWorkPlace
struct UBTTask_GoToWorkPlace_C_ExecuteUbergraph_BTTask_GoToWorkPlace_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
