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

// Function UI_Slot_Management_Buildings.UI_Slot_Management_Buildings_C.UpdateMarketStallName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Slot_Management_Buildings_C::UpdateMarketStallName()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_Management_Buildings.UI_Slot_Management_Buildings_C.UpdateMarketStallName");

	UUI_Slot_Management_Buildings_C_UpdateMarketStallName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Slot_Management_Buildings.UI_Slot_Management_Buildings_C.UpdateStatus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Empty                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Slot_Management_Buildings_C::UpdateStatus(bool* Empty)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_Management_Buildings.UI_Slot_Management_Buildings_C.UpdateStatus");

	UUI_Slot_Management_Buildings_C_UpdateStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Empty != nullptr)
		*Empty = params.Empty;

}


// Function UI_Slot_Management_Buildings.UI_Slot_Management_Buildings_C.MakeActive
// (BlueprintCallable, BlueprintEvent)
void UUI_Slot_Management_Buildings_C::MakeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_Management_Buildings.UI_Slot_Management_Buildings_C.MakeActive");

	UUI_Slot_Management_Buildings_C_MakeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Slot_Management_Buildings.UI_Slot_Management_Buildings_C.MakeUnactive
// (BlueprintCallable, BlueprintEvent)
void UUI_Slot_Management_Buildings_C::MakeUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_Management_Buildings.UI_Slot_Management_Buildings_C.MakeUnactive");

	UUI_Slot_Management_Buildings_C_MakeUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Slot_Management_Buildings.UI_Slot_Management_Buildings_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Slot_Management_Buildings_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_Management_Buildings.UI_Slot_Management_Buildings_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_Slot_Management_Buildings_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Slot_Management_Buildings.UI_Slot_Management_Buildings_C.SetSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Slot_Management_Buildings_C::SetSelected(bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_Management_Buildings.UI_Slot_Management_Buildings_C.SetSelected");

	UUI_Slot_Management_Buildings_C_SetSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Slot_Management_Buildings.UI_Slot_Management_Buildings_C.Update
// (BlueprintCallable, BlueprintEvent)
void UUI_Slot_Management_Buildings_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_Management_Buildings.UI_Slot_Management_Buildings_C.Update");

	UUI_Slot_Management_Buildings_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Slot_Management_Buildings.UI_Slot_Management_Buildings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Slot_Management_Buildings_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_Management_Buildings.UI_Slot_Management_Buildings_C.Construct");

	UUI_Slot_Management_Buildings_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Slot_Management_Buildings.UI_Slot_Management_Buildings_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Slot_Management_Buildings_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_Management_Buildings.UI_Slot_Management_Buildings_C.Tick");

	UUI_Slot_Management_Buildings_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Slot_Management_Buildings.UI_Slot_Management_Buildings_C.BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Slot_Management_Buildings_C::BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_Management_Buildings.UI_Slot_Management_Buildings_C.BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UUI_Slot_Management_Buildings_C_BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Slot_Management_Buildings.UI_Slot_Management_Buildings_C.BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Slot_Management_Buildings_C::BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_Management_Buildings.UI_Slot_Management_Buildings_C.BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UUI_Slot_Management_Buildings_C_BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Slot_Management_Buildings.UI_Slot_Management_Buildings_C.ExecuteUbergraph_UI_Slot_Management_Buildings
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Slot_Management_Buildings_C::ExecuteUbergraph_UI_Slot_Management_Buildings(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_Management_Buildings.UI_Slot_Management_Buildings_C.ExecuteUbergraph_UI_Slot_Management_Buildings");

	UUI_Slot_Management_Buildings_C_ExecuteUbergraph_UI_Slot_Management_Buildings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Slot_Management_Buildings.UI_Slot_Management_Buildings_C.OnHoveredDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UUI_Slot_Management_Buildings_C::OnHoveredDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_Management_Buildings.UI_Slot_Management_Buildings_C.OnHoveredDispatcher__DelegateSignature");

	UUI_Slot_Management_Buildings_C_OnHoveredDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_Slot_Management_Buildings_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Border_ItemSelection, UBorder);
	READ_PTR_FULL(Button, UButton);
	READ_PTR_FULL(Icn_ItemBackground, UImage);
	READ_PTR_FULL(img_Icon, UImage);
	READ_PTR_FULL(Img_PlayerIcon, UImage);
	READ_PTR_FULL(LockedBorder, UBorder);
	READ_PTR_FULL(Name, UTextBlock);
	READ_PTR_FULL(NameHorizontalBox, UHorizontalBox);
	READ_PTR_FULL(StatusBox, UHorizontalBox);
	READ_PTR_FULL(TaxBox, USizeBox);
	READ_PTR_FULL(txt_Condition, UTextBlock);
	READ_PTR_FULL(txt_CustomName, UTextBlock);
	READ_PTR_FULL(txt_Empty, UTextBlock);
	READ_PTR_FULL(txt_Tax, UTextBlock);
	READ_PTR_FULL(txt_Type, UTextBlock);
	READ_PTR_FULL(txt_Workers, UTextBlock);
	READ_PTR_FULL(UI_Inventory, UUI_Book_C);
	READ_PTR_FULL(BuildingReference, ABP_MasterBuilding_C);
	READ_PTR_FULL(UI_Assignment, UUI_MasterAssignment_C);
}

void UUI_Slot_Management_Buildings_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Border_ItemSelection);
	DELE_PTR_FULL(Button);
	DELE_PTR_FULL(Icn_ItemBackground);
	DELE_PTR_FULL(img_Icon);
	DELE_PTR_FULL(Img_PlayerIcon);
	DELE_PTR_FULL(LockedBorder);
	DELE_PTR_FULL(Name);
	DELE_PTR_FULL(NameHorizontalBox);
	DELE_PTR_FULL(StatusBox);
	DELE_PTR_FULL(TaxBox);
	DELE_PTR_FULL(txt_Condition);
	DELE_PTR_FULL(txt_CustomName);
	DELE_PTR_FULL(txt_Empty);
	DELE_PTR_FULL(txt_Tax);
	DELE_PTR_FULL(txt_Type);
	DELE_PTR_FULL(txt_Workers);
	DELE_PTR_FULL(UI_Inventory);
	DELE_PTR_FULL(BuildingReference);
	DELE_PTR_FULL(UI_Assignment);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
