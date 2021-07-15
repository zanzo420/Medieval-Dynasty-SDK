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

// Function BP_BTT_GoToDefenseLocation.BP_BTT_GoToDefenseLocation_C.OnFail_4B5A4F784544767CB5743C9B9F13AFBD
struct UBP_BTT_GoToDefenseLocation_C_OnFail_4B5A4F784544767CB5743C9B9F13AFBD_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_GoToDefenseLocation.BP_BTT_GoToDefenseLocation_C.OnSuccess_4B5A4F784544767CB5743C9B9F13AFBD
struct UBP_BTT_GoToDefenseLocation_C_OnSuccess_4B5A4F784544767CB5743C9B9F13AFBD_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_GoToDefenseLocation.BP_BTT_GoToDefenseLocation_C.ReceiveTickAI
struct UBP_BTT_GoToDefenseLocation_C_ReceiveTickAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_GoToDefenseLocation.BP_BTT_GoToDefenseLocation_C.ReceiveExecuteAI
struct UBP_BTT_GoToDefenseLocation_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_GoToDefenseLocation.BP_BTT_GoToDefenseLocation_C.ExecuteUbergraph_BP_BTT_GoToDefenseLocation
struct UBP_BTT_GoToDefenseLocation_C_ExecuteUbergraph_BP_BTT_GoToDefenseLocation_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
