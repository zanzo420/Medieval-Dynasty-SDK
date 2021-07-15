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

// Function BTTask_StartInteractSittingPlace.BTTask_StartInteractSittingPlace_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_StartInteractSittingPlace_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_StartInteractSittingPlace.BTTask_StartInteractSittingPlace_C.ReceiveExecuteAI");

	UBTTask_StartInteractSittingPlace_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_StartInteractSittingPlace.BTTask_StartInteractSittingPlace_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_StartInteractSittingPlace_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_StartInteractSittingPlace.BTTask_StartInteractSittingPlace_C.ReceiveAbortAI");

	UBTTask_StartInteractSittingPlace_C_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_StartInteractSittingPlace.BTTask_StartInteractSittingPlace_C.ExecuteUbergraph_BTTask_StartInteractSittingPlace
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_StartInteractSittingPlace_C::ExecuteUbergraph_BTTask_StartInteractSittingPlace(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_StartInteractSittingPlace.BTTask_StartInteractSittingPlace_C.ExecuteUbergraph_BTTask_StartInteractSittingPlace");

	UBTTask_StartInteractSittingPlace_C_ExecuteUbergraph_BTTask_StartInteractSittingPlace_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBTTask_StartInteractSittingPlace_C::AfterRead()
{
	UBTTask_BlueprintBase::AfterRead();

	READ_PTR_FULL(PawnReference, APawn);
	READ_PTR_FULL(AIControllerReference, AAIController);
}

void UBTTask_StartInteractSittingPlace_C::BeforeDelete()
{
	UBTTask_BlueprintBase::BeforeDelete();

	DELE_PTR_FULL(PawnReference);
	DELE_PTR_FULL(AIControllerReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
