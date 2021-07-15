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

// Function BTTask_GoToAnimals.BTTask_GoToAnimals_C.OnFail_372F52FC4993058C2B108A8C194EBF92
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToAnimals_C::OnFail_372F52FC4993058C2B108A8C194EBF92(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToAnimals.BTTask_GoToAnimals_C.OnFail_372F52FC4993058C2B108A8C194EBF92");

	UBTTask_GoToAnimals_C_OnFail_372F52FC4993058C2B108A8C194EBF92_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToAnimals.BTTask_GoToAnimals_C.OnSuccess_372F52FC4993058C2B108A8C194EBF92
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToAnimals_C::OnSuccess_372F52FC4993058C2B108A8C194EBF92(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToAnimals.BTTask_GoToAnimals_C.OnSuccess_372F52FC4993058C2B108A8C194EBF92");

	UBTTask_GoToAnimals_C_OnSuccess_372F52FC4993058C2B108A8C194EBF92_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToAnimals.BTTask_GoToAnimals_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToAnimals_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToAnimals.BTTask_GoToAnimals_C.ReceiveExecuteAI");

	UBTTask_GoToAnimals_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToAnimals.BTTask_GoToAnimals_C.Finish
// (BlueprintCallable, BlueprintEvent)
void UBTTask_GoToAnimals_C::Finish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToAnimals.BTTask_GoToAnimals_C.Finish");

	UBTTask_GoToAnimals_C_Finish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToAnimals.BTTask_GoToAnimals_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToAnimals_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToAnimals.BTTask_GoToAnimals_C.ReceiveAbortAI");

	UBTTask_GoToAnimals_C_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToAnimals.BTTask_GoToAnimals_C.ExecuteUbergraph_BTTask_GoToAnimals
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToAnimals_C::ExecuteUbergraph_BTTask_GoToAnimals(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToAnimals.BTTask_GoToAnimals_C.ExecuteUbergraph_BTTask_GoToAnimals");

	UBTTask_GoToAnimals_C_ExecuteUbergraph_BTTask_GoToAnimals_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
