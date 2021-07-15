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

// Function BTTask_FindFoliage.BTTask_FindFoliage_C.OnFail_476D923D40C5367B02FD95BD0B75BE00
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_FindFoliage_C::OnFail_476D923D40C5367B02FD95BD0B75BE00(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_FindFoliage.BTTask_FindFoliage_C.OnFail_476D923D40C5367B02FD95BD0B75BE00");

	UBTTask_FindFoliage_C_OnFail_476D923D40C5367B02FD95BD0B75BE00_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_FindFoliage.BTTask_FindFoliage_C.OnSuccess_476D923D40C5367B02FD95BD0B75BE00
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_FindFoliage_C::OnSuccess_476D923D40C5367B02FD95BD0B75BE00(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_FindFoliage.BTTask_FindFoliage_C.OnSuccess_476D923D40C5367B02FD95BD0B75BE00");

	UBTTask_FindFoliage_C_OnSuccess_476D923D40C5367B02FD95BD0B75BE00_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_FindFoliage.BTTask_FindFoliage_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_FindFoliage_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_FindFoliage.BTTask_FindFoliage_C.ReceiveExecuteAI");

	UBTTask_FindFoliage_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_FindFoliage.BTTask_FindFoliage_C.Finish
// (BlueprintCallable, BlueprintEvent)
void UBTTask_FindFoliage_C::Finish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_FindFoliage.BTTask_FindFoliage_C.Finish");

	UBTTask_FindFoliage_C_Finish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_FindFoliage.BTTask_FindFoliage_C.ExecuteUbergraph_BTTask_FindFoliage
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_FindFoliage_C::ExecuteUbergraph_BTTask_FindFoliage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_FindFoliage.BTTask_FindFoliage_C.ExecuteUbergraph_BTTask_FindFoliage");

	UBTTask_FindFoliage_C_ExecuteUbergraph_BTTask_FindFoliage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBTTask_FindFoliage_C::AfterRead()
{
	UBTTask_BlueprintBase::AfterRead();

	READ_PTR_FULL(PawnReference, APawn);
	READ_PTR_FULL(AIControllerReference, AAIController);
}

void UBTTask_FindFoliage_C::BeforeDelete()
{
	UBTTask_BlueprintBase::BeforeDelete();

	DELE_PTR_FULL(PawnReference);
	DELE_PTR_FULL(AIControllerReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
