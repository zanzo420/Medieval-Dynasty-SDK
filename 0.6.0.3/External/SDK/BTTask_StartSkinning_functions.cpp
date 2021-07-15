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

// Function BTTask_StartSkinning.BTTask_StartSkinning_C.OnFail_33011E9C401DE1ACE0783C923D5C04FC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_StartSkinning_C::OnFail_33011E9C401DE1ACE0783C923D5C04FC(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_StartSkinning.BTTask_StartSkinning_C.OnFail_33011E9C401DE1ACE0783C923D5C04FC");

	UBTTask_StartSkinning_C_OnFail_33011E9C401DE1ACE0783C923D5C04FC_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_StartSkinning.BTTask_StartSkinning_C.OnSuccess_33011E9C401DE1ACE0783C923D5C04FC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_StartSkinning_C::OnSuccess_33011E9C401DE1ACE0783C923D5C04FC(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_StartSkinning.BTTask_StartSkinning_C.OnSuccess_33011E9C401DE1ACE0783C923D5C04FC");

	UBTTask_StartSkinning_C_OnSuccess_33011E9C401DE1ACE0783C923D5C04FC_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_StartSkinning.BTTask_StartSkinning_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_StartSkinning_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_StartSkinning.BTTask_StartSkinning_C.ReceiveExecuteAI");

	UBTTask_StartSkinning_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_StartSkinning.BTTask_StartSkinning_C.Finish
// (BlueprintCallable, BlueprintEvent)
void UBTTask_StartSkinning_C::Finish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_StartSkinning.BTTask_StartSkinning_C.Finish");

	UBTTask_StartSkinning_C_Finish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_StartSkinning.BTTask_StartSkinning_C.ExecuteUbergraph_BTTask_StartSkinning
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_StartSkinning_C::ExecuteUbergraph_BTTask_StartSkinning(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_StartSkinning.BTTask_StartSkinning_C.ExecuteUbergraph_BTTask_StartSkinning");

	UBTTask_StartSkinning_C_ExecuteUbergraph_BTTask_StartSkinning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBTTask_StartSkinning_C::AfterRead()
{
	UBTTask_BlueprintBase::AfterRead();

	READ_PTR_FULL(AIControllerReference, AAIController);
	READ_PTR_FULL(PawnReference, APawn);
}

void UBTTask_StartSkinning_C::BeforeDelete()
{
	UBTTask_BlueprintBase::BeforeDelete();

	DELE_PTR_FULL(AIControllerReference);
	DELE_PTR_FULL(PawnReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
