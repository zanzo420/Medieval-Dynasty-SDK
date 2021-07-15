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

// Function BTService_OutsideCheckIsSitting.BTService_OutsideCheckIsSitting_C.ReceiveActivationAI
struct UBTService_OutsideCheckIsSitting_C_ReceiveActivationAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTService_OutsideCheckIsSitting.BTService_OutsideCheckIsSitting_C.Optimization
struct UBTService_OutsideCheckIsSitting_C_Optimization_Params
{
};

// Function BTService_OutsideCheckIsSitting.BTService_OutsideCheckIsSitting_C.ReceiveDeactivationAI
struct UBTService_OutsideCheckIsSitting_C_ReceiveDeactivationAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTService_OutsideCheckIsSitting.BTService_OutsideCheckIsSitting_C.ExecuteUbergraph_BTService_OutsideCheckIsSitting
struct UBTService_OutsideCheckIsSitting_C_ExecuteUbergraph_BTService_OutsideCheckIsSitting_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
