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

// Function BTTask_HeraldGoToTavern.BTTask_HeraldGoToTavern_C.OnFail_97B9C9A44BA794F2DF89F3B8724552BD
struct UBTTask_HeraldGoToTavern_C_OnFail_97B9C9A44BA794F2DF89F3B8724552BD_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_HeraldGoToTavern.BTTask_HeraldGoToTavern_C.OnSuccess_97B9C9A44BA794F2DF89F3B8724552BD
struct UBTTask_HeraldGoToTavern_C_OnSuccess_97B9C9A44BA794F2DF89F3B8724552BD_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_HeraldGoToTavern.BTTask_HeraldGoToTavern_C.ReceiveExecuteAI
struct UBTTask_HeraldGoToTavern_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_HeraldGoToTavern.BTTask_HeraldGoToTavern_C.Finish
struct UBTTask_HeraldGoToTavern_C_Finish_Params
{
};

// Function BTTask_HeraldGoToTavern.BTTask_HeraldGoToTavern_C.ReceiveAbortAI
struct UBTTask_HeraldGoToTavern_C_ReceiveAbortAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_HeraldGoToTavern.BTTask_HeraldGoToTavern_C.ExecuteUbergraph_BTTask_HeraldGoToTavern
struct UBTTask_HeraldGoToTavern_C_ExecuteUbergraph_BTTask_HeraldGoToTavern_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
