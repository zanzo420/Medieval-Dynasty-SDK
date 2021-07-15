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

// Function BTService_SetNPCAIState.BTService_SetNPCAIState_C.CheckSleepStatus
struct UBTService_SetNPCAIState_C_CheckSleepStatus_Params
{
};

// Function BTService_SetNPCAIState.BTService_SetNPCAIState_C.ReceiveTickAI
struct UBTService_SetNPCAIState_C_ReceiveTickAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTService_SetNPCAIState.BTService_SetNPCAIState_C.ReceiveActivationAI
struct UBTService_SetNPCAIState_C_ReceiveActivationAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTService_SetNPCAIState.BTService_SetNPCAIState_C.Night_SleepAfterSitting
struct UBTService_SetNPCAIState_C_Night_SleepAfterSitting_Params
{
};

// Function BTService_SetNPCAIState.BTService_SetNPCAIState_C.Evening_SleepAfterSitting
struct UBTService_SetNPCAIState_C_Evening_SleepAfterSitting_Params
{
};

// Function BTService_SetNPCAIState.BTService_SetNPCAIState_C.EveningLife_AfterSitting
struct UBTService_SetNPCAIState_C_EveningLife_AfterSitting_Params
{
};

// Function BTService_SetNPCAIState.BTService_SetNPCAIState_C.CheckProfession
struct UBTService_SetNPCAIState_C_CheckProfession_Params
{
};

// Function BTService_SetNPCAIState.BTService_SetNPCAIState_C.ResetGates
struct UBTService_SetNPCAIState_C_ResetGates_Params
{
};

// Function BTService_SetNPCAIState.BTService_SetNPCAIState_C.CheckMoveStatus
struct UBTService_SetNPCAIState_C_CheckMoveStatus_Params
{
};

// Function BTService_SetNPCAIState.BTService_SetNPCAIState_C.ExecuteUbergraph_BTService_SetNPCAIState
struct UBTService_SetNPCAIState_C_ExecuteUbergraph_BTService_SetNPCAIState_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
