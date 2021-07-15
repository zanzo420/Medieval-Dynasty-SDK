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

// Function BTTask_EndInteractSittingPlace.BTTask_EndInteractSittingPlace_C.OnFail_F318084C4B6ACEDD25EED4984DCF74BE
struct UBTTask_EndInteractSittingPlace_C_OnFail_F318084C4B6ACEDD25EED4984DCF74BE_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_EndInteractSittingPlace.BTTask_EndInteractSittingPlace_C.OnSuccess_F318084C4B6ACEDD25EED4984DCF74BE
struct UBTTask_EndInteractSittingPlace_C_OnSuccess_F318084C4B6ACEDD25EED4984DCF74BE_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_EndInteractSittingPlace.BTTask_EndInteractSittingPlace_C.ReceiveExecuteAI
struct UBTTask_EndInteractSittingPlace_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_EndInteractSittingPlace.BTTask_EndInteractSittingPlace_C.OnSitFinished
struct UBTTask_EndInteractSittingPlace_C_OnSitFinished_Params
{
};

// Function BTTask_EndInteractSittingPlace.BTTask_EndInteractSittingPlace_C.Finish
struct UBTTask_EndInteractSittingPlace_C_Finish_Params
{
};

// Function BTTask_EndInteractSittingPlace.BTTask_EndInteractSittingPlace_C.ReceiveAbortAI
struct UBTTask_EndInteractSittingPlace_C_ReceiveAbortAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_EndInteractSittingPlace.BTTask_EndInteractSittingPlace_C.ExecuteUbergraph_BTTask_EndInteractSittingPlace
struct UBTTask_EndInteractSittingPlace_C_ExecuteUbergraph_BTTask_EndInteractSittingPlace_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
