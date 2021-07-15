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

// Function UI_QuestDetails.UI_QuestDetails_C.InitQuestDetails
struct UUI_QuestDetails_C_InitQuestDetails_Params
{
};

// Function UI_QuestDetails.UI_QuestDetails_C.UpdateQuestInformation
struct UUI_QuestDetails_C_UpdateQuestInformation_Params
{
	class UUI_Slot_Quest_C*                            QuestReference;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_QuestDetails.UI_QuestDetails_C.ExecuteUbergraph_UI_QuestDetails
struct UUI_QuestDetails_C_ExecuteUbergraph_UI_QuestDetails_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
