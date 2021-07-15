﻿// Name: Medieval Dynasty, Version: 0.6.0.3

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function UI_QuestTracker.UI_QuestTracker_C.UpdateTracker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_QuestInfo           Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void UUI_QuestTracker_C::UpdateTracker(const struct FST_QuestInfo& Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuestTracker.UI_QuestTracker_C.UpdateTracker");

	UUI_QuestTracker_C_UpdateTracker_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuestTracker.UI_QuestTracker_C.AddCompletedGoal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            GoalIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ObjectiveID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_QuestInfo           Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void UUI_QuestTracker_C::AddCompletedGoal(int GoalIndex, int ObjectiveID, const struct FST_QuestInfo& Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuestTracker.UI_QuestTracker_C.AddCompletedGoal");

	UUI_QuestTracker_C_AddCompletedGoal_Params params;
	params.GoalIndex = GoalIndex;
	params.ObjectiveID = ObjectiveID;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuestTracker.UI_QuestTracker_C.ExecuteUbergraph_UI_QuestTracker
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_QuestTracker_C::ExecuteUbergraph_UI_QuestTracker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuestTracker.UI_QuestTracker_C.ExecuteUbergraph_UI_QuestTracker");

	UUI_QuestTracker_C_ExecuteUbergraph_UI_QuestTracker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_QuestTracker_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(ActiveGoalsBox, UVerticalBox);
	READ_PTR_FULL(CompletedGoalsBox, UVerticalBox);
	READ_PTR_FULL(icn_QuestIcon, UImage);
	READ_PTR_FULL(txt_QuestName, UTextBlock);
	READ_PTR_FULL(ParentWidget, UUI_HUD_C);
	READ_PTR_FULL(tmp_GoalWidget, UWidget);
}

void UUI_QuestTracker_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(ActiveGoalsBox);
	DELE_PTR_FULL(CompletedGoalsBox);
	DELE_PTR_FULL(icn_QuestIcon);
	DELE_PTR_FULL(txt_QuestName);
	DELE_PTR_FULL(ParentWidget);
	DELE_PTR_FULL(tmp_GoalWidget);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
