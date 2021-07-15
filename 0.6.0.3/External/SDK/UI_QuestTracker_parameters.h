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

// Function UI_QuestTracker.UI_QuestTracker_C.UpdateTracker
struct UUI_QuestTracker_C_UpdateTracker_Params
{
	struct FST_QuestInfo                               Quest;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function UI_QuestTracker.UI_QuestTracker_C.AddCompletedGoal
struct UUI_QuestTracker_C_AddCompletedGoal_Params
{
	int                                                GoalIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ObjectiveID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_QuestInfo                               Quest;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function UI_QuestTracker.UI_QuestTracker_C.ExecuteUbergraph_UI_QuestTracker
struct UUI_QuestTracker_C_ExecuteUbergraph_UI_QuestTracker_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
