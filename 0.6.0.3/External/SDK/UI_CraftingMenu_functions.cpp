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

// Function UI_CraftingMenu.UI_CraftingMenu_C.GetItemStats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_CraftingMenu_C::GetItemStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingMenu.UI_CraftingMenu_C.GetItemStats");

	UUI_CraftingMenu_C_GetItemStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingMenu.UI_CraftingMenu_C.UpdateItemsVisibility
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_CraftingMenu_C::UpdateItemsVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingMenu.UI_CraftingMenu_C.UpdateItemsVisibility");

	UUI_CraftingMenu_C_UpdateItemsVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingMenu.UI_CraftingMenu_C.GetRequiredResources
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_CraftingMenu_C::GetRequiredResources()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingMenu.UI_CraftingMenu_C.GetRequiredResources");

	UUI_CraftingMenu_C_GetRequiredResources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingMenu.UI_CraftingMenu_C.RemoveCraftingResources
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_CraftingMenu_C::RemoveCraftingResources()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingMenu.UI_CraftingMenu_C.RemoveCraftingResources");

	UUI_CraftingMenu_C_RemoveCraftingResources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingMenu.UI_CraftingMenu_C.CreateRadialLines
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_CraftingMenu_C::CreateRadialLines()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingMenu.UI_CraftingMenu_C.CreateRadialLines");

	UUI_CraftingMenu_C_CreateRadialLines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingMenu.UI_CraftingMenu_C.AddItemsFromRecipe
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_CraftingMenu_C::AddItemsFromRecipe()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingMenu.UI_CraftingMenu_C.AddItemsFromRecipe");

	UUI_CraftingMenu_C_AddItemsFromRecipe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingMenu.UI_CraftingMenu_C.CollapseItems
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_CraftingMenu_C::CollapseItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingMenu.UI_CraftingMenu_C.CollapseItems");

	UUI_CraftingMenu_C_CollapseItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingMenu.UI_CraftingMenu_C.CheckIfLockedByTechnology
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_Item_Crafting_ItemRecipes RecipeToCheck                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           IsLocked                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_CraftingMenu_C::CheckIfLockedByTechnology(const struct FST_Item_Crafting_ItemRecipes& RecipeToCheck, bool* IsLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingMenu.UI_CraftingMenu_C.CheckIfLockedByTechnology");

	UUI_CraftingMenu_C_CheckIfLockedByTechnology_Params params;
	params.RecipeToCheck = RecipeToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsLocked != nullptr)
		*IsLocked = params.IsLocked;

}


