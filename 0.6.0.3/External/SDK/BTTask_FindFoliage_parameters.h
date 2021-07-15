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

// Function BTTask_FindFoliage.BTTask_FindFoliage_C.OnFail_476D923D40C5367B02FD95BD0B75BE00
struct UBTTask_FindFoliage_C_OnFail_476D923D40C5367B02FD95BD0B75BE00_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_FindFoliage.BTTask_FindFoliage_C.OnSuccess_476D923D40C5367B02FD95BD0B75BE00
struct UBTTask_FindFoliage_C_OnSuccess_476D923D40C5367B02FD95BD0B75BE00_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_FindFoliage.BTTask_FindFoliage_C.ReceiveExecuteAI
struct UBTTask_FindFoliage_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_FindFoliage.BTTask_FindFoliage_C.Finish
struct UBTTask_FindFoliage_C_Finish_Params
{
};

// Function BTTask_FindFoliage.BTTask_FindFoliage_C.ExecuteUbergraph_BTTask_FindFoliage
struct UBTTask_FindFoliage_C_ExecuteUbergraph_BTTask_FindFoliage_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
