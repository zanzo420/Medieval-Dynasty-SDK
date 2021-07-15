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

// Function BTTask_EndInteractSittingPlace.BTTask_EndInteractSittingPlace_C.OnFail_F318084C4B6ACEDD25EED4984DCF74BE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_EndInteractSittingPlace_C::OnFail_F318084C4B6ACEDD25EED4984DCF74BE(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_EndInteractSittingPlace.BTTask_EndInteractSittingPlace_C.OnFail_F318084C4B6ACEDD25EED4984DCF74BE");

	UBTTask_EndInteractSittingPlace_C_OnFail_F318084C4B6ACEDD25EED4984DCF74BE_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_EndInteractSittingPlace.BTTask_EndInteractSittingPlace_C.OnSuccess_F318084C4B6ACEDD25EED4984DCF74BE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_EndInteractSittingPlace_C::OnSuccess_F318084C4B6ACEDD25EED4984DCF74BE(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_EndInteractSittingPlace.BTTask_EndInteractSittingPlace_C.OnSuccess_F318084C4B6ACEDD25EED4984DCF74BE");

	UBTTask_EndInteractSittingPlace_C_OnSuccess_F318084C4B6ACEDD25EED4984DCF74BE_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_EndInteractSittingPlace.BTTask_EndInteractSittingPlace_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_EndInteractSittingPlace_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_EndInteractSittingPlace.BTTask_EndInteractSittingPlace_C.ReceiveExecuteAI");

	UBTTask_EndInteractSittingPlace_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_EndInteractSittingPlace.BTTask_EndInteractSittingPlace_C.OnSitFinished
// (BlueprintCallable, BlueprintEvent)
void UBTTask_EndInteractSittingPlace_C::OnSitFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_EndInteractSittingPlace.BTTask_EndInteractSittingPlace_C.OnSitFinished");

	UBTTask_EndInteractSittingPlace_C_OnSitFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_EndInteractSittingPlace.BTTask_EndInteractSittingPlace_C.Finish
// (BlueprintCallable, BlueprintEvent)
void UBTTask_EndInteractSittingPlace_C::Finish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_EndInteractSittingPlace.BTTask_EndInteractSittingPlace_C.Finish");

	UBTTask_EndInteractSittingPlace_C_Finish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_EndInteractSittingPlace.BTTask_EndInteractSittingPlace_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_EndInteractSittingPlace_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_EndInteractSittingPlace.BTTask_EndInteractSittingPlace_C.ReceiveAbortAI");

	UBTTask_EndInteractSittingPlace_C_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_EndInteractSittingPlace.BTTask_EndInteractSittingPlace_C.ExecuteUbergraph_BTTask_EndInteractSittingPlace
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_EndInteractSittingPlace_C::ExecuteUbergraph_BTTask_EndInteractSittingPlace(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_EndInteractSittingPlace.BTTask_EndInteractSittingPlace_C.ExecuteUbergraph_BTTask_EndInteractSittingPlace");

	UBTTask_EndInteractSittingPlace_C_ExecuteUbergraph_BTTask_EndInteractSittingPlace_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBTTask_EndInteractSittingPlace_C::AfterRead()
{
	UBTTask_BlueprintBase::AfterRead();

	READ_PTR_FULL(PawnReference, APawn);
	READ_PTR_FULL(NPCReference, ABP_NPC_C);
}

void UBTTask_EndInteractSittingPlace_C::BeforeDelete()
{
	UBTTask_BlueprintBase::BeforeDelete();

	DELE_PTR_FULL(PawnReference);
	DELE_PTR_FULL(NPCReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
