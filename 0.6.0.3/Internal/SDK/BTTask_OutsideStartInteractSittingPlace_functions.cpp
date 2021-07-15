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

// Function BTTask_OutsideStartInteractSittingPlace.BTTask_OutsideStartInteractSittingPlace_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_OutsideStartInteractSittingPlace_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_OutsideStartInteractSittingPlace.BTTask_OutsideStartInteractSittingPlace_C.ReceiveExecuteAI");

	UBTTask_OutsideStartInteractSittingPlace_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_OutsideStartInteractSittingPlace.BTTask_OutsideStartInteractSittingPlace_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_OutsideStartInteractSittingPlace_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_OutsideStartInteractSittingPlace.BTTask_OutsideStartInteractSittingPlace_C.ReceiveAbortAI");

	UBTTask_OutsideStartInteractSittingPlace_C_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_OutsideStartInteractSittingPlace.BTTask_OutsideStartInteractSittingPlace_C.ExecuteUbergraph_BTTask_OutsideStartInteractSittingPlace
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_OutsideStartInteractSittingPlace_C::ExecuteUbergraph_BTTask_OutsideStartInteractSittingPlace(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_OutsideStartInteractSittingPlace.BTTask_OutsideStartInteractSittingPlace_C.ExecuteUbergraph_BTTask_OutsideStartInteractSittingPlace");

	UBTTask_OutsideStartInteractSittingPlace_C_ExecuteUbergraph_BTTask_OutsideStartInteractSittingPlace_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
