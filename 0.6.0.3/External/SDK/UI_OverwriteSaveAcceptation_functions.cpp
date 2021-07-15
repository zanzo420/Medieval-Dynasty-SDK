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

// Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.CheckIfTextIsInvalidName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   TextToCheck                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsInvalid                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_OverwriteSaveAcceptation_C::CheckIfTextIsInvalidName(const struct FText& TextToCheck, bool* IsInvalid)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.CheckIfTextIsInvalidName");

	UUI_OverwriteSaveAcceptation_C_CheckIfTextIsInvalidName_Params params;
	params.TextToCheck = TextToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsInvalid != nullptr)
		*IsInvalid = params.IsInvalid;

}


// Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.CheckIfTextContainsInvalidLetter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   TextToCheck                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Contains                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_OverwriteSaveAcceptation_C::CheckIfTextContainsInvalidLetter(const struct FText& TextToCheck, bool* Contains)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.CheckIfTextContainsInvalidLetter");

	UUI_OverwriteSaveAcceptation_C_CheckIfTextContainsInvalidLetter_Params params;
	params.TextToCheck = TextToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Contains != nullptr)
		*Contains = params.Contains;

}


// Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_OverwriteSaveAcceptation_C::BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_OverwriteSaveAcceptation_C_BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_OverwriteSaveAcceptation_C::BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UUI_OverwriteSaveAcceptation_C_BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.Accept
// (BlueprintCallable, BlueprintEvent)
void UUI_OverwriteSaveAcceptation_C::Accept()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.Accept");

	UUI_OverwriteSaveAcceptation_C_Accept_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.Cancel
// (BlueprintCallable, BlueprintEvent)
void UUI_OverwriteSaveAcceptation_C::Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.Cancel");

	UUI_OverwriteSaveAcceptation_C_Cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.MakeActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              txt                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                 btn                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OverwriteSaveAcceptation_C::MakeActive(class UTextBlock* txt, class UButton* btn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.MakeActive");

	UUI_OverwriteSaveAcceptation_C_MakeActive_Params params;
	params.txt = txt;
	params.btn = btn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.MakeUnactive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              txt                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                 btn                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OverwriteSaveAcceptation_C::MakeUnactive(class UTextBlock* txt, class UButton* btn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.MakeUnactive");

	UUI_OverwriteSaveAcceptation_C_MakeUnactive_Params params;
	params.txt = txt;
	params.btn = btn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_OverwriteSaveAcceptation_C::BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UUI_OverwriteSaveAcceptation_C_BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_OverwriteSaveAcceptation_C::BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UUI_OverwriteSaveAcceptation_C_BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_OverwriteSaveAcceptation_C::BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UUI_OverwriteSaveAcceptation_C_BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_OverwriteSaveAcceptation_C::BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UUI_OverwriteSaveAcceptation_C_BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_OverwriteSaveAcceptation_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.Construct");

	UUI_OverwriteSaveAcceptation_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.ChangeSteeringType_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Gamepad                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_OverwriteSaveAcceptation_C::ChangeSteeringType_Event_1(bool Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.ChangeSteeringType_Event_1");

	UUI_OverwriteSaveAcceptation_C_ChangeSteeringType_Event_1_Params params;
	params.Gamepad = Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.BndEvt__UserSaveNameBox_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<SlateCore_ETextCommit> CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OverwriteSaveAcceptation_C::BndEvt__UserSaveNameBox_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.BndEvt__UserSaveNameBox_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UUI_OverwriteSaveAcceptation_C_BndEvt__UserSaveNameBox_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.BndEvt__UserSaveNameBox_K2Node_ComponentBoundEvent_7_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UUI_OverwriteSaveAcceptation_C::BndEvt__UserSaveNameBox_K2Node_ComponentBoundEvent_7_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.BndEvt__UserSaveNameBox_K2Node_ComponentBoundEvent_7_OnEditableTextBoxChangedEvent__DelegateSignature");

	UUI_OverwriteSaveAcceptation_C_BndEvt__UserSaveNameBox_K2Node_ComponentBoundEvent_7_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.ExecuteUbergraph_UI_OverwriteSaveAcceptation
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OverwriteSaveAcceptation_C::ExecuteUbergraph_UI_OverwriteSaveAcceptation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OverwriteSaveAcceptation.UI_OverwriteSaveAcceptation_C.ExecuteUbergraph_UI_OverwriteSaveAcceptation");

	UUI_OverwriteSaveAcceptation_C_ExecuteUbergraph_UI_OverwriteSaveAcceptation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_OverwriteSaveAcceptation_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(btn_Accept_2, UButton);
	READ_PTR_FULL(btn_Cancel_2, UButton);
	READ_PTR_FULL(Image, UImage);
	READ_PTR_FULL(Image_2, UImage);
	READ_PTR_FULL(Image_3, UImage);
	READ_PTR_FULL(Image_12, UImage);
	READ_PTR_FULL(txt_Accept, UTextBlock);
	READ_PTR_FULL(txt_Cancel, UTextBlock);
	READ_PTR_FULL(txt_ConfirmLetter, UTextBlock);
	READ_PTR_FULL(UserSaveNameBox, UEditableTextBox);
	READ_PTR_FULL(WidgetSwitcher_1, UWidgetSwitcher);
	READ_PTR_FULL(WidgetSwitcher_2, UWidgetSwitcher);
	READ_PTR_FULL(SaveMenuReference, UUI_SaveMenu_C);
}

void UUI_OverwriteSaveAcceptation_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(btn_Accept_2);
	DELE_PTR_FULL(btn_Cancel_2);
	DELE_PTR_FULL(Image);
	DELE_PTR_FULL(Image_2);
	DELE_PTR_FULL(Image_3);
	DELE_PTR_FULL(Image_12);
	DELE_PTR_FULL(txt_Accept);
	DELE_PTR_FULL(txt_Cancel);
	DELE_PTR_FULL(txt_ConfirmLetter);
	DELE_PTR_FULL(UserSaveNameBox);
	DELE_PTR_FULL(WidgetSwitcher_1);
	DELE_PTR_FULL(WidgetSwitcher_2);
	DELE_PTR_FULL(SaveMenuReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
