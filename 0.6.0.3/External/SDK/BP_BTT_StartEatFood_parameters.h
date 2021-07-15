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

// Function BP_BTT_StartEatFood.BP_BTT_StartEatFood_C.EventPlayEatAnimation
struct UBP_BTT_StartEatFood_C_EventPlayEatAnimation_Params
{
};

// Function BP_BTT_StartEatFood.BP_BTT_StartEatFood_C.ReceiveExecuteAI
struct UBP_BTT_StartEatFood_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BTT_StartEatFood.BP_BTT_StartEatFood_C.ExecuteUbergraph_BP_BTT_StartEatFood
struct UBP_BTT_StartEatFood_C_ExecuteUbergraph_BP_BTT_StartEatFood_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
