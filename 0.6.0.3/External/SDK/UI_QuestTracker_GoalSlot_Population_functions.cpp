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

// Function UI_QuestTracker_GoalSlot_Population.UI_QuestTracker_GoalSlot_Population_C.Remove
// (BlueprintCallable, BlueprintEvent)
void UUI_QuestTracker_GoalSlot_Population_C::Remove()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuestTracker_GoalSlot_Population.UI_QuestTracker_GoalSlot_Population_C.Remove");

	UUI_QuestTracker_GoalSlot_Population_C_Remove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuestTracker_GoalSlot_Population.UI_QuestTracker_GoalSlot_Population_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_QuestTracker_GoalSlot_Population_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuestTracker_GoalSlot_Population.UI_QuestTracker_GoalSlot_Population_C.Construct");

	UUI_QuestTracker_GoalSlot_Population_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuestTracker_GoalSlot_Population.UI_QuestTracker_GoalSlot_Population_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_QuestTracker_GoalSlot_Population_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuestTracker_GoalSlot_Population.UI_QuestTracker_GoalSlot_Population_C.PreConstruct");

	UUI_QuestTracker_GoalSlot_Population_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuestTracker_GoalSlot_Population.UI_QuestTracker_GoalSlot_Population_C.ExecuteUbergraph_UI_QuestTracker_GoalSlot_Population
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_QuestTracker_GoalSlot_Population_C::ExecuteUbergraph_UI_QuestTracker_GoalSlot_Population(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuestTracker_GoalSlot_Population.UI_QuestTracker_GoalSlot_Population_C.ExecuteUbergraph_UI_QuestTracker_GoalSlot_Population");

	UUI_QuestTracker_GoalSlot_Population_C_ExecuteUbergraph_UI_QuestTracker_GoalSlot_Population_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuestTracker_GoalSlot_Population.UI_QuestTracker_GoalSlot_Population_C.NewEventDispatcher_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UUI_QuestTracker_GoalSlot_Population_C::NewEventDispatcher_0__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuestTracker_GoalSlot_Population.UI_QuestTracker_GoalSlot_Population_C.NewEventDispatcher_0__DelegateSignature");

	UUI_QuestTracker_GoalSlot_Population_C_NewEventDispatcher_0__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_QuestTracker_GoalSlot_Population_C::AfterRead()
{
	UUI_QuestTracker_MasterGoalSlot_C::AfterRead();

	READ_PTR_FULL(RemoveAnimation, UWidgetAnimation);
	READ_PTR_FULL(Image, UImage);
	READ_PTR_FULL(TimeBox, UHorizontalBox);
	READ_PTR_FULL(txt_GoalText, UTextBlock);
}

void UUI_QuestTracker_GoalSlot_Population_C::BeforeDelete()
{
	UUI_QuestTracker_MasterGoalSlot_C::BeforeDelete();

	DELE_PTR_FULL(RemoveAnimation);
	DELE_PTR_FULL(Image);
	DELE_PTR_FULL(TimeBox);
	DELE_PTR_FULL(txt_GoalText);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
