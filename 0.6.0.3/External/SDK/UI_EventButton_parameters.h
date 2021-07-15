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

// Function UI_EventButton.UI_EventButton_C.NPCEffects
struct UUI_EventButton_C_NPCEffects_Params
{
	struct FST_EventEffect_NPCParameter                ST_EventEffect_NPCParameter;                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function UI_EventButton.UI_EventButton_C.AddUIToGrid
struct UUI_EventButton_C_AddUIToGrid_Params
{
	class UUI_Event_ButtonConsequences_C*              UIReference;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_EventButton.UI_EventButton_C.OtherEffects
struct UUI_EventButton_C_OtherEffects_Params
{
	struct FST_EventEffect_Village                     ST_EventEffect_Village;                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function UI_EventButton.UI_EventButton_C.PlayerEffects
struct UUI_EventButton_C_PlayerEffects_Params
{
	struct FST_EventEffect_PlayerParameters            ST_EventEffect_PlayerParameters;                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function UI_EventButton.UI_EventButton_C.ItemsRestrictionFill
struct UUI_EventButton_C_ItemsRestrictionFill_Params
{
	struct FST_EventButtonRestrictions                 Restriction;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function UI_EventButton.UI_EventButton_C.FillGridPanel
struct UUI_EventButton_C_FillGridPanel_Params
{
};

// Function UI_EventButton.UI_EventButton_C.MakeActive
struct UUI_EventButton_C_MakeActive_Params
{
};

// Function UI_EventButton.UI_EventButton_C.MakeUnactive
struct UUI_EventButton_C_MakeUnactive_Params
{
};

// Function UI_EventButton.UI_EventButton_C.Construct
struct UUI_EventButton_C_Construct_Params
{
};

// Function UI_EventButton.UI_EventButton_C.BndEvt__EventButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UUI_EventButton_C_BndEvt__EventButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_EventButton.UI_EventButton_C.SetLocked
struct UUI_EventButton_C_SetLocked_Params
{
	bool                                               Locked;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_EventButton.UI_EventButton_C.ExecuteUbergraph_UI_EventButton
struct UUI_EventButton_C_ExecuteUbergraph_UI_EventButton_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
