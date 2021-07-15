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

// Function UI_Trading_Player.UI_Trading_Player_C.UpdateInventory
struct UUI_Trading_Player_C_UpdateInventory_Params
{
};

// Function UI_Trading_Player.UI_Trading_Player_C.UpdateMoneyAndWeight
struct UUI_Trading_Player_C_UpdateMoneyAndWeight_Params
{
};

// Function UI_Trading_Player.UI_Trading_Player_C.DecreaseInventoryIndex
struct UUI_Trading_Player_C_DecreaseInventoryIndex_Params
{
};

// Function UI_Trading_Player.UI_Trading_Player_C.IncreaseInventoryIndex
struct UUI_Trading_Player_C_IncreaseInventoryIndex_Params
{
};

// Function UI_Trading_Player.UI_Trading_Player_C.ChangeInventoryItemsVisibilityOnCategoryChange
struct UUI_Trading_Player_C_ChangeInventoryItemsVisibilityOnCategoryChange_Params
{
	TEnumAsByte<E_ItemCategories_E_ItemCategories>     Selection;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ResetItemIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Trading_Player.UI_Trading_Player_C.ResetInventoryItemSelection
struct UUI_Trading_Player_C_ResetInventoryItemSelection_Params
{
};

// Function UI_Trading_Player.UI_Trading_Player_C.ChangeSelectedInventoryItem
struct UUI_Trading_Player_C_ChangeSelectedInventoryItem_Params
{
	int                                                SelectedItem_ID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Trading_Player.UI_Trading_Player_C.MakeInventorySlotsUnactive
struct UUI_Trading_Player_C_MakeInventorySlotsUnactive_Params
{
};

// Function UI_Trading_Player.UI_Trading_Player_C.MakeInventorySlotActive
struct UUI_Trading_Player_C_MakeInventorySlotActive_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Trading_Player.UI_Trading_Player_C.MakeLabelActive
struct UUI_Trading_Player_C_MakeLabelActive_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Trading_Player.UI_Trading_Player_C.MakeLabelsUnactive
struct UUI_Trading_Player_C_MakeLabelsUnactive_Params
{
};

// Function UI_Trading_Player.UI_Trading_Player_C.DecreaseInventoryCategoryID
struct UUI_Trading_Player_C_DecreaseInventoryCategoryID_Params
{
};

// Function UI_Trading_Player.UI_Trading_Player_C.IncreaseInventoryCategoryID
struct UUI_Trading_Player_C_IncreaseInventoryCategoryID_Params
{
};

// Function UI_Trading_Player.UI_Trading_Player_C.DestroyItemAt
struct UUI_Trading_Player_C_DestroyItemAt_Params
{
	int                                                InventoryID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ChangeSelectedInventoryItem;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Trading_Player.UI_Trading_Player_C.AddItemToInventory_HUD
struct UUI_Trading_Player_C_AddItemToInventory_HUD_Params
{
	struct FName                                       ItemId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Count;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldCheckIfInInventory;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Trading_Player.UI_Trading_Player_C.Init
struct UUI_Trading_Player_C_Init_Params
{
	class APC_Player_C*                                PlayerControllerReference;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Trading_C*                               UI_Trading_Reference;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               GiftGiving;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Trading_Player.UI_Trading_Player_C.ExecuteUbergraph_UI_Trading_Player
struct UUI_Trading_Player_C_ExecuteUbergraph_UI_Trading_Player_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
