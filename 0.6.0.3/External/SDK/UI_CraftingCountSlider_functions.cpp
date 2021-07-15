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

// Function UI_CraftingCountSlider.UI_CraftingCountSlider_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_CraftingCountSlider_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingCountSlider.UI_CraftingCountSlider_C.Construct");

	UUI_CraftingCountSlider_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingCountSlider.UI_CraftingCountSlider_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_CraftingCountSlider_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingCountSlider.UI_CraftingCountSlider_C.Tick");

	UUI_CraftingCountSlider_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingCountSlider.UI_CraftingCountSlider_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_CraftingCountSlider_C::BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingCountSlider.UI_CraftingCountSlider_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_CraftingCountSlider_C_BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingCountSlider.UI_CraftingCountSlider_C.BndEvt__btn_Accept_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_CraftingCountSlider_C::BndEvt__btn_Accept_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingCountSlider.UI_CraftingCountSlider_C.BndEvt__btn_Accept_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UUI_CraftingCountSlider_C_BndEvt__btn_Accept_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingCountSlider.UI_CraftingCountSlider_C.BndEvt__slider_QuantityToDrop_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_CraftingCountSlider_C::BndEvt__slider_QuantityToDrop_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingCountSlider.UI_CraftingCountSlider_C.BndEvt__slider_QuantityToDrop_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature");

	UUI_CraftingCountSlider_C_BndEvt__slider_QuantityToDrop_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingCountSlider.UI_CraftingCountSlider_C.SliderAccept
// (BlueprintCallable, BlueprintEvent)
void UUI_CraftingCountSlider_C::SliderAccept()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingCountSlider.UI_CraftingCountSlider_C.SliderAccept");

	UUI_CraftingCountSlider_C_SliderAccept_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingCountSlider.UI_CraftingCountSlider_C.SliderCancel
// (BlueprintCallable, BlueprintEvent)
void UUI_CraftingCountSlider_C::SliderCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingCountSlider.UI_CraftingCountSlider_C.SliderCancel");

	UUI_CraftingCountSlider_C_SliderCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingCountSlider.UI_CraftingCountSlider_C.IncreaseValue
// (BlueprintCallable, BlueprintEvent)
void UUI_CraftingCountSlider_C::IncreaseValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingCountSlider.UI_CraftingCountSlider_C.IncreaseValue");

	UUI_CraftingCountSlider_C_IncreaseValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingCountSlider.UI_CraftingCountSlider_C.DecreaseValue
// (BlueprintCallable, BlueprintEvent)
void UUI_CraftingCountSlider_C::DecreaseValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingCountSlider.UI_CraftingCountSlider_C.DecreaseValue");

	UUI_CraftingCountSlider_C_DecreaseValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingCountSlider.UI_CraftingCountSlider_C.StartIncreasing
// (BlueprintCallable, BlueprintEvent)
void UUI_CraftingCountSlider_C::StartIncreasing()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingCountSlider.UI_CraftingCountSlider_C.StartIncreasing");

	UUI_CraftingCountSlider_C_StartIncreasing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingCountSlider.UI_CraftingCountSlider_C.StartDecreasing
// (BlueprintCallable, BlueprintEvent)
void UUI_CraftingCountSlider_C::StartDecreasing()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingCountSlider.UI_CraftingCountSlider_C.StartDecreasing");

	UUI_CraftingCountSlider_C_StartDecreasing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingCountSlider.UI_CraftingCountSlider_C.SetMaxValue
// (BlueprintCallable, BlueprintEvent)
void UUI_CraftingCountSlider_C::SetMaxValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingCountSlider.UI_CraftingCountSlider_C.SetMaxValue");

	UUI_CraftingCountSlider_C_SetMaxValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingCountSlider.UI_CraftingCountSlider_C.SetMinValue
