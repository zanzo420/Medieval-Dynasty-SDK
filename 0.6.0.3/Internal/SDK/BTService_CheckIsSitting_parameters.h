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

// Function BTService_CheckIsSitting.BTService_CheckIsSitting_C.ReceiveActivationAI
struct UBTService_CheckIsSitting_C_ReceiveActivationAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTService_CheckIsSitting.BTService_CheckIsSitting_C.Optimization
struct UBTService_CheckIsSitting_C_Optimization_Params
{
};

// Function BTService_CheckIsSitting.BTService_CheckIsSitting_C.ReceiveDeactivationAI
struct UBTService_CheckIsSitting_C_ReceiveDeactivationAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTService_CheckIsSitting.BTService_CheckIsSitting_C.Finish
struct UBTService_CheckIsSitting_C_Finish_Params
{
};

// Function BTService_CheckIsSitting.BTService_CheckIsSitting_C.ExecuteUbergraph_BTService_CheckIsSitting
struct UBTService_CheckIsSitting_C_ExecuteUbergraph_BTService_CheckIsSitting_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
