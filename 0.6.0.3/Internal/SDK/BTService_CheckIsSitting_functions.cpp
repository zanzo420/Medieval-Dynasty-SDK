// Name: Medieval Dynasty, Version: 0.6.0.3

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BTService_CheckIsSitting.BTService_CheckIsSitting_C.ReceiveActivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTService_CheckIsSitting_C::ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_CheckIsSitting.BTService_CheckIsSitting_C.ReceiveActivationAI");

	UBTService_CheckIsSitting_C_ReceiveActivationAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTService_CheckIsSitting.BTService_CheckIsSitting_C.Optimization
// (BlueprintCallable, BlueprintEvent)
void UBTService_CheckIsSitting_C::Optimization()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_CheckIsSitting.BTService_CheckIsSitting_C.Optimization");

	UBTService_CheckIsSitting_C_Optimization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTService_CheckIsSitting.BTService_CheckIsSitting_C.ReceiveDeactivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTService_CheckIsSitting_C::ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_CheckIsSitting.BTService_CheckIsSitting_C.ReceiveDeactivationAI");

	UBTService_CheckIsSitting_C_ReceiveDeactivationAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTService_CheckIsSitting.BTService_CheckIsSitting_C.Finish
// (BlueprintCallable, BlueprintEvent)
void UBTService_CheckIsSitting_C::Finish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_CheckIsSitting.BTService_CheckIsSitting_C.Finish");

	UBTService_CheckIsSitting_C_Finish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTService_CheckIsSitting.BTService_CheckIsSitting_C.ExecuteUbergraph_BTService_CheckIsSitting
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTService_CheckIsSitting_C::ExecuteUbergraph_BTService_CheckIsSitting(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_CheckIsSitting.BTService_CheckIsSitting_C.ExecuteUbergraph_BTService_CheckIsSitting");

	UBTService_CheckIsSitting_C_ExecuteUbergraph_BTService_CheckIsSitting_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
