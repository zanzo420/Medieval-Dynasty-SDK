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

// Function UI_RewardSlot_Item.UI_RewardSlot_Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_RewardSlot_Item_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RewardSlot_Item.UI_RewardSlot_Item_C.Construct");

	UUI_RewardSlot_Item_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_RewardSlot_Item.UI_RewardSlot_Item_C.ExecuteUbergraph_UI_RewardSlot_Item
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_RewardSlot_Item_C::ExecuteUbergraph_UI_RewardSlot_Item(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RewardSlot_Item.UI_RewardSlot_Item_C.ExecuteUbergraph_UI_RewardSlot_Item");

	UUI_RewardSlot_Item_C_ExecuteUbergraph_UI_RewardSlot_Item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_RewardSlot_Item_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(txt_Count, UTextBlock);
	READ_PTR_FULL(txt_ItemName, UTextBlock);
	READ_PTR_FULL(Icon, UObject);
}

void UUI_RewardSlot_Item_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(txt_Count);
	DELE_PTR_FULL(txt_ItemName);
	DELE_PTR_FULL(Icon);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
