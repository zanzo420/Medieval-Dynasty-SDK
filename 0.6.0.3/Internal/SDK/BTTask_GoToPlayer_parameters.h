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

// Function BTTask_GoToPlayer.BTTask_GoToPlayer_C.OnFail_0B7AF1BC48A9DFD0B4FF6885A16C6189
struct UBTTask_GoToPlayer_C_OnFail_0B7AF1BC48A9DFD0B4FF6885A16C6189_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToPlayer.BTTask_GoToPlayer_C.OnSuccess_0B7AF1BC48A9DFD0B4FF6885A16C6189
struct UBTTask_GoToPlayer_C_OnSuccess_0B7AF1BC48A9DFD0B4FF6885A16C6189_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToPlayer.BTTask_GoToPlayer_C.ReceiveExecuteAI
struct UBTTask_GoToPlayer_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToPlayer.BTTask_GoToPlayer_C.ReceiveAbortAI
struct UBTTask_GoToPlayer_C_ReceiveAbortAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToPlayer.BTTask_GoToPlayer_C.Finish
struct UBTTask_GoToPlayer_C_Finish_Params
{
};

// Function BTTask_GoToPlayer.BTTask_GoToPlayer_C.ExecuteUbergraph_BTTask_GoToPlayer
struct UBTTask_GoToPlayer_C_ExecuteUbergraph_BTTask_GoToPlayer_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
