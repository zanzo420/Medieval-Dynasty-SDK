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

// Function UI_Book_Quest.UI_Book_Quest_C.DecreaseEventIndex
struct UUI_Book_Quest_C_DecreaseEventIndex_Params
{
};

// Function UI_Book_Quest.UI_Book_Quest_C.IncreaseEventIndex
struct UUI_Book_Quest_C_IncreaseEventIndex_Params
{
};

// Function UI_Book_Quest.UI_Book_Quest_C.MakeEventSlotsUnactive
struct UUI_Book_Quest_C_MakeEventSlotsUnactive_Params
{
};

// Function UI_Book_Quest.UI_Book_Quest_C.MakeEventSlotActive
struct UUI_Book_Quest_C_MakeEventSlotActive_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book_Quest.UI_Book_Quest_C.ChangeSelectedEventSlot
struct UUI_Book_Quest_C_ChangeSelectedEventSlot_Params
{
	int                                                SelectedEventID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book_Quest.UI_Book_Quest_C.ChangeSelectedKnowledgeSlot
struct UUI_Book_Quest_C_ChangeSelectedKnowledgeSlot_Params
{
	int                                                SelectedKnowledgeID;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book_Quest.UI_Book_Quest_C.MakeKnowledgeSlotActive
struct UUI_Book_Quest_C_MakeKnowledgeSlotActive_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book_Quest.UI_Book_Quest_C.MakeKnowledgeSlotsUnactive
struct UUI_Book_Quest_C_MakeKnowledgeSlotsUnactive_Params
{
};

// Function UI_Book_Quest.UI_Book_Quest_C.DecreaseKnowledgeIndex
struct UUI_Book_Quest_C_DecreaseKnowledgeIndex_Params
{
};

// Function UI_Book_Quest.UI_Book_Quest_C.IncreaseKnowledgeIndex
struct UUI_Book_Quest_C_IncreaseKnowledgeIndex_Params
{
};

// Function UI_Book_Quest.UI_Book_Quest_C.JournalRight
struct UUI_Book_Quest_C_JournalRight_Params
{
};

// Function UI_Book_Quest.UI_Book_Quest_C.JournalLeft
struct UUI_Book_Quest_C_JournalLeft_Params
{
};

// Function UI_Book_Quest.UI_Book_Quest_C.JournalDown
struct UUI_Book_Quest_C_JournalDown_Params
{
};

// Function UI_Book_Quest.UI_Book_Quest_C.JournalUp
struct UUI_Book_Quest_C_JournalUp_Params
{
};

// Function UI_Book_Quest.UI_Book_Quest_C.JournalConfirm
struct UUI_Book_Quest_C_JournalConfirm_Params
{
};

// Function UI_Book_Quest.UI_Book_Quest_C.SelectQuestToTrack
struct UUI_Book_Quest_C_SelectQuestToTrack_Params
{
};

// Function UI_Book_Quest.UI_Book_Quest_C.IncreaseQuestCategoryID
struct UUI_Book_Quest_C_IncreaseQuestCategoryID_Params
{
};

// Function UI_Book_Quest.UI_Book_Quest_C.DecreaseQuestCategoryID
struct UUI_Book_Quest_C_DecreaseQuestCategoryID_Params
{
};

// Function UI_Book_Quest.UI_Book_Quest_C.ChangeSelectedQuestItem
struct UUI_Book_Quest_C_ChangeSelectedQuestItem_Params
{
	int                                                QuestID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book_Quest.UI_Book_Quest_C.DecreaseQuestIndex
struct UUI_Book_Quest_C_DecreaseQuestIndex_Params
{
};

// Function UI_Book_Quest.UI_Book_Quest_C.IncreaseQuestIndex
struct UUI_Book_Quest_C_IncreaseQuestIndex_Params
{
};

// Function UI_Book_Quest.UI_Book_Quest_C.MakeQuestSlotActive
struct UUI_Book_Quest_C_MakeQuestSlotActive_Params
{
	int                                                QuestID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book_Quest.UI_Book_Quest_C.MakeQuestSlotsUnactive
struct UUI_Book_Quest_C_MakeQuestSlotsUnactive_Params
{
};

// Function UI_Book_Quest.UI_Book_Quest_C.MakeQuestLabelsUnactive
struct UUI_Book_Quest_C_MakeQuestLabelsUnactive_Params
{
};

// Function UI_Book_Quest.UI_Book_Quest_C.MakeQuestLabelActive
struct UUI_Book_Quest_C_MakeQuestLabelActive_Params
{
	int                                                Index_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Book_Quest.UI_Book_Quest_C.ChangeQuestsVisibilityOnCategoryChange
struct UUI_Book_Quest_C_ChangeQuestsVisibilityOnCategoryChange_Params
{
	bool                                               ResetIndex_;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Book_Quest.UI_Book_Quest_C.UpdateQuestTab
struct UUI_Book_Quest_C_UpdateQuestTab_Params
{
};

// Function UI_Book_Quest.UI_Book_Quest_C.Construct
struct UUI_Book_Quest_C_Construct_Params
{
};

// Function UI_Book_Quest.UI_Book_Quest_C.ChangeSteeringType_Event_1
struct UUI_Book_Quest_C_ChangeSteeringType_Event_1_Params
{
	bool                                               Gamepad;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Book_Quest.UI_Book_Quest_C.Init
struct UUI_Book_Quest_C_Init_Params
{
};

// Function UI_Book_Quest.UI_Book_Quest_C.Btn_Confirm
struct UUI_Book_Quest_C_Btn_Confirm_Params
{
};

// Function UI_Book_Quest.UI_Book_Quest_C.Btn_Up
struct UUI_Book_Quest_C_Btn_Up_Params
{
};

// Function UI_Book_Quest.UI_Book_Quest_C.Btn_Down
struct UUI_Book_Quest_C_Btn_Down_Params
{
};

// Function UI_Book_Quest.UI_Book_Quest_C.Btn_Left
struct UUI_Book_Quest_C_Btn_Left_Params
{
};

// Function UI_Book_Quest.UI_Book_Quest_C.Btn_Right
struct UUI_Book_Quest_C_Btn_Right_Params
{
};

// Function UI_Book_Quest.UI_Book_Quest_C.Btn_Previous
struct UUI_Book_Quest_C_Btn_Previous_Params
{
};

// Function UI_Book_Quest.UI_Book_Quest_C.Btn_Next
struct UUI_Book_Quest_C_Btn_Next_Params
{
};

// Function UI_Book_Quest.UI_Book_Quest_C.btn_Return
struct UUI_Book_Quest_C_btn_Return_Params
{
};

// Function UI_Book_Quest.UI_Book_Quest_C.ExecuteUbergraph_UI_Book_Quest
struct UUI_Book_Quest_C_ExecuteUbergraph_UI_Book_Quest_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
