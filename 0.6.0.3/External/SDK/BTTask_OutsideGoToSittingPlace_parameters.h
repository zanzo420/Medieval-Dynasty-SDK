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

// Function BTTask_OutsideGoToSittingPlace.BTTask_OutsideGoToSittingPlace_C.OnFail_920570BB4868D72A3EF88A98DFAE4DA7
struct UBTTask_OutsideGoToSittingPlace_C_OnFail_920570BB4868D72A3EF88A98DFAE4DA7_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_OutsideGoToSittingPlace.BTTask_OutsideGoToSittingPlace_C.OnSuccess_920570BB4868D72A3EF88A98DFAE4DA7
struct UBTTask_OutsideGoToSittingPlace_C_OnSuccess_920570BB4868D72A3EF88A98DFAE4DA7_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_OutsideGoToSittingPlace.BTTask_OutsideGoToSittingPlace_C.ReceiveExecuteAI
struct UBTTask_OutsideGoToSittingPlace_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_OutsideGoToSittingPlace.BTTask_OutsideGoToSittingPlace_C.Finish
struct UBTTask_OutsideGoToSittingPlace_C_Finish_Params
{
};

// Function BTTask_OutsideGoToSittingPlace.BTTask_OutsideGoToSittingPlace_C.ReceiveAbortAI
struct UBTTask_OutsideGoToSittingPlace_C_ReceiveAbortAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_OutsideGoToSittingPlace.BTTask_OutsideGoToSittingPlace_C.ExecuteUbergraph_BTTask_OutsideGoToSittingPlace
struct UBTTask_OutsideGoToSittingPlace_C_ExecuteUbergraph_BTTask_OutsideGoToSittingPlace_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
