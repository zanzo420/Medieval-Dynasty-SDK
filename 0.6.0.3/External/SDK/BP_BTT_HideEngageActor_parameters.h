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

// Function BP_BTT_HideEngageActor.BP_BTT_HideEngageActor_C.OnFail_BB50F10642FB762ED9F30499A3E3E377
struct UBP_BTT_HideEngageActor_C_OnFail_BB50F10642FB762ED9F30499A3E3E377_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_HideEngageActor.BP_BTT_HideEngageActor_C.OnSuccess_BB50F10642FB762ED9F30499A3E3E377
struct UBP_BTT_HideEngageActor_C_OnSuccess_BB50F10642FB762ED9F30499A3E3E377_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_HideEngageActor.BP_BTT_HideEngageActor_C.ReceiveExecuteAI
struct UBP_BTT_HideEngageActor_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_HideEngageActor.BP_BTT_HideEngageActor_C.ExecuteUbergraph_BP_BTT_HideEngageActor
struct UBP_BTT_HideEngageActor_C_ExecuteUbergraph_BP_BTT_HideEngageActor_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
