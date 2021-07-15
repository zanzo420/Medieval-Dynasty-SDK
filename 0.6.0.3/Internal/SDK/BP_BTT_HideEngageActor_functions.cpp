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

// Function BP_BTT_HideEngageActor.BP_BTT_HideEngageActor_C.OnFail_BB50F10642FB762ED9F30499A3E3E377
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_HideEngageActor_C::OnFail_BB50F10642FB762ED9F30499A3E3E377(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_HideEngageActor.BP_BTT_HideEngageActor_C.OnFail_BB50F10642FB762ED9F30499A3E3E377");

	UBP_BTT_HideEngageActor_C_OnFail_BB50F10642FB762ED9F30499A3E3E377_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_HideEngageActor.BP_BTT_HideEngageActor_C.OnSuccess_BB50F10642FB762ED9F30499A3E3E377
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_HideEngageActor_C::OnSuccess_BB50F10642FB762ED9F30499A3E3E377(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_HideEngageActor.BP_BTT_HideEngageActor_C.OnSuccess_BB50F10642FB762ED9F30499A3E3E377");

	UBP_BTT_HideEngageActor_C_OnSuccess_BB50F10642FB762ED9F30499A3E3E377_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_HideEngageActor.BP_BTT_HideEngageActor_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_HideEngageActor_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_HideEngageActor.BP_BTT_HideEngageActor_C.ReceiveExecuteAI");

	UBP_BTT_HideEngageActor_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_HideEngageActor.BP_BTT_HideEngageActor_C.ExecuteUbergraph_BP_BTT_HideEngageActor
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_HideEngageActor_C::ExecuteUbergraph_BP_BTT_HideEngageActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_HideEngageActor.BP_BTT_HideEngageActor_C.ExecuteUbergraph_BP_BTT_HideEngageActor");

	UBP_BTT_HideEngageActor_C_ExecuteUbergraph_BP_BTT_HideEngageActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
