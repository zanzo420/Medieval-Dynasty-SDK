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

// Function UI_MenuButton.UI_MenuButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_MenuButton_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuButton.UI_MenuButton_C.PreConstruct");

	UUI_MenuButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MenuButton.UI_MenuButton_C.MakeActive
// (BlueprintCallable, BlueprintEvent)
void UUI_MenuButton_C::MakeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuButton.UI_MenuButton_C.MakeActive");

	UUI_MenuButton_C_MakeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MenuButton.UI_MenuButton_C.MakeUnactive
// (BlueprintCallable, BlueprintEvent)
void UUI_MenuButton_C::MakeUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuButton.UI_MenuButton_C.MakeUnactive");

	UUI_MenuButton_C_MakeUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MenuButton.UI_MenuButton_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UUI_MenuButton_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuButton.UI_MenuButton_C.OnMouseEnter");

	UUI_MenuButton_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MenuButton.UI_MenuButton_C.SetSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_MenuButton_C::SetSelected(bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuButton.UI_MenuButton_C.SetSelected");

	UUI_MenuButton_C_SetSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MenuButton.UI_MenuButton_C.ExecuteUbergraph_UI_MenuButton
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MenuButton_C::ExecuteUbergraph_UI_MenuButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuButton.UI_MenuButton_C.ExecuteUbergraph_UI_MenuButton");

	UUI_MenuButton_C_ExecuteUbergraph_UI_MenuButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MenuButton.UI_MenuButton_C.OnHoveredDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UUI_MenuButton_C::OnHoveredDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MenuButton.UI_MenuButton_C.OnHoveredDispatcher__DelegateSignature");

	UUI_MenuButton_C_OnHoveredDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_MenuButton_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Button, UButton);
	READ_PTR_FULL(TextField, UTextBlock);
}

void UUI_MenuButton_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Button);
	DELE_PTR_FULL(TextField);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
