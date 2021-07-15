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

// Function UI_QuitGameAcceptation.UI_QuitGameAcceptation_C.BindEventOnAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
void UUI_QuitGameAcceptation_C::BindEventOnAction(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuitGameAcceptation.UI_QuitGameAcceptation_C.BindEventOnAction");

	UUI_QuitGameAcceptation_C_BindEventOnAction_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuitGameAcceptation.UI_QuitGameAcceptation_C.BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_QuitGameAcceptation_C::BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuitGameAcceptation.UI_QuitGameAcceptation_C.BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_QuitGameAcceptation_C_BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuitGameAcceptation.UI_QuitGameAcceptation_C.BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_QuitGameAcceptation_C::BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuitGameAcceptation.UI_QuitGameAcceptation_C.BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UUI_QuitGameAcceptation_C_BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuitGameAcceptation.UI_QuitGameAcceptation_C.Accept
// (BlueprintCallable, BlueprintEvent)
void UUI_QuitGameAcceptation_C::Accept()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuitGameAcceptation.UI_QuitGameAcceptation_C.Accept");

	UUI_QuitGameAcceptation_C_Accept_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuitGameAcceptation.UI_QuitGameAcceptation_C.Cancel
// (BlueprintCallable, BlueprintEvent)
void UUI_QuitGameAcceptation_C::Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuitGameAcceptation.UI_QuitGameAcceptation_C.Cancel");

	UUI_QuitGameAcceptation_C_Cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuitGameAcceptation.UI_QuitGameAcceptation_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_QuitGameAcceptation_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuitGameAcceptation.UI_QuitGameAcceptation_C.Construct");

	UUI_QuitGameAcceptation_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuitGameAcceptation.UI_QuitGameAcceptation_C.MakeActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              txt                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                 btn                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_QuitGameAcceptation_C::MakeActive(class UTextBlock* txt, class UButton* btn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuitGameAcceptation.UI_QuitGameAcceptation_C.MakeActive");

	UUI_QuitGameAcceptation_C_MakeActive_Params params;
	params.txt = txt;
	params.btn = btn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuitGameAcceptation.UI_QuitGameAcceptation_C.MakeUnactive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              txt                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                 btn                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_QuitGameAcceptation_C::MakeUnactive(class UTextBlock* txt, class UButton* btn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuitGameAcceptation.UI_QuitGameAcceptation_C.MakeUnactive");

	UUI_QuitGameAcceptation_C_MakeUnactive_Params params;
	params.txt = txt;
	params.btn = btn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuitGameAcceptation.UI_QuitGameAcceptation_C.BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_QuitGameAcceptation_C::BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuitGameAcceptation.UI_QuitGameAcceptation_C.BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UUI_QuitGameAcceptation_C_BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuitGameAcceptation.UI_QuitGameAcceptation_C.BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_QuitGameAcceptation_C::BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuitGameAcceptation.UI_QuitGameAcceptation_C.BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UUI_QuitGameAcceptation_C_BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuitGameAcceptation.UI_QuitGameAcceptation_C.BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_QuitGameAcceptation_C::BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuitGameAcceptation.UI_QuitGameAcceptation_C.BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UUI_QuitGameAcceptation_C_BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuitGameAcceptation.UI_QuitGameAcceptation_C.BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_QuitGameAcceptation_C::BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuitGameAcceptation.UI_QuitGameAcceptation_C.BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UUI_QuitGameAcceptation_C_BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuitGameAcceptation.UI_QuitGameAcceptation_C.ChangeSteeringType_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Gamepad                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_QuitGameAcceptation_C::ChangeSteeringType_Event_1(bool Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuitGameAcceptation.UI_QuitGameAcceptation_C.ChangeSteeringType_Event_1");

	UUI_QuitGameAcceptation_C_ChangeSteeringType_Event_1_Params params;
	params.Gamepad = Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuitGameAcceptation.UI_QuitGameAcceptation_C.ExecuteUbergraph_UI_QuitGameAcceptation
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_QuitGameAcceptation_C::ExecuteUbergraph_UI_QuitGameAcceptation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuitGameAcceptation.UI_QuitGameAcceptation_C.ExecuteUbergraph_UI_QuitGameAcceptation");

	UUI_QuitGameAcceptation_C_ExecuteUbergraph_UI_QuitGameAcceptation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuitGameAcceptation.UI_QuitGameAcceptation_C.AcceptQuit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UUI_QuitGameAcceptation_C::AcceptQuit__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuitGameAcceptation.UI_QuitGameAcceptation_C.AcceptQuit__DelegateSignature");

	UUI_QuitGameAcceptation_C_AcceptQuit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_QuitGameAcceptation_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(btn_Accept_2, UButton);
	READ_PTR_FULL(btn_Cancel_2, UButton);
	READ_PTR_FULL(Image, UImage);
	READ_PTR_FULL(Image_2, UImage);
	READ_PTR_FULL(Image_3, UImage);
	READ_PTR_FULL(Image_12, UImage);
	READ_PTR_FULL(TextSwitcher, UWidgetSwitcher);
	READ_PTR_FULL(txt_Accept, UTextBlock);
	READ_PTR_FULL(txt_Cancel, UTextBlock);
	READ_PTR_FULL(txt_ConfirmLetter, UTextBlock);
	READ_PTR_FULL(WidgetSwitcher_1, UWidgetSwitcher);
	READ_PTR_FULL(WidgetSwitcher_2, UWidgetSwitcher);
}

void UUI_QuitGameAcceptation_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(btn_Accept_2);
	DELE_PTR_FULL(btn_Cancel_2);
	DELE_PTR_FULL(Image);
	DELE_PTR_FULL(Image_2);
	DELE_PTR_FULL(Image_3);
	DELE_PTR_FULL(Image_12);
	DELE_PTR_FULL(TextSwitcher);
	DELE_PTR_FULL(txt_Accept);
	DELE_PTR_FULL(txt_Cancel);
	DELE_PTR_FULL(txt_ConfirmLetter);
	DELE_PTR_FULL(WidgetSwitcher_1);
	DELE_PTR_FULL(WidgetSwitcher_2);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