// (BlueprintCallable, BlueprintEvent)
void UUI_CraftingCountSlider_C::SetMinValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingCountSlider.UI_CraftingCountSlider_C.SetMinValue");

	UUI_CraftingCountSlider_C_SetMinValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingCountSlider.UI_CraftingCountSlider_C.ChangeSteeringType_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Gamepad                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_CraftingCountSlider_C::ChangeSteeringType_Event_1(bool Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingCountSlider.UI_CraftingCountSlider_C.ChangeSteeringType_Event_1");

	UUI_CraftingCountSlider_C_ChangeSteeringType_Event_1_Params params;
	params.Gamepad = Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingCountSlider.UI_CraftingCountSlider_C.ExecuteUbergraph_UI_CraftingCountSlider
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_CraftingCountSlider_C::ExecuteUbergraph_UI_CraftingCountSlider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingCountSlider.UI_CraftingCountSlider_C.ExecuteUbergraph_UI_CraftingCountSlider");

	UUI_CraftingCountSlider_C_ExecuteUbergraph_UI_CraftingCountSlider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_CraftingCountSlider_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(btn_Accept, UButton);
	READ_PTR_FULL(btn_Cancel, UButton);
	READ_PTR_FULL(CurrentQuantity, UTextBlock);
	READ_PTR_FULL(DirtnessBar, UImage);
	READ_PTR_FULL(Image, UImage);
	READ_PTR_FULL(Image_2, UImage);
	READ_PTR_FULL(Image_3, UImage);
	READ_PTR_FULL(Image_4, UImage);
	READ_PTR_FULL(Image_5, UImage);
	READ_PTR_FULL(Image_6, UImage);
	READ_PTR_FULL(Image_7, UImage);
	READ_PTR_FULL(Image_8, UImage);
	READ_PTR_FULL(Image_9, UImage);
	READ_PTR_FULL(Image_10, UImage);
	READ_PTR_FULL(Image_11, UImage);
	READ_PTR_FULL(Image_12, UImage);
	READ_PTR_FULL(Image_13, UImage);
	READ_PTR_FULL(Image_14, UImage);
	READ_PTR_FULL(Image_171, UImage);
	READ_PTR_FULL(Image_175, UImage);
	READ_PTR_FULL(ItemImage, UImage);
	READ_PTR_FULL(ItemName, UTextBlock);
	READ_PTR_FULL(MaxQuantity, UTextBlock);
	READ_PTR_FULL(slider_QuantityToDrop, USlider);
	READ_PTR_FULL(txt_ConfirmLetter, UTextBlock);
	READ_PTR_FULL(txt_LeftLetter, UTextBlock);
	READ_PTR_FULL(txt_NextLetter, UTextBlock);
	READ_PTR_FULL(txt_PreviousLetter, UTextBlock);
	READ_PTR_FULL(txt_RightLetter, UTextBlock);
	READ_PTR_FULL(txt_TabName, UTextBlock);
	READ_PTR_FULL(WidgetSwitcher_1, UWidgetSwitcher);
	READ_PTR_FULL(WidgetSwitcher_2, UWidgetSwitcher);
	READ_PTR_FULL(WidgetSwitcher_3, UWidgetSwitcher);
	READ_PTR_FULL(WidgetSwitcher_4, UWidgetSwitcher);
	READ_PTR_FULL(WidgetSwitcher_5, UWidgetSwitcher);
	READ_PTR_FULL(WidgetSwitcher_6, UWidgetSwitcher);
	READ_PTR_FULL(UI_CraftingMenuReference, UUI_CraftingMenu_C);
}

void UUI_CraftingCountSlider_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(btn_Accept);
	DELE_PTR_FULL(btn_Cancel);
	DELE_PTR_FULL(CurrentQuantity);
	DELE_PTR_FULL(DirtnessBar);
	DELE_PTR_FULL(Image);
	DELE_PTR_FULL(Image_2);
	DELE_PTR_FULL(Image_3);
	DELE_PTR_FULL(Image_4);
	DELE_PTR_FULL(Image_5);
	DELE_PTR_FULL(Image_6);
	DELE_PTR_FULL(Image_7);
	DELE_PTR_FULL(Image_8);
	DELE_PTR_FULL(Image_9);
	DELE_PTR_FULL(Image_10);
	DELE_PTR_FULL(Image_11);
	DELE_PTR_FULL(Image_12);
	DELE_PTR_FULL(Image_13);
	DELE_PTR_FULL(Image_14);
	DELE_PTR_FULL(Image_171);
	DELE_PTR_FULL(Image_175);
	DELE_PTR_FULL(ItemImage);
	DELE_PTR_FULL(ItemName);
	DELE_PTR_FULL(MaxQuantity);
	DELE_PTR_FULL(slider_QuantityToDrop);
	DELE_PTR_FULL(txt_ConfirmLetter);
	DELE_PTR_FULL(txt_LeftLetter);
	DELE_PTR_FULL(txt_NextLetter);
	DELE_PTR_FULL(txt_PreviousLetter);
	DELE_PTR_FULL(txt_RightLetter);
	DELE_PTR_FULL(txt_TabName);
	DELE_PTR_FULL(WidgetSwitcher_1);
	DELE_PTR_FULL(WidgetSwitcher_2);
	DELE_PTR_FULL(WidgetSwitcher_3);
	DELE_PTR_FULL(WidgetSwitcher_4);
	DELE_PTR_FULL(WidgetSwitcher_5);
	DELE_PTR_FULL(WidgetSwitcher_6);
	DELE_PTR_FULL(UI_CraftingMenuReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
