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

// Function UI_QuickslotSegment.UI_QuickslotSegment_C.SetEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_QuickslotSegment_C::SetEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickslotSegment.UI_QuickslotSegment_C.SetEnabled");

	UUI_QuickslotSegment_C_SetEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuickslotSegment.UI_QuickslotSegment_C.Segment Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_QuickslotSegment_C::Segment_Selected(bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickslotSegment.UI_QuickslotSegment_C.Segment Selected");

	UUI_QuickslotSegment_C_Segment_Selected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuickslotSegment.UI_QuickslotSegment_C.UpdateSegmentIcon
// (BlueprintCallable, BlueprintEvent)
void UUI_QuickslotSegment_C::UpdateSegmentIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickslotSegment.UI_QuickslotSegment_C.UpdateSegmentIcon");

	UUI_QuickslotSegment_C_UpdateSegmentIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuickslotSegment.UI_QuickslotSegment_C.SetIconRotation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          IconRotation                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_QuickslotSegment_C::SetIconRotation(float IconRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickslotSegment.UI_QuickslotSegment_C.SetIconRotation");

	UUI_QuickslotSegment_C_SetIconRotation_Params params;
	params.IconRotation = IconRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuickslotSegment.UI_QuickslotSegment_C.ExecuteUbergraph_UI_QuickslotSegment
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_QuickslotSegment_C::ExecuteUbergraph_UI_QuickslotSegment(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuickslotSegment.UI_QuickslotSegment_C.ExecuteUbergraph_UI_QuickslotSegment");

	UUI_QuickslotSegment_C_ExecuteUbergraph_UI_QuickslotSegment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
