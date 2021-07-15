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

// Function BP_HoldableItem_Hands.BP_HoldableItem_Hands_C.DecreaseHoldableItemHP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Offhand                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_HoldableItem_Hands_C::DecreaseHoldableItemHP(float Value, bool Offhand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldableItem_Hands.BP_HoldableItem_Hands_C.DecreaseHoldableItemHP");

	ABP_HoldableItem_Hands_C_DecreaseHoldableItemHP_Params params;
	params.Value = Value;
	params.Offhand = Offhand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HoldableItem_Hands.BP_HoldableItem_Hands_C.GetRandomMontage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UAnimMontage*>    TargetArray                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UAnimMontage*            CurrentMontage                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*            SelectedMontage                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HoldableItem_Hands_C::GetRandomMontage(TArray<class UAnimMontage*> TargetArray, class UAnimMontage* CurrentMontage, class UAnimMontage** SelectedMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldableItem_Hands.BP_HoldableItem_Hands_C.GetRandomMontage");

	ABP_HoldableItem_Hands_C_GetRandomMontage_Params params;
	params.TargetArray = TargetArray;
	params.CurrentMontage = CurrentMontage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SelectedMontage != nullptr)
		*SelectedMontage = params.SelectedMontage;

}


// Function BP_HoldableItem_Hands.BP_HoldableItem_Hands_C.CheckMontagesStatus
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HoldableItem_Hands_C::CheckMontagesStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldableItem_Hands.BP_HoldableItem_Hands_C.CheckMontagesStatus");

	ABP_HoldableItem_Hands_C_CheckMontagesStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HoldableItem_Hands.BP_HoldableItem_Hands_C.GetRandomFistMontage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings> MontagesSettings               (Parm, OutParm)
void ABP_HoldableItem_Hands_C::GetRandomFistMontage(TMap<TEnumAsByte<E_AnimInteractionTypes_E_AnimInteractionTypes>, struct FST_MontagesSettings>* MontagesSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldableItem_Hands.BP_HoldableItem_Hands_C.GetRandomFistMontage");

	ABP_HoldableItem_Hands_C_GetRandomFistMontage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MontagesSettings != nullptr)
		*MontagesSettings = params.MontagesSettings;

}


// Function BP_HoldableItem_Hands.BP_HoldableItem_Hands_C.LeftMouseInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           KeyDown                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_HoldableItem_Hands_C::LeftMouseInput(bool KeyDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldableItem_Hands.BP_HoldableItem_Hands_C.LeftMouseInput");

	ABP_HoldableItem_Hands_C_LeftMouseInput_Params params;
	params.KeyDown = KeyDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HoldableItem_Hands.BP_HoldableItem_Hands_C.SetTickEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_HoldableItem_Hands_C::SetTickEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldableItem_Hands.BP_HoldableItem_Hands_C.SetTickEnabled");

	ABP_HoldableItem_Hands_C_SetTickEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HoldableItem_Hands.BP_HoldableItem_Hands_C.PerformNextAttack
// (BlueprintCallable, BlueprintEvent)
void ABP_HoldableItem_Hands_C::PerformNextAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldableItem_Hands.BP_HoldableItem_Hands_C.PerformNextAttack");

	ABP_HoldableItem_Hands_C_PerformNextAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HoldableItem_Hands.BP_HoldableItem_Hands_C.StartLeftHandTimer
// (BlueprintCallable, BlueprintEvent)
void ABP_HoldableItem_Hands_C::StartLeftHandTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldableItem_Hands.BP_HoldableItem_Hands_C.StartLeftHandTimer");

	ABP_HoldableItem_Hands_C_StartLeftHandTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HoldableItem_Hands.BP_HoldableItem_Hands_C.StartRightHandTimer
// (BlueprintCallable, BlueprintEvent)
void ABP_HoldableItem_Hands_C::StartRightHandTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldableItem_Hands.BP_HoldableItem_Hands_C.StartRightHandTimer");

	ABP_HoldableItem_Hands_C_StartRightHandTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HoldableItem_Hands.BP_HoldableItem_Hands_C.ExecuteUbergraph_BP_HoldableItem_Hands
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HoldableItem_Hands_C::ExecuteUbergraph_BP_HoldableItem_Hands(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldableItem_Hands.BP_HoldableItem_Hands_C.ExecuteUbergraph_BP_HoldableItem_Hands");

	ABP_HoldableItem_Hands_C_ExecuteUbergraph_BP_HoldableItem_Hands_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_HoldableItem_Hands_C::AfterRead()
{
	ABP_MasterMeleeHoldableItem_C::AfterRead();

	READ_PTR_FULL(SelectedLeftMontage, UAnimMontage);
	READ_PTR_FULL(SelectedRightMontage, UAnimMontage);
}

void ABP_HoldableItem_Hands_C::BeforeDelete()
{
	ABP_MasterMeleeHoldableItem_C::BeforeDelete();

	DELE_PTR_FULL(SelectedLeftMontage);
	DELE_PTR_FULL(SelectedRightMontage);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
