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

// Function UI_Event_ButtonConsequences.UI_Event_ButtonConsequences_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Event_ButtonConsequences_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Event_ButtonConsequences.UI_Event_ButtonConsequences_C.Construct");

	UUI_Event_ButtonConsequences_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Event_ButtonConsequences.UI_Event_ButtonConsequences_C.MakeActive
// (BlueprintCallable, BlueprintEvent)
void UUI_Event_ButtonConsequences_C::MakeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Event_ButtonConsequences.UI_Event_ButtonConsequences_C.MakeActive");

	UUI_Event_ButtonConsequences_C_MakeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Event_ButtonConsequences.UI_Event_ButtonConsequences_C.MakeUnactive
// (BlueprintCallable, BlueprintEvent)
void UUI_Event_ButtonConsequences_C::MakeUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Event_ButtonConsequences.UI_Event_ButtonConsequences_C.MakeUnactive");

	UUI_Event_ButtonConsequences_C_MakeUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Event_ButtonConsequences.UI_Event_ButtonConsequences_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Event_ButtonConsequences_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Event_ButtonConsequences.UI_Event_ButtonConsequences_C.PreConstruct");

	UUI_Event_ButtonConsequences_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Event_ButtonConsequences.UI_Event_ButtonConsequences_C.UpdateTextLength
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseShort                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Event_ButtonConsequences_C::UpdateTextLength(bool UseShort)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Event_ButtonConsequences.UI_Event_ButtonConsequences_C.UpdateTextLength");

	UUI_Event_ButtonConsequences_C_UpdateTextLength_Params params;
	params.UseShort = UseShort;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Event_ButtonConsequences.UI_Event_ButtonConsequences_C.ExecuteUbergraph_UI_Event_ButtonConsequences
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Event_ButtonConsequences_C::ExecuteUbergraph_UI_Event_ButtonConsequences(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Event_ButtonConsequences.UI_Event_ButtonConsequences_C.ExecuteUbergraph_UI_Event_ButtonConsequences");

	UUI_Event_ButtonConsequences_C_ExecuteUbergraph_UI_Event_ButtonConsequences_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
