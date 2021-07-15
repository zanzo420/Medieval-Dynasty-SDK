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

// Function UI_GoalSlot_CompleteQuests.UI_GoalSlot_CompleteQuests_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_GoalSlot_CompleteQuests_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GoalSlot_CompleteQuests.UI_GoalSlot_CompleteQuests_C.Construct");

	UUI_GoalSlot_CompleteQuests_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GoalSlot_CompleteQuests.UI_GoalSlot_CompleteQuests_C.ExecuteUbergraph_UI_GoalSlot_CompleteQuests
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GoalSlot_CompleteQuests_C::ExecuteUbergraph_UI_GoalSlot_CompleteQuests(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GoalSlot_CompleteQuests.UI_GoalSlot_CompleteQuests_C.ExecuteUbergraph_UI_GoalSlot_CompleteQuests");

	UUI_GoalSlot_CompleteQuests_C_ExecuteUbergraph_UI_GoalSlot_CompleteQuests_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GoalSlot_CompleteQuests.UI_GoalSlot_CompleteQuests_C.NewEventDispatcher_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UUI_GoalSlot_CompleteQuests_C::NewEventDispatcher_0__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GoalSlot_CompleteQuests.UI_GoalSlot_CompleteQuests_C.NewEventDispatcher_0__DelegateSignature");

	UUI_GoalSlot_CompleteQuests_C_NewEventDispatcher_0__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_GoalSlot_CompleteQuests_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Image, UImage);
	READ_PTR_FULL(txt_GoalText, UTextBlock);
	READ_PTR_FULL(PlayerControllerReference, APC_Player_C);
}

void UUI_GoalSlot_CompleteQuests_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Image);
	DELE_PTR_FULL(txt_GoalText);
	DELE_PTR_FULL(PlayerControllerReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
