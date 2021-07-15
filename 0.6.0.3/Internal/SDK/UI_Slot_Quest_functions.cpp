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

// Function UI_Slot_Quest.UI_Slot_Quest_C.SetInitialValues
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<E_QuestState_E_QuestState> QuestState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_QuestInfo           Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FST_Challange           Challange                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UUI_Slot_Quest_C::SetInitialValues(const struct FText& Name, TEnumAsByte<E_QuestState_E_QuestState> QuestState, const struct FST_QuestInfo& Quest, const struct FST_Challange& Challange)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_Quest.UI_Slot_Quest_C.SetInitialValues");

	UUI_Slot_Quest_C_SetInitialValues_Params params;
	params.Name = Name;
	params.QuestState = QuestState;
	params.Quest = Quest;
	params.Challange = Challange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Slot_Quest.UI_Slot_Quest_C.BndEvt__btn_ItemSlot_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Slot_Quest_C::BndEvt__btn_ItemSlot_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_Quest.UI_Slot_Quest_C.BndEvt__btn_ItemSlot_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_Slot_Quest_C_BndEvt__btn_ItemSlot_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Slot_Quest.UI_Slot_Quest_C.MakeActive
// (BlueprintCallable, BlueprintEvent)
void UUI_Slot_Quest_C::MakeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_Quest.UI_Slot_Quest_C.MakeActive");

	UUI_Slot_Quest_C_MakeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Slot_Quest.UI_Slot_Quest_C.MakeUnactive
// (BlueprintCallable, BlueprintEvent)
void UUI_Slot_Quest_C::MakeUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_Quest.UI_Slot_Quest_C.MakeUnactive");

	UUI_Slot_Quest_C_MakeUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Slot_Quest.UI_Slot_Quest_C.ChangeTrackedQuestNumber
// (BlueprintCallable, BlueprintEvent)
void UUI_Slot_Quest_C::ChangeTrackedQuestNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_Quest.UI_Slot_Quest_C.ChangeTrackedQuestNumber");

	UUI_Slot_Quest_C_ChangeTrackedQuestNumber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Slot_Quest.UI_Slot_Quest_C.UntrackQuest
// (BlueprintCallable, BlueprintEvent)
void UUI_Slot_Quest_C::UntrackQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_Quest.UI_Slot_Quest_C.UntrackQuest");

	UUI_Slot_Quest_C_UntrackQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Slot_Quest.UI_Slot_Quest_C.BndEvt__UI_Slot_Quest_btn_QuestSlot_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Slot_Quest_C::BndEvt__UI_Slot_Quest_btn_QuestSlot_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_Quest.UI_Slot_Quest_C.BndEvt__UI_Slot_Quest_btn_QuestSlot_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UUI_Slot_Quest_C_BndEvt__UI_Slot_Quest_btn_QuestSlot_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Slot_Quest.UI_Slot_Quest_C.BndEvt__UI_Slot_Quest_btn_QuestSlot_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Slot_Quest_C::BndEvt__UI_Slot_Quest_btn_QuestSlot_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_Quest.UI_Slot_Quest_C.BndEvt__UI_Slot_Quest_btn_QuestSlot_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UUI_Slot_Quest_C_BndEvt__UI_Slot_Quest_btn_QuestSlot_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Slot_Quest.UI_Slot_Quest_C.ExecuteUbergraph_UI_Slot_Quest
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Slot_Quest_C::ExecuteUbergraph_UI_Slot_Quest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Slot_Quest.UI_Slot_Quest_C.ExecuteUbergraph_UI_Slot_Quest");

	UUI_Slot_Quest_C_ExecuteUbergraph_UI_Slot_Quest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
