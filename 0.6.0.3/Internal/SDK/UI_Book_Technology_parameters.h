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

// Function UI_Book_Technology.UI_Book_Technology_C.UpdatePurchasedCountInSchemes
struct UUI_Book_Technology_C_UpdatePurchasedCountInSchemes_Params
{
	TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes>   ActiveTechnology;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book_Technology.UI_Book_Technology_C.SetFocusSchemes
struct UUI_Book_Technology_C_SetFocusSchemes_Params
{
	bool                                               FocusSchemes;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Book_Technology.UI_Book_Technology_C.UpdateInputsTextsAndVisibility
struct UUI_Book_Technology_C_UpdateInputsTextsAndVisibility_Params
{
};

// Function UI_Book_Technology.UI_Book_Technology_C.UpdateDescription
struct UUI_Book_Technology_C_UpdateDescription_Params
{
	class UUI_Technology_SchemeSlot_C*                 SchemeReference;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book_Technology.UI_Book_Technology_C.UpdateTechnology
struct UUI_Book_Technology_C_UpdateTechnology_Params
{
};

// Function UI_Book_Technology.UI_Book_Technology_C.TechnologyCancel
struct UUI_Book_Technology_C_TechnologyCancel_Params
{
	bool                                               InputHandled;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Book_Technology.UI_Book_Technology_C.TechnologyConfirm
struct UUI_Book_Technology_C_TechnologyConfirm_Params
{
};

// Function UI_Book_Technology.UI_Book_Technology_C.IncreaseTechnologyCategoryID
struct UUI_Book_Technology_C_IncreaseTechnologyCategoryID_Params
{
};

// Function UI_Book_Technology.UI_Book_Technology_C.DecreaseTechnologyCategoryID
struct UUI_Book_Technology_C_DecreaseTechnologyCategoryID_Params
{
};

// Function UI_Book_Technology.UI_Book_Technology_C.ChangeSelectedTechnologyItem
struct UUI_Book_Technology_C_ChangeSelectedTechnologyItem_Params
{
	int                                                TechnologyID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book_Technology.UI_Book_Technology_C.DecreaseTechnologyIndex
struct UUI_Book_Technology_C_DecreaseTechnologyIndex_Params
{
};

// Function UI_Book_Technology.UI_Book_Technology_C.IncreaseTechnologyIndex
struct UUI_Book_Technology_C_IncreaseTechnologyIndex_Params
{
};

// Function UI_Book_Technology.UI_Book_Technology_C.MakeTechnologySlotActive
struct UUI_Book_Technology_C_MakeTechnologySlotActive_Params
{
	int                                                TechnologyID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book_Technology.UI_Book_Technology_C.MakeTechnologySlotsUnactive
struct UUI_Book_Technology_C_MakeTechnologySlotsUnactive_Params
{
};

// Function UI_Book_Technology.UI_Book_Technology_C.MakeTechnologyLabelsUnactive
struct UUI_Book_Technology_C_MakeTechnologyLabelsUnactive_Params
{
};

// Function UI_Book_Technology.UI_Book_Technology_C.MakeTechnologyLabelActive
struct UUI_Book_Technology_C_MakeTechnologyLabelActive_Params
{
	int                                                Index_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book_Technology.UI_Book_Technology_C.ChangeTechnologyVisibilityOnCategoryChange
struct UUI_Book_Technology_C_ChangeTechnologyVisibilityOnCategoryChange_Params
{
	TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes>   Selected;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ResetIndex_;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Book_Technology.UI_Book_Technology_C.Construct
struct UUI_Book_Technology_C_Construct_Params
{
};

// Function UI_Book_Technology.UI_Book_Technology_C.OnTechnologyChange
struct UUI_Book_Technology_C_OnTechnologyChange_Params
{
};

// Function UI_Book_Technology.UI_Book_Technology_C.OnSchemePurchased_Event
struct UUI_Book_Technology_C_OnSchemePurchased_Event_Params
{
};

// Function UI_Book_Technology.UI_Book_Technology_C.ChangeSteeringType_Event_1
struct UUI_Book_Technology_C_ChangeSteeringType_Event_1_Params
{
	bool                                               Gamepad;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Book_Technology.UI_Book_Technology_C.Init
struct UUI_Book_Technology_C_Init_Params
{
};

// Function UI_Book_Technology.UI_Book_Technology_C.RemoveTab
struct UUI_Book_Technology_C_RemoveTab_Params
{
};

// Function UI_Book_Technology.UI_Book_Technology_C.Btn_Confirm
struct UUI_Book_Technology_C_Btn_Confirm_Params
{
};

// Function UI_Book_Technology.UI_Book_Technology_C.Btn_Up
struct UUI_Book_Technology_C_Btn_Up_Params
{
};

// Function UI_Book_Technology.UI_Book_Technology_C.Btn_Down
struct UUI_Book_Technology_C_Btn_Down_Params
{
};

// Function UI_Book_Technology.UI_Book_Technology_C.Btn_Left
struct UUI_Book_Technology_C_Btn_Left_Params
{
};

// Function UI_Book_Technology.UI_Book_Technology_C.Btn_Right
struct UUI_Book_Technology_C_Btn_Right_Params
{
};

// Function UI_Book_Technology.UI_Book_Technology_C.Btn_Previous
struct UUI_Book_Technology_C_Btn_Previous_Params
{
};

// Function UI_Book_Technology.UI_Book_Technology_C.Btn_Next
struct UUI_Book_Technology_C_Btn_Next_Params
{
};

// Function UI_Book_Technology.UI_Book_Technology_C.btn_Return
struct UUI_Book_Technology_C_btn_Return_Params
{
};

// Function UI_Book_Technology.UI_Book_Technology_C.ExecuteUbergraph_UI_Book_Technology
struct UUI_Book_Technology_C_ExecuteUbergraph_UI_Book_Technology_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book_Technology.UI_Book_Technology_C.OnSchemePurchased__DelegateSignature
struct UUI_Book_Technology_C_OnSchemePurchased__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
