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

// Function UI_RadialSegment.UI_RadialSegment_C.SetBuildingModificationModeStats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_RadialSegment_C::SetBuildingModificationModeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RadialSegment.UI_RadialSegment_C.SetBuildingModificationModeStats");

	UUI_RadialSegment_C_SetBuildingModificationModeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_RadialSegment.UI_RadialSegment_C.SetEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_RadialSegment_C::SetEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RadialSegment.UI_RadialSegment_C.SetEnabled");

	UUI_RadialSegment_C_SetEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_RadialSegment.UI_RadialSegment_C.Segment Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_RadialSegment_C::Segment_Selected(bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RadialSegment.UI_RadialSegment_C.Segment Selected");

	UUI_RadialSegment_C_Segment_Selected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_RadialSegment.UI_RadialSegment_C.SetNotEnoughResources
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_RadialSegment_C::SetNotEnoughResources(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RadialSegment.UI_RadialSegment_C.SetNotEnoughResources");

	UUI_RadialSegment_C_SetNotEnoughResources_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_RadialSegment.UI_RadialSegment_C.SetLocked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_RadialSegment_C::SetLocked(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RadialSegment.UI_RadialSegment_C.SetLocked");

	UUI_RadialSegment_C_SetLocked_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_RadialSegment.UI_RadialSegment_C.SetIconRotation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          IconRotation                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_RadialSegment_C::SetIconRotation(float IconRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RadialSegment.UI_RadialSegment_C.SetIconRotation");

	UUI_RadialSegment_C_SetIconRotation_Params params;
	params.IconRotation = IconRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_RadialSegment.UI_RadialSegment_C.SetLimitExceeded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LimitExceeded                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_RadialSegment_C::SetLimitExceeded(bool LimitExceeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RadialSegment.UI_RadialSegment_C.SetLimitExceeded");

	UUI_RadialSegment_C_SetLimitExceeded_Params params;
	params.LimitExceeded = LimitExceeded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_RadialSegment.UI_RadialSegment_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_RadialSegment_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RadialSegment.UI_RadialSegment_C.Construct");

	UUI_RadialSegment_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_RadialSegment.UI_RadialSegment_C.ExecuteUbergraph_UI_RadialSegment
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_RadialSegment_C::ExecuteUbergraph_UI_RadialSegment(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RadialSegment.UI_RadialSegment_C.ExecuteUbergraph_UI_RadialSegment");

	UUI_RadialSegment_C_ExecuteUbergraph_UI_RadialSegment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
