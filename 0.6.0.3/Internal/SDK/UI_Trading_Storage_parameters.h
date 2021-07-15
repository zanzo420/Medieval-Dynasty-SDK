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

// Function UI_Trading_Storage.UI_Trading_Storage_C.UpdateMoneyAndWeight
struct UUI_Trading_Storage_C_UpdateMoneyAndWeight_Params
{
};

// Function UI_Trading_Storage.UI_Trading_Storage_C.ChangeSelectedMagazineItem
struct UUI_Trading_Storage_C_ChangeSelectedMagazineItem_Params
{
	int                                                Selected_ItemID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Trading_Storage.UI_Trading_Storage_C.MakeMagazineSlotActive
struct UUI_Trading_Storage_C_MakeMagazineSlotActive_Params
{
	int                                                Index_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Trading_Storage.UI_Trading_Storage_C.MakeMagazineSlotsUnactive
struct UUI_Trading_Storage_C_MakeMagazineSlotsUnactive_Params
{
};

// Function UI_Trading_Storage.UI_Trading_Storage_C.UpdateMagazineTab
struct UUI_Trading_Storage_C_UpdateMagazineTab_Params
{
};

// Function UI_Trading_Storage.UI_Trading_Storage_C.IncreaseMagazineCategoryID
struct UUI_Trading_Storage_C_IncreaseMagazineCategoryID_Params
{
};

// Function UI_Trading_Storage.UI_Trading_Storage_C.DecreaseMagazineCategoryID
struct UUI_Trading_Storage_C_DecreaseMagazineCategoryID_Params
{
};

// Function UI_Trading_Storage.UI_Trading_Storage_C.MakeMagazineLabelActive
struct UUI_Trading_Storage_C_MakeMagazineLabelActive_Params
{
	int                                                Index_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Trading_Storage.UI_Trading_Storage_C.MakeMagazineLabelsUnactive
struct UUI_Trading_Storage_C_MakeMagazineLabelsUnactive_Params
{
};

// Function UI_Trading_Storage.UI_Trading_Storage_C.ChangeMagazineItemsVisibilityOnCategoryChange
struct UUI_Trading_Storage_C_ChangeMagazineItemsVisibilityOnCategoryChange_Params
{
	TEnumAsByte<E_ItemCategories_E_ItemCategories>     Selection;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ResetIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Trading_Storage.UI_Trading_Storage_C.DecreaseMagazineIndex
struct UUI_Trading_Storage_C_DecreaseMagazineIndex_Params
{
};

// Function UI_Trading_Storage.UI_Trading_Storage_C.IncreaseMagazineIndex
struct UUI_Trading_Storage_C_IncreaseMagazineIndex_Params
{
};

// Function UI_Trading_Storage.UI_Trading_Storage_C.Init
struct UUI_Trading_Storage_C_Init_Params
{
	class APC_Player_C*                                PlayerControllerReference;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Trading_C*                               UI_Trading_Reference;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Trading_Storage.UI_Trading_Storage_C.ExecuteUbergraph_UI_Trading_Storage
struct UUI_Trading_Storage_C_ExecuteUbergraph_UI_Trading_Storage_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
