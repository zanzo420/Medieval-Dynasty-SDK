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

// Function UI_QuickSlot.UI_QuickSlot_C.UpdateQuickSlot
// (BlueprintCallable, BlueprintEvent)
void UUI_QuickSlot_C::UpdateQuickSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickSlot.UI_QuickSlot_C.UpdateQuickSlot");

	UUI_QuickSlot_C_UpdateQuickSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuickSlot.UI_QuickSlot_C.BindOnQuickSlotChange
// (BlueprintCallable, BlueprintEvent)
void UUI_QuickSlot_C::BindOnQuickSlotChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickSlot.UI_QuickSlot_C.BindOnQuickSlotChange");

	UUI_QuickSlot_C_BindOnQuickSlotChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuickSlot.UI_QuickSlot_C.MakeActive
// (BlueprintCallable, BlueprintEvent)
void UUI_QuickSlot_C::MakeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickSlot.UI_QuickSlot_C.MakeActive");

	UUI_QuickSlot_C_MakeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuickSlot.UI_QuickSlot_C.MakeUnactive
// (BlueprintCallable, BlueprintEvent)
void UUI_QuickSlot_C::MakeUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickSlot.UI_QuickSlot_C.MakeUnactive");

	UUI_QuickSlot_C_MakeUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuickSlot.UI_QuickSlot_C.SetClickable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Clickable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_QuickSlot_C::SetClickable(bool Clickable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickSlot.UI_QuickSlot_C.SetClickable");

	UUI_QuickSlot_C_SetClickable_Params params;
	params.Clickable = Clickable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuickSlot.UI_QuickSlot_C.BndEvt__btn_InventorySlot_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_QuickSlot_C::BndEvt__btn_InventorySlot_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickSlot.UI_QuickSlot_C.BndEvt__btn_InventorySlot_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_QuickSlot_C_BndEvt__btn_InventorySlot_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuickSlot.UI_QuickSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_QuickSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickSlot.UI_QuickSlot_C.Construct");

	UUI_QuickSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuickSlot.UI_QuickSlot_C.BndEvt__btn_InventorySlot_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_QuickSlot_C::BndEvt__btn_InventorySlot_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickSlot.UI_QuickSlot_C.BndEvt__btn_InventorySlot_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UUI_QuickSlot_C_BndEvt__btn_InventorySlot_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuickSlot.UI_QuickSlot_C.ExecuteUbergraph_UI_QuickSlot
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_QuickSlot_C::ExecuteUbergraph_UI_QuickSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickSlot.UI_QuickSlot_C.ExecuteUbergraph_UI_QuickSlot");

	UUI_QuickSlot_C_ExecuteUbergraph_UI_QuickSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_QuickSlot_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(btn_InventorySlot, UButton);
	READ_PTR_FULL(Img_BottomSelection, UImage);
	READ_PTR_FULL(img_ItemIcon, UImage);
	READ_PTR_FULL(Img_TopSelection, UImage);
	READ_PTR_FULL(text_ItemCount, UTextBlock);
	READ_PTR_FULL(PlayerControllerReference, APC_Player_C);
	READ_PTR_FULL(InventoryComponent, UInventoryComponent_C);
}

void UUI_QuickSlot_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(btn_InventorySlot);
	DELE_PTR_FULL(Img_BottomSelection);
	DELE_PTR_FULL(img_ItemIcon);
	DELE_PTR_FULL(Img_TopSelection);
	DELE_PTR_FULL(text_ItemCount);
	DELE_PTR_FULL(PlayerControllerReference);
	DELE_PTR_FULL(InventoryComponent);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
