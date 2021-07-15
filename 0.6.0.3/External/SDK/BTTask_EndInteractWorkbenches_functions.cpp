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

// Function BTTask_EndInteractWorkbenches.BTTask_EndInteractWorkbenches_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_EndInteractWorkbenches_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_EndInteractWorkbenches.BTTask_EndInteractWorkbenches_C.ReceiveExecuteAI");

	UBTTask_EndInteractWorkbenches_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_EndInteractWorkbenches.BTTask_EndInteractWorkbenches_C.ExecuteUbergraph_BTTask_EndInteractWorkbenches
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_EndInteractWorkbenches_C::ExecuteUbergraph_BTTask_EndInteractWorkbenches(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_EndInteractWorkbenches.BTTask_EndInteractWorkbenches_C.ExecuteUbergraph_BTTask_EndInteractWorkbenches");

	UBTTask_EndInteractWorkbenches_C_ExecuteUbergraph_BTTask_EndInteractWorkbenches_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBTTask_EndInteractWorkbenches_C::AfterRead()
{
	UBTTask_BlueprintBase::AfterRead();

}

void UBTTask_EndInteractWorkbenches_C::BeforeDelete()
{
	UBTTask_BlueprintBase::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
