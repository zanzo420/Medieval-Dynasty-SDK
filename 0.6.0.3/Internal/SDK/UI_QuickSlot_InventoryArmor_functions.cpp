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

// Function UI_QuickSlot_InventoryArmor.UI_QuickSlot_InventoryArmor_C.UpdateArmorSlot
// (BlueprintCallable, BlueprintEvent)
void UUI_QuickSlot_InventoryArmor_C::UpdateArmorSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickSlot_InventoryArmor.UI_QuickSlot_InventoryArmor_C.UpdateArmorSlot");

	UUI_QuickSlot_InventoryArmor_C_UpdateArmorSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuickSlot_InventoryArmor.UI_QuickSlot_InventoryArmor_C.BindOnArmorChange
// (BlueprintCallable, BlueprintEvent)
void UUI_QuickSlot_InventoryArmor_C::BindOnArmorChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickSlot_InventoryArmor.UI_QuickSlot_InventoryArmor_C.BindOnArmorChange");

	UUI_QuickSlot_InventoryArmor_C_BindOnArmorChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuickSlot_InventoryArmor.UI_QuickSlot_InventoryArmor_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_QuickSlot_InventoryArmor_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickSlot_InventoryArmor.UI_QuickSlot_InventoryArmor_C.PreConstruct");

	UUI_QuickSlot_InventoryArmor_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuickSlot_InventoryArmor.UI_QuickSlot_InventoryArmor_C.MakeActive
// (BlueprintCallable, BlueprintEvent)
void UUI_QuickSlot_InventoryArmor_C::MakeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickSlot_InventoryArmor.UI_QuickSlot_InventoryArmor_C.MakeActive");

	UUI_QuickSlot_InventoryArmor_C_MakeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuickSlot_InventoryArmor.UI_QuickSlot_InventoryArmor_C.MakeUnactive
// (BlueprintCallable, BlueprintEvent)
void UUI_QuickSlot_InventoryArmor_C::MakeUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickSlot_InventoryArmor.UI_QuickSlot_InventoryArmor_C.MakeUnactive");

	UUI_QuickSlot_InventoryArmor_C_MakeUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuickSlot_InventoryArmor.UI_QuickSlot_InventoryArmor_C.ExecuteUbergraph_UI_QuickSlot_InventoryArmor
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_QuickSlot_InventoryArmor_C::ExecuteUbergraph_UI_QuickSlot_InventoryArmor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickSlot_InventoryArmor.UI_QuickSlot_InventoryArmor_C.ExecuteUbergraph_UI_QuickSlot_InventoryArmor");

	UUI_QuickSlot_InventoryArmor_C_ExecuteUbergraph_UI_QuickSlot_InventoryArmor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
