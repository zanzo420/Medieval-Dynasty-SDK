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

// Function UI_QuestTracker_GoalTalk_ItemSlot.UI_QuestTracker_GoalTalk_ItemSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_QuestTracker_GoalTalk_ItemSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuestTracker_GoalTalk_ItemSlot.UI_QuestTracker_GoalTalk_ItemSlot_C.Construct");

	UUI_QuestTracker_GoalTalk_ItemSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuestTracker_GoalTalk_ItemSlot.UI_QuestTracker_GoalTalk_ItemSlot_C.ExecuteUbergraph_UI_QuestTracker_GoalTalk_ItemSlot
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_QuestTracker_GoalTalk_ItemSlot_C::ExecuteUbergraph_UI_QuestTracker_GoalTalk_ItemSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuestTracker_GoalTalk_ItemSlot.UI_QuestTracker_GoalTalk_ItemSlot_C.ExecuteUbergraph_UI_QuestTracker_GoalTalk_ItemSlot");

	UUI_QuestTracker_GoalTalk_ItemSlot_C_ExecuteUbergraph_UI_QuestTracker_GoalTalk_ItemSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_QuestTracker_GoalTalk_ItemSlot_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(txt_AmountToDeliver, UTextBlock);
	READ_PTR_FULL(txt_ItemsInInventory, UTextBlock);
}

void UUI_QuestTracker_GoalTalk_ItemSlot_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(txt_AmountToDeliver);
	DELE_PTR_FULL(txt_ItemsInInventory);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
