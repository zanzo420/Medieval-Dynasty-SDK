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

// Function BTTask_GoToDeadAnimal.BTTask_GoToDeadAnimal_C.OnFail_FED22FB747A67F42ECACD38C9CCBEAA9
struct UBTTask_GoToDeadAnimal_C_OnFail_FED22FB747A67F42ECACD38C9CCBEAA9_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToDeadAnimal.BTTask_GoToDeadAnimal_C.OnSuccess_FED22FB747A67F42ECACD38C9CCBEAA9
struct UBTTask_GoToDeadAnimal_C_OnSuccess_FED22FB747A67F42ECACD38C9CCBEAA9_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToDeadAnimal.BTTask_GoToDeadAnimal_C.ReceiveExecuteAI
struct UBTTask_GoToDeadAnimal_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToDeadAnimal.BTTask_GoToDeadAnimal_C.ReceiveAbortAI
struct UBTTask_GoToDeadAnimal_C_ReceiveAbortAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToDeadAnimal.BTTask_GoToDeadAnimal_C.Finish
struct UBTTask_GoToDeadAnimal_C_Finish_Params
{
};

// Function BTTask_GoToDeadAnimal.BTTask_GoToDeadAnimal_C.ExecuteUbergraph_BTTask_GoToDeadAnimal
struct UBTTask_GoToDeadAnimal_C_ExecuteUbergraph_BTTask_GoToDeadAnimal_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
