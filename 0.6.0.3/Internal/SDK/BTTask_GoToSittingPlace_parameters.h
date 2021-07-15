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

// Function BTTask_GoToSittingPlace.BTTask_GoToSittingPlace_C.OnFail_013572854CA2274DD3E479A44FBF393B
struct UBTTask_GoToSittingPlace_C_OnFail_013572854CA2274DD3E479A44FBF393B_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToSittingPlace.BTTask_GoToSittingPlace_C.OnSuccess_013572854CA2274DD3E479A44FBF393B
struct UBTTask_GoToSittingPlace_C_OnSuccess_013572854CA2274DD3E479A44FBF393B_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToSittingPlace.BTTask_GoToSittingPlace_C.ReceiveExecuteAI
struct UBTTask_GoToSittingPlace_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToSittingPlace.BTTask_GoToSittingPlace_C.Finish
struct UBTTask_GoToSittingPlace_C_Finish_Params
{
};

// Function BTTask_GoToSittingPlace.BTTask_GoToSittingPlace_C.ReceiveAbortAI
struct UBTTask_GoToSittingPlace_C_ReceiveAbortAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToSittingPlace.BTTask_GoToSittingPlace_C.ExecuteUbergraph_BTTask_GoToSittingPlace
struct UBTTask_GoToSittingPlace_C_ExecuteUbergraph_BTTask_GoToSittingPlace_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
