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

// Function BTService_BanditsCheckDistance.BTService_BanditsCheckDistance_C.ReceiveActivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTService_BanditsCheckDistance_C::ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_BanditsCheckDistance.BTService_BanditsCheckDistance_C.ReceiveActivationAI");

	UBTService_BanditsCheckDistance_C_ReceiveActivationAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTService_BanditsCheckDistance.BTService_BanditsCheckDistance_C.CheckDistance
// (BlueprintCallable, BlueprintEvent)
void UBTService_BanditsCheckDistance_C::CheckDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_BanditsCheckDistance.BTService_BanditsCheckDistance_C.CheckDistance");

	UBTService_BanditsCheckDistance_C_CheckDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTService_BanditsCheckDistance.BTService_BanditsCheckDistance_C.ReceiveDeactivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTService_BanditsCheckDistance_C::ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_BanditsCheckDistance.BTService_BanditsCheckDistance_C.ReceiveDeactivationAI");

	UBTService_BanditsCheckDistance_C_ReceiveDeactivationAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTService_BanditsCheckDistance.BTService_BanditsCheckDistance_C.ExecuteUbergraph_BTService_BanditsCheckDistance
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTService_BanditsCheckDistance_C::ExecuteUbergraph_BTService_BanditsCheckDistance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_BanditsCheckDistance.BTService_BanditsCheckDistance_C.ExecuteUbergraph_BTService_BanditsCheckDistance");

	UBTService_BanditsCheckDistance_C_ExecuteUbergraph_BTService_BanditsCheckDistance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
