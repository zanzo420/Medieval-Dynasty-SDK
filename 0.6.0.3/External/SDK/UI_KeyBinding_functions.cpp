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

// Function UI_KeyBinding.UI_KeyBinding_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_KeyBinding_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyBinding.UI_KeyBinding_C.PreConstruct");

	UUI_KeyBinding_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_KeyBinding.UI_KeyBinding_C.MakeUnactive
// (BlueprintCallable, BlueprintEvent)
void UUI_KeyBinding_C::MakeUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyBinding.UI_KeyBinding_C.MakeUnactive");

	UUI_KeyBinding_C_MakeUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_KeyBinding.UI_KeyBinding_C.MakeActive
// (BlueprintCallable, BlueprintEvent)
void UUI_KeyBinding_C::MakeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyBinding.UI_KeyBinding_C.MakeActive");

	UUI_KeyBinding_C_MakeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_KeyBinding.UI_KeyBinding_C.Refresh
// (BlueprintCallable, BlueprintEvent)
void UUI_KeyBinding_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyBinding.UI_KeyBinding_C.Refresh");

	UUI_KeyBinding_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_KeyBinding.UI_KeyBinding_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_KeyBinding_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyBinding.UI_KeyBinding_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_KeyBinding_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_KeyBinding.UI_KeyBinding_C.ExecuteUbergraph_UI_KeyBinding
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_KeyBinding_C::ExecuteUbergraph_UI_KeyBinding(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_KeyBinding.UI_KeyBinding_C.ExecuteUbergraph_UI_KeyBinding");

	UUI_KeyBinding_C_ExecuteUbergraph_UI_KeyBinding_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_KeyBinding_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Border_7, UBorder);
	READ_PTR_FULL(Button_1, UButton);
	READ_PTR_FULL(Img_InputIcon, UImage);
	READ_PTR_FULL(MapBox, UHorizontalBox);
	READ_PTR_FULL(txt_InputLetter, UTextBlock);
	READ_PTR_FULL(txt_InputText, UTextBlock);
	READ_PTR_FULL(CustomIcon, UTexture2D);
	READ_PTR_FULL(Icon, UObject);
	READ_PTR_FULL(OptionsMenuReference, UUI_OptionsVerticalMenu_C);
}

void UUI_KeyBinding_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Border_7);
	DELE_PTR_FULL(Button_1);
	DELE_PTR_FULL(Img_InputIcon);
	DELE_PTR_FULL(MapBox);
	DELE_PTR_FULL(txt_InputLetter);
	DELE_PTR_FULL(txt_InputText);
	DELE_PTR_FULL(CustomIcon);
	DELE_PTR_FULL(Icon);
	DELE_PTR_FULL(OptionsMenuReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
