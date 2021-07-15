#pragma once

// Name: Medieval Dynasty, Version: 0.6.0.3


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function UI_Book_Inventory.UI_Book_Inventory_C.FinalizeTransferWithMount
struct UUI_Book_Inventory_C_FinalizeTransferWithMount_Params
{
	int                                                Count;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.InventoryDrop_Held
struct UUI_Book_Inventory_C_InventoryDrop_Held_Params
{
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.InventoryDrop_Released
struct UUI_Book_Inventory_C_InventoryDrop_Released_Params
{
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.ManageSpecialActionVisibility
struct UUI_Book_Inventory_C_ManageSpecialActionVisibility_Params
{
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.InventorySpecial
struct UUI_Book_Inventory_C_InventorySpecial_Params
{
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.InventoryCancel
struct UUI_Book_Inventory_C_InventoryCancel_Params
{
	bool                                               Input_handled;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.InventoryRight
struct UUI_Book_Inventory_C_InventoryRight_Params
{
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.InventoryLeft
struct UUI_Book_Inventory_C_InventoryLeft_Params
{
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.InventoryAdditionalAction
struct UUI_Book_Inventory_C_InventoryAdditionalAction_Params
{
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.InventoryDrop_Pressed
struct UUI_Book_Inventory_C_InventoryDrop_Pressed_Params
{
	bool                                               HoldingExecutesEvent;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.InventoryConfirm
struct UUI_Book_Inventory_C_InventoryConfirm_Params
{
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.InventoryDown
struct UUI_Book_Inventory_C_InventoryDown_Params
{
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.InventoryUp
struct UUI_Book_Inventory_C_InventoryUp_Params
{
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.UpdateMoneyAndWeight
struct UUI_Book_Inventory_C_UpdateMoneyAndWeight_Params
{
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.ManageInventoryAdditionalInteraction
struct UUI_Book_Inventory_C_ManageInventoryAdditionalInteraction_Params
{
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.ConsumeItem
struct UUI_Book_Inventory_C_ConsumeItem_Params
{
	int                                                InventoryID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.ManageAssigningNotificationVisibility
struct UUI_Book_Inventory_C_ManageAssigningNotificationVisibility_Params
{
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.DecreaseInventoryIndex
struct UUI_Book_Inventory_C_DecreaseInventoryIndex_Params
{
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.IncreaseInventoryIndex
struct UUI_Book_Inventory_C_IncreaseInventoryIndex_Params
{
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.ChangeInventoryItemsVisibilityOnCategoryChange
struct UUI_Book_Inventory_C_ChangeInventoryItemsVisibilityOnCategoryChange_Params
{
	TEnumAsByte<E_ItemCategories_E_ItemCategories>     Selection;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ResetItemIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.ChangeSelectedInventoryItem
struct UUI_Book_Inventory_C_ChangeSelectedInventoryItem_Params
{
	int                                                SelectedItem_ID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.MakeInventorySlotsUnactive
struct UUI_Book_Inventory_C_MakeInventorySlotsUnactive_Params
{
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.MakeInventorySlotActive
struct UUI_Book_Inventory_C_MakeInventorySlotActive_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.MakeLabelActive
struct UUI_Book_Inventory_C_MakeLabelActive_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.MakeLabelsUnactive
struct UUI_Book_Inventory_C_MakeLabelsUnactive_Params
{
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.DecreaseInventoryCategoryID
struct UUI_Book_Inventory_C_DecreaseInventoryCategoryID_Params
{
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.IncreaseInventoryCategoryID
struct UUI_Book_Inventory_C_IncreaseInventoryCategoryID_Params
{
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.DestroyItemAt
struct UUI_Book_Inventory_C_DestroyItemAt_Params
{
	int                                                InventoryID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ChangeSelectedInventoryItem;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.UpdateInventory
struct UUI_Book_Inventory_C_UpdateInventory_Params
{
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.DropItem
struct UUI_Book_Inventory_C_DropItem_Params
{
	struct FST_ItemInventorys                          ST_ItemInventory;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.FinalizeDropItem
struct UUI_Book_Inventory_C_FinalizeDropItem_Params
{
	int                                                ResourceCount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.ChangeSteeringType_Event_1
struct UUI_Book_Inventory_C_ChangeSteeringType_Event_1_Params
{
	bool                                               Gamepad;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.Init
struct UUI_Book_Inventory_C_Init_Params
{
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.Construct
struct UUI_Book_Inventory_C_Construct_Params
{
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.PreConstruct
struct UUI_Book_Inventory_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.Tick
struct UUI_Book_Inventory_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.Btn_Confirm
struct UUI_Book_Inventory_C_Btn_Confirm_Params
{
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.Btn_Drop
struct UUI_Book_Inventory_C_Btn_Drop_Params
{
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.Btn_Drop_Hold
struct UUI_Book_Inventory_C_Btn_Drop_Hold_Params
{
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.Btn_AdditionalInteraction
struct UUI_Book_Inventory_C_Btn_AdditionalInteraction_Params
{
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.Btn_SpecialAction
struct UUI_Book_Inventory_C_Btn_SpecialAction_Params
{
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.Btn_Up
struct UUI_Book_Inventory_C_Btn_Up_Params
{
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.Btn_Down
struct UUI_Book_Inventory_C_Btn_Down_Params
{
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.Btn_Left
struct UUI_Book_Inventory_C_Btn_Left_Params
{
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.Btn_Right
struct UUI_Book_Inventory_C_Btn_Right_Params
{
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.Btn_Previous
struct UUI_Book_Inventory_C_Btn_Previous_Params
{
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.Btn_Next
struct UUI_Book_Inventory_C_Btn_Next_Params
{
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.btn_Return
struct UUI_Book_Inventory_C_btn_Return_Params
{
};

// Function UI_Book_Inventory.UI_Book_Inventory_C.ExecuteUbergraph_UI_Book_Inventory
struct UUI_Book_Inventory_C_ExecuteUbergraph_UI_Book_Inventory_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
