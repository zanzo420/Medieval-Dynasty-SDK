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

// Function UI_CraftingMenu.UI_CraftingMenu_C.GetItemStats
struct UUI_CraftingMenu_C_GetItemStats_Params
{
};

// Function UI_CraftingMenu.UI_CraftingMenu_C.UpdateItemsVisibility
struct UUI_CraftingMenu_C_UpdateItemsVisibility_Params
{
};

// Function UI_CraftingMenu.UI_CraftingMenu_C.GetRequiredResources
struct UUI_CraftingMenu_C_GetRequiredResources_Params
{
};

// Function UI_CraftingMenu.UI_CraftingMenu_C.RemoveCraftingResources
struct UUI_CraftingMenu_C_RemoveCraftingResources_Params
{
};

// Function UI_CraftingMenu.UI_CraftingMenu_C.CreateRadialLines
struct UUI_CraftingMenu_C_CreateRadialLines_Params
{
};

// Function UI_CraftingMenu.UI_CraftingMenu_C.AddItemsFromRecipe
struct UUI_CraftingMenu_C_AddItemsFromRecipe_Params
{
};

// Function UI_CraftingMenu.UI_CraftingMenu_C.CollapseItems
struct UUI_CraftingMenu_C_CollapseItems_Params
{
};

// Function UI_CraftingMenu.UI_CraftingMenu_C.CheckIfLockedByTechnology
struct UUI_CraftingMenu_C_CheckIfLockedByTechnology_Params
{
	struct FST_Item_Crafting_ItemRecipes               RecipeToCheck;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               IsLocked;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_CraftingMenu.UI_CraftingMenu_C.CheckCraftingResources
struct UUI_CraftingMenu_C_CheckCraftingResources_Params
{
};

// Function UI_CraftingMenu.UI_CraftingMenu_C.CreateCraftingList
struct UUI_CraftingMenu_C_CreateCraftingList_Params
{
	int                                                CategoryID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsAtStart_;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_CraftingMenu.UI_CraftingMenu_C.Get_ItemDescription
struct UUI_CraftingMenu_C_Get_ItemDescription_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function UI_CraftingMenu.UI_CraftingMenu_C.Get_ItemTimeToCraft
struct UUI_CraftingMenu_C_Get_ItemTimeToCraft_Params
{
};

// Function UI_CraftingMenu.UI_CraftingMenu_C.Get_AdditionalItemName
struct UUI_CraftingMenu_C_Get_AdditionalItemName_Params
{
};

// Function UI_CraftingMenu.UI_CraftingMenu_C.Get_ItemName
struct UUI_CraftingMenu_C_Get_ItemName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function UI_CraftingMenu.UI_CraftingMenu_C.GetMouseOver
struct UUI_CraftingMenu_C_GetMouseOver_Params
{
};

// Function UI_CraftingMenu.UI_CraftingMenu_C.OnSpawned
struct UUI_CraftingMenu_C_OnSpawned_Params
{
};

// Function UI_CraftingMenu.UI_CraftingMenu_C.ChangeInformationAboutSegment
struct UUI_CraftingMenu_C_ChangeInformationAboutSegment_Params
{
};

// Function UI_CraftingMenu.UI_CraftingMenu_C.NextPage
struct UUI_CraftingMenu_C_NextPage_Params
{
	int                                                SwitcherIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_CraftingMenu.UI_CraftingMenu_C.PreviousPage
struct UUI_CraftingMenu_C_PreviousPage_Params
{
};

// Function UI_CraftingMenu.UI_CraftingMenu_C.SelectMenuSegment
struct UUI_CraftingMenu_C_SelectMenuSegment_Params
{
};

// Function UI_CraftingMenu.UI_CraftingMenu_C.StartCrafting
struct UUI_CraftingMenu_C_StartCrafting_Params
{
};

// Function UI_CraftingMenu.UI_CraftingMenu_C.StopCrafting
struct UUI_CraftingMenu_C_StopCrafting_Params
{
};

// Function UI_CraftingMenu.UI_CraftingMenu_C.BeginCraftingProcess
struct UUI_CraftingMenu_C_BeginCraftingProcess_Params
{
	int                                                NumberToCraft;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_Item_Crafting_ItemRecipes               CraftingRecipe;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function UI_CraftingMenu.UI_CraftingMenu_C.UI_Left
struct UUI_CraftingMenu_C_UI_Left_Params
{
};

// Function UI_CraftingMenu.UI_CraftingMenu_C.UI_Right
struct UUI_CraftingMenu_C_UI_Right_Params
{
};

// Function UI_CraftingMenu.UI_CraftingMenu_C.UI_NextSection
struct UUI_CraftingMenu_C_UI_NextSection_Params
{
};

// Function UI_CraftingMenu.UI_CraftingMenu_C.UI_PreviousSection
struct UUI_CraftingMenu_C_UI_PreviousSection_Params
{
};

// Function UI_CraftingMenu.UI_CraftingMenu_C.UI_Confirm
struct UUI_CraftingMenu_C_UI_Confirm_Params
{
};

// Function UI_CraftingMenu.UI_CraftingMenu_C.UpdateResourcesCheck
struct UUI_CraftingMenu_C_UpdateResourcesCheck_Params
{
};

// Function UI_CraftingMenu.UI_CraftingMenu_C.TryToCraftMoreItems
struct UUI_CraftingMenu_C_TryToCraftMoreItems_Params
{
};

// Function UI_CraftingMenu.UI_CraftingMenu_C.ChangeSteeringType_Event_1
struct UUI_CraftingMenu_C_ChangeSteeringType_Event_1_Params
{
	bool                                               Gamepad;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_CraftingMenu.UI_CraftingMenu_C.RemoveMenu
struct UUI_CraftingMenu_C_RemoveMenu_Params
{
};

// Function UI_CraftingMenu.UI_CraftingMenu_C.ExecuteUbergraph_UI_CraftingMenu
struct UUI_CraftingMenu_C_ExecuteUbergraph_UI_CraftingMenu_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_CraftingMenu.UI_CraftingMenu_C.SegmentChanged__DelegateSignature
struct UUI_CraftingMenu_C_SegmentChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
