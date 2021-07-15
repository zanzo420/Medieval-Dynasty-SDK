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

// Function UI_Reply.UI_Reply_C.Get_SelectedReplyBackground_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UUI_Reply_C::Get_SelectedReplyBackground_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reply.UI_Reply_C.Get_SelectedReplyBackground_Visibility_1");

	UUI_Reply_C_Get_SelectedReplyBackground_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UI_Reply.UI_Reply_C.GetTextColorAndOpacity
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateColor UUI_Reply_C::GetTextColorAndOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reply.UI_Reply_C.GetTextColorAndOpacity");

	UUI_Reply_C_GetTextColorAndOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UI_Reply.UI_Reply_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Reply_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reply.UI_Reply_C.Construct");

	UUI_Reply_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Reply.UI_Reply_C.BndEvt__Button_52_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Reply_C::BndEvt__Button_52_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reply.UI_Reply_C.BndEvt__Button_52_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature");

	UUI_Reply_C_BndEvt__Button_52_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Reply.UI_Reply_C.SimulateClick
// (BlueprintCallable, BlueprintEvent)
void UUI_Reply_C::SimulateClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reply.UI_Reply_C.SimulateClick");

	UUI_Reply_C_SimulateClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Reply.UI_Reply_C.SimulateHover
// (BlueprintCallable, BlueprintEvent)
void UUI_Reply_C::SimulateHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reply.UI_Reply_C.SimulateHover");

	UUI_Reply_C_SimulateHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Reply.UI_Reply_C.BndEvt__ButtonReply_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Reply_C::BndEvt__ButtonReply_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reply.UI_Reply_C.BndEvt__ButtonReply_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UUI_Reply_C_BndEvt__ButtonReply_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Reply.UI_Reply_C.ExecuteUbergraph_UI_Reply
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Reply_C::ExecuteUbergraph_UI_Reply(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reply.UI_Reply_C.ExecuteUbergraph_UI_Reply");

	UUI_Reply_C_ExecuteUbergraph_UI_Reply_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_Reply_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(ButtonReply, UButton);
	READ_PTR_FULL(Img_ReplyIcon, UImage);
	READ_PTR_FULL(Img_SelectionIcon_2, UImage);
	READ_PTR_FULL(Number, UTextBlock);
	READ_PTR_FULL(SelectedReplyBackgroundSmall, UImage);
	READ_PTR_FULL(TextBlock, UTextBlock);
	READ_PTR_FULL(TextBlock_123, UTextBlock);
	READ_PTR_FULL(OwnerWidget, UUI_Dialogue_C);
	READ_PTR_FULL(ReplyIcon, UTexture2D);
}

void UUI_Reply_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(ButtonReply);
	DELE_PTR_FULL(Img_ReplyIcon);
	DELE_PTR_FULL(Img_SelectionIcon_2);
	DELE_PTR_FULL(Number);
	DELE_PTR_FULL(SelectedReplyBackgroundSmall);
	DELE_PTR_FULL(TextBlock);
	DELE_PTR_FULL(TextBlock_123);
	DELE_PTR_FULL(OwnerWidget);
	DELE_PTR_FULL(ReplyIcon);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
