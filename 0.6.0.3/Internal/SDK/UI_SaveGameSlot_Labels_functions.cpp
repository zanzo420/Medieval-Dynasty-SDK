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

// Function UI_SaveGameSlot_Labels.UI_SaveGameSlot_Labels_C.MakeActive
// (BlueprintCallable, BlueprintEvent)
void UUI_SaveGameSlot_Labels_C::MakeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveGameSlot_Labels.UI_SaveGameSlot_Labels_C.MakeActive");

	UUI_SaveGameSlot_Labels_C_MakeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveGameSlot_Labels.UI_SaveGameSlot_Labels_C.MakeUnactive
// (BlueprintCallable, BlueprintEvent)
void UUI_SaveGameSlot_Labels_C::MakeUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveGameSlot_Labels.UI_SaveGameSlot_Labels_C.MakeUnactive");

	UUI_SaveGameSlot_Labels_C_MakeUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveGameSlot_Labels.UI_SaveGameSlot_Labels_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_SaveGameSlot_Labels_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveGameSlot_Labels.UI_SaveGameSlot_Labels_C.PreConstruct");

	UUI_SaveGameSlot_Labels_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveGameSlot_Labels.UI_SaveGameSlot_Labels_C.BndEvt__Button_65_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_SaveGameSlot_Labels_C::BndEvt__Button_65_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveGameSlot_Labels.UI_SaveGameSlot_Labels_C.BndEvt__Button_65_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_SaveGameSlot_Labels_C_BndEvt__Button_65_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveGameSlot_Labels.UI_SaveGameSlot_Labels_C.ExecuteUbergraph_UI_SaveGameSlot_Labels
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SaveGameSlot_Labels_C::ExecuteUbergraph_UI_SaveGameSlot_Labels(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveGameSlot_Labels.UI_SaveGameSlot_Labels_C.ExecuteUbergraph_UI_SaveGameSlot_Labels");

	UUI_SaveGameSlot_Labels_C_ExecuteUbergraph_UI_SaveGameSlot_Labels_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
