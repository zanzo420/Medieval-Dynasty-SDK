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

// Function UI_MasterLabels.UI_MasterLabels_C.btn_All_Clicked
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterLabels_C::btn_All_Clicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterLabels.UI_MasterLabels_C.btn_All_Clicked");

	UUI_MasterLabels_C_btn_All_Clicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterLabels.UI_MasterLabels_C.btn_Armor_Clicked
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterLabels_C::btn_Armor_Clicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterLabels.UI_MasterLabels_C.btn_Armor_Clicked");

	UUI_MasterLabels_C_btn_Armor_Clicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterLabels.UI_MasterLabels_C.btn_Consumable_Clicked
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterLabels_C::btn_Consumable_Clicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterLabels.UI_MasterLabels_C.btn_Consumable_Clicked");

	UUI_MasterLabels_C_btn_Consumable_Clicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterLabels.UI_MasterLabels_C.btn_Crafting_Clicked
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterLabels_C::btn_Crafting_Clicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterLabels.UI_MasterLabels_C.btn_Crafting_Clicked");

	UUI_MasterLabels_C_btn_Crafting_Clicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterLabels.UI_MasterLabels_C.btn_Misc_Clicked
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterLabels_C::btn_Misc_Clicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterLabels.UI_MasterLabels_C.btn_Misc_Clicked");

	UUI_MasterLabels_C_btn_Misc_Clicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterLabels.UI_MasterLabels_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_MasterLabels_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterLabels.UI_MasterLabels_C.Construct");

	UUI_MasterLabels_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterLabels.UI_MasterLabels_C.btn_Tools_Clicked
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterLabels_C::btn_Tools_Clicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterLabels.UI_MasterLabels_C.btn_Tools_Clicked");

	UUI_MasterLabels_C_btn_Tools_Clicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterLabels.UI_MasterLabels_C.ExecuteUbergraph_UI_MasterLabels
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MasterLabels_C::ExecuteUbergraph_UI_MasterLabels(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterLabels.UI_MasterLabels_C.ExecuteUbergraph_UI_MasterLabels");

	UUI_MasterLabels_C_ExecuteUbergraph_UI_MasterLabels_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_MasterLabels_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(btn_All, UUI_LabelButton_C);
	READ_PTR_FULL(btn_Armor, UUI_LabelButton_C);
	READ_PTR_FULL(btn_Consumable, UUI_LabelButton_C);
	READ_PTR_FULL(btn_Crafting, UUI_LabelButton_C);
	READ_PTR_FULL(btn_Misc, UUI_LabelButton_C);
	READ_PTR_FULL(btn_Tools, UUI_LabelButton_C);
	READ_PTR_FULL(Labels, UHorizontalBox);
	READ_PTR_FULL(UI_Inventory, UUI_Book_C);
}

void UUI_MasterLabels_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(btn_All);
	DELE_PTR_FULL(btn_Armor);
	DELE_PTR_FULL(btn_Consumable);
	DELE_PTR_FULL(btn_Crafting);
	DELE_PTR_FULL(btn_Misc);
	DELE_PTR_FULL(btn_Tools);
	DELE_PTR_FULL(Labels);
	DELE_PTR_FULL(UI_Inventory);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
