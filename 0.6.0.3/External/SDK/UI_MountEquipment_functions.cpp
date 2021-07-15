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

// Function UI_MountEquipment.UI_MountEquipment_C.SetQuickSlotsClickability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Clickable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_MountEquipment_C::SetQuickSlotsClickability(bool Clickable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MountEquipment.UI_MountEquipment_C.SetQuickSlotsClickability");

	UUI_MountEquipment_C_SetQuickSlotsClickability_Params params;
	params.Clickable = Clickable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MountEquipment.UI_MountEquipment_C.InitCharacterEquipment
// (BlueprintCallable, BlueprintEvent)
void UUI_MountEquipment_C::InitCharacterEquipment()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MountEquipment.UI_MountEquipment_C.InitCharacterEquipment");

	UUI_MountEquipment_C_InitCharacterEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MountEquipment.UI_MountEquipment_C.UpdateItemInformation
// (BlueprintCallable, BlueprintEvent)
void UUI_MountEquipment_C::UpdateItemInformation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MountEquipment.UI_MountEquipment_C.UpdateItemInformation");

	UUI_MountEquipment_C_UpdateItemInformation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MountEquipment.UI_MountEquipment_C.ExecuteUbergraph_UI_MountEquipment
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MountEquipment_C::ExecuteUbergraph_UI_MountEquipment(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MountEquipment.UI_MountEquipment_C.ExecuteUbergraph_UI_MountEquipment");

	UUI_MountEquipment_C_ExecuteUbergraph_UI_MountEquipment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_MountEquipment_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Chest, UUI_QuickSlot_InventoryArmor_C);
	READ_PTR_FULL(Gloves, UUI_QuickSlot_InventoryArmor_C);
	READ_PTR_FULL(Image_3, UImage);
	READ_PTR_FULL(Image_4, UImage);
	READ_PTR_FULL(Image_163, UImage);
	READ_PTR_FULL(Image_284, UImage);
	READ_PTR_FULL(MountImage, UImage);
	READ_PTR_FULL(Pants, UUI_QuickSlot_InventoryArmor_C);
	READ_PTR_FULL(txt_MountName, UTextBlock);
	READ_PTR_FULL(txt_QuickSlots_2, UTextBlock);
	READ_PTR_FULL(UI_MountStats, UUI_MountStats_C);
	READ_PTR_FULL(UI_Inventory, UUI_Book_C);
}

void UUI_MountEquipment_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Chest);
	DELE_PTR_FULL(Gloves);
	DELE_PTR_FULL(Image_3);
	DELE_PTR_FULL(Image_4);
	DELE_PTR_FULL(Image_163);
	DELE_PTR_FULL(Image_284);
	DELE_PTR_FULL(MountImage);
	DELE_PTR_FULL(Pants);
	DELE_PTR_FULL(txt_MountName);
	DELE_PTR_FULL(txt_QuickSlots_2);
	DELE_PTR_FULL(UI_MountStats);
	DELE_PTR_FULL(UI_Inventory);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
