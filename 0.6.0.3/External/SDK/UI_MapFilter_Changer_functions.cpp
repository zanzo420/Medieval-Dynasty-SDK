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

// Function UI_MapFilter_Changer.UI_MapFilter_Changer_C.BndEvt__btn_Up_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_MapFilter_Changer_C::BndEvt__btn_Up_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapFilter_Changer.UI_MapFilter_Changer_C.BndEvt__btn_Up_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UUI_MapFilter_Changer_C_BndEvt__btn_Up_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MapFilter_Changer.UI_MapFilter_Changer_C.BndEvt__btn_Down_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_MapFilter_Changer_C::BndEvt__btn_Down_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapFilter_Changer.UI_MapFilter_Changer_C.BndEvt__btn_Down_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UUI_MapFilter_Changer_C_BndEvt__btn_Down_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MapFilter_Changer.UI_MapFilter_Changer_C.IncreaseIndex
// (BlueprintCallable, BlueprintEvent)
void UUI_MapFilter_Changer_C::IncreaseIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapFilter_Changer.UI_MapFilter_Changer_C.IncreaseIndex");

	UUI_MapFilter_Changer_C_IncreaseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MapFilter_Changer.UI_MapFilter_Changer_C.DecreaseIndex
// (BlueprintCallable, BlueprintEvent)
void UUI_MapFilter_Changer_C::DecreaseIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapFilter_Changer.UI_MapFilter_Changer_C.DecreaseIndex");

	UUI_MapFilter_Changer_C_DecreaseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MapFilter_Changer.UI_MapFilter_Changer_C.InitFilterChanger
// (BlueprintCallable, BlueprintEvent)
void UUI_MapFilter_Changer_C::InitFilterChanger()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapFilter_Changer.UI_MapFilter_Changer_C.InitFilterChanger");

	UUI_MapFilter_Changer_C_InitFilterChanger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MapFilter_Changer.UI_MapFilter_Changer_C.ExecuteUbergraph_UI_MapFilter_Changer
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MapFilter_Changer_C::ExecuteUbergraph_UI_MapFilter_Changer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapFilter_Changer.UI_MapFilter_Changer_C.ExecuteUbergraph_UI_MapFilter_Changer");

	UUI_MapFilter_Changer_C_ExecuteUbergraph_UI_MapFilter_Changer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MapFilter_Changer.UI_MapFilter_Changer_C.OnMapFilterChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UUI_MapFilter_Changer_C::OnMapFilterChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapFilter_Changer.UI_MapFilter_Changer_C.OnMapFilterChanged__DelegateSignature");

	UUI_MapFilter_Changer_C_OnMapFilterChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_MapFilter_Changer_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Btn_Left, UButton);
	READ_PTR_FULL(Btn_Right, UButton);
	READ_PTR_FULL(Image_135, UImage);
	READ_PTR_FULL(txt_SelectedFilter, UTextBlock);
	READ_PTR_FULL(MapReference, UUI_Book_Map_C);
}

void UUI_MapFilter_Changer_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Btn_Left);
	DELE_PTR_FULL(Btn_Right);
	DELE_PTR_FULL(Image_135);
	DELE_PTR_FULL(txt_SelectedFilter);
	DELE_PTR_FULL(MapReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
