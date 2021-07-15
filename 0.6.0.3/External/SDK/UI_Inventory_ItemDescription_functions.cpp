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

// Function UI_Inventory_ItemDescription.UI_Inventory_ItemDescription_C.GetItemStats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Inventory_ItemDescription_C::GetItemStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory_ItemDescription.UI_Inventory_ItemDescription_C.GetItemStats");

	UUI_Inventory_ItemDescription_C_GetItemStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Inventory_ItemDescription.UI_Inventory_ItemDescription_C.ReinitializeTooltip
// (BlueprintCallable, BlueprintEvent)
void UUI_Inventory_ItemDescription_C::ReinitializeTooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory_ItemDescription.UI_Inventory_ItemDescription_C.ReinitializeTooltip");

	UUI_Inventory_ItemDescription_C_ReinitializeTooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Inventory_ItemDescription.UI_Inventory_ItemDescription_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Inventory_ItemDescription_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory_ItemDescription.UI_Inventory_ItemDescription_C.Construct");

	UUI_Inventory_ItemDescription_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Inventory_ItemDescription.UI_Inventory_ItemDescription_C.ExecuteUbergraph_UI_Inventory_ItemDescription
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Inventory_ItemDescription_C::ExecuteUbergraph_UI_Inventory_ItemDescription(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory_ItemDescription.UI_Inventory_ItemDescription_C.ExecuteUbergraph_UI_Inventory_ItemDescription");

	UUI_Inventory_ItemDescription_C_ExecuteUbergraph_UI_Inventory_ItemDescription_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_Inventory_ItemDescription_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Border_1, UBorder);
	READ_PTR_FULL(DurabilityIcon, UImage);
	READ_PTR_FULL(Image_110, UImage);
	READ_PTR_FULL(Image_175, UImage);
	READ_PTR_FULL(ItemDescription, UTextBlock);
	READ_PTR_FULL(ItemIcon, UImage);
	READ_PTR_FULL(ItemName, UTextBlock);
	READ_PTR_FULL(ItemStatsPanel, UUniformGridPanel);
	READ_PTR_FULL(TooltipBox, UVerticalBox);
	READ_PTR_FULL(txt_Condition, UTextBlock);
	READ_PTR_FULL(txt_SingleCost, UTextBlock);
	READ_PTR_FULL(txt_SingleWeight, UTextBlock);
	READ_PTR_FULL(txt_Storage, UTextBlock);
	READ_PTR_FULL(UI_Slot_Description, UUI_Slot_Description_C);
	READ_PTR_FULL(UI_Slot_Description_2, UUI_Slot_Description_C);
	READ_PTR_FULL(UI_Slot_Description_3, UUI_Slot_Description_C);
	READ_PTR_FULL(PlayerControllerReference, APC_Player_C);
}

void UUI_Inventory_ItemDescription_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Border_1);
	DELE_PTR_FULL(DurabilityIcon);
	DELE_PTR_FULL(Image_110);
	DELE_PTR_FULL(Image_175);
	DELE_PTR_FULL(ItemDescription);
	DELE_PTR_FULL(ItemIcon);
	DELE_PTR_FULL(ItemName);
	DELE_PTR_FULL(ItemStatsPanel);
	DELE_PTR_FULL(TooltipBox);
	DELE_PTR_FULL(txt_Condition);
	DELE_PTR_FULL(txt_SingleCost);
	DELE_PTR_FULL(txt_SingleWeight);
	DELE_PTR_FULL(txt_Storage);
	DELE_PTR_FULL(UI_Slot_Description);
	DELE_PTR_FULL(UI_Slot_Description_2);
	DELE_PTR_FULL(UI_Slot_Description_3);
	DELE_PTR_FULL(PlayerControllerReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
