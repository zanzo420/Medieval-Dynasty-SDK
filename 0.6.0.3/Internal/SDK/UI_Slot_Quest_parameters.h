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

// Function UI_Slot_Quest.UI_Slot_Quest_C.SetInitialValues
struct UUI_Slot_Quest_C_SetInitialValues_Params
{
	struct FText                                       Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<E_QuestState_E_QuestState>             QuestState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_QuestInfo                               Quest;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	struct FST_Challange                               Challange;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function UI_Slot_Quest.UI_Slot_Quest_C.BndEvt__btn_ItemSlot_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_Slot_Quest_C_BndEvt__btn_ItemSlot_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_Slot_Quest.UI_Slot_Quest_C.MakeActive
struct UUI_Slot_Quest_C_MakeActive_Params
{
};

// Function UI_Slot_Quest.UI_Slot_Quest_C.MakeUnactive
struct UUI_Slot_Quest_C_MakeUnactive_Params
{
};

// Function UI_Slot_Quest.UI_Slot_Quest_C.ChangeTrackedQuestNumber
struct UUI_Slot_Quest_C_ChangeTrackedQuestNumber_Params
{
};

// Function UI_Slot_Quest.UI_Slot_Quest_C.UntrackQuest
struct UUI_Slot_Quest_C_UntrackQuest_Params
{
};

// Function UI_Slot_Quest.UI_Slot_Quest_C.BndEvt__UI_Slot_Quest_btn_QuestSlot_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UUI_Slot_Quest_C_BndEvt__UI_Slot_Quest_btn_QuestSlot_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_Slot_Quest.UI_Slot_Quest_C.BndEvt__UI_Slot_Quest_btn_QuestSlot_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UUI_Slot_Quest_C_BndEvt__UI_Slot_Quest_btn_QuestSlot_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_Slot_Quest.UI_Slot_Quest_C.ExecuteUbergraph_UI_Slot_Quest
struct UUI_Slot_Quest_C_ExecuteUbergraph_UI_Slot_Quest_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
