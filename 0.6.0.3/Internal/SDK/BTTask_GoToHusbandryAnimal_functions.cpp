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

// Function BTTask_GoToHusbandryAnimal.BTTask_GoToHusbandryAnimal_C.OnFail_C4549321447E4A7EE49EA580E2C6E08F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToHusbandryAnimal_C::OnFail_C4549321447E4A7EE49EA580E2C6E08F(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToHusbandryAnimal.BTTask_GoToHusbandryAnimal_C.OnFail_C4549321447E4A7EE49EA580E2C6E08F");

	UBTTask_GoToHusbandryAnimal_C_OnFail_C4549321447E4A7EE49EA580E2C6E08F_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToHusbandryAnimal.BTTask_GoToHusbandryAnimal_C.OnSuccess_C4549321447E4A7EE49EA580E2C6E08F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToHusbandryAnimal_C::OnSuccess_C4549321447E4A7EE49EA580E2C6E08F(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToHusbandryAnimal.BTTask_GoToHusbandryAnimal_C.OnSuccess_C4549321447E4A7EE49EA580E2C6E08F");

	UBTTask_GoToHusbandryAnimal_C_OnSuccess_C4549321447E4A7EE49EA580E2C6E08F_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToHusbandryAnimal.BTTask_GoToHusbandryAnimal_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToHusbandryAnimal_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToHusbandryAnimal.BTTask_GoToHusbandryAnimal_C.ReceiveExecuteAI");

	UBTTask_GoToHusbandryAnimal_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToHusbandryAnimal.BTTask_GoToHusbandryAnimal_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToHusbandryAnimal_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToHusbandryAnimal.BTTask_GoToHusbandryAnimal_C.ReceiveAbortAI");

	UBTTask_GoToHusbandryAnimal_C_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToHusbandryAnimal.BTTask_GoToHusbandryAnimal_C.Finish
// (BlueprintCallable, BlueprintEvent)
void UBTTask_GoToHusbandryAnimal_C::Finish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToHusbandryAnimal.BTTask_GoToHusbandryAnimal_C.Finish");

	UBTTask_GoToHusbandryAnimal_C_Finish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToHusbandryAnimal.BTTask_GoToHusbandryAnimal_C.ExecuteUbergraph_BTTask_GoToHusbandryAnimal
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToHusbandryAnimal_C::ExecuteUbergraph_BTTask_GoToHusbandryAnimal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToHusbandryAnimal.BTTask_GoToHusbandryAnimal_C.ExecuteUbergraph_BTTask_GoToHusbandryAnimal");

	UBTTask_GoToHusbandryAnimal_C_ExecuteUbergraph_BTTask_GoToHusbandryAnimal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
