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

// Function UI_CraftingTooltip_ResourceSlot.UI_CraftingTooltip_ResourceSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_CraftingTooltip_ResourceSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingTooltip_ResourceSlot.UI_CraftingTooltip_ResourceSlot_C.Construct");

	UUI_CraftingTooltip_ResourceSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingTooltip_ResourceSlot.UI_CraftingTooltip_ResourceSlot_C.ExecuteUbergraph_UI_CraftingTooltip_ResourceSlot
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_CraftingTooltip_ResourceSlot_C::ExecuteUbergraph_UI_CraftingTooltip_ResourceSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingTooltip_ResourceSlot.UI_CraftingTooltip_ResourceSlot_C.ExecuteUbergraph_UI_CraftingTooltip_ResourceSlot");

	UUI_CraftingTooltip_ResourceSlot_C_ExecuteUbergraph_UI_CraftingTooltip_ResourceSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_CraftingTooltip_ResourceSlot_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(ItemIcon, UImage);
	READ_PTR_FULL(ItemWithCount, UTextBlock);
}

void UUI_CraftingTooltip_ResourceSlot_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(ItemIcon);
	DELE_PTR_FULL(ItemWithCount);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
