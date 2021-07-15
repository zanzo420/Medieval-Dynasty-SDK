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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
