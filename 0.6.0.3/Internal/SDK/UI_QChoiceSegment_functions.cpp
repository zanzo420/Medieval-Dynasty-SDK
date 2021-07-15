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

// Function UI_QChoiceSegment.UI_QChoiceSegment_C.SetEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_QChoiceSegment_C::SetEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QChoiceSegment.UI_QChoiceSegment_C.SetEnabled");

	UUI_QChoiceSegment_C_SetEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QChoiceSegment.UI_QChoiceSegment_C.Segment Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_QChoiceSegment_C::Segment_Selected(bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QChoiceSegment.UI_QChoiceSegment_C.Segment Selected");

	UUI_QChoiceSegment_C_Segment_Selected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QChoiceSegment.UI_QChoiceSegment_C.UpdateSegmentIcon
// (BlueprintCallable, BlueprintEvent)
void UUI_QChoiceSegment_C::UpdateSegmentIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QChoiceSegment.UI_QChoiceSegment_C.UpdateSegmentIcon");

	UUI_QChoiceSegment_C_UpdateSegmentIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QChoiceSegment.UI_QChoiceSegment_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_QChoiceSegment_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QChoiceSegment.UI_QChoiceSegment_C.PreConstruct");

	UUI_QChoiceSegment_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QChoiceSegment.UI_QChoiceSegment_C.SetIconRotation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          IconRotation                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_QChoiceSegment_C::SetIconRotation(float IconRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QChoiceSegment.UI_QChoiceSegment_C.SetIconRotation");

	UUI_QChoiceSegment_C_SetIconRotation_Params params;
	params.IconRotation = IconRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QChoiceSegment.UI_QChoiceSegment_C.SetLocked
// (BlueprintCallable, BlueprintEvent)
void UUI_QChoiceSegment_C::SetLocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QChoiceSegment.UI_QChoiceSegment_C.SetLocked");

	UUI_QChoiceSegment_C_SetLocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QChoiceSegment.UI_QChoiceSegment_C.ExecuteUbergraph_UI_QChoiceSegment
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_QChoiceSegment_C::ExecuteUbergraph_UI_QChoiceSegment(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QChoiceSegment.UI_QChoiceSegment_C.ExecuteUbergraph_UI_QChoiceSegment");

	UUI_QChoiceSegment_C_ExecuteUbergraph_UI_QChoiceSegment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