// Function UI_CraftingMenu.UI_CraftingMenu_C.CheckCraftingResources
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_CraftingMenu_C::CheckCraftingResources()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingMenu.UI_CraftingMenu_C.CheckCraftingResources");

	UUI_CraftingMenu_C_CheckCraftingResources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingMenu.UI_CraftingMenu_C.CreateCraftingList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CategoryID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsAtStart_                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_CraftingMenu_C::CreateCraftingList(int CategoryID, bool IsAtStart_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingMenu.UI_CraftingMenu_C.CreateCraftingList");

	UUI_CraftingMenu_C_CreateCraftingList_Params params;
	params.CategoryID = CategoryID;
	params.IsAtStart_ = IsAtStart_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingMenu.UI_CraftingMenu_C.Get_ItemDescription
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UUI_CraftingMenu_C::Get_ItemDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingMenu.UI_CraftingMenu_C.Get_ItemDescription");

	UUI_CraftingMenu_C_Get_ItemDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UI_CraftingMenu.UI_CraftingMenu_C.Get_ItemTimeToCraft
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_CraftingMenu_C::Get_ItemTimeToCraft()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingMenu.UI_CraftingMenu_C.Get_ItemTimeToCraft");

	UUI_CraftingMenu_C_Get_ItemTimeToCraft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingMenu.UI_CraftingMenu_C.Get_AdditionalItemName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_CraftingMenu_C::Get_AdditionalItemName()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingMenu.UI_CraftingMenu_C.Get_AdditionalItemName");

	UUI_CraftingMenu_C_Get_AdditionalItemName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingMenu.UI_CraftingMenu_C.Get_ItemName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UUI_CraftingMenu_C::Get_ItemName()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingMenu.UI_CraftingMenu_C.Get_ItemName");

	UUI_CraftingMenu_C_Get_ItemName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UI_CraftingMenu.UI_CraftingMenu_C.GetMouseOver
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_CraftingMenu_C::GetMouseOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingMenu.UI_CraftingMenu_C.GetMouseOver");

	UUI_CraftingMenu_C_GetMouseOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingMenu.UI_CraftingMenu_C.OnSpawned
// (BlueprintCallable, BlueprintEvent)
void UUI_CraftingMenu_C::OnSpawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingMenu.UI_CraftingMenu_C.OnSpawned");

	UUI_CraftingMenu_C_OnSpawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingMenu.UI_CraftingMenu_C.ChangeInformationAboutSegment
// (BlueprintCallable, BlueprintEvent)
void UUI_CraftingMenu_C::ChangeInformationAboutSegment()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingMenu.UI_CraftingMenu_C.ChangeInformationAboutSegment");

	UUI_CraftingMenu_C_ChangeInformationAboutSegment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingMenu.UI_CraftingMenu_C.NextPage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SwitcherIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_CraftingMenu_C::NextPage(int SwitcherIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingMenu.UI_CraftingMenu_C.NextPage");

	UUI_CraftingMenu_C_NextPage_Params params;
	params.SwitcherIndex = SwitcherIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingMenu.UI_CraftingMenu_C.PreviousPage
// (BlueprintCallable, BlueprintEvent)
void UUI_CraftingMenu_C::PreviousPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingMenu.UI_CraftingMenu_C.PreviousPage");

	UUI_CraftingMenu_C_PreviousPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingMenu.UI_CraftingMenu_C.SelectMenuSegment
// (BlueprintCallable, BlueprintEvent)
void UUI_CraftingMenu_C::SelectMenuSegment()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingMenu.UI_CraftingMenu_C.SelectMenuSegment");

	UUI_CraftingMenu_C_SelectMenuSegment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingMenu.UI_CraftingMenu_C.StartCrafting
// (BlueprintCallable, BlueprintEvent)
void UUI_CraftingMenu_C::StartCrafting()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingMenu.UI_CraftingMenu_C.StartCrafting");

	UUI_CraftingMenu_C_StartCrafting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingMenu.UI_CraftingMenu_C.StopCrafting
// (BlueprintCallable, BlueprintEvent)
void UUI_CraftingMenu_C::StopCrafting()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingMenu.UI_CraftingMenu_C.StopCrafting");

	UUI_CraftingMenu_C_StopCrafting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingMenu.UI_CraftingMenu_C.BeginCraftingProcess
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumberToCraft                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Item_Crafting_ItemRecipes CraftingRecipe                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UUI_CraftingMenu_C::BeginCraftingProcess(int NumberToCraft, const struct FST_Item_Crafting_ItemRecipes& CraftingRecipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingMenu.UI_CraftingMenu_C.BeginCraftingProcess");

	UUI_CraftingMenu_C_BeginCraftingProcess_Params params;
	params.NumberToCraft = NumberToCraft;
	params.CraftingRecipe = CraftingRecipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingMenu.UI_CraftingMenu_C.UI_Left
// (BlueprintCallable, BlueprintEvent)
void UUI_CraftingMenu_C::UI_Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingMenu.UI_CraftingMenu_C.UI_Left");

	UUI_CraftingMenu_C_UI_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingMenu.UI_CraftingMenu_C.UI_Right
// (BlueprintCallable, BlueprintEvent)
void UUI_CraftingMenu_C::UI_Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingMenu.UI_CraftingMenu_C.UI_Right");

	UUI_CraftingMenu_C_UI_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingMenu.UI_CraftingMenu_C.UI_NextSection
// (BlueprintCallable, BlueprintEvent)
void UUI_CraftingMenu_C::UI_NextSection()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingMenu.UI_CraftingMenu_C.UI_NextSection");

	UUI_CraftingMenu_C_UI_NextSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingMenu.UI_CraftingMenu_C.UI_PreviousSection
// (BlueprintCallable, BlueprintEvent)
void UUI_CraftingMenu_C::UI_PreviousSection()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingMenu.UI_CraftingMenu_C.UI_PreviousSection");

	UUI_CraftingMenu_C_UI_PreviousSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingMenu.UI_CraftingMenu_C.UI_Confirm
// (BlueprintCallable, BlueprintEvent)
void UUI_CraftingMenu_C::UI_Confirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingMenu.UI_CraftingMenu_C.UI_Confirm");

	UUI_CraftingMenu_C_UI_Confirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingMenu.UI_CraftingMenu_C.UpdateResourcesCheck
// (BlueprintCallable, BlueprintEvent)
void UUI_CraftingMenu_C::UpdateResourcesCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingMenu.UI_CraftingMenu_C.UpdateResourcesCheck");

	UUI_CraftingMenu_C_UpdateResourcesCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingMenu.UI_CraftingMenu_C.TryToCraftMoreItems
// (BlueprintCallable, BlueprintEvent)
void UUI_CraftingMenu_C::TryToCraftMoreItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingMenu.UI_CraftingMenu_C.TryToCraftMoreItems");

	UUI_CraftingMenu_C_TryToCraftMoreItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingMenu.UI_CraftingMenu_C.ChangeSteeringType_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Gamepad                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_CraftingMenu_C::ChangeSteeringType_Event_1(bool Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingMenu.UI_CraftingMenu_C.ChangeSteeringType_Event_1");

	UUI_CraftingMenu_C_ChangeSteeringType_Event_1_Params params;
	params.Gamepad = Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingMenu.UI_CraftingMenu_C.RemoveMenu
// (BlueprintCallable, BlueprintEvent)
void UUI_CraftingMenu_C::RemoveMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingMenu.UI_CraftingMenu_C.RemoveMenu");

	UUI_CraftingMenu_C_RemoveMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingMenu.UI_CraftingMenu_C.ExecuteUbergraph_UI_CraftingMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_CraftingMenu_C::ExecuteUbergraph_UI_CraftingMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingMenu.UI_CraftingMenu_C.ExecuteUbergraph_UI_CraftingMenu");

	UUI_CraftingMenu_C_ExecuteUbergraph_UI_CraftingMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CraftingMenu.UI_CraftingMenu_C.SegmentChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UUI_CraftingMenu_C::SegmentChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CraftingMenu.UI_CraftingMenu_C.SegmentChanged__DelegateSignature");

	UUI_CraftingMenu_C_SegmentChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_CraftingMenu_C::AfterRead()
{
	UUI_MasterCraftingRadialMenu_C::AfterRead();

	READ_PTR_FULL(ActivitySwitcher, UWidgetSwitcher);
	READ_PTR_FULL(AdditionalItem, UTextBlock);
	READ_PTR_FULL(AdditionalItemBox, USizeBox);
	READ_PTR_FULL(BuildTypeDescription, UTextBlock);
	READ_PTR_FULL(BuildTypeName, UTextBlock);
	READ_PTR_FULL(BuildTypeName_4, UTextBlock);
	READ_PTR_FULL(CenterImage_2, UImage);
	READ_PTR_FULL(CraftingProcessBox, UVerticalBox);
	READ_PTR_FULL(CraftMoreItem, UBorder);
	READ_PTR_FULL(FifthItem, UBorder);
	READ_PTR_FULL(FirstItem, UBorder);
	READ_PTR_FULL(FourthItem, UBorder);
	READ_PTR_FULL(icn_CraftingProgress, UImage);
	READ_PTR_FULL(Image_11, UImage);
	READ_PTR_FULL(Image_12, UImage);
	READ_PTR_FULL(Img_Wheel_Gamepad_2, UImage);
	READ_PTR_FULL(Img_Wheel_Keyboard_2, UImage);
	READ_PTR_FULL(Item1Cost, UTextBlock);
	READ_PTR_FULL(Item1Img, UImage);
	READ_PTR_FULL(Item1Inventory, UTextBlock);
	READ_PTR_FULL(Item1Name, UTextBlock);
	READ_PTR_FULL(Item2Cost, UTextBlock);
	READ_PTR_FULL(Item2Img, UImage);
	READ_PTR_FULL(Item2Inventory, UTextBlock);
	READ_PTR_FULL(Item2Name, UTextBlock);
	READ_PTR_FULL(Item3Cost, UTextBlock);
	READ_PTR_FULL(Item3Img, UImage);
	READ_PTR_FULL(Item3Inventory, UTextBlock);
	READ_PTR_FULL(Item3Name, UTextBlock);
	READ_PTR_FULL(Item4Cost, UTextBlock);
	READ_PTR_FULL(Item4Img, UImage);
	READ_PTR_FULL(Item4Inventory, UTextBlock);
	READ_PTR_FULL(Item4Name, UTextBlock);
	READ_PTR_FULL(Item5Cost, UTextBlock);
	READ_PTR_FULL(Item5Img, UImage);
	READ_PTR_FULL(Item5Inventory, UTextBlock);
	READ_PTR_FULL(Item5Name, UTextBlock);
	READ_PTR_FULL(Item6Cost, UTextBlock);
	READ_PTR_FULL(Item6Img, UImage);
	READ_PTR_FULL(Item6Inventory, UTextBlock);
	READ_PTR_FULL(Item6Name, UTextBlock);
	READ_PTR_FULL(ItemStatsPanel, UUniformGridPanel);
	READ_PTR_FULL(MainCanvas, UCanvasPanel);
	READ_PTR_FULL(MainInformationBox, UVerticalBox);
	READ_PTR_FULL(MoreActionSwitcher, UWidgetSwitcher);
	READ_PTR_FULL(NotEnoughItem, UBorder);
	READ_PTR_FULL(NotEnoughResourcesText, UTextBlock);
	READ_PTR_FULL(PageSwitcher, UWidgetSwitcher);
	READ_PTR_FULL(RecipesCanvas, UCanvasPanel);
	READ_PTR_FULL(ResourcesBox, UVerticalBox);
	READ_PTR_FULL(ResourcesTextBox, USizeBox);
	READ_PTR_FULL(SecondItem, UBorder);
	READ_PTR_FULL(SixthItem, UBorder);
	READ_PTR_FULL(ThirdItem, UBorder);
	READ_PTR_FULL(TimeBox, USizeBox);
	READ_PTR_FULL(TimeItem, UTextBlock);
	READ_PTR_FULL(txt_BuyScheme, UTextBlock);
	READ_PTR_FULL(txt_BuyScheme_Cost, UTextBlock);
	READ_PTR_FULL(txt_BuyScheme_Inventory, UTextBlock);
	READ_PTR_FULL(txt_CraftingItemCount, UTextBlock);
	READ_PTR_FULL(txt_CraftingItemName, UTextBlock);
	READ_PTR_FULL(txt_CraftMoreAction, UTextBlock);
	READ_PTR_FULL(txt_TimeLeftToCraft, UTextBlock);
	READ_PTR_FULL(txt_WheelLetter_2, UTextBlock);
	READ_PTR_FULL(UI_Slot_CraftingDescription, UUI_Slot_CraftingDescription_C);
	READ_PTR_FULL(UI_Slot_CraftingDescription_2, UUI_Slot_CraftingDescription_C);
	READ_PTR_FULL(UI_Slot_CraftingDescription_3, UUI_Slot_CraftingDescription_C);
	READ_PTR_FULL(WheelArrow, UImage);
	READ_PTR_FULL(WidgetSwitcher_2, UWidgetSwitcher);
	READ_PTR_FULL(CraftingSlider, UUI_CraftingCountSlider_C);
	READ_PTR_FULL(PlayerControllerReference, APC_Player_C);
}

void UUI_CraftingMenu_C::BeforeDelete()
{
	UUI_MasterCraftingRadialMenu_C::BeforeDelete();

	DELE_PTR_FULL(ActivitySwitcher);
	DELE_PTR_FULL(AdditionalItem);
	DELE_PTR_FULL(AdditionalItemBox);
	DELE_PTR_FULL(BuildTypeDescription);
	DELE_PTR_FULL(BuildTypeName);
	DELE_PTR_FULL(BuildTypeName_4);
	DELE_PTR_FULL(CenterImage_2);
	DELE_PTR_FULL(CraftingProcessBox);
	DELE_PTR_FULL(CraftMoreItem);
	DELE_PTR_FULL(FifthItem);
	DELE_PTR_FULL(FirstItem);
	DELE_PTR_FULL(FourthItem);
	DELE_PTR_FULL(icn_CraftingProgress);
	DELE_PTR_FULL(Image_11);
	DELE_PTR_FULL(Image_12);
	DELE_PTR_FULL(Img_Wheel_Gamepad_2);
	DELE_PTR_FULL(Img_Wheel_Keyboard_2);
	DELE_PTR_FULL(Item1Cost);
	DELE_PTR_FULL(Item1Img);
	DELE_PTR_FULL(Item1Inventory);
	DELE_PTR_FULL(Item1Name);
	DELE_PTR_FULL(Item2Cost);
	DELE_PTR_FULL(Item2Img);
	DELE_PTR_FULL(Item2Inventory);
	DELE_PTR_FULL(Item2Name);
	DELE_PTR_FULL(Item3Cost);
	DELE_PTR_FULL(Item3Img);
	DELE_PTR_FULL(Item3Inventory);
	DELE_PTR_FULL(Item3Name);
	DELE_PTR_FULL(Item4Cost);
	DELE_PTR_FULL(Item4Img);
	DELE_PTR_FULL(Item4Inventory);
	DELE_PTR_FULL(Item4Name);
	DELE_PTR_FULL(Item5Cost);
	DELE_PTR_FULL(Item5Img);
	DELE_PTR_FULL(Item5Inventory);
	DELE_PTR_FULL(Item5Name);
	DELE_PTR_FULL(Item6Cost);
	DELE_PTR_FULL(Item6Img);
	DELE_PTR_FULL(Item6Inventory);
	DELE_PTR_FULL(Item6Name);
	DELE_PTR_FULL(ItemStatsPanel);
	DELE_PTR_FULL(MainCanvas);
	DELE_PTR_FULL(MainInformationBox);
	DELE_PTR_FULL(MoreActionSwitcher);
	DELE_PTR_FULL(NotEnoughItem);
	DELE_PTR_FULL(NotEnoughResourcesText);
	DELE_PTR_FULL(PageSwitcher);
	DELE_PTR_FULL(RecipesCanvas);
	DELE_PTR_FULL(ResourcesBox);
	DELE_PTR_FULL(ResourcesTextBox);
	DELE_PTR_FULL(SecondItem);
	DELE_PTR_FULL(SixthItem);
	DELE_PTR_FULL(ThirdItem);
	DELE_PTR_FULL(TimeBox);
	DELE_PTR_FULL(TimeItem);
	DELE_PTR_FULL(txt_BuyScheme);
	DELE_PTR_FULL(txt_BuyScheme_Cost);
	DELE_PTR_FULL(txt_BuyScheme_Inventory);
	DELE_PTR_FULL(txt_CraftingItemCount);
	DELE_PTR_FULL(txt_CraftingItemName);
	DELE_PTR_FULL(txt_CraftMoreAction);
	DELE_PTR_FULL(txt_TimeLeftToCraft);
	DELE_PTR_FULL(txt_WheelLetter_2);
	DELE_PTR_FULL(UI_Slot_CraftingDescription);
	DELE_PTR_FULL(UI_Slot_CraftingDescription_2);
	DELE_PTR_FULL(UI_Slot_CraftingDescription_3);
	DELE_PTR_FULL(WheelArrow);
	DELE_PTR_FULL(WidgetSwitcher_2);
	DELE_PTR_FULL(CraftingSlider);
	DELE_PTR_FULL(PlayerControllerReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
