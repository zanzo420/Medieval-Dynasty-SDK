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

// Function BTTask_SetNPCBehavior.BTTask_SetNPCBehavior_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_SetNPCBehavior_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_SetNPCBehavior.BTTask_SetNPCBehavior_C.ReceiveExecuteAI");

	UBTTask_SetNPCBehavior_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_SetNPCBehavior.BTTask_SetNPCBehavior_C.ExecuteUbergraph_BTTask_SetNPCBehavior
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_SetNPCBehavior_C::ExecuteUbergraph_BTTask_SetNPCBehavior(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_SetNPCBehavior.BTTask_SetNPCBehavior_C.ExecuteUbergraph_BTTask_SetNPCBehavior");

	UBTTask_SetNPCBehavior_C_ExecuteUbergraph_BTTask_SetNPCBehavior_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBTTask_SetNPCBehavior_C::AfterRead()
{
	UBTTask_BlueprintBase::AfterRead();

	READ_PTR_FULL(Pawn_Reference, APawn);
}

void UBTTask_SetNPCBehavior_C::BeforeDelete()
{
	UBTTask_BlueprintBase::BeforeDelete();

	DELE_PTR_FULL(Pawn_Reference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
