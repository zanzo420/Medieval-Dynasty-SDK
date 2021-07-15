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

// Function UI_MasterCountSlider.UI_MasterCountSlider_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_MasterCountSlider_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterCountSlider.UI_MasterCountSlider_C.Construct");

	UUI_MasterCountSlider_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterCountSlider.UI_MasterCountSlider_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MasterCountSlider_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterCountSlider.UI_MasterCountSlider_C.Tick");

	UUI_MasterCountSlider_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterCountSlider.UI_MasterCountSlider_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_MasterCountSlider_C::BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterCountSlider.UI_MasterCountSlider_C.BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_MasterCountSlider_C_BndEvt__btn_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterCountSlider.UI_MasterCountSlider_C.BndEvt__btn_Accept_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_MasterCountSlider_C::BndEvt__btn_Accept_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterCountSlider.UI_MasterCountSlider_C.BndEvt__btn_Accept_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UUI_MasterCountSlider_C_BndEvt__btn_Accept_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterCountSlider.UI_MasterCountSlider_C.BndEvt__slider_QuantityToDrop_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MasterCountSlider_C::BndEvt__slider_QuantityToDrop_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterCountSlider.UI_MasterCountSlider_C.BndEvt__slider_QuantityToDrop_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature");

	UUI_MasterCountSlider_C_BndEvt__slider_QuantityToDrop_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterCountSlider.UI_MasterCountSlider_C.SliderAccept
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterCountSlider_C::SliderAccept()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterCountSlider.UI_MasterCountSlider_C.SliderAccept");

	UUI_MasterCountSlider_C_SliderAccept_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterCountSlider.UI_MasterCountSlider_C.SliderCancel
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterCountSlider_C::SliderCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterCountSlider.UI_MasterCountSlider_C.SliderCancel");

	UUI_MasterCountSlider_C_SliderCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterCountSlider.UI_MasterCountSlider_C.IncreaseValue
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterCountSlider_C::IncreaseValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterCountSlider.UI_MasterCountSlider_C.IncreaseValue");

	UUI_MasterCountSlider_C_IncreaseValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterCountSlider.UI_MasterCountSlider_C.DecreaseValue
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterCountSlider_C::DecreaseValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterCountSlider.UI_MasterCountSlider_C.DecreaseValue");

	UUI_MasterCountSlider_C_DecreaseValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterCountSlider.UI_MasterCountSlider_C.SetMaxValue
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterCountSlider_C::SetMaxValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterCountSlider.UI_MasterCountSlider_C.SetMaxValue");

	UUI_MasterCountSlider_C_SetMaxValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterCountSlider.UI_MasterCountSlider_C.SetMinValue
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterCountSlider_C::SetMinValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterCountSlider.UI_MasterCountSlider_C.SetMinValue");

	UUI_MasterCountSlider_C_SetMinValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterCountSlider.UI_MasterCountSlider_C.Cost
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MasterCountSlider_C::Cost(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterCountSlider.UI_MasterCountSlider_C.Cost");

	UUI_MasterCountSlider_C_Cost_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterCountSlider.UI_MasterCountSlider_C.ChangeSteeringType_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Gamepad                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_MasterCountSlider_C::ChangeSteeringType_Event_1(bool Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterCountSlider.UI_MasterCountSlider_C.ChangeSteeringType_Event_1");

	UUI_MasterCountSlider_C_ChangeSteeringType_Event_1_Params params;
	params.Gamepad = Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterCountSlider.UI_MasterCountSlider_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_MasterCountSlider_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterCountSlider.UI_MasterCountSlider_C.PreConstruct");

	UUI_MasterCountSlider_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterCountSlider.UI_MasterCountSlider_C.ExecuteUbergraph_UI_MasterCountSlider
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MasterCountSlider_C::ExecuteUbergraph_UI_MasterCountSlider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterCountSlider.UI_MasterCountSlider_C.ExecuteUbergraph_UI_MasterCountSlider");

	UUI_MasterCountSlider_C_ExecuteUbergraph_UI_MasterCountSlider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_MasterCountSlider_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(btn_Accept, UButton);
	READ_PTR_FULL(btn_Cancel, UButton);
	READ_PTR_FULL(CostBox, UHorizontalBox);
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
	READ_PTR_FULL(Image_15, UImage);
	READ_PTR_FULL(Image_171, UImage);
	READ_PTR_FULL(Image_175, UImage);
	READ_PTR_FULL(Image_377, UImage);
	READ_PTR_FULL(ItemImage, UImage);
	READ_PTR_FULL(ItemName, UTextBlock);
	READ_PTR_FULL(MaxQuantity, UTextBlock);
	READ_PTR_FULL(slider_QuantityToDrop, USlider);
	READ_PTR_FULL(StartQuantity, UTextBlock);
	READ_PTR_FULL(txt_ActualCost, UTextBlock);
	READ_PTR_FULL(txt_ActualWeight_2, UTextBlock);
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
	READ_PTR_FULL(UI_InventoryReference, UUI_Book_C);
	READ_PTR_FULL(UI_Trading_Reference, UUI_Trading_C);
}

void UUI_MasterCountSlider_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(btn_Accept);
	DELE_PTR_FULL(btn_Cancel);
	DELE_PTR_FULL(CostBox);
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
	DELE_PTR_FULL(Image_15);
	DELE_PTR_FULL(Image_171);
	DELE_PTR_FULL(Image_175);
	DELE_PTR_FULL(Image_377);
	DELE_PTR_FULL(ItemImage);
	DELE_PTR_FULL(ItemName);
	DELE_PTR_FULL(MaxQuantity);
	DELE_PTR_FULL(slider_QuantityToDrop);
	DELE_PTR_FULL(StartQuantity);
	DELE_PTR_FULL(txt_ActualCost);
	DELE_PTR_FULL(txt_ActualWeight_2);
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
	DELE_PTR_FULL(UI_InventoryReference);
	DELE_PTR_FULL(UI_Trading_Reference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
