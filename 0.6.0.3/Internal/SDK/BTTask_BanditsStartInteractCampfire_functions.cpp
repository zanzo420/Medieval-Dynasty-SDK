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

// Function BTTask_BanditsStartInteractCampfire.BTTask_BanditsStartInteractCampfire_C.OnFail_7BCC2A21452B1B8D6321D4AC0D6991CE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_BanditsStartInteractCampfire_C::OnFail_7BCC2A21452B1B8D6321D4AC0D6991CE(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_BanditsStartInteractCampfire.BTTask_BanditsStartInteractCampfire_C.OnFail_7BCC2A21452B1B8D6321D4AC0D6991CE");

	UBTTask_BanditsStartInteractCampfire_C_OnFail_7BCC2A21452B1B8D6321D4AC0D6991CE_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_BanditsStartInteractCampfire.BTTask_BanditsStartInteractCampfire_C.OnSuccess_7BCC2A21452B1B8D6321D4AC0D6991CE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<AIModule_EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_BanditsStartInteractCampfire_C::OnSuccess_7BCC2A21452B1B8D6321D4AC0D6991CE(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_BanditsStartInteractCampfire.BTTask_BanditsStartInteractCampfire_C.OnSuccess_7BCC2A21452B1B8D6321D4AC0D6991CE");

	UBTTask_BanditsStartInteractCampfire_C_OnSuccess_7BCC2A21452B1B8D6321D4AC0D6991CE_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_BanditsStartInteractCampfire.BTTask_BanditsStartInteractCampfire_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_BanditsStartInteractCampfire_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_BanditsStartInteractCampfire.BTTask_BanditsStartInteractCampfire_C.ReceiveExecuteAI");

	UBTTask_BanditsStartInteractCampfire_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_BanditsStartInteractCampfire.BTTask_BanditsStartInteractCampfire_C.ExecuteUbergraph_BTTask_BanditsStartInteractCampfire
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_BanditsStartInteractCampfire_C::ExecuteUbergraph_BTTask_BanditsStartInteractCampfire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_BanditsStartInteractCampfire.BTTask_BanditsStartInteractCampfire_C.ExecuteUbergraph_BTTask_BanditsStartInteractCampfire");

	UBTTask_BanditsStartInteractCampfire_C_ExecuteUbergraph_BTTask_BanditsStartInteractCampfire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
