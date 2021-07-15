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

// Function UI_HorizontalOptionButton_Checkbox.UI_HorizontalOptionButton_Checkbox_C.MakeUnactive
// (BlueprintCallable, BlueprintEvent)
void UUI_HorizontalOptionButton_Checkbox_C::MakeUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HorizontalOptionButton_Checkbox.UI_HorizontalOptionButton_Checkbox_C.MakeUnactive");

	UUI_HorizontalOptionButton_Checkbox_C_MakeUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HorizontalOptionButton_Checkbox.UI_HorizontalOptionButton_Checkbox_C.MakeActive
// (BlueprintCallable, BlueprintEvent)
void UUI_HorizontalOptionButton_Checkbox_C::MakeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HorizontalOptionButton_Checkbox.UI_HorizontalOptionButton_Checkbox_C.MakeActive");

	UUI_HorizontalOptionButton_Checkbox_C_MakeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HorizontalOptionButton_Checkbox.UI_HorizontalOptionButton_Checkbox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HorizontalOptionButton_Checkbox_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HorizontalOptionButton_Checkbox.UI_HorizontalOptionButton_Checkbox_C.PreConstruct");

	UUI_HorizontalOptionButton_Checkbox_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HorizontalOptionButton_Checkbox.UI_HorizontalOptionButton_Checkbox_C.ChangeValue
// (BlueprintCallable, BlueprintEvent)
void UUI_HorizontalOptionButton_Checkbox_C::ChangeValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HorizontalOptionButton_Checkbox.UI_HorizontalOptionButton_Checkbox_C.ChangeValue");

	UUI_HorizontalOptionButton_Checkbox_C_ChangeValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HorizontalOptionButton_Checkbox.UI_HorizontalOptionButton_Checkbox_C.BndEvt__CheckBox_139_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HorizontalOptionButton_Checkbox_C::BndEvt__CheckBox_139_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HorizontalOptionButton_Checkbox.UI_HorizontalOptionButton_Checkbox_C.BndEvt__CheckBox_139_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	UUI_HorizontalOptionButton_Checkbox_C_BndEvt__CheckBox_139_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HorizontalOptionButton_Checkbox.UI_HorizontalOptionButton_Checkbox_C.ExecuteUbergraph_UI_HorizontalOptionButton_Checkbox
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HorizontalOptionButton_Checkbox_C::ExecuteUbergraph_UI_HorizontalOptionButton_Checkbox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HorizontalOptionButton_Checkbox.UI_HorizontalOptionButton_Checkbox_C.ExecuteUbergraph_UI_HorizontalOptionButton_Checkbox");

	UUI_HorizontalOptionButton_Checkbox_C_ExecuteUbergraph_UI_HorizontalOptionButton_Checkbox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HorizontalOptionButton_Checkbox.UI_HorizontalOptionButton_Checkbox_C.OnValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HorizontalOptionButton_Checkbox_C::OnValueChanged__DelegateSignature(bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HorizontalOptionButton_Checkbox.UI_HorizontalOptionButton_Checkbox_C.OnValueChanged__DelegateSignature");

	UUI_HorizontalOptionButton_Checkbox_C_OnValueChanged__DelegateSignature_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
