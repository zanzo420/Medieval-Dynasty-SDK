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

// Function BP_BTT_FleeEngageActor.BP_BTT_FleeEngageActor_C.OnFail_AC7F7D494DC809C45F21408B8B28554A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_FleeEngageActor_C::OnFail_AC7F7D494DC809C45F21408B8B28554A(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_FleeEngageActor.BP_BTT_FleeEngageActor_C.OnFail_AC7F7D494DC809C45F21408B8B28554A");

	UBP_BTT_FleeEngageActor_C_OnFail_AC7F7D494DC809C45F21408B8B28554A_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_FleeEngageActor.BP_BTT_FleeEngageActor_C.OnSuccess_AC7F7D494DC809C45F21408B8B28554A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_FleeEngageActor_C::OnSuccess_AC7F7D494DC809C45F21408B8B28554A(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_FleeEngageActor.BP_BTT_FleeEngageActor_C.OnSuccess_AC7F7D494DC809C45F21408B8B28554A");

	UBP_BTT_FleeEngageActor_C_OnSuccess_AC7F7D494DC809C45F21408B8B28554A_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_FleeEngageActor.BP_BTT_FleeEngageActor_C.OnFail_7647726D469B9D85153AAB82E464FA2B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_FleeEngageActor_C::OnFail_7647726D469B9D85153AAB82E464FA2B(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_FleeEngageActor.BP_BTT_FleeEngageActor_C.OnFail_7647726D469B9D85153AAB82E464FA2B");

	UBP_BTT_FleeEngageActor_C_OnFail_7647726D469B9D85153AAB82E464FA2B_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_FleeEngageActor.BP_BTT_FleeEngageActor_C.OnSuccess_7647726D469B9D85153AAB82E464FA2B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_FleeEngageActor_C::OnSuccess_7647726D469B9D85153AAB82E464FA2B(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_FleeEngageActor.BP_BTT_FleeEngageActor_C.OnSuccess_7647726D469B9D85153AAB82E464FA2B");

	UBP_BTT_FleeEngageActor_C_OnSuccess_7647726D469B9D85153AAB82E464FA2B_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_FleeEngageActor.BP_BTT_FleeEngageActor_C.MoveToFleeLocation
// (BlueprintCallable, BlueprintEvent)
void UBP_BTT_FleeEngageActor_C::MoveToFleeLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_FleeEngageActor.BP_BTT_FleeEngageActor_C.MoveToFleeLocation");

	UBP_BTT_FleeEngageActor_C_MoveToFleeLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_FleeEngageActor.BP_BTT_FleeEngageActor_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_FleeEngageActor_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_FleeEngageActor.BP_BTT_FleeEngageActor_C.ReceiveExecuteAI");

	UBP_BTT_FleeEngageActor_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_FleeEngageActor.BP_BTT_FleeEngageActor_C.ExecuteUbergraph_BP_BTT_FleeEngageActor
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_FleeEngageActor_C::ExecuteUbergraph_BP_BTT_FleeEngageActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_FleeEngageActor.BP_BTT_FleeEngageActor_C.ExecuteUbergraph_BP_BTT_FleeEngageActor");

	UBP_BTT_FleeEngageActor_C_ExecuteUbergraph_BP_BTT_FleeEngageActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_BTT_FleeEngageActor_C::AfterRead()
{
	UBTTask_BlueprintBase::AfterRead();

	READ_PTR_FULL(PawnRef, APawn);
	READ_PTR_FULL(AnimalBase, ABP_GroundAnimalBase_C);
}

void UBP_BTT_FleeEngageActor_C::BeforeDelete()
{
	UBTTask_BlueprintBase::BeforeDelete();

	DELE_PTR_FULL(PawnRef);
	DELE_PTR_FULL(AnimalBase);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
