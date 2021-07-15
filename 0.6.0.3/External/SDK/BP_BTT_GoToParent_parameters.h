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

// Function BP_BTT_GoToParent.BP_BTT_GoToParent_C.OnFail_E1AF487244A3C48D4641A8BA33E6CBAD
struct UBP_BTT_GoToParent_C_OnFail_E1AF487244A3C48D4641A8BA33E6CBAD_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_GoToParent.BP_BTT_GoToParent_C.OnSuccess_E1AF487244A3C48D4641A8BA33E6CBAD
struct UBP_BTT_GoToParent_C_OnSuccess_E1AF487244A3C48D4641A8BA33E6CBAD_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_GoToParent.BP_BTT_GoToParent_C.ReceiveExecuteAI
struct UBP_BTT_GoToParent_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_GoToParent.BP_BTT_GoToParent_C.ExecuteUbergraph_BP_BTT_GoToParent
struct UBP_BTT_GoToParent_C_ExecuteUbergraph_BP_BTT_GoToParent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
