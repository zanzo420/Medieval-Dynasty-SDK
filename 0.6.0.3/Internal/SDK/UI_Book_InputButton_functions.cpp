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

// Function UI_Book_InputButton.UI_Book_InputButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Book_InputButton_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_InputButton.UI_Book_InputButton_C.PreConstruct");

	UUI_Book_InputButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_InputButton.UI_Book_InputButton_C.BndEvt__Btn_Left_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Book_InputButton_C::BndEvt__Btn_Left_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_InputButton.UI_Book_InputButton_C.BndEvt__Btn_Left_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UUI_Book_InputButton_C_BndEvt__Btn_Left_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_InputButton.UI_Book_InputButton_C.BndEvt__Btn_Right_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Book_InputButton_C::BndEvt__Btn_Right_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_InputButton.UI_Book_InputButton_C.BndEvt__Btn_Right_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UUI_Book_InputButton_C_BndEvt__Btn_Right_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_InputButton.UI_Book_InputButton_C.BndEvt__Btn_Left_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Book_InputButton_C::BndEvt__Btn_Left_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_InputButton.UI_Book_InputButton_C.BndEvt__Btn_Left_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UUI_Book_InputButton_C_BndEvt__Btn_Left_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_InputButton.UI_Book_InputButton_C.BndEvt__Btn_Right_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Book_InputButton_C::BndEvt__Btn_Right_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_InputButton.UI_Book_InputButton_C.BndEvt__Btn_Right_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UUI_Book_InputButton_C_BndEvt__Btn_Right_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_InputButton.UI_Book_InputButton_C.SetGamepadIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  ImageReference                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Input                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_InputButton_C::SetGamepadIcon(class UImage* ImageReference, const struct FName& Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_InputButton.UI_Book_InputButton_C.SetGamepadIcon");

	UUI_Book_InputButton_C_SetGamepadIcon_Params params;
	params.ImageReference = ImageReference;
	params.Input = Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_InputButton.UI_Book_InputButton_C.ChangeInputSwitcher
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Gamepad                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Book_InputButton_C::ChangeInputSwitcher(bool Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_InputButton.UI_Book_InputButton_C.ChangeInputSwitcher");

	UUI_Book_InputButton_C_ChangeInputSwitcher_Params params;
	params.Gamepad = Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_InputButton.UI_Book_InputButton_C.ChangeText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InputText                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UUI_Book_InputButton_C::ChangeText(const struct FText& InputText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_InputButton.UI_Book_InputButton_C.ChangeText");

	UUI_Book_InputButton_C_ChangeText_Params params;
	params.InputText = InputText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_InputButton.UI_Book_InputButton_C.SetKeyboardIcon
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   InputPin                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USizeBox*                Target2                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_InputButton_C::SetKeyboardIcon(class UImage* Target, const struct FName& InputPin, class USizeBox* Target2)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_InputButton.UI_Book_InputButton_C.SetKeyboardIcon");

	UUI_Book_InputButton_C_SetKeyboardIcon_Params params;
	params.Target = Target;
	params.InputPin = InputPin;
	params.Target2 = Target2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_InputButton.UI_Book_InputButton_C.ExecuteUbergraph_UI_Book_InputButton
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_InputButton_C::ExecuteUbergraph_UI_Book_InputButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_InputButton.UI_Book_InputButton_C.ExecuteUbergraph_UI_Book_InputButton");

	UUI_Book_InputButton_C_ExecuteUbergraph_UI_Book_InputButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
