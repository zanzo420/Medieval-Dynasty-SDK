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

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.MakeStorageSlotActive
struct UUI_ManagementDetails_Building_C_MakeStorageSlotActive_Params
{
	int                                                SelectedSlotIndex;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.MakeStorageSlotUnactive
struct UUI_ManagementDetails_Building_C_MakeStorageSlotUnactive_Params
{
};

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.ChangeSelectedStorageSlot
struct UUI_ManagementDetails_Building_C_ChangeSelectedStorageSlot_Params
{
	int                                                SelectedSlotIndex;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.CalculateTradeSkillPower
struct UUI_ManagementDetails_Building_C_CalculateTradeSkillPower_Params
{
};

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.UpdateTradePowerPercentageUsage
struct UUI_ManagementDetails_Building_C_UpdateTradePowerPercentageUsage_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.UpdateMarketStallName
struct UUI_ManagementDetails_Building_C_UpdateMarketStallName_Params
{
};

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.UpdateTradingGoods
struct UUI_ManagementDetails_Building_C_UpdateTradingGoods_Params
{
};

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.GetStatus
struct UUI_ManagementDetails_Building_C_GetStatus_Params
{
	struct FText                                       Text;                                                      // (Parm, OutParm)
	struct FSlateColor                                 Color;                                                     // (Parm, OutParm)
};

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.InputConfirm
struct UUI_ManagementDetails_Building_C_InputConfirm_Params
{
	bool                                               HoldingExecutesEvent;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.InputDropHeld
struct UUI_ManagementDetails_Building_C_InputDropHeld_Params
{
};

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.InputDropReleased
struct UUI_ManagementDetails_Building_C_InputDropReleased_Params
{
};

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.InputDropPressed
struct UUI_ManagementDetails_Building_C_InputDropPressed_Params
{
	bool                                               HoldingExecutesEvent;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Handled_;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.MakeTradeSlotUnactive
struct UUI_ManagementDetails_Building_C_MakeTradeSlotUnactive_Params
{
};

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.MakeTradeSlotActive
struct UUI_ManagementDetails_Building_C_MakeTradeSlotActive_Params
{
	int                                                SelectedSlotIndex;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.ChangeSelectedTradeSlot
struct UUI_ManagementDetails_Building_C_ChangeSelectedTradeSlot_Params
{
	int                                                SelectedSlotIndex;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.MakeProductionSlotUnactive
struct UUI_ManagementDetails_Building_C_MakeProductionSlotUnactive_Params
{
};

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.MakeProductionSlotActive
struct UUI_ManagementDetails_Building_C_MakeProductionSlotActive_Params
{
	int                                                SelectedSlotIndex;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.ChangeSelectedProductionSlot
struct UUI_ManagementDetails_Building_C_ChangeSelectedProductionSlot_Params
{
	int                                                SelectedSlotIndex;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.CalculateSkillPower
struct UUI_ManagementDetails_Building_C_CalculateSkillPower_Params
{
	struct FST_Production_Progress                     ProductionItem;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.UpdatePowerPercentageUsage
struct UUI_ManagementDetails_Building_C_UpdatePowerPercentageUsage_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.DecreaseSelectedLabel
struct UUI_ManagementDetails_Building_C_DecreaseSelectedLabel_Params
{
};

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.IncreaseSelectedLabel
struct UUI_ManagementDetails_Building_C_IncreaseSelectedLabel_Params
{
};

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.ChangeSelectedLabel
struct UUI_ManagementDetails_Building_C_ChangeSelectedLabel_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.CreateProfessions
struct UUI_ManagementDetails_Building_C_CreateProfessions_Params
{
};

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.MakeCraftingSlotUnactive
struct UUI_ManagementDetails_Building_C_MakeCraftingSlotUnactive_Params
{
};

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.MakeCraftingSlotActive
struct UUI_ManagementDetails_Building_C_MakeCraftingSlotActive_Params
{
	int                                                SelectedSlotIndex;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.ChangeSelectedCraftingSlot
struct UUI_ManagementDetails_Building_C_ChangeSelectedCraftingSlot_Params
{
	int                                                SelectedSlotIndex;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.MakeSlotsUnactive
struct UUI_ManagementDetails_Building_C_MakeSlotsUnactive_Params
{
};

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.MakeSlotActive
struct UUI_ManagementDetails_Building_C_MakeSlotActive_Params
{
	int                                                SelectedSlotIndex;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.ChangeSelectedSlot
struct UUI_ManagementDetails_Building_C_ChangeSelectedSlot_Params
{
	int                                                SelectedSlotIndex;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.Construct
struct UUI_ManagementDetails_Building_C_Construct_Params
{
};

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.InputDecreaseIndex
struct UUI_ManagementDetails_Building_C_InputDecreaseIndex_Params
{
};

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.InputIncreaseIndex
struct UUI_ManagementDetails_Building_C_InputIncreaseIndex_Params
{
};

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.InputCancel
struct UUI_ManagementDetails_Building_C_InputCancel_Params
{
};

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.Uncrop
struct UUI_ManagementDetails_Building_C_Uncrop_Params
{
};

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.InputRight
struct UUI_ManagementDetails_Building_C_InputRight_Params
{
};

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.InputLeft
struct UUI_ManagementDetails_Building_C_InputLeft_Params
{
};

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.UpdateDemands
struct UUI_ManagementDetails_Building_C_UpdateDemands_Params
{
};

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.FakeCropForShop
struct UUI_ManagementDetails_Building_C_FakeCropForShop_Params
{
};

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.Crop
struct UUI_ManagementDetails_Building_C_Crop_Params
{
};

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.ExecuteUbergraph_UI_ManagementDetails_Building
struct UUI_ManagementDetails_Building_C_ExecuteUbergraph_UI_ManagementDetails_Building_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
