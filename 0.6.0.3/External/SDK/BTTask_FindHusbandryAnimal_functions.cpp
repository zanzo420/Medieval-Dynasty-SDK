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

// Function BTTask_FindHusbandryAnimal.BTTask_FindHusbandryAnimal_C.OnFail_629F0A244365D0611B575788700ED6CE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_FindHusbandryAnimal_C::OnFail_629F0A244365D0611B575788700ED6CE(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_FindHusbandryAnimal.BTTask_FindHusbandryAnimal_C.OnFail_629F0A244365D0611B575788700ED6CE");

	UBTTask_FindHusbandryAnimal_C_OnFail_629F0A244365D0611B575788700ED6CE_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_FindHusbandryAnimal.BTTask_FindHusbandryAnimal_C.OnSuccess_629F0A244365D0611B575788700ED6CE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_FindHusbandryAnimal_C::OnSuccess_629F0A244365D0611B575788700ED6CE(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_FindHusbandryAnimal.BTTask_FindHusbandryAnimal_C.OnSuccess_629F0A244365D0611B575788700ED6CE");

	UBTTask_FindHusbandryAnimal_C_OnSuccess_629F0A244365D0611B575788700ED6CE_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_FindHusbandryAnimal.BTTask_FindHusbandryAnimal_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_FindHusbandryAnimal_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_FindHusbandryAnimal.BTTask_FindHusbandryAnimal_C.ReceiveExecuteAI");

	UBTTask_FindHusbandryAnimal_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_FindHusbandryAnimal.BTTask_FindHusbandryAnimal_C.ExecuteUbergraph_BTTask_FindHusbandryAnimal
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_FindHusbandryAnimal_C::ExecuteUbergraph_BTTask_FindHusbandryAnimal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_FindHusbandryAnimal.BTTask_FindHusbandryAnimal_C.ExecuteUbergraph_BTTask_FindHusbandryAnimal");

	UBTTask_FindHusbandryAnimal_C_ExecuteUbergraph_BTTask_FindHusbandryAnimal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBTTask_FindHusbandryAnimal_C::AfterRead()
{
	UBTTask_BlueprintBase::AfterRead();

	READ_PTR_FULL(PawnReference, APawn);
}

void UBTTask_FindHusbandryAnimal_C::BeforeDelete()
{
	UBTTask_BlueprintBase::BeforeDelete();

	DELE_PTR_FULL(PawnReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
