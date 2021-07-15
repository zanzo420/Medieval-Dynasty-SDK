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

// Function UI_Book_Inventory.UI_Book_Inventory_C.FinalizeTransferWithMount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_Inventory_C::FinalizeTransferWithMount(int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.FinalizeTransferWithMount");

	UUI_Book_Inventory_C_FinalizeTransferWithMount_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.InventoryDrop_Held
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Book_Inventory_C::InventoryDrop_Held()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.InventoryDrop_Held");

	UUI_Book_Inventory_C_InventoryDrop_Held_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.InventoryDrop_Released
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Book_Inventory_C::InventoryDrop_Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.InventoryDrop_Released");

	UUI_Book_Inventory_C_InventoryDrop_Released_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.ManageSpecialActionVisibility
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Inventory_C::ManageSpecialActionVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.ManageSpecialActionVisibility");

	UUI_Book_Inventory_C_ManageSpecialActionVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.InventorySpecial
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Inventory_C::InventorySpecial()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.InventorySpecial");

	UUI_Book_Inventory_C_InventorySpecial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.InventoryCancel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Input_handled                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Book_Inventory_C::InventoryCancel(bool* Input_handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.InventoryCancel");

	UUI_Book_Inventory_C_InventoryCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Input_handled != nullptr)
		*Input_handled = params.Input_handled;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.InventoryRight
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Inventory_C::InventoryRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.InventoryRight");

	UUI_Book_Inventory_C_InventoryRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.InventoryLeft
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Inventory_C::InventoryLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.InventoryLeft");

	UUI_Book_Inventory_C_InventoryLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.InventoryAdditionalAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Book_Inventory_C::InventoryAdditionalAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.InventoryAdditionalAction");

	UUI_Book_Inventory_C_InventoryAdditionalAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.InventoryDrop_Pressed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HoldingExecutesEvent           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Book_Inventory_C::InventoryDrop_Pressed(bool* HoldingExecutesEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.InventoryDrop_Pressed");

	UUI_Book_Inventory_C_InventoryDrop_Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HoldingExecutesEvent != nullptr)
		*HoldingExecutesEvent = params.HoldingExecutesEvent;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.InventoryConfirm
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Book_Inventory_C::InventoryConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.InventoryConfirm");

	UUI_Book_Inventory_C_InventoryConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.InventoryDown
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Inventory_C::InventoryDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.InventoryDown");

	UUI_Book_Inventory_C_InventoryDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.InventoryUp
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Inventory_C::InventoryUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.InventoryUp");

	UUI_Book_Inventory_C_InventoryUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.UpdateMoneyAndWeight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Book_Inventory_C::UpdateMoneyAndWeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.UpdateMoneyAndWeight");

	UUI_Book_Inventory_C_UpdateMoneyAndWeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.ManageInventoryAdditionalInteraction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Book_Inventory_C::ManageInventoryAdditionalInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.ManageInventoryAdditionalInteraction");

	UUI_Book_Inventory_C_ManageInventoryAdditionalInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.ConsumeItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InventoryID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_Inventory_C::ConsumeItem(int InventoryID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.ConsumeItem");

	UUI_Book_Inventory_C_ConsumeItem_Params params;
	params.InventoryID = InventoryID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.ManageAssigningNotificationVisibility
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Inventory_C::ManageAssigningNotificationVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.ManageAssigningNotificationVisibility");

	UUI_Book_Inventory_C_ManageAssigningNotificationVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.DecreaseInventoryIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Book_Inventory_C::DecreaseInventoryIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.DecreaseInventoryIndex");

	UUI_Book_Inventory_C_DecreaseInventoryIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.IncreaseInventoryIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Book_Inventory_C::IncreaseInventoryIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.IncreaseInventoryIndex");

	UUI_Book_Inventory_C_IncreaseInventoryIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.ChangeInventoryItemsVisibilityOnCategoryChange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_ItemCategories_E_ItemCategories> Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ResetItemIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Book_Inventory_C::ChangeInventoryItemsVisibilityOnCategoryChange(TEnumAsByte<E_ItemCategories_E_ItemCategories> Selection, bool ResetItemIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.ChangeInventoryItemsVisibilityOnCategoryChange");

	UUI_Book_Inventory_C_ChangeInventoryItemsVisibilityOnCategoryChange_Params params;
	params.Selection = Selection;
	params.ResetItemIndex = ResetItemIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.ChangeSelectedInventoryItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedItem_ID                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_Inventory_C::ChangeSelectedInventoryItem(int SelectedItem_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.ChangeSelectedInventoryItem");

	UUI_Book_Inventory_C_ChangeSelectedInventoryItem_Params params;
	params.SelectedItem_ID = SelectedItem_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.MakeInventorySlotsUnactive
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Inventory_C::MakeInventorySlotsUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.MakeInventorySlotsUnactive");

	UUI_Book_Inventory_C_MakeInventorySlotsUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.MakeInventorySlotActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_Inventory_C::MakeInventorySlotActive(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.MakeInventorySlotActive");

	UUI_Book_Inventory_C_MakeInventorySlotActive_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.MakeLabelActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_Inventory_C::MakeLabelActive(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.MakeLabelActive");

	UUI_Book_Inventory_C_MakeLabelActive_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.MakeLabelsUnactive
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Inventory_C::MakeLabelsUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.MakeLabelsUnactive");

	UUI_Book_Inventory_C_MakeLabelsUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.DecreaseInventoryCategoryID
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Inventory_C::DecreaseInventoryCategoryID()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.DecreaseInventoryCategoryID");

	UUI_Book_Inventory_C_DecreaseInventoryCategoryID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.IncreaseInventoryCategoryID
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Inventory_C::IncreaseInventoryCategoryID()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.IncreaseInventoryCategoryID");

	UUI_Book_Inventory_C_IncreaseInventoryCategoryID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.DestroyItemAt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InventoryID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ChangeSelectedInventoryItem    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Book_Inventory_C::DestroyItemAt(int InventoryID, bool ChangeSelectedInventoryItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.DestroyItemAt");

	UUI_Book_Inventory_C_DestroyItemAt_Params params;
	params.InventoryID = InventoryID;
	params.ChangeSelectedInventoryItem = ChangeSelectedInventoryItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.UpdateInventory
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Inventory_C::UpdateInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.UpdateInventory");

	UUI_Book_Inventory_C_UpdateInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.DropItem
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_ItemInventorys      ST_ItemInventory               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_Inventory_C::DropItem(const struct FST_ItemInventorys& ST_ItemInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.DropItem");

	UUI_Book_Inventory_C_DropItem_Params params;
	params.ST_ItemInventory = ST_ItemInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.FinalizeDropItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ResourceCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_Inventory_C::FinalizeDropItem(int ResourceCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.FinalizeDropItem");

	UUI_Book_Inventory_C_FinalizeDropItem_Params params;
	params.ResourceCount = ResourceCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.ChangeSteeringType_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Gamepad                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Book_Inventory_C::ChangeSteeringType_Event_1(bool Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.ChangeSteeringType_Event_1");

	UUI_Book_Inventory_C_ChangeSteeringType_Event_1_Params params;
	params.Gamepad = Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.Init
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Inventory_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.Init");

	UUI_Book_Inventory_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Book_Inventory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.Construct");

	UUI_Book_Inventory_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Book_Inventory_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.PreConstruct");

	UUI_Book_Inventory_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_Inventory_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.Tick");

	UUI_Book_Inventory_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.Btn_Confirm
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Inventory_C::Btn_Confirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.Btn_Confirm");

	UUI_Book_Inventory_C_Btn_Confirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.Btn_Drop
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Inventory_C::Btn_Drop()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.Btn_Drop");

	UUI_Book_Inventory_C_Btn_Drop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.Btn_Drop_Hold
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Inventory_C::Btn_Drop_Hold()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.Btn_Drop_Hold");

	UUI_Book_Inventory_C_Btn_Drop_Hold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.Btn_AdditionalInteraction
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Inventory_C::Btn_AdditionalInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.Btn_AdditionalInteraction");

	UUI_Book_Inventory_C_Btn_AdditionalInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.Btn_SpecialAction
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Inventory_C::Btn_SpecialAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.Btn_SpecialAction");

	UUI_Book_Inventory_C_Btn_SpecialAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.Btn_Up
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Inventory_C::Btn_Up()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.Btn_Up");

	UUI_Book_Inventory_C_Btn_Up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.Btn_Down
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Inventory_C::Btn_Down()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.Btn_Down");

	UUI_Book_Inventory_C_Btn_Down_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.Btn_Left
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Inventory_C::Btn_Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.Btn_Left");

	UUI_Book_Inventory_C_Btn_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.Btn_Right
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Inventory_C::Btn_Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.Btn_Right");

	UUI_Book_Inventory_C_Btn_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.Btn_Previous
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Inventory_C::Btn_Previous()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.Btn_Previous");

	UUI_Book_Inventory_C_Btn_Previous_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.Btn_Next
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Inventory_C::Btn_Next()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.Btn_Next");

	UUI_Book_Inventory_C_Btn_Next_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.btn_Return
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Inventory_C::btn_Return()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.btn_Return");

	UUI_Book_Inventory_C_btn_Return_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Inventory.UI_Book_Inventory_C.ExecuteUbergraph_UI_Book_Inventory
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_Inventory_C::ExecuteUbergraph_UI_Book_Inventory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Inventory.UI_Book_Inventory_C.ExecuteUbergraph_UI_Book_Inventory");

	UUI_Book_Inventory_C_ExecuteUbergraph_UI_Book_Inventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_Book_Inventory_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(ActionDescriptionButtonsRight, UHorizontalBox);
	READ_PTR_FULL(AssignToSlotsBox, UHorizontalBox);
	READ_PTR_FULL(BorderInventoryList, UBorder);
	READ_PTR_FULL(Image, UImage);
	READ_PTR_FULL(Image_8, UImage);
	READ_PTR_FULL(Image_9, UImage);
	READ_PTR_FULL(Image_11, UImage);
	READ_PTR_FULL(Image_70, UImage);
	READ_PTR_FULL(Image_178, UImage);
	READ_PTR_FULL(InputAdditionalInteraction, UUI_Book_InputButton_C);
	READ_PTR_FULL(InputChangeCategory, UUI_Book_InputButton_C);
	READ_PTR_FULL(InputChangeSelection, UUI_Book_InputButton_C);
	READ_PTR_FULL(InputChangeTab, UUI_Book_InputButton_C);
	READ_PTR_FULL(InputConfirm, UUI_Book_InputButton_C);
	READ_PTR_FULL(InputDrop, UUI_Book_InputButton_C);
	READ_PTR_FULL(InputDrop_Hold, UUI_Book_InputButton_C);
	READ_PTR_FULL(InputReturn, UUI_Book_InputButton_C);
	READ_PTR_FULL(InputSpecialAction, UUI_Book_InputButton_C);
	READ_PTR_FULL(InventoryScrollbox, UScrollBox);
	READ_PTR_FULL(InventoryTab, UCanvasPanel);
	READ_PTR_FULL(InventoryVerticalBox, UVerticalBox);
	READ_PTR_FULL(txt_Coins, UTextBlock);
	READ_PTR_FULL(txt_NoItemsWarning, UTextBlock);
	READ_PTR_FULL(txt_TabName, UTextBlock);
	READ_PTR_FULL(txt_Weight, UTextBlock);
	READ_PTR_FULL(UI_ChracterEquipment, UUI_CharacterEquipment_C);
	READ_PTR_FULL(UI_Inventory_Item_Tooltip_Small, UUI_Inventory_ItemDescription_C);
	READ_PTR_FULL(UI_InventoryDescriptionLabels, UUI_InventoryDescriptionLabels_C);
	READ_PTR_FULL(UI_InventoryLabels, UUI_Inventory_Labels_C);
	READ_PTR_FULL(UI_MountEquipment, UUI_MountEquipment_C);
	READ_PTR_FULL(WeightIcon, UImage);
	READ_PTR_FULL(BookReference, UUI_Book_C);
	READ_PTR_FULL(InvCompReference, UInventoryComponent_C);
	READ_PTR_FULL(DropSliderReference, UUI_DropCountSlider_C);
	READ_PTR_FULL(TransferWithMountSliderReference, UUI_TransferWithMountCountSlider_C);
}

void UUI_Book_Inventory_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(ActionDescriptionButtonsRight);
	DELE_PTR_FULL(AssignToSlotsBox);
	DELE_PTR_FULL(BorderInventoryList);
	DELE_PTR_FULL(Image);
	DELE_PTR_FULL(Image_8);
	DELE_PTR_FULL(Image_9);
	DELE_PTR_FULL(Image_11);
	DELE_PTR_FULL(Image_70);
	DELE_PTR_FULL(Image_178);
	DELE_PTR_FULL(InputAdditionalInteraction);
	DELE_PTR_FULL(InputChangeCategory);
	DELE_PTR_FULL(InputChangeSelection);
	DELE_PTR_FULL(InputChangeTab);
	DELE_PTR_FULL(InputConfirm);
	DELE_PTR_FULL(InputDrop);
	DELE_PTR_FULL(InputDrop_Hold);
	DELE_PTR_FULL(InputReturn);
	DELE_PTR_FULL(InputSpecialAction);
	DELE_PTR_FULL(InventoryScrollbox);
	DELE_PTR_FULL(InventoryTab);
	DELE_PTR_FULL(InventoryVerticalBox);
	DELE_PTR_FULL(txt_Coins);
	DELE_PTR_FULL(txt_NoItemsWarning);
	DELE_PTR_FULL(txt_TabName);
	DELE_PTR_FULL(txt_Weight);
	DELE_PTR_FULL(UI_ChracterEquipment);
	DELE_PTR_FULL(UI_Inventory_Item_Tooltip_Small);
	DELE_PTR_FULL(UI_InventoryDescriptionLabels);
	DELE_PTR_FULL(UI_InventoryLabels);
	DELE_PTR_FULL(UI_MountEquipment);
	DELE_PTR_FULL(WeightIcon);
	DELE_PTR_FULL(BookReference);
	DELE_PTR_FULL(InvCompReference);
	DELE_PTR_FULL(DropSliderReference);
	DELE_PTR_FULL(TransferWithMountSliderReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
