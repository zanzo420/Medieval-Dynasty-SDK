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

// Function UI_PlayerDeathChildTransition.UI_PlayerDeathChildTransition_C.ChangeSteeringType_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Gamepad                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_PlayerDeathChildTransition_C::ChangeSteeringType_Event_1(bool Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PlayerDeathChildTransition.UI_PlayerDeathChildTransition_C.ChangeSteeringType_Event_1");

	UUI_PlayerDeathChildTransition_C_ChangeSteeringType_Event_1_Params params;
	params.Gamepad = Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_PlayerDeathChildTransition.UI_PlayerDeathChildTransition_C.BndEvt__btn_Confirm_Keyboard_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_PlayerDeathChildTransition_C::BndEvt__btn_Confirm_Keyboard_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PlayerDeathChildTransition.UI_PlayerDeathChildTransition_C.BndEvt__btn_Confirm_Keyboard_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_PlayerDeathChildTransition_C_BndEvt__btn_Confirm_Keyboard_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_PlayerDeathChildTransition.UI_PlayerDeathChildTransition_C.Confirm
// (BlueprintCallable, BlueprintEvent)
void UUI_PlayerDeathChildTransition_C::Confirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PlayerDeathChildTransition.UI_PlayerDeathChildTransition_C.Confirm");

	UUI_PlayerDeathChildTransition_C_Confirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_PlayerDeathChildTransition.UI_PlayerDeathChildTransition_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_PlayerDeathChildTransition_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PlayerDeathChildTransition.UI_PlayerDeathChildTransition_C.Construct");

	UUI_PlayerDeathChildTransition_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_PlayerDeathChildTransition.UI_PlayerDeathChildTransition_C.ExecuteUbergraph_UI_PlayerDeathChildTransition
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_PlayerDeathChildTransition_C::ExecuteUbergraph_UI_PlayerDeathChildTransition(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PlayerDeathChildTransition.UI_PlayerDeathChildTransition_C.ExecuteUbergraph_UI_PlayerDeathChildTransition");

	UUI_PlayerDeathChildTransition_C_ExecuteUbergraph_UI_PlayerDeathChildTransition_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_PlayerDeathChildTransition_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(btn_Confirm_Gamepad, UButton);
	READ_PTR_FULL(btn_Confirm_Keyboard, UButton);
	READ_PTR_FULL(Image, UImage);
	READ_PTR_FULL(Image_2, UImage);
	READ_PTR_FULL(Image_55, UImage);
	READ_PTR_FULL(Image_403, UImage);
	READ_PTR_FULL(InteractionBox, UHorizontalBox);
	READ_PTR_FULL(InteractionText, UTextBlock);
	READ_PTR_FULL(txt_ConfirmLetter, UTextBlock);
	READ_PTR_FULL(txt_DeathText, UTextBlock);
	READ_PTR_FULL(txt_FatherText, UTextBlock);
	READ_PTR_FULL(WidgetSwitcher_4, UWidgetSwitcher);
}

void UUI_PlayerDeathChildTransition_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(btn_Confirm_Gamepad);
	DELE_PTR_FULL(btn_Confirm_Keyboard);
	DELE_PTR_FULL(Image);
	DELE_PTR_FULL(Image_2);
	DELE_PTR_FULL(Image_55);
	DELE_PTR_FULL(Image_403);
	DELE_PTR_FULL(InteractionBox);
	DELE_PTR_FULL(InteractionText);
	DELE_PTR_FULL(txt_ConfirmLetter);
	DELE_PTR_FULL(txt_DeathText);
	DELE_PTR_FULL(txt_FatherText);
	DELE_PTR_FULL(WidgetSwitcher_4);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
