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

// Function UI_GoalTimer.UI_GoalTimer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_GoalTimer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GoalTimer.UI_GoalTimer_C.Construct");

	UUI_GoalTimer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GoalTimer.UI_GoalTimer_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_GoalTimer_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GoalTimer.UI_GoalTimer_C.PreConstruct");

	UUI_GoalTimer_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GoalTimer.UI_GoalTimer_C.ExecuteUbergraph_UI_GoalTimer
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GoalTimer_C::ExecuteUbergraph_UI_GoalTimer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GoalTimer.UI_GoalTimer_C.ExecuteUbergraph_UI_GoalTimer");

	UUI_GoalTimer_C_ExecuteUbergraph_UI_GoalTimer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
