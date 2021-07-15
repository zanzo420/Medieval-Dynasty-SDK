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

// Function BP_BTT_MountFlee.BP_BTT_MountFlee_C.OnFail_B3A58DA34E936A42641474A7FEC943EE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_MountFlee_C::OnFail_B3A58DA34E936A42641474A7FEC943EE(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_MountFlee.BP_BTT_MountFlee_C.OnFail_B3A58DA34E936A42641474A7FEC943EE");

	UBP_BTT_MountFlee_C_OnFail_B3A58DA34E936A42641474A7FEC943EE_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_MountFlee.BP_BTT_MountFlee_C.OnSuccess_B3A58DA34E936A42641474A7FEC943EE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_MountFlee_C::OnSuccess_B3A58DA34E936A42641474A7FEC943EE(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_MountFlee.BP_BTT_MountFlee_C.OnSuccess_B3A58DA34E936A42641474A7FEC943EE");

	UBP_BTT_MountFlee_C_OnSuccess_B3A58DA34E936A42641474A7FEC943EE_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_MountFlee.BP_BTT_MountFlee_C.OnFail_A20F18CA4DEF5ECC742FD8B7A5F26546
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_MountFlee_C::OnFail_A20F18CA4DEF5ECC742FD8B7A5F26546(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_MountFlee.BP_BTT_MountFlee_C.OnFail_A20F18CA4DEF5ECC742FD8B7A5F26546");

	UBP_BTT_MountFlee_C_OnFail_A20F18CA4DEF5ECC742FD8B7A5F26546_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_MountFlee.BP_BTT_MountFlee_C.OnSuccess_A20F18CA4DEF5ECC742FD8B7A5F26546
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_MountFlee_C::OnSuccess_A20F18CA4DEF5ECC742FD8B7A5F26546(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_MountFlee.BP_BTT_MountFlee_C.OnSuccess_A20F18CA4DEF5ECC742FD8B7A5F26546");

	UBP_BTT_MountFlee_C_OnSuccess_A20F18CA4DEF5ECC742FD8B7A5F26546_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_MountFlee.BP_BTT_MountFlee_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_MountFlee_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_MountFlee.BP_BTT_MountFlee_C.ReceiveExecuteAI");

	UBP_BTT_MountFlee_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_MountFlee.BP_BTT_MountFlee_C.MoveToFleeLocation
// (BlueprintCallable, BlueprintEvent)
void UBP_BTT_MountFlee_C::MoveToFleeLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_MountFlee.BP_BTT_MountFlee_C.MoveToFleeLocation");

	UBP_BTT_MountFlee_C_MoveToFleeLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_MountFlee.BP_BTT_MountFlee_C.ExecuteUbergraph_BP_BTT_MountFlee
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_MountFlee_C::ExecuteUbergraph_BP_BTT_MountFlee(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_MountFlee.BP_BTT_MountFlee_C.ExecuteUbergraph_BP_BTT_MountFlee");

	UBP_BTT_MountFlee_C_ExecuteUbergraph_BP_BTT_MountFlee_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
