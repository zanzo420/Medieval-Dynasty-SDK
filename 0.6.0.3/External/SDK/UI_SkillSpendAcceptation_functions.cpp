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

// Function UI_SkillSpendAcceptation.UI_SkillSpendAcceptation_C.BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_SkillSpendAcceptation_C::BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillSpendAcceptation.UI_SkillSpendAcceptation_C.BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_SkillSpendAcceptation_C_BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SkillSpendAcceptation.UI_SkillSpendAcceptation_C.BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_SkillSpendAcceptation_C::BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillSpendAcceptation.UI_SkillSpendAcceptation_C.BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UUI_SkillSpendAcceptation_C_BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SkillSpendAcceptation.UI_SkillSpendAcceptation_C.Confirm
// (BlueprintCallable, BlueprintEvent)
void UUI_SkillSpendAcceptation_C::Confirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillSpendAcceptation.UI_SkillSpendAcceptation_C.Confirm");

	UUI_SkillSpendAcceptation_C_Confirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SkillSpendAcceptation.UI_SkillSpendAcceptation_C.Decline
// (BlueprintCallable, BlueprintEvent)
void UUI_SkillSpendAcceptation_C::Decline()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillSpendAcceptation.UI_SkillSpendAcceptation_C.Decline");

	UUI_SkillSpendAcceptation_C_Decline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SkillSpendAcceptation.UI_SkillSpendAcceptation_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_SkillSpendAcceptation_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillSpendAcceptation.UI_SkillSpendAcceptation_C.Construct");

	UUI_SkillSpendAcceptation_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SkillSpendAcceptation.UI_SkillSpendAcceptation_C.ChangeSteeringType_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Gamepad                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_SkillSpendAcceptation_C::ChangeSteeringType_Event_1(bool Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillSpendAcceptation.UI_SkillSpendAcceptation_C.ChangeSteeringType_Event_1");

	UUI_SkillSpendAcceptation_C_ChangeSteeringType_Event_1_Params params;
	params.Gamepad = Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SkillSpendAcceptation.UI_SkillSpendAcceptation_C.ExecuteUbergraph_UI_SkillSpendAcceptation
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SkillSpendAcceptation_C::ExecuteUbergraph_UI_SkillSpendAcceptation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillSpendAcceptation.UI_SkillSpendAcceptation_C.ExecuteUbergraph_UI_SkillSpendAcceptation");

	UUI_SkillSpendAcceptation_C_ExecuteUbergraph_UI_SkillSpendAcceptation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SkillSpendAcceptation.UI_SkillSpendAcceptation_C.ActionDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UUI_SkillSpendAcceptation_C::ActionDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillSpendAcceptation.UI_SkillSpendAcceptation_C.ActionDispatcher__DelegateSignature");

	UUI_SkillSpendAcceptation_C_ActionDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_SkillSpendAcceptation_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(btn_Accept_2, UButton);
	READ_PTR_FULL(btn_Cancel_2, UButton);
	READ_PTR_FULL(Image, UImage);
	READ_PTR_FULL(Image_2, UImage);
	READ_PTR_FULL(Image_3, UImage);
	READ_PTR_FULL(Image_4, UImage);
	READ_PTR_FULL(Image_11, UImage);
	READ_PTR_FULL(Image_13, UImage);
	READ_PTR_FULL(Image_14, UImage);
	READ_PTR_FULL(txt_ConfirmLetter, UTextBlock);
	READ_PTR_FULL(txt_TabName, UTextBlock);
	READ_PTR_FULL(WidgetSwitcher_1, UWidgetSwitcher);
	READ_PTR_FULL(WidgetSwitcher_2, UWidgetSwitcher);
	READ_PTR_FULL(UI_SkillsReference, UUI_Book_Skills_C);
}

void UUI_SkillSpendAcceptation_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(btn_Accept_2);
	DELE_PTR_FULL(btn_Cancel_2);
	DELE_PTR_FULL(Image);
	DELE_PTR_FULL(Image_2);
	DELE_PTR_FULL(Image_3);
	DELE_PTR_FULL(Image_4);
	DELE_PTR_FULL(Image_11);
	DELE_PTR_FULL(Image_13);
	DELE_PTR_FULL(Image_14);
	DELE_PTR_FULL(txt_ConfirmLetter);
	DELE_PTR_FULL(txt_TabName);
	DELE_PTR_FULL(WidgetSwitcher_1);
	DELE_PTR_FULL(WidgetSwitcher_2);
	DELE_PTR_FULL(UI_SkillsReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
