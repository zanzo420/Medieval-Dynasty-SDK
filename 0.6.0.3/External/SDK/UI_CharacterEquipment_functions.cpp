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

// Function UI_CharacterEquipment.UI_CharacterEquipment_C.ChangeSelectedQuickslot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedQuickSlotIndex         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_CharacterEquipment_C::ChangeSelectedQuickslot(int SelectedQuickSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterEquipment.UI_CharacterEquipment_C.ChangeSelectedQuickslot");

	UUI_CharacterEquipment_C_ChangeSelectedQuickslot_Params params;
	params.SelectedQuickSlotIndex = SelectedQuickSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CharacterEquipment.UI_CharacterEquipment_C.DecreaseQuickSlotIndex
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_CharacterEquipment_C::DecreaseQuickSlotIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterEquipment.UI_CharacterEquipment_C.DecreaseQuickSlotIndex");

	UUI_CharacterEquipment_C_DecreaseQuickSlotIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CharacterEquipment.UI_CharacterEquipment_C.IncreaseQuickSlotIndex
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_CharacterEquipment_C::IncreaseQuickSlotIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterEquipment.UI_CharacterEquipment_C.IncreaseQuickSlotIndex");

	UUI_CharacterEquipment_C_IncreaseQuickSlotIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CharacterEquipment.UI_CharacterEquipment_C.SetQuickSlotsClickability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Clickable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_CharacterEquipment_C::SetQuickSlotsClickability(bool Clickable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterEquipment.UI_CharacterEquipment_C.SetQuickSlotsClickability");

	UUI_CharacterEquipment_C_SetQuickSlotsClickability_Params params;
	params.Clickable = Clickable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CharacterEquipment.UI_CharacterEquipment_C.MakeQuickSlotActive
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_CharacterEquipment_C::MakeQuickSlotActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterEquipment.UI_CharacterEquipment_C.MakeQuickSlotActive");

	UUI_CharacterEquipment_C_MakeQuickSlotActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CharacterEquipment.UI_CharacterEquipment_C.MakeQuickSlotsUnactive
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_CharacterEquipment_C::MakeQuickSlotsUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterEquipment.UI_CharacterEquipment_C.MakeQuickSlotsUnactive");

	UUI_CharacterEquipment_C_MakeQuickSlotsUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CharacterEquipment.UI_CharacterEquipment_C.InitCharacterEquipment
// (BlueprintCallable, BlueprintEvent)
void UUI_CharacterEquipment_C::InitCharacterEquipment()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterEquipment.UI_CharacterEquipment_C.InitCharacterEquipment");

	UUI_CharacterEquipment_C_InitCharacterEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CharacterEquipment.UI_CharacterEquipment_C.UpdateItemInformation
// (BlueprintCallable, BlueprintEvent)
void UUI_CharacterEquipment_C::UpdateItemInformation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterEquipment.UI_CharacterEquipment_C.UpdateItemInformation");

	UUI_CharacterEquipment_C_UpdateItemInformation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CharacterEquipment.UI_CharacterEquipment_C.ExecuteUbergraph_UI_CharacterEquipment
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_CharacterEquipment_C::ExecuteUbergraph_UI_CharacterEquipment(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterEquipment.UI_CharacterEquipment_C.ExecuteUbergraph_UI_CharacterEquipment");

	UUI_CharacterEquipment_C_ExecuteUbergraph_UI_CharacterEquipment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_CharacterEquipment_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Ammo, UUI_QuickSlot_InventoryArmor_C);
	READ_PTR_FULL(Backpack, UUI_QuickSlot_InventoryArmor_C);
	READ_PTR_FULL(Chest, UUI_QuickSlot_InventoryArmor_C);
	READ_PTR_FULL(Gloves, UUI_QuickSlot_InventoryArmor_C);
	READ_PTR_FULL(Head, UUI_QuickSlot_InventoryArmor_C);
	READ_PTR_FULL(Hood, UUI_QuickSlot_InventoryArmor_C);
	READ_PTR_FULL(Image, UImage);
	READ_PTR_FULL(Image_2, UImage);
	READ_PTR_FULL(Image_3, UImage);
	READ_PTR_FULL(Image_4, UImage);
	READ_PTR_FULL(Image_163, UImage);
	READ_PTR_FULL(Image_284, UImage);
	READ_PTR_FULL(Pants, UUI_QuickSlot_InventoryArmor_C);
	READ_PTR_FULL(Pouch, UUI_QuickSlot_InventoryArmor_C);
	READ_PTR_FULL(QuickSlot1, UUI_QuickSlot_C);
	READ_PTR_FULL(QuickSlot2, UUI_QuickSlot_C);
	READ_PTR_FULL(QuickSlot3, UUI_QuickSlot_C);
	READ_PTR_FULL(QuickSlot4, UUI_QuickSlot_C);
	READ_PTR_FULL(QuickSlot5, UUI_QuickSlot_C);
	READ_PTR_FULL(QuickSlot6, UUI_QuickSlot_C);
	READ_PTR_FULL(QuickSlot7, UUI_QuickSlot_C);
	READ_PTR_FULL(QuickSlot8, UUI_QuickSlot_C);
	READ_PTR_FULL(Shoes, UUI_QuickSlot_InventoryArmor_C);
	READ_PTR_FULL(Torch, UUI_QuickSlot_InventoryArmor_C);
	READ_PTR_FULL(txt_PlayerAge, UTextBlock);
	READ_PTR_FULL(txt_PlayerName, UTextBlock);
	READ_PTR_FULL(txt_QuickSlots, UTextBlock);
	READ_PTR_FULL(txt_QuickSlots_2, UTextBlock);
	READ_PTR_FULL(UI_CharacterStats, UUI_CharacterStats_C);
	READ_PTR_FULL(UI_Inventory, UUI_Book_C);
}

void UUI_CharacterEquipment_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Ammo);
	DELE_PTR_FULL(Backpack);
	DELE_PTR_FULL(Chest);
	DELE_PTR_FULL(Gloves);
	DELE_PTR_FULL(Head);
	DELE_PTR_FULL(Hood);
	DELE_PTR_FULL(Image);
	DELE_PTR_FULL(Image_2);
	DELE_PTR_FULL(Image_3);
	DELE_PTR_FULL(Image_4);
	DELE_PTR_FULL(Image_163);
	DELE_PTR_FULL(Image_284);
	DELE_PTR_FULL(Pants);
	DELE_PTR_FULL(Pouch);
	DELE_PTR_FULL(QuickSlot1);
	DELE_PTR_FULL(QuickSlot2);
	DELE_PTR_FULL(QuickSlot3);
	DELE_PTR_FULL(QuickSlot4);
	DELE_PTR_FULL(QuickSlot5);
	DELE_PTR_FULL(QuickSlot6);
	DELE_PTR_FULL(QuickSlot7);
	DELE_PTR_FULL(QuickSlot8);
	DELE_PTR_FULL(Shoes);
	DELE_PTR_FULL(Torch);
	DELE_PTR_FULL(txt_PlayerAge);
	DELE_PTR_FULL(txt_PlayerName);
	DELE_PTR_FULL(txt_QuickSlots);
	DELE_PTR_FULL(txt_QuickSlots_2);
	DELE_PTR_FULL(UI_CharacterStats);
	DELE_PTR_FULL(UI_Inventory);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
