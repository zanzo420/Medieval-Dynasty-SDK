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

// Function UI_BuildingDetails_ToolSlot.UI_BuildingDetails_ToolSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_BuildingDetails_ToolSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_ToolSlot.UI_BuildingDetails_ToolSlot_C.Construct");

	UUI_BuildingDetails_ToolSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_ToolSlot.UI_BuildingDetails_ToolSlot_C.ExecuteUbergraph_UI_BuildingDetails_ToolSlot
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_BuildingDetails_ToolSlot_C::ExecuteUbergraph_UI_BuildingDetails_ToolSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_ToolSlot.UI_BuildingDetails_ToolSlot_C.ExecuteUbergraph_UI_BuildingDetails_ToolSlot");

	UUI_BuildingDetails_ToolSlot_C_ExecuteUbergraph_UI_BuildingDetails_ToolSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_ToolSlot.UI_BuildingDetails_ToolSlot_C.OnHoveredDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UUI_BuildingDetails_ToolSlot_C::OnHoveredDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_ToolSlot.UI_BuildingDetails_ToolSlot_C.OnHoveredDispatcher__DelegateSignature");

	UUI_BuildingDetails_ToolSlot_C_OnHoveredDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_BuildingDetails_ToolSlot_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Border_ItemSelection, UBorder);
	READ_PTR_FULL(Icn_ItemBackground, UImage);
	READ_PTR_FULL(Icon, UImage);
	READ_PTR_FULL(Name, UTextBlock);
	READ_PTR_FULL(txt_Durability, UTextBlock);
	READ_PTR_FULL(CustomIcon, UObject);
}

void UUI_BuildingDetails_ToolSlot_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Border_ItemSelection);
	DELE_PTR_FULL(Icn_ItemBackground);
	DELE_PTR_FULL(Icon);
	DELE_PTR_FULL(Name);
	DELE_PTR_FULL(txt_Durability);
	DELE_PTR_FULL(CustomIcon);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
