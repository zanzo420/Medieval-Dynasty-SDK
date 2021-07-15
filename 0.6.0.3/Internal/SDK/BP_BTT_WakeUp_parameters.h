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

// Function BP_BTT_WakeUp.BP_BTT_WakeUp_C.ReceiveExecuteAI
struct UBP_BTT_WakeUp_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_WakeUp.BP_BTT_WakeUp_C.WakeUp
struct UBP_BTT_WakeUp_C_WakeUp_Params
{
};

// Function BP_BTT_WakeUp.BP_BTT_WakeUp_C.TeleportToStartPoint
struct UBP_BTT_WakeUp_C_TeleportToStartPoint_Params
{
};

// Function BP_BTT_WakeUp.BP_BTT_WakeUp_C.ExecuteUbergraph_BP_BTT_WakeUp
struct UBP_BTT_WakeUp_C_ExecuteUbergraph_BP_BTT_WakeUp_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
