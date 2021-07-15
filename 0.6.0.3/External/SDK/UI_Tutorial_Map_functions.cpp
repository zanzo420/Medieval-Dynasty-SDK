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

// Function UI_Tutorial_Map.UI_Tutorial_Map_C.TutorialPrevious
// (BlueprintCallable, BlueprintEvent)
void UUI_Tutorial_Map_C::TutorialPrevious()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Tutorial_Map.UI_Tutorial_Map_C.TutorialPrevious");

	UUI_Tutorial_Map_C_TutorialPrevious_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Tutorial_Map.UI_Tutorial_Map_C.BndEvt__btn_LeftCard_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Tutorial_Map_C::BndEvt__btn_LeftCard_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Tutorial_Map.UI_Tutorial_Map_C.BndEvt__btn_LeftCard_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_Tutorial_Map_C_BndEvt__btn_LeftCard_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Tutorial_Map.UI_Tutorial_Map_C.TutorialNext
// (BlueprintCallable, BlueprintEvent)
void UUI_Tutorial_Map_C::TutorialNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Tutorial_Map.UI_Tutorial_Map_C.TutorialNext");

	UUI_Tutorial_Map_C_TutorialNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Tutorial_Map.UI_Tutorial_Map_C.BndEvt__btn_RightCard_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Tutorial_Map_C::BndEvt__btn_RightCard_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Tutorial_Map.UI_Tutorial_Map_C.BndEvt__btn_RightCard_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UUI_Tutorial_Map_C_BndEvt__btn_RightCard_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Tutorial_Map.UI_Tutorial_Map_C.TutorialClose
// (BlueprintCallable, BlueprintEvent)
void UUI_Tutorial_Map_C::TutorialClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Tutorial_Map.UI_Tutorial_Map_C.TutorialClose");

	UUI_Tutorial_Map_C_TutorialClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Tutorial_Map.UI_Tutorial_Map_C.BndEvt__btn_Return_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Tutorial_Map_C::BndEvt__btn_Return_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Tutorial_Map.UI_Tutorial_Map_C.BndEvt__btn_Return_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UUI_Tutorial_Map_C_BndEvt__btn_Return_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Tutorial_Map.UI_Tutorial_Map_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Tutorial_Map_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Tutorial_Map.UI_Tutorial_Map_C.Construct");

	UUI_Tutorial_Map_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Tutorial_Map.UI_Tutorial_Map_C.ExecuteUbergraph_UI_Tutorial_Map
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Tutorial_Map_C::ExecuteUbergraph_UI_Tutorial_Map(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Tutorial_Map.UI_Tutorial_Map_C.ExecuteUbergraph_UI_Tutorial_Map");

	UUI_Tutorial_Map_C_ExecuteUbergraph_UI_Tutorial_Map_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_Tutorial_Map_C::AfterRead()
{
	UUI_Tutorial_Master_C::AfterRead();

	READ_PTR_FULL(btn_LeftCard, UButton);
	READ_PTR_FULL(btn_Return, UButton);
	READ_PTR_FULL(btn_RightCard, UButton);
	READ_PTR_FULL(Image_14, UImage);
	READ_PTR_FULL(Image_15, UImage);
	READ_PTR_FULL(Image_18, UImage);
	READ_PTR_FULL(Image_19, UImage);
	READ_PTR_FULL(Image_20, UImage);
	READ_PTR_FULL(Image_21, UImage);
	READ_PTR_FULL(Image_58, UImage);
	READ_PTR_FULL(Return, UTextBlock);
	READ_PTR_FULL(ReturnBox, UHorizontalBox);
	READ_PTR_FULL(TutorialCardSwitcher, UWidgetSwitcher);
	READ_PTR_FULL(txt_NextLetter, UTextBlock);
	READ_PTR_FULL(txt_PreviousLetter, UTextBlock);
	READ_PTR_FULL(txt_TutorialCard, UTextBlock);
}

void UUI_Tutorial_Map_C::BeforeDelete()
{
	UUI_Tutorial_Master_C::BeforeDelete();

	DELE_PTR_FULL(btn_LeftCard);
	DELE_PTR_FULL(btn_Return);
	DELE_PTR_FULL(btn_RightCard);
	DELE_PTR_FULL(Image_14);
	DELE_PTR_FULL(Image_15);
	DELE_PTR_FULL(Image_18);
	DELE_PTR_FULL(Image_19);
	DELE_PTR_FULL(Image_20);
	DELE_PTR_FULL(Image_21);
	DELE_PTR_FULL(Image_58);
	DELE_PTR_FULL(Return);
	DELE_PTR_FULL(ReturnBox);
	DELE_PTR_FULL(TutorialCardSwitcher);
	DELE_PTR_FULL(txt_NextLetter);
	DELE_PTR_FULL(txt_PreviousLetter);
	DELE_PTR_FULL(txt_TutorialCard);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
