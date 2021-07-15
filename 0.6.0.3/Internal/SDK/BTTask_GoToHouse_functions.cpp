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

// Function BTTask_GoToHouse.BTTask_GoToHouse_C.OnFail_0EBD7B534FE895F63E39EE85EE58DAD3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToHouse_C::OnFail_0EBD7B534FE895F63E39EE85EE58DAD3(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToHouse.BTTask_GoToHouse_C.OnFail_0EBD7B534FE895F63E39EE85EE58DAD3");

	UBTTask_GoToHouse_C_OnFail_0EBD7B534FE895F63E39EE85EE58DAD3_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToHouse.BTTask_GoToHouse_C.OnSuccess_0EBD7B534FE895F63E39EE85EE58DAD3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToHouse_C::OnSuccess_0EBD7B534FE895F63E39EE85EE58DAD3(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToHouse.BTTask_GoToHouse_C.OnSuccess_0EBD7B534FE895F63E39EE85EE58DAD3");

	UBTTask_GoToHouse_C_OnSuccess_0EBD7B534FE895F63E39EE85EE58DAD3_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToHouse.BTTask_GoToHouse_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToHouse_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToHouse.BTTask_GoToHouse_C.ReceiveExecuteAI");

	UBTTask_GoToHouse_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToHouse.BTTask_GoToHouse_C.Finish
// (BlueprintCallable, BlueprintEvent)
void UBTTask_GoToHouse_C::Finish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToHouse.BTTask_GoToHouse_C.Finish");

	UBTTask_GoToHouse_C_Finish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToHouse.BTTask_GoToHouse_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToHouse_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToHouse.BTTask_GoToHouse_C.ReceiveAbortAI");

	UBTTask_GoToHouse_C_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GoToHouse.BTTask_GoToHouse_C.ExecuteUbergraph_BTTask_GoToHouse
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GoToHouse_C::ExecuteUbergraph_BTTask_GoToHouse(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GoToHouse.BTTask_GoToHouse_C.ExecuteUbergraph_BTTask_GoToHouse");

	UBTTask_GoToHouse_C_ExecuteUbergraph_BTTask_GoToHouse_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
