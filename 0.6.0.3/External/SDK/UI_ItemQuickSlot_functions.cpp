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

// Function UI_ItemQuickSlot.UI_ItemQuickSlot_C.UpdateQuickSlot
// (BlueprintCallable, BlueprintEvent)
void UUI_ItemQuickSlot_C::UpdateQuickSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemQuickSlot.UI_ItemQuickSlot_C.UpdateQuickSlot");

	UUI_ItemQuickSlot_C_UpdateQuickSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ItemQuickSlot.UI_ItemQuickSlot_C.BindOnQuickSlotChange
// (BlueprintCallable, BlueprintEvent)
void UUI_ItemQuickSlot_C::BindOnQuickSlotChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemQuickSlot.UI_ItemQuickSlot_C.BindOnQuickSlotChange");

	UUI_ItemQuickSlot_C_BindOnQuickSlotChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ItemQuickSlot.UI_ItemQuickSlot_C.UpdateTorchSlot
// (BlueprintCallable, BlueprintEvent)
void UUI_ItemQuickSlot_C::UpdateTorchSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemQuickSlot.UI_ItemQuickSlot_C.UpdateTorchSlot");

	UUI_ItemQuickSlot_C_UpdateTorchSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ItemQuickSlot.UI_ItemQuickSlot_C.ExecuteUbergraph_UI_ItemQuickSlot
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ItemQuickSlot_C::ExecuteUbergraph_UI_ItemQuickSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ItemQuickSlot.UI_ItemQuickSlot_C.ExecuteUbergraph_UI_ItemQuickSlot");

	UUI_ItemQuickSlot_C_ExecuteUbergraph_UI_ItemQuickSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_ItemQuickSlot_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Capacity, UImage);
	READ_PTR_FULL(CapacityOverlay, UCanvasPanel);
	READ_PTR_FULL(ConditionFull, UImage);
	READ_PTR_FULL(ConditionHalf, UImage);
	READ_PTR_FULL(ConditionOverlay, UCanvasPanel);
	READ_PTR_FULL(Image_456, UImage);
	READ_PTR_FULL(img_ItemIcon, UImage);
	READ_PTR_FULL(ItemName, UTextBlock);
	READ_PTR_FULL(ModeName, UTextBlock);
	READ_PTR_FULL(UI_HUD_TorchSlot, UUI_HUD_TorchSlot_C);
	READ_PTR_FULL(PlayerControllerReference, APC_Player_C);
	READ_PTR_FULL(InventoryComponent, UInventoryComponent_C);
}

void UUI_ItemQuickSlot_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Capacity);
	DELE_PTR_FULL(CapacityOverlay);
	DELE_PTR_FULL(ConditionFull);
	DELE_PTR_FULL(ConditionHalf);
	DELE_PTR_FULL(ConditionOverlay);
	DELE_PTR_FULL(Image_456);
	DELE_PTR_FULL(img_ItemIcon);
	DELE_PTR_FULL(ItemName);
	DELE_PTR_FULL(ModeName);
	DELE_PTR_FULL(UI_HUD_TorchSlot);
	DELE_PTR_FULL(PlayerControllerReference);
	DELE_PTR_FULL(InventoryComponent);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
