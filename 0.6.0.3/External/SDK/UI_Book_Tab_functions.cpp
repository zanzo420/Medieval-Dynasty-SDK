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

// Function UI_Book_Tab.UI_Book_Tab_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Book_Tab_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Tab.UI_Book_Tab_C.PreConstruct");

	UUI_Book_Tab_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Tab.UI_Book_Tab_C.MakeActive
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Tab_C::MakeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Tab.UI_Book_Tab_C.MakeActive");

	UUI_Book_Tab_C_MakeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Tab.UI_Book_Tab_C.MakeUnactive
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Tab_C::MakeUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Tab.UI_Book_Tab_C.MakeUnactive");

	UUI_Book_Tab_C_MakeUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Tab.UI_Book_Tab_C.SetTabNotificationVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldBeVisible                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Book_Tab_C::SetTabNotificationVisibility(bool ShouldBeVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Tab.UI_Book_Tab_C.SetTabNotificationVisibility");

	UUI_Book_Tab_C_SetTabNotificationVisibility_Params params;
	params.ShouldBeVisible = ShouldBeVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Tab.UI_Book_Tab_C.BndEvt__UI_Book_Tab_btn_Tab_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Book_Tab_C::BndEvt__UI_Book_Tab_btn_Tab_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Tab.UI_Book_Tab_C.BndEvt__UI_Book_Tab_btn_Tab_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UUI_Book_Tab_C_BndEvt__UI_Book_Tab_btn_Tab_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Tab.UI_Book_Tab_C.BndEvt__UI_Book_Tab_btn_Tab_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Book_Tab_C::BndEvt__UI_Book_Tab_btn_Tab_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Tab.UI_Book_Tab_C.BndEvt__UI_Book_Tab_btn_Tab_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UUI_Book_Tab_C_BndEvt__UI_Book_Tab_btn_Tab_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Tab.UI_Book_Tab_C.ExecuteUbergraph_UI_Book_Tab
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_Tab_C::ExecuteUbergraph_UI_Book_Tab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Tab.UI_Book_Tab_C.ExecuteUbergraph_UI_Book_Tab");

	UUI_Book_Tab_C_ExecuteUbergraph_UI_Book_Tab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_Book_Tab_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(btn_Tab, UButton);
	READ_PTR_FULL(Img_TabNotification, UImage);
	READ_PTR_FULL(txt_Tab, UTextBlock);
}

void UUI_Book_Tab_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(btn_Tab);
	DELE_PTR_FULL(Img_TabNotification);
	DELE_PTR_FULL(txt_Tab);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
