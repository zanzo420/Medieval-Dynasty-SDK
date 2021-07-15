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

// Function BP_BTT_EncircleEngageActor.BP_BTT_EncircleEngageActor_C.OnFail_EABED115467E053B9EF0BBB5A58ABAC2
struct UBP_BTT_EncircleEngageActor_C_OnFail_EABED115467E053B9EF0BBB5A58ABAC2_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_EncircleEngageActor.BP_BTT_EncircleEngageActor_C.OnSuccess_EABED115467E053B9EF0BBB5A58ABAC2
struct UBP_BTT_EncircleEngageActor_C_OnSuccess_EABED115467E053B9EF0BBB5A58ABAC2_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_EncircleEngageActor.BP_BTT_EncircleEngageActor_C.ReceiveExecuteAI
struct UBP_BTT_EncircleEngageActor_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_EncircleEngageActor.BP_BTT_EncircleEngageActor_C.ExecuteUbergraph_BP_BTT_EncircleEngageActor
struct UBP_BTT_EncircleEngageActor_C_ExecuteUbergraph_BP_BTT_EncircleEngageActor_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
