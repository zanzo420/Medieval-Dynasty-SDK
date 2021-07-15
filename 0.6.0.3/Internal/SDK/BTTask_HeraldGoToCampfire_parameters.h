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

// Function BTTask_HeraldGoToCampfire.BTTask_HeraldGoToCampfire_C.OnFail_D5075ECB4E44C3CFD45976AEAE5E73CD
struct UBTTask_HeraldGoToCampfire_C_OnFail_D5075ECB4E44C3CFD45976AEAE5E73CD_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_HeraldGoToCampfire.BTTask_HeraldGoToCampfire_C.OnSuccess_D5075ECB4E44C3CFD45976AEAE5E73CD
struct UBTTask_HeraldGoToCampfire_C_OnSuccess_D5075ECB4E44C3CFD45976AEAE5E73CD_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_HeraldGoToCampfire.BTTask_HeraldGoToCampfire_C.ReceiveExecuteAI
struct UBTTask_HeraldGoToCampfire_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_HeraldGoToCampfire.BTTask_HeraldGoToCampfire_C.Finish
struct UBTTask_HeraldGoToCampfire_C_Finish_Params
{
};

// Function BTTask_HeraldGoToCampfire.BTTask_HeraldGoToCampfire_C.ReceiveAbortAI
struct UBTTask_HeraldGoToCampfire_C_ReceiveAbortAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_HeraldGoToCampfire.BTTask_HeraldGoToCampfire_C.ExecuteUbergraph_BTTask_HeraldGoToCampfire
struct UBTTask_HeraldGoToCampfire_C_ExecuteUbergraph_BTTask_HeraldGoToCampfire_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
