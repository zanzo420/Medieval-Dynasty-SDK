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

// Function BP_BTT_FollowGroupLeader.BP_BTT_FollowGroupLeader_C.OnFail_65D251AF4601D2AD6F293CA9DE634A2A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_FollowGroupLeader_C::OnFail_65D251AF4601D2AD6F293CA9DE634A2A(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_FollowGroupLeader.BP_BTT_FollowGroupLeader_C.OnFail_65D251AF4601D2AD6F293CA9DE634A2A");

	UBP_BTT_FollowGroupLeader_C_OnFail_65D251AF4601D2AD6F293CA9DE634A2A_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_FollowGroupLeader.BP_BTT_FollowGroupLeader_C.OnSuccess_65D251AF4601D2AD6F293CA9DE634A2A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_FollowGroupLeader_C::OnSuccess_65D251AF4601D2AD6F293CA9DE634A2A(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_FollowGroupLeader.BP_BTT_FollowGroupLeader_C.OnSuccess_65D251AF4601D2AD6F293CA9DE634A2A");

	UBP_BTT_FollowGroupLeader_C_OnSuccess_65D251AF4601D2AD6F293CA9DE634A2A_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_FollowGroupLeader.BP_BTT_FollowGroupLeader_C.OnFail_A2155C0041AD8D9B69E479A657FA809A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_FollowGroupLeader_C::OnFail_A2155C0041AD8D9B69E479A657FA809A(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_FollowGroupLeader.BP_BTT_FollowGroupLeader_C.OnFail_A2155C0041AD8D9B69E479A657FA809A");

	UBP_BTT_FollowGroupLeader_C_OnFail_A2155C0041AD8D9B69E479A657FA809A_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_FollowGroupLeader.BP_BTT_FollowGroupLeader_C.OnSuccess_A2155C0041AD8D9B69E479A657FA809A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_FollowGroupLeader_C::OnSuccess_A2155C0041AD8D9B69E479A657FA809A(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_FollowGroupLeader.BP_BTT_FollowGroupLeader_C.OnSuccess_A2155C0041AD8D9B69E479A657FA809A");

	UBP_BTT_FollowGroupLeader_C_OnSuccess_A2155C0041AD8D9B69E479A657FA809A_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_FollowGroupLeader.BP_BTT_FollowGroupLeader_C.EventFollowLeader
// (BlueprintCallable, BlueprintEvent)
void UBP_BTT_FollowGroupLeader_C::EventFollowLeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_FollowGroupLeader.BP_BTT_FollowGroupLeader_C.EventFollowLeader");

	UBP_BTT_FollowGroupLeader_C_EventFollowLeader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_FollowGroupLeader.BP_BTT_FollowGroupLeader_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_FollowGroupLeader_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_FollowGroupLeader.BP_BTT_FollowGroupLeader_C.ReceiveExecuteAI");

	UBP_BTT_FollowGroupLeader_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BTT_FollowGroupLeader.BP_BTT_FollowGroupLeader_C.ExecuteUbergraph_BP_BTT_FollowGroupLeader
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BTT_FollowGroupLeader_C::ExecuteUbergraph_BP_BTT_FollowGroupLeader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BTT_FollowGroupLeader.BP_BTT_FollowGroupLeader_C.ExecuteUbergraph_BP_BTT_FollowGroupLeader");

	UBP_BTT_FollowGroupLeader_C_ExecuteUbergraph_BP_BTT_FollowGroupLeader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_BTT_FollowGroupLeader_C::AfterRead()
{
	UBTTask_BlueprintBase::AfterRead();

	READ_PTR_FULL(PawnRef, APawn);
	READ_PTR_FULL(AnimalBase, ABP_GroundAnimalBase_C);
	READ_PTR_FULL(CompGroup, UBP_Comp_Group_C);
}

void UBP_BTT_FollowGroupLeader_C::BeforeDelete()
{
	UBTTask_BlueprintBase::BeforeDelete();

	DELE_PTR_FULL(PawnRef);
	DELE_PTR_FULL(AnimalBase);
	DELE_PTR_FULL(CompGroup);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
