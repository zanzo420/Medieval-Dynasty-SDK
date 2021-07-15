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

// Function BP_BTT_GoToPartner.BP_BTT_GoToPartner_C.OnFail_007331504206C24616909C9DED4B346C
struct UBP_BTT_GoToPartner_C_OnFail_007331504206C24616909C9DED4B346C_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_GoToPartner.BP_BTT_GoToPartner_C.OnSuccess_007331504206C24616909C9DED4B346C
struct UBP_BTT_GoToPartner_C_OnSuccess_007331504206C24616909C9DED4B346C_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_GoToPartner.BP_BTT_GoToPartner_C.ReceiveExecuteAI
struct UBP_BTT_GoToPartner_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_GoToPartner.BP_BTT_GoToPartner_C.ExecuteUbergraph_BP_BTT_GoToPartner
struct UBP_BTT_GoToPartner_C_ExecuteUbergraph_BP_BTT_GoToPartner_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
