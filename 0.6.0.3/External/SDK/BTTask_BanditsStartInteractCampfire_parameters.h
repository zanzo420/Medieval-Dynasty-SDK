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

// Function BTTask_BanditsStartInteractCampfire.BTTask_BanditsStartInteractCampfire_C.OnFail_7BCC2A21452B1B8D6321D4AC0D6991CE
struct UBTTask_BanditsStartInteractCampfire_C_OnFail_7BCC2A21452B1B8D6321D4AC0D6991CE_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_BanditsStartInteractCampfire.BTTask_BanditsStartInteractCampfire_C.OnSuccess_7BCC2A21452B1B8D6321D4AC0D6991CE
struct UBTTask_BanditsStartInteractCampfire_C_OnSuccess_7BCC2A21452B1B8D6321D4AC0D6991CE_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_BanditsStartInteractCampfire.BTTask_BanditsStartInteractCampfire_C.ReceiveExecuteAI
struct UBTTask_BanditsStartInteractCampfire_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_BanditsStartInteractCampfire.BTTask_BanditsStartInteractCampfire_C.ExecuteUbergraph_BTTask_BanditsStartInteractCampfire
struct UBTTask_BanditsStartInteractCampfire_C_ExecuteUbergraph_BTTask_BanditsStartInteractCampfire_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
