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

// Function UI_Slot_Trader.UI_Slot_Trader_C.SetInitialValues
struct UUI_Slot_Trader_C_SetInitialValues_Params
{
	class UObject*                                     Icon;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Count;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Food;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              water;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Weight;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Price;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_ItemCategories_E_ItemCategories>     ItemCategory;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AssignedToQuickSlot;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Capacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxCapacity;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentHP;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsCoin;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Slot_Trader.UI_Slot_Trader_C.BndEvt__btn_ItemSlot_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_Slot_Trader_C_BndEvt__btn_ItemSlot_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_Slot_Trader.UI_Slot_Trader_C.MakeActive
struct UUI_Slot_Trader_C_MakeActive_Params
{
};

// Function UI_Slot_Trader.UI_Slot_Trader_C.MakeUnactive
struct UUI_Slot_Trader_C_MakeUnactive_Params
{
};

// Function UI_Slot_Trader.UI_Slot_Trader_C.BndEvt__UI_Inventory_Item_Button_btn_ItemSlot_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UUI_Slot_Trader_C_BndEvt__UI_Inventory_Item_Button_btn_ItemSlot_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_Slot_Trader.UI_Slot_Trader_C.BndEvt__UI_Inventory_Item_Button_btn_ItemSlot_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UUI_Slot_Trader_C_BndEvt__UI_Inventory_Item_Button_btn_ItemSlot_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_Slot_Trader.UI_Slot_Trader_C.ExecuteUbergraph_UI_Slot_Trader
struct UUI_Slot_Trader_C_ExecuteUbergraph_UI_Slot_Trader_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
