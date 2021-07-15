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

// Function BP_BTT_GoToParent.BP_BTT_GoToParent_C.OnFail_E1AF487244A3C48D4641A8BA33E6CBAD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_GoToParent_C::OnFail_E1AF487244A3C48D4641A8BA33E6CBAD(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_GoToParent.BP_BTT_GoToParent_C.OnFail_E1AF487244A3C48D4641A8BA33E6CBAD");

	UBP_BTT_GoToParent_C_OnFail_E1AF487244A3C48D4641A8BA33E6CBAD_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_GoToParent.BP_BTT_GoToParent_C.OnSuccess_E1AF487244A3C48D4641A8BA33E6CBAD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_GoToParent_C::OnSuccess_E1AF487244A3C48D4641A8BA33E6CBAD(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_GoToParent.BP_BTT_GoToParent_C.OnSuccess_E1AF487244A3C48D4641A8BA33E6CBAD");

	UBP_BTT_GoToParent_C_OnSuccess_E1AF487244A3C48D4641A8BA33E6CBAD_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_GoToParent.BP_BTT_GoToParent_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_GoToParent_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_GoToParent.BP_BTT_GoToParent_C.ReceiveExecuteAI");

	UBP_BTT_GoToParent_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_GoToParent.BP_BTT_GoToParent_C.ExecuteUbergraph_BP_BTT_GoToParent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_GoToParent_C::ExecuteUbergraph_BP_BTT_GoToParent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_GoToParent.BP_BTT_GoToParent_C.ExecuteUbergraph_BP_BTT_GoToParent");

	UBP_BTT_GoToParent_C_ExecuteUbergraph_BP_BTT_GoToParent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
