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

// Function UI_BagMenuSegment.UI_BagMenuSegment_C.SetEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_BagMenuSegment_C::SetEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BagMenuSegment.UI_BagMenuSegment_C.SetEnabled");

	UUI_BagMenuSegment_C_SetEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BagMenuSegment.UI_BagMenuSegment_C.Segment Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_BagMenuSegment_C::Segment_Selected(bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BagMenuSegment.UI_BagMenuSegment_C.Segment Selected");

	UUI_BagMenuSegment_C_Segment_Selected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BagMenuSegment.UI_BagMenuSegment_C.UpdateSegmentIcon
// (BlueprintCallable, BlueprintEvent)
void UUI_BagMenuSegment_C::UpdateSegmentIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BagMenuSegment.UI_BagMenuSegment_C.UpdateSegmentIcon");

	UUI_BagMenuSegment_C_UpdateSegmentIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BagMenuSegment.UI_BagMenuSegment_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_BagMenuSegment_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BagMenuSegment.UI_BagMenuSegment_C.PreConstruct");

	UUI_BagMenuSegment_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BagMenuSegment.UI_BagMenuSegment_C.SetIconRotation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          IconRotation                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_BagMenuSegment_C::SetIconRotation(float IconRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BagMenuSegment.UI_BagMenuSegment_C.SetIconRotation");

	UUI_BagMenuSegment_C_SetIconRotation_Params params;
	params.IconRotation = IconRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BagMenuSegment.UI_BagMenuSegment_C.SetInvalidSeason
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_BagMenuSegment_C::SetInvalidSeason(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BagMenuSegment.UI_BagMenuSegment_C.SetInvalidSeason");

	UUI_BagMenuSegment_C_SetInvalidSeason_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BagMenuSegment.UI_BagMenuSegment_C.ExecuteUbergraph_UI_BagMenuSegment
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_BagMenuSegment_C::ExecuteUbergraph_UI_BagMenuSegment(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BagMenuSegment.UI_BagMenuSegment_C.ExecuteUbergraph_UI_BagMenuSegment");

	UUI_BagMenuSegment_C_ExecuteUbergraph_UI_BagMenuSegment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
