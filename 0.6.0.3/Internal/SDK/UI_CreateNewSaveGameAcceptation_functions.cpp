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

// Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.CheckIfTextIsInvalidName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   TextToCheck                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsInvalid                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_CreateNewSaveGameAcceptation_C::CheckIfTextIsInvalidName(const struct FText& TextToCheck, bool* IsInvalid)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.CheckIfTextIsInvalidName");

	UUI_CreateNewSaveGameAcceptation_C_CheckIfTextIsInvalidName_Params params;
	params.TextToCheck = TextToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsInvalid != nullptr)
		*IsInvalid = params.IsInvalid;

}


// Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.CheckIfTextContainsInvalidLetter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   TextToCheck                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Contains                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_CreateNewSaveGameAcceptation_C::CheckIfTextContainsInvalidLetter(const struct FText& TextToCheck, bool* Contains)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.CheckIfTextContainsInvalidLetter");

	UUI_CreateNewSaveGameAcceptation_C_CheckIfTextContainsInvalidLetter_Params params;
	params.TextToCheck = TextToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Contains != nullptr)
		*Contains = params.Contains;

}


// Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_CreateNewSaveGameAcceptation_C::BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_CreateNewSaveGameAcceptation_C_BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_CreateNewSaveGameAcceptation_C::BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UUI_CreateNewSaveGameAcceptation_C_BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.Accept
// (BlueprintCallable, BlueprintEvent)
void UUI_CreateNewSaveGameAcceptation_C::Accept()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.Accept");

	UUI_CreateNewSaveGameAcceptation_C_Accept_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.Cancel
// (BlueprintCallable, BlueprintEvent)
void UUI_CreateNewSaveGameAcceptation_C::Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.Cancel");

	UUI_CreateNewSaveGameAcceptation_C_Cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.MakeActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              txt                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                 btn                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_CreateNewSaveGameAcceptation_C::MakeActive(class UTextBlock* txt, class UButton* btn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.MakeActive");

	UUI_CreateNewSaveGameAcceptation_C_MakeActive_Params params;
	params.txt = txt;
	params.btn = btn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.MakeUnactive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              txt                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                 btn                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_CreateNewSaveGameAcceptation_C::MakeUnactive(class UTextBlock* txt, class UButton* btn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.MakeUnactive");

	UUI_CreateNewSaveGameAcceptation_C_MakeUnactive_Params params;
	params.txt = txt;
	params.btn = btn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_CreateNewSaveGameAcceptation_C::BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UUI_CreateNewSaveGameAcceptation_C_BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_CreateNewSaveGameAcceptation_C::BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UUI_CreateNewSaveGameAcceptation_C_BndEvt__btn_Accept_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_CreateNewSaveGameAcceptation_C::BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UUI_CreateNewSaveGameAcceptation_C_BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_CreateNewSaveGameAcceptation_C::BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UUI_CreateNewSaveGameAcceptation_C_BndEvt__btn_Cancel_1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_CreateNewSaveGameAcceptation_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.Construct");

	UUI_CreateNewSaveGameAcceptation_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.ChangeSteeringType_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Gamepad                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_CreateNewSaveGameAcceptation_C::ChangeSteeringType_Event_1(bool Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.ChangeSteeringType_Event_1");

	UUI_CreateNewSaveGameAcceptation_C_ChangeSteeringType_Event_1_Params params;
	params.Gamepad = Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.BndEvt__UserSaveNameBox_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<SlateCore_ETextCommit> CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_CreateNewSaveGameAcceptation_C::BndEvt__UserSaveNameBox_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.BndEvt__UserSaveNameBox_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UUI_CreateNewSaveGameAcceptation_C_BndEvt__UserSaveNameBox_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.BndEvt__UserSaveNameBox_K2Node_ComponentBoundEvent_7_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UUI_CreateNewSaveGameAcceptation_C::BndEvt__UserSaveNameBox_K2Node_ComponentBoundEvent_7_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.BndEvt__UserSaveNameBox_K2Node_ComponentBoundEvent_7_OnEditableTextBoxChangedEvent__DelegateSignature");

	UUI_CreateNewSaveGameAcceptation_C_BndEvt__UserSaveNameBox_K2Node_ComponentBoundEvent_7_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.ExecuteUbergraph_UI_CreateNewSaveGameAcceptation
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_CreateNewSaveGameAcceptation_C::ExecuteUbergraph_UI_CreateNewSaveGameAcceptation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CreateNewSaveGameAcceptation.UI_CreateNewSaveGameAcceptation_C.ExecuteUbergraph_UI_CreateNewSaveGameAcceptation");

	UUI_CreateNewSaveGameAcceptation_C_ExecuteUbergraph_UI_CreateNewSaveGameAcceptation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
