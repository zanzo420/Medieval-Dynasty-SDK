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

// Function UI_Inspector_Item.UI_Inspector_Item_C.UpdateData
struct UUI_Inspector_Item_C_UpdateData_Params
{
};

// Function UI_Inspector_Item.UI_Inspector_Item_C.Init
struct UUI_Inspector_Item_C_Init_Params
{
	struct FText                                       Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Inspector_Item.UI_Inspector_Item_C.ExecuteUbergraph_UI_Inspector_Item
struct UUI_Inspector_Item_C_ExecuteUbergraph_UI_Inspector_Item_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
