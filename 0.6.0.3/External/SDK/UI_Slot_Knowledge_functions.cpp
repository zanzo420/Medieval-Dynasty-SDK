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

// Function UI_Slot_Knowledge.UI_Slot_Knowledge_C.MakeUnactive
// (BlueprintCallable, BlueprintEvent)
void UUI_Slot_Knowledge_C::MakeUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_Knowledge.UI_Slot_Knowledge_C.MakeUnactive");

	UUI_Slot_Knowledge_C_MakeUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Slot_Knowledge.UI_Slot_Knowledge_C.MakeActive
// (BlueprintCallable, BlueprintEvent)
void UUI_Slot_Knowledge_C::MakeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_Knowledge.UI_Slot_Knowledge_C.MakeActive");

	UUI_Slot_Knowledge_C_MakeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Slot_Knowledge.UI_Slot_Knowledge_C.BndEvt__btn_ItemSlot_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Slot_Knowledge_C::BndEvt__btn_ItemSlot_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_Knowledge.UI_Slot_Knowledge_C.BndEvt__btn_ItemSlot_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_Slot_Knowledge_C_BndEvt__btn_ItemSlot_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Slot_Knowledge.UI_Slot_Knowledge_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Slot_Knowledge_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_Knowledge.UI_Slot_Knowledge_C.PreConstruct");

	UUI_Slot_Knowledge_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Slot_Knowledge.UI_Slot_Knowledge_C.BndEvt__UI_Slot_Knowledge_btn_KnowledgeSlot_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Slot_Knowledge_C::BndEvt__UI_Slot_Knowledge_btn_KnowledgeSlot_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_Knowledge.UI_Slot_Knowledge_C.BndEvt__UI_Slot_Knowledge_btn_KnowledgeSlot_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UUI_Slot_Knowledge_C_BndEvt__UI_Slot_Knowledge_btn_KnowledgeSlot_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Slot_Knowledge.UI_Slot_Knowledge_C.BndEvt__UI_Slot_Knowledge_btn_KnowledgeSlot_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Slot_Knowledge_C::BndEvt__UI_Slot_Knowledge_btn_KnowledgeSlot_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_Knowledge.UI_Slot_Knowledge_C.BndEvt__UI_Slot_Knowledge_btn_KnowledgeSlot_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UUI_Slot_Knowledge_C_BndEvt__UI_Slot_Knowledge_btn_KnowledgeSlot_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Slot_Knowledge.UI_Slot_Knowledge_C.ExecuteUbergraph_UI_Slot_Knowledge
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Slot_Knowledge_C::ExecuteUbergraph_UI_Slot_Knowledge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_Knowledge.UI_Slot_Knowledge_C.ExecuteUbergraph_UI_Slot_Knowledge");

	UUI_Slot_Knowledge_C_ExecuteUbergraph_UI_Slot_Knowledge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_Slot_Knowledge_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Border, UBorder);
	READ_PTR_FULL(btn_KnowledgeSlot, UButton);
	READ_PTR_FULL(txt_Name, UTextBlock);
	READ_PTR_FULL(UI_Journal_Reference, UUI_Book_Quest_C);
}

void UUI_Slot_Knowledge_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Border);
	DELE_PTR_FULL(btn_KnowledgeSlot);
	DELE_PTR_FULL(txt_Name);
	DELE_PTR_FULL(UI_Journal_Reference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
