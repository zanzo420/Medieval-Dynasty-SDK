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

// Function BTTask_GoToHusbandryAnimal.BTTask_GoToHusbandryAnimal_C.OnFail_C4549321447E4A7EE49EA580E2C6E08F
struct UBTTask_GoToHusbandryAnimal_C_OnFail_C4549321447E4A7EE49EA580E2C6E08F_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToHusbandryAnimal.BTTask_GoToHusbandryAnimal_C.OnSuccess_C4549321447E4A7EE49EA580E2C6E08F
struct UBTTask_GoToHusbandryAnimal_C_OnSuccess_C4549321447E4A7EE49EA580E2C6E08F_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToHusbandryAnimal.BTTask_GoToHusbandryAnimal_C.ReceiveExecuteAI
struct UBTTask_GoToHusbandryAnimal_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToHusbandryAnimal.BTTask_GoToHusbandryAnimal_C.ReceiveAbortAI
struct UBTTask_GoToHusbandryAnimal_C_ReceiveAbortAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToHusbandryAnimal.BTTask_GoToHusbandryAnimal_C.Finish
struct UBTTask_GoToHusbandryAnimal_C_Finish_Params
{
};

// Function BTTask_GoToHusbandryAnimal.BTTask_GoToHusbandryAnimal_C.ExecuteUbergraph_BTTask_GoToHusbandryAnimal
struct UBTTask_GoToHusbandryAnimal_C_ExecuteUbergraph_BTTask_GoToHusbandryAnimal_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
