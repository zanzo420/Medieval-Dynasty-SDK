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

// Function UI_Trading_Trader.UI_Trading_Trader_C.UpdateMoneyAndWeight
struct UUI_Trading_Trader_C_UpdateMoneyAndWeight_Params
{
};

// Function UI_Trading_Trader.UI_Trading_Trader_C.ChangeSelectedMagazineItem
struct UUI_Trading_Trader_C_ChangeSelectedMagazineItem_Params
{
	int                                                Selected_ItemID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Trading_Trader.UI_Trading_Trader_C.MakeMagazineSlotActive
struct UUI_Trading_Trader_C_MakeMagazineSlotActive_Params
{
	int                                                Index_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Trading_Trader.UI_Trading_Trader_C.MakeMagazineSlotsUnactive
struct UUI_Trading_Trader_C_MakeMagazineSlotsUnactive_Params
{
};

// Function UI_Trading_Trader.UI_Trading_Trader_C.UpdateMagazineTab
struct UUI_Trading_Trader_C_UpdateMagazineTab_Params
{
};

// Function UI_Trading_Trader.UI_Trading_Trader_C.IncreaseMagazineCategoryID
struct UUI_Trading_Trader_C_IncreaseMagazineCategoryID_Params
{
};

// Function UI_Trading_Trader.UI_Trading_Trader_C.DecreaseMagazineCategoryID
struct UUI_Trading_Trader_C_DecreaseMagazineCategoryID_Params
{
};

// Function UI_Trading_Trader.UI_Trading_Trader_C.MakeMagazineLabelActive
struct UUI_Trading_Trader_C_MakeMagazineLabelActive_Params
{
	int                                                Index_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Trading_Trader.UI_Trading_Trader_C.MakeMagazineLabelsUnactive
struct UUI_Trading_Trader_C_MakeMagazineLabelsUnactive_Params
{
};

// Function UI_Trading_Trader.UI_Trading_Trader_C.ChangeMagazineItemsVisibilityOnCategoryChange
struct UUI_Trading_Trader_C_ChangeMagazineItemsVisibilityOnCategoryChange_Params
{
	TEnumAsByte<E_ItemCategories_E_ItemCategories>     Selection;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ResetIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Trading_Trader.UI_Trading_Trader_C.DecreaseMagazineIndex
struct UUI_Trading_Trader_C_DecreaseMagazineIndex_Params
{
};

// Function UI_Trading_Trader.UI_Trading_Trader_C.IncreaseMagazineIndex
struct UUI_Trading_Trader_C_IncreaseMagazineIndex_Params
{
};

// Function UI_Trading_Trader.UI_Trading_Trader_C.Init
struct UUI_Trading_Trader_C_Init_Params
{
	class APC_Player_C*                                PlayerControllerReference;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Trading_C*                               UI_Trading_Reference;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               GiftGiving;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Trading_Trader.UI_Trading_Trader_C.ExecuteUbergraph_UI_Trading_Trader
struct UUI_Trading_Trader_C_ExecuteUbergraph_UI_Trading_Trader_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
