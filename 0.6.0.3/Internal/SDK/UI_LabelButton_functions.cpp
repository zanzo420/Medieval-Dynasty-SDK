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

// Function UI_LabelButton.UI_LabelButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_LabelButton_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LabelButton.UI_LabelButton_C.PreConstruct");

	UUI_LabelButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LabelButton.UI_LabelButton_C.MakeActive
// (BlueprintCallable, BlueprintEvent)
void UUI_LabelButton_C::MakeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LabelButton.UI_LabelButton_C.MakeActive");

	UUI_LabelButton_C_MakeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LabelButton.UI_LabelButton_C.MakeUnactive
// (BlueprintCallable, BlueprintEvent)
void UUI_LabelButton_C::MakeUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LabelButton.UI_LabelButton_C.MakeUnactive");

	UUI_LabelButton_C_MakeUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LabelButton.UI_LabelButton_C.UpdateIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              IconToUse                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_LabelButton_C::UpdateIcon(class UTexture2D* IconToUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LabelButton.UI_LabelButton_C.UpdateIcon");

	UUI_LabelButton_C_UpdateIcon_Params params;
	params.IconToUse = IconToUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LabelButton.UI_LabelButton_C.BndEvt__UI_LabelButton_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_LabelButton_C::BndEvt__UI_LabelButton_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LabelButton.UI_LabelButton_C.BndEvt__UI_LabelButton_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UUI_LabelButton_C_BndEvt__UI_LabelButton_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LabelButton.UI_LabelButton_C.BndEvt__UI_LabelButton_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_LabelButton_C::BndEvt__UI_LabelButton_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LabelButton.UI_LabelButton_C.BndEvt__UI_LabelButton_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UUI_LabelButton_C_BndEvt__UI_LabelButton_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LabelButton.UI_LabelButton_C.Unhover
// (BlueprintCallable, BlueprintEvent)
void UUI_LabelButton_C::Unhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LabelButton.UI_LabelButton_C.Unhover");

	UUI_LabelButton_C_Unhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LabelButton.UI_LabelButton_C.ExecuteUbergraph_UI_LabelButton
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_LabelButton_C::ExecuteUbergraph_UI_LabelButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LabelButton.UI_LabelButton_C.ExecuteUbergraph_UI_LabelButton");

	UUI_LabelButton_C_ExecuteUbergraph_UI_LabelButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LabelButton.UI_LabelButton_C.OnHoveredDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UUI_LabelButton_C::OnHoveredDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LabelButton.UI_LabelButton_C.OnHoveredDispatcher__DelegateSignature");

	UUI_LabelButton_C_OnHoveredDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
