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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
