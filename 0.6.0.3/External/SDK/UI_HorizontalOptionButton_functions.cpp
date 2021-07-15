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

// Function UI_HorizontalOptionButton.UI_HorizontalOptionButton_C.BndEvt__Button_10_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_HorizontalOptionButton_C::BndEvt__Button_10_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HorizontalOptionButton.UI_HorizontalOptionButton_C.BndEvt__Button_10_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UUI_HorizontalOptionButton_C_BndEvt__Button_10_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HorizontalOptionButton.UI_HorizontalOptionButton_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_HorizontalOptionButton_C::BndEvt__ButtonRight_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HorizontalOptionButton.UI_HorizontalOptionButton_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature");

	UUI_HorizontalOptionButton_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HorizontalOptionButton.UI_HorizontalOptionButton_C.MakeUnactive
// (BlueprintCallable, BlueprintEvent)
void UUI_HorizontalOptionButton_C::MakeUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HorizontalOptionButton.UI_HorizontalOptionButton_C.MakeUnactive");

	UUI_HorizontalOptionButton_C_MakeUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HorizontalOptionButton.UI_HorizontalOptionButton_C.MakeActive
// (BlueprintCallable, BlueprintEvent)
void UUI_HorizontalOptionButton_C::MakeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HorizontalOptionButton.UI_HorizontalOptionButton_C.MakeActive");

	UUI_HorizontalOptionButton_C_MakeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HorizontalOptionButton.UI_HorizontalOptionButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HorizontalOptionButton_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HorizontalOptionButton.UI_HorizontalOptionButton_C.PreConstruct");

	UUI_HorizontalOptionButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HorizontalOptionButton.UI_HorizontalOptionButton_C.ExecuteUbergraph_UI_HorizontalOptionButton
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HorizontalOptionButton_C::ExecuteUbergraph_UI_HorizontalOptionButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HorizontalOptionButton.UI_HorizontalOptionButton_C.ExecuteUbergraph_UI_HorizontalOptionButton");

	UUI_HorizontalOptionButton_C_ExecuteUbergraph_UI_HorizontalOptionButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_HorizontalOptionButton_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Border_7, UBorder);
	READ_PTR_FULL(Button_1, UButton);
	READ_PTR_FULL(ButtonLeft, UButton);
	READ_PTR_FULL(ButtonRight, UButton);
	READ_PTR_FULL(MapBox, UHorizontalBox);
	READ_PTR_FULL(TextBlock_1, UTextBlock);
	READ_PTR_FULL(TextBlock_2, UTextBlock);
	READ_PTR_FULL(TextLeftObject, UTextBlock);
	READ_PTR_FULL(TextRightObject, UTextBlock);
	READ_PTR_FULL(OptionsVerticalMenuReference, UUI_OptionsVerticalMenu_C);
	READ_PTR_FULL(NewGameConfigurationReference, UUI_NewGameConfigurationMenu_C);
}

void UUI_HorizontalOptionButton_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Border_7);
	DELE_PTR_FULL(Button_1);
	DELE_PTR_FULL(ButtonLeft);
	DELE_PTR_FULL(ButtonRight);
	DELE_PTR_FULL(MapBox);
	DELE_PTR_FULL(TextBlock_1);
	DELE_PTR_FULL(TextBlock_2);
	DELE_PTR_FULL(TextLeftObject);
	DELE_PTR_FULL(TextRightObject);
	DELE_PTR_FULL(OptionsVerticalMenuReference);
	DELE_PTR_FULL(NewGameConfigurationReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
