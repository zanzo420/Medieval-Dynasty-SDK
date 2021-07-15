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

// Function BTTask_GoToFishingPoint.BTTask_GoToFishingPoint_C.OnFail_534AC69F4C01D29547A32984F8D6CFC7
struct UBTTask_GoToFishingPoint_C_OnFail_534AC69F4C01D29547A32984F8D6CFC7_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToFishingPoint.BTTask_GoToFishingPoint_C.OnSuccess_534AC69F4C01D29547A32984F8D6CFC7
struct UBTTask_GoToFishingPoint_C_OnSuccess_534AC69F4C01D29547A32984F8D6CFC7_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToFishingPoint.BTTask_GoToFishingPoint_C.ReceiveExecuteAI
struct UBTTask_GoToFishingPoint_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToFishingPoint.BTTask_GoToFishingPoint_C.ReceiveAbortAI
struct UBTTask_GoToFishingPoint_C_ReceiveAbortAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_GoToFishingPoint.BTTask_GoToFishingPoint_C.Finish
struct UBTTask_GoToFishingPoint_C_Finish_Params
{
};

// Function BTTask_GoToFishingPoint.BTTask_GoToFishingPoint_C.ExecuteUbergraph_BTTask_GoToFishingPoint
struct UBTTask_GoToFishingPoint_C_ExecuteUbergraph_BTTask_GoToFishingPoint_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
