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

// Function UI_QuestTracker_GoalSlot_Hunt.UI_QuestTracker_GoalSlot_Hunt_C.GetRequiredAnimals
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TEnumAsByte<E_Animals_E_Animals>> AnimalsEnums                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UUI_QuestTracker_GoalSlot_Hunt_C::GetRequiredAnimals(TArray<TEnumAsByte<E_Animals_E_Animals>>* AnimalsEnums)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuestTracker_GoalSlot_Hunt.UI_QuestTracker_GoalSlot_Hunt_C.GetRequiredAnimals");

	UUI_QuestTracker_GoalSlot_Hunt_C_GetRequiredAnimals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimalsEnums != nullptr)
		*AnimalsEnums = params.AnimalsEnums;

}


// Function UI_QuestTracker_GoalSlot_Hunt.UI_QuestTracker_GoalSlot_Hunt_C.Remove
// (BlueprintCallable, BlueprintEvent)
void UUI_QuestTracker_GoalSlot_Hunt_C::Remove()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuestTracker_GoalSlot_Hunt.UI_QuestTracker_GoalSlot_Hunt_C.Remove");

	UUI_QuestTracker_GoalSlot_Hunt_C_Remove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuestTracker_GoalSlot_Hunt.UI_QuestTracker_GoalSlot_Hunt_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_QuestTracker_GoalSlot_Hunt_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuestTracker_GoalSlot_Hunt.UI_QuestTracker_GoalSlot_Hunt_C.Construct");

	UUI_QuestTracker_GoalSlot_Hunt_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuestTracker_GoalSlot_Hunt.UI_QuestTracker_GoalSlot_Hunt_C.ExecuteUbergraph_UI_QuestTracker_GoalSlot_Hunt
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_QuestTracker_GoalSlot_Hunt_C::ExecuteUbergraph_UI_QuestTracker_GoalSlot_Hunt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuestTracker_GoalSlot_Hunt.UI_QuestTracker_GoalSlot_Hunt_C.ExecuteUbergraph_UI_QuestTracker_GoalSlot_Hunt");

	UUI_QuestTracker_GoalSlot_Hunt_C_ExecuteUbergraph_UI_QuestTracker_GoalSlot_Hunt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuestTracker_GoalSlot_Hunt.UI_QuestTracker_GoalSlot_Hunt_C.NewEventDispatcher_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UUI_QuestTracker_GoalSlot_Hunt_C::NewEventDispatcher_0__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuestTracker_GoalSlot_Hunt.UI_QuestTracker_GoalSlot_Hunt_C.NewEventDispatcher_0__DelegateSignature");

	UUI_QuestTracker_GoalSlot_Hunt_C_NewEventDispatcher_0__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
