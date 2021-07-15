// Name: Medieval Dynasty, Version: 0.6.0.3

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

// Function UI_QuestTracker_GoalSlot_TalkTo.UI_QuestTracker_GoalSlot_TalkTo_C.CreateItemsWidgets
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_GenerateItemsForQuest ST_GenerateItemsForQuest       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                           MustDeliverAllAtOnce           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_QuestTracker_GoalSlot_TalkTo_C::CreateItemsWidgets(const struct FST_GenerateItemsForQuest& ST_GenerateItemsForQuest, bool MustDeliverAllAtOnce)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuestTracker_GoalSlot_TalkTo.UI_QuestTracker_GoalSlot_TalkTo_C.CreateItemsWidgets");

	UUI_QuestTracker_GoalSlot_TalkTo_C_CreateItemsWidgets_Params params;
	params.ST_GenerateItemsForQuest = ST_GenerateItemsForQuest;
	params.MustDeliverAllAtOnce = MustDeliverAllAtOnce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuestTracker_GoalSlot_TalkTo.UI_QuestTracker_GoalSlot_TalkTo_C.Remove
// (BlueprintCallable, BlueprintEvent)
void UUI_QuestTracker_GoalSlot_TalkTo_C::Remove()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuestTracker_GoalSlot_TalkTo.UI_QuestTracker_GoalSlot_TalkTo_C.Remove");

	UUI_QuestTracker_GoalSlot_TalkTo_C_Remove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuestTracker_GoalSlot_TalkTo.UI_QuestTracker_GoalSlot_TalkTo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_QuestTracker_GoalSlot_TalkTo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuestTracker_GoalSlot_TalkTo.UI_QuestTracker_GoalSlot_TalkTo_C.Construct");

	UUI_QuestTracker_GoalSlot_TalkTo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuestTracker_GoalSlot_TalkTo.UI_QuestTracker_GoalSlot_TalkTo_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_QuestTracker_GoalSlot_TalkTo_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuestTracker_GoalSlot_TalkTo.UI_QuestTracker_GoalSlot_TalkTo_C.PreConstruct");

	UUI_QuestTracker_GoalSlot_TalkTo_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuestTracker_GoalSlot_TalkTo.UI_QuestTracker_GoalSlot_TalkTo_C.ExecuteUbergraph_UI_QuestTracker_GoalSlot_TalkTo
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_QuestTracker_GoalSlot_TalkTo_C::ExecuteUbergraph_UI_QuestTracker_GoalSlot_TalkTo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuestTracker_GoalSlot_TalkTo.UI_QuestTracker_GoalSlot_TalkTo_C.ExecuteUbergraph_UI_QuestTracker_GoalSlot_TalkTo");

	UUI_QuestTracker_GoalSlot_TalkTo_C_ExecuteUbergraph_UI_QuestTracker_GoalSlot_TalkTo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
