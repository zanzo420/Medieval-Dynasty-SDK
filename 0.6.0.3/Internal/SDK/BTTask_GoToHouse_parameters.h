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

// Function BTTask_GoToHouse.BTTask_GoToHouse_C.OnFail_0EBD7B534FE895F63E39EE85EE58DAD3
struct UBTTask_GoToHouse_C_OnFail_0EBD7B534FE895F63E39EE85EE58DAD3_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToHouse.BTTask_GoToHouse_C.OnSuccess_0EBD7B534FE895F63E39EE85EE58DAD3
struct UBTTask_GoToHouse_C_OnSuccess_0EBD7B534FE895F63E39EE85EE58DAD3_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToHouse.BTTask_GoToHouse_C.ReceiveExecuteAI
struct UBTTask_GoToHouse_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToHouse.BTTask_GoToHouse_C.Finish
struct UBTTask_GoToHouse_C_Finish_Params
{
};

// Function BTTask_GoToHouse.BTTask_GoToHouse_C.ReceiveAbortAI
struct UBTTask_GoToHouse_C_ReceiveAbortAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToHouse.BTTask_GoToHouse_C.ExecuteUbergraph_BTTask_GoToHouse
struct UBTTask_GoToHouse_C_ExecuteUbergraph_BTTask_GoToHouse_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
