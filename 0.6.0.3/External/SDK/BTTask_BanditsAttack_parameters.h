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

// Function BTTask_BanditsAttack.BTTask_BanditsAttack_C.ReceiveExecuteAI
struct UBTTask_BanditsAttack_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_BanditsAttack.BTTask_BanditsAttack_C.FinishExe
struct UBTTask_BanditsAttack_C_FinishExe_Params
{
};

// Function BTTask_BanditsAttack.BTTask_BanditsAttack_C.ReceiveAbort
struct UBTTask_BanditsAttack_C_ReceiveAbort_Params
{
	class AActor*                                      OwnerActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_BanditsAttack.BTTask_BanditsAttack_C.ExecuteUbergraph_BTTask_BanditsAttack
struct UBTTask_BanditsAttack_C_ExecuteUbergraph_BTTask_BanditsAttack_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
