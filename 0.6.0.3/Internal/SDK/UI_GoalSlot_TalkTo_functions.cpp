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

// Function UI_GoalSlot_TalkTo.UI_GoalSlot_TalkTo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_GoalSlot_TalkTo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GoalSlot_TalkTo.UI_GoalSlot_TalkTo_C.Construct");

	UUI_GoalSlot_TalkTo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GoalSlot_TalkTo.UI_GoalSlot_TalkTo_C.ExecuteUbergraph_UI_GoalSlot_TalkTo
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GoalSlot_TalkTo_C::ExecuteUbergraph_UI_GoalSlot_TalkTo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GoalSlot_TalkTo.UI_GoalSlot_TalkTo_C.ExecuteUbergraph_UI_GoalSlot_TalkTo");

	UUI_GoalSlot_TalkTo_C_ExecuteUbergraph_UI_GoalSlot_TalkTo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GoalSlot_TalkTo.UI_GoalSlot_TalkTo_C.NewEventDispatcher_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UUI_GoalSlot_TalkTo_C::NewEventDispatcher_0__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GoalSlot_TalkTo.UI_GoalSlot_TalkTo_C.NewEventDispatcher_0__DelegateSignature");

	UUI_GoalSlot_TalkTo_C_NewEventDispatcher_0__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
