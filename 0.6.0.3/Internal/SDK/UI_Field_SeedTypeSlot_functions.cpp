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

// Function UI_Field_SeedTypeSlot.UI_Field_SeedTypeSlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Field_SeedTypeSlot_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Field_SeedTypeSlot.UI_Field_SeedTypeSlot_C.PreConstruct");

	UUI_Field_SeedTypeSlot_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Field_SeedTypeSlot.UI_Field_SeedTypeSlot_C.MakeUnactive
// (BlueprintCallable, BlueprintEvent)
void UUI_Field_SeedTypeSlot_C::MakeUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Field_SeedTypeSlot.UI_Field_SeedTypeSlot_C.MakeUnactive");

	UUI_Field_SeedTypeSlot_C_MakeUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Field_SeedTypeSlot.UI_Field_SeedTypeSlot_C.MakeActive
// (BlueprintCallable, BlueprintEvent)
void UUI_Field_SeedTypeSlot_C::MakeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Field_SeedTypeSlot.UI_Field_SeedTypeSlot_C.MakeActive");

	UUI_Field_SeedTypeSlot_C_MakeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Field_SeedTypeSlot.UI_Field_SeedTypeSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Field_SeedTypeSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Field_SeedTypeSlot.UI_Field_SeedTypeSlot_C.Construct");

	UUI_Field_SeedTypeSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Field_SeedTypeSlot.UI_Field_SeedTypeSlot_C.ChangeSeedType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Seeds_E_Seeds>   E_SeedType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Field_SeedTypeSlot_C::ChangeSeedType(TEnumAsByte<E_Seeds_E_Seeds> E_SeedType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Field_SeedTypeSlot.UI_Field_SeedTypeSlot_C.ChangeSeedType");

	UUI_Field_SeedTypeSlot_C_ChangeSeedType_Params params;
	params.E_SeedType = E_SeedType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Field_SeedTypeSlot.UI_Field_SeedTypeSlot_C.BndEvt__Button_118_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Field_SeedTypeSlot_C::BndEvt__Button_118_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Field_SeedTypeSlot.UI_Field_SeedTypeSlot_C.BndEvt__Button_118_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_Field_SeedTypeSlot_C_BndEvt__Button_118_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Field_SeedTypeSlot.UI_Field_SeedTypeSlot_C.BndEvt__Button_118_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Field_SeedTypeSlot_C::BndEvt__Button_118_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Field_SeedTypeSlot.UI_Field_SeedTypeSlot_C.BndEvt__Button_118_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UUI_Field_SeedTypeSlot_C_BndEvt__Button_118_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Field_SeedTypeSlot.UI_Field_SeedTypeSlot_C.BndEvt__Button_118_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Field_SeedTypeSlot_C::BndEvt__Button_118_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Field_SeedTypeSlot.UI_Field_SeedTypeSlot_C.BndEvt__Button_118_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UUI_Field_SeedTypeSlot_C_BndEvt__Button_118_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Field_SeedTypeSlot.UI_Field_SeedTypeSlot_C.ExecuteUbergraph_UI_Field_SeedTypeSlot
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Field_SeedTypeSlot_C::ExecuteUbergraph_UI_Field_SeedTypeSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Field_SeedTypeSlot.UI_Field_SeedTypeSlot_C.ExecuteUbergraph_UI_Field_SeedTypeSlot");

	UUI_Field_SeedTypeSlot_C_ExecuteUbergraph_UI_Field_SeedTypeSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
