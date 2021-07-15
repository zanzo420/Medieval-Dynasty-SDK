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

// Function BTTask_HeraldGoToTavern.BTTask_HeraldGoToTavern_C.OnFail_97B9C9A44BA794F2DF89F3B8724552BD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_HeraldGoToTavern_C::OnFail_97B9C9A44BA794F2DF89F3B8724552BD(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_HeraldGoToTavern.BTTask_HeraldGoToTavern_C.OnFail_97B9C9A44BA794F2DF89F3B8724552BD");

	UBTTask_HeraldGoToTavern_C_OnFail_97B9C9A44BA794F2DF89F3B8724552BD_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_HeraldGoToTavern.BTTask_HeraldGoToTavern_C.OnSuccess_97B9C9A44BA794F2DF89F3B8724552BD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_HeraldGoToTavern_C::OnSuccess_97B9C9A44BA794F2DF89F3B8724552BD(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_HeraldGoToTavern.BTTask_HeraldGoToTavern_C.OnSuccess_97B9C9A44BA794F2DF89F3B8724552BD");

	UBTTask_HeraldGoToTavern_C_OnSuccess_97B9C9A44BA794F2DF89F3B8724552BD_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_HeraldGoToTavern.BTTask_HeraldGoToTavern_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_HeraldGoToTavern_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_HeraldGoToTavern.BTTask_HeraldGoToTavern_C.ReceiveExecuteAI");

	UBTTask_HeraldGoToTavern_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_HeraldGoToTavern.BTTask_HeraldGoToTavern_C.Finish
// (BlueprintCallable, BlueprintEvent)
void UBTTask_HeraldGoToTavern_C::Finish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_HeraldGoToTavern.BTTask_HeraldGoToTavern_C.Finish");

	UBTTask_HeraldGoToTavern_C_Finish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_HeraldGoToTavern.BTTask_HeraldGoToTavern_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_HeraldGoToTavern_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_HeraldGoToTavern.BTTask_HeraldGoToTavern_C.ReceiveAbortAI");

	UBTTask_HeraldGoToTavern_C_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_HeraldGoToTavern.BTTask_HeraldGoToTavern_C.ExecuteUbergraph_BTTask_HeraldGoToTavern
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_HeraldGoToTavern_C::ExecuteUbergraph_BTTask_HeraldGoToTavern(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_HeraldGoToTavern.BTTask_HeraldGoToTavern_C.ExecuteUbergraph_BTTask_HeraldGoToTavern");

	UBTTask_HeraldGoToTavern_C_ExecuteUbergraph_BTTask_HeraldGoToTavern_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBTTask_HeraldGoToTavern_C::AfterRead()
{
	UBTTask_BlueprintBase::AfterRead();

	READ_PTR_FULL(AIControllerReference, AAIController);
	READ_PTR_FULL(PawnReference, APawn);
}

void UBTTask_HeraldGoToTavern_C::BeforeDelete()
{
	UBTTask_BlueprintBase::BeforeDelete();

	DELE_PTR_FULL(AIControllerReference);
	DELE_PTR_FULL(PawnReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
