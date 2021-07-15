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

// Function BTTask_WaitAnimation.BTTask_WaitAnimation_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_WaitAnimation_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_WaitAnimation.BTTask_WaitAnimation_C.ReceiveExecuteAI");

	UBTTask_WaitAnimation_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_WaitAnimation.BTTask_WaitAnimation_C.FinishExe
// (BlueprintCallable, BlueprintEvent)
void UBTTask_WaitAnimation_C::FinishExe()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_WaitAnimation.BTTask_WaitAnimation_C.FinishExe");

	UBTTask_WaitAnimation_C_FinishExe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_WaitAnimation.BTTask_WaitAnimation_C.InteractDuringAnimation
// (BlueprintCallable, BlueprintEvent)
void UBTTask_WaitAnimation_C::InteractDuringAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_WaitAnimation.BTTask_WaitAnimation_C.InteractDuringAnimation");

	UBTTask_WaitAnimation_C_InteractDuringAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_WaitAnimation.BTTask_WaitAnimation_C.OnWorkComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Profession_E_Profession> Profession                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  ProfessionState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_WaitAnimation_C::OnWorkComplete(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_WaitAnimation.BTTask_WaitAnimation_C.OnWorkComplete");

	UBTTask_WaitAnimation_C_OnWorkComplete_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.ProfessionState = ProfessionState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_WaitAnimation.BTTask_WaitAnimation_C.OnWorkLoopFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Profession_E_Profession> Profession                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// unsigned char                  ProfessionState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Loop                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_WaitAnimation_C::OnWorkLoopFinished(TEnumAsByte<E_Profession_E_Profession> Profession, class UAnimMontage* Montage, unsigned char ProfessionState, int Loop)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_WaitAnimation.BTTask_WaitAnimation_C.OnWorkLoopFinished");

	UBTTask_WaitAnimation_C_OnWorkLoopFinished_Params params;
	params.Profession = Profession;
	params.Montage = Montage;
	params.ProfessionState = ProfessionState;
	params.Loop = Loop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_WaitAnimation.BTTask_WaitAnimation_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_WaitAnimation_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_WaitAnimation.BTTask_WaitAnimation_C.ReceiveTickAI");

	UBTTask_WaitAnimation_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_WaitAnimation.BTTask_WaitAnimation_C.Finish
// (BlueprintCallable, BlueprintEvent)
void UBTTask_WaitAnimation_C::Finish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_WaitAnimation.BTTask_WaitAnimation_C.Finish");

	UBTTask_WaitAnimation_C_Finish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_WaitAnimation.BTTask_WaitAnimation_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_WaitAnimation_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_WaitAnimation.BTTask_WaitAnimation_C.ReceiveAbortAI");

	UBTTask_WaitAnimation_C_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_WaitAnimation.BTTask_WaitAnimation_C.ExecuteUbergraph_BTTask_WaitAnimation
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_WaitAnimation_C::ExecuteUbergraph_BTTask_WaitAnimation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_WaitAnimation.BTTask_WaitAnimation_C.ExecuteUbergraph_BTTask_WaitAnimation");

	UBTTask_WaitAnimation_C_ExecuteUbergraph_BTTask_WaitAnimation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
