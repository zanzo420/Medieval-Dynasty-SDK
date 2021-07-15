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

// Function BP_BTT_GoToDefenseLocation.BP_BTT_GoToDefenseLocation_C.OnFail_4B5A4F784544767CB5743C9B9F13AFBD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_GoToDefenseLocation_C::OnFail_4B5A4F784544767CB5743C9B9F13AFBD(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_GoToDefenseLocation.BP_BTT_GoToDefenseLocation_C.OnFail_4B5A4F784544767CB5743C9B9F13AFBD");

	UBP_BTT_GoToDefenseLocation_C_OnFail_4B5A4F784544767CB5743C9B9F13AFBD_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_GoToDefenseLocation.BP_BTT_GoToDefenseLocation_C.OnSuccess_4B5A4F784544767CB5743C9B9F13AFBD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_GoToDefenseLocation_C::OnSuccess_4B5A4F784544767CB5743C9B9F13AFBD(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_GoToDefenseLocation.BP_BTT_GoToDefenseLocation_C.OnSuccess_4B5A4F784544767CB5743C9B9F13AFBD");

	UBP_BTT_GoToDefenseLocation_C_OnSuccess_4B5A4F784544767CB5743C9B9F13AFBD_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_GoToDefenseLocation.BP_BTT_GoToDefenseLocation_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_GoToDefenseLocation_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_GoToDefenseLocation.BP_BTT_GoToDefenseLocation_C.ReceiveTickAI");

	UBP_BTT_GoToDefenseLocation_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_GoToDefenseLocation.BP_BTT_GoToDefenseLocation_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_GoToDefenseLocation_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_GoToDefenseLocation.BP_BTT_GoToDefenseLocation_C.ReceiveExecuteAI");

	UBP_BTT_GoToDefenseLocation_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_GoToDefenseLocation.BP_BTT_GoToDefenseLocation_C.ExecuteUbergraph_BP_BTT_GoToDefenseLocation
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_GoToDefenseLocation_C::ExecuteUbergraph_BP_BTT_GoToDefenseLocation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_GoToDefenseLocation.BP_BTT_GoToDefenseLocation_C.ExecuteUbergraph_BP_BTT_GoToDefenseLocation");

	UBP_BTT_GoToDefenseLocation_C_ExecuteUbergraph_BP_BTT_GoToDefenseLocation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
