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

// Function BTService_CheckIsSleeping.BTService_CheckIsSleeping_C.ReceiveActivationAI
struct UBTService_CheckIsSleeping_C_ReceiveActivationAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTService_CheckIsSleeping.BTService_CheckIsSleeping_C.Optimization
struct UBTService_CheckIsSleeping_C_Optimization_Params
{
};

// Function BTService_CheckIsSleeping.BTService_CheckIsSleeping_C.ReceiveDeactivationAI
struct UBTService_CheckIsSleeping_C_ReceiveDeactivationAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTService_CheckIsSleeping.BTService_CheckIsSleeping_C.ExecuteUbergraph_BTService_CheckIsSleeping
struct UBTService_CheckIsSleeping_C_ExecuteUbergraph_BTService_CheckIsSleeping_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
