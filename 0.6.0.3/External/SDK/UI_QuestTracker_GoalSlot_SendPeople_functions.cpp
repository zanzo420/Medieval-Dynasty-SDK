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

// Function UI_QuestTracker_GoalSlot_SendPeople.UI_QuestTracker_GoalSlot_SendPeople_C.Remove
// (BlueprintCallable, BlueprintEvent)
void UUI_QuestTracker_GoalSlot_SendPeople_C::Remove()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuestTracker_GoalSlot_SendPeople.UI_QuestTracker_GoalSlot_SendPeople_C.Remove");

	UUI_QuestTracker_GoalSlot_SendPeople_C_Remove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuestTracker_GoalSlot_SendPeople.UI_QuestTracker_GoalSlot_SendPeople_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_QuestTracker_GoalSlot_SendPeople_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuestTracker_GoalSlot_SendPeople.UI_QuestTracker_GoalSlot_SendPeople_C.Construct");

	UUI_QuestTracker_GoalSlot_SendPeople_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuestTracker_GoalSlot_SendPeople.UI_QuestTracker_GoalSlot_SendPeople_C.ExecuteUbergraph_UI_QuestTracker_GoalSlot_SendPeople
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_QuestTracker_GoalSlot_SendPeople_C::ExecuteUbergraph_UI_QuestTracker_GoalSlot_SendPeople(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuestTracker_GoalSlot_SendPeople.UI_QuestTracker_GoalSlot_SendPeople_C.ExecuteUbergraph_UI_QuestTracker_GoalSlot_SendPeople");

	UUI_QuestTracker_GoalSlot_SendPeople_C_ExecuteUbergraph_UI_QuestTracker_GoalSlot_SendPeople_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuestTracker_GoalSlot_SendPeople.UI_QuestTracker_GoalSlot_SendPeople_C.NewEventDispatcher_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UUI_QuestTracker_GoalSlot_SendPeople_C::NewEventDispatcher_0__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuestTracker_GoalSlot_SendPeople.UI_QuestTracker_GoalSlot_SendPeople_C.NewEventDispatcher_0__DelegateSignature");

	UUI_QuestTracker_GoalSlot_SendPeople_C_NewEventDispatcher_0__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_QuestTracker_GoalSlot_SendPeople_C::AfterRead()
{
	UUI_QuestTracker_MasterGoalSlot_C::AfterRead();

	READ_PTR_FULL(RemoveAnimation, UWidgetAnimation);
	READ_PTR_FULL(Image, UImage);
	READ_PTR_FULL(TimeBox, UHorizontalBox);
	READ_PTR_FULL(txt_GoalText, UTextBlock);
}

void UUI_QuestTracker_GoalSlot_SendPeople_C::BeforeDelete()
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
