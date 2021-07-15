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

// Function BTTask_GetOutLocation.BTTask_GetOutLocation_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GetOutLocation_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GetOutLocation.BTTask_GetOutLocation_C.ReceiveExecuteAI");

	UBTTask_GetOutLocation_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_GetOutLocation.BTTask_GetOutLocation_C.ExecuteUbergraph_BTTask_GetOutLocation
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_GetOutLocation_C::ExecuteUbergraph_BTTask_GetOutLocation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_GetOutLocation.BTTask_GetOutLocation_C.ExecuteUbergraph_BTTask_GetOutLocation");

	UBTTask_GetOutLocation_C_ExecuteUbergraph_BTTask_GetOutLocation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBTTask_GetOutLocation_C::AfterRead()
{
	UBTTask_BlueprintBase::AfterRead();

}

void UBTTask_GetOutLocation_C::BeforeDelete()
{
	UBTTask_BlueprintBase::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
