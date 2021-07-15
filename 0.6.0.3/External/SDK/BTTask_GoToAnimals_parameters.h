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

// Function BTTask_GoToAnimals.BTTask_GoToAnimals_C.OnFail_372F52FC4993058C2B108A8C194EBF92
struct UBTTask_GoToAnimals_C_OnFail_372F52FC4993058C2B108A8C194EBF92_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToAnimals.BTTask_GoToAnimals_C.OnSuccess_372F52FC4993058C2B108A8C194EBF92
struct UBTTask_GoToAnimals_C_OnSuccess_372F52FC4993058C2B108A8C194EBF92_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToAnimals.BTTask_GoToAnimals_C.ReceiveExecuteAI
struct UBTTask_GoToAnimals_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToAnimals.BTTask_GoToAnimals_C.Finish
struct UBTTask_GoToAnimals_C_Finish_Params
{
};

// Function BTTask_GoToAnimals.BTTask_GoToAnimals_C.ReceiveAbortAI
struct UBTTask_GoToAnimals_C_ReceiveAbortAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToAnimals.BTTask_GoToAnimals_C.ExecuteUbergraph_BTTask_GoToAnimals
struct UBTTask_GoToAnimals_C_ExecuteUbergraph_BTTask_GoToAnimals_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
