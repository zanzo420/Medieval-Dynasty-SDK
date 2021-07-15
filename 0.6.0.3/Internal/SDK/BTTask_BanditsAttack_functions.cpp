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

// Function BTTask_BanditsAttack.BTTask_BanditsAttack_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_BanditsAttack_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_BanditsAttack.BTTask_BanditsAttack_C.ReceiveExecuteAI");

	UBTTask_BanditsAttack_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_BanditsAttack.BTTask_BanditsAttack_C.FinishExe
// (BlueprintCallable, BlueprintEvent)
void UBTTask_BanditsAttack_C::FinishExe()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_BanditsAttack.BTTask_BanditsAttack_C.FinishExe");

	UBTTask_BanditsAttack_C_FinishExe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_BanditsAttack.BTTask_BanditsAttack_C.ReceiveAbort
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_BanditsAttack_C::ReceiveAbort(class AActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_BanditsAttack.BTTask_BanditsAttack_C.ReceiveAbort");

	UBTTask_BanditsAttack_C_ReceiveAbort_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_BanditsAttack.BTTask_BanditsAttack_C.ExecuteUbergraph_BTTask_BanditsAttack
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_BanditsAttack_C::ExecuteUbergraph_BTTask_BanditsAttack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_BanditsAttack.BTTask_BanditsAttack_C.ExecuteUbergraph_BTTask_BanditsAttack");

	UBTTask_BanditsAttack_C_ExecuteUbergraph_BTTask_BanditsAttack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
