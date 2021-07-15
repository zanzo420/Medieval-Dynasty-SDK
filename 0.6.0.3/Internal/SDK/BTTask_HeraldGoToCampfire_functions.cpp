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

// Function BTTask_HeraldGoToCampfire.BTTask_HeraldGoToCampfire_C.OnFail_D5075ECB4E44C3CFD45976AEAE5E73CD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_HeraldGoToCampfire_C::OnFail_D5075ECB4E44C3CFD45976AEAE5E73CD(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_HeraldGoToCampfire.BTTask_HeraldGoToCampfire_C.OnFail_D5075ECB4E44C3CFD45976AEAE5E73CD");

	UBTTask_HeraldGoToCampfire_C_OnFail_D5075ECB4E44C3CFD45976AEAE5E73CD_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_HeraldGoToCampfire.BTTask_HeraldGoToCampfire_C.OnSuccess_D5075ECB4E44C3CFD45976AEAE5E73CD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_HeraldGoToCampfire_C::OnSuccess_D5075ECB4E44C3CFD45976AEAE5E73CD(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_HeraldGoToCampfire.BTTask_HeraldGoToCampfire_C.OnSuccess_D5075ECB4E44C3CFD45976AEAE5E73CD");

	UBTTask_HeraldGoToCampfire_C_OnSuccess_D5075ECB4E44C3CFD45976AEAE5E73CD_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_HeraldGoToCampfire.BTTask_HeraldGoToCampfire_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_HeraldGoToCampfire_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_HeraldGoToCampfire.BTTask_HeraldGoToCampfire_C.ReceiveExecuteAI");

	UBTTask_HeraldGoToCampfire_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_HeraldGoToCampfire.BTTask_HeraldGoToCampfire_C.Finish
// (BlueprintCallable, BlueprintEvent)
void UBTTask_HeraldGoToCampfire_C::Finish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_HeraldGoToCampfire.BTTask_HeraldGoToCampfire_C.Finish");

	UBTTask_HeraldGoToCampfire_C_Finish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_HeraldGoToCampfire.BTTask_HeraldGoToCampfire_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_HeraldGoToCampfire_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_HeraldGoToCampfire.BTTask_HeraldGoToCampfire_C.ReceiveAbortAI");

	UBTTask_HeraldGoToCampfire_C_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_HeraldGoToCampfire.BTTask_HeraldGoToCampfire_C.ExecuteUbergraph_BTTask_HeraldGoToCampfire
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_HeraldGoToCampfire_C::ExecuteUbergraph_BTTask_HeraldGoToCampfire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_HeraldGoToCampfire.BTTask_HeraldGoToCampfire_C.ExecuteUbergraph_BTTask_HeraldGoToCampfire");

	UBTTask_HeraldGoToCampfire_C_ExecuteUbergraph_BTTask_HeraldGoToCampfire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
