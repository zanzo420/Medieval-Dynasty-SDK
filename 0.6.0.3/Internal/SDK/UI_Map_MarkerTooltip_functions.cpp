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

// Function UI_Map_MarkerTooltip.UI_Map_MarkerTooltip_C.SetNPCInfo
// (BlueprintCallable, BlueprintEvent)
void UUI_Map_MarkerTooltip_C::SetNPCInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Map_MarkerTooltip.UI_Map_MarkerTooltip_C.SetNPCInfo");

	UUI_Map_MarkerTooltip_C_SetNPCInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Map_MarkerTooltip.UI_Map_MarkerTooltip_C.SetNPCText
// (BlueprintCallable, BlueprintEvent)
void UUI_Map_MarkerTooltip_C::SetNPCText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Map_MarkerTooltip.UI_Map_MarkerTooltip_C.SetNPCText");

	UUI_Map_MarkerTooltip_C_SetNPCText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Map_MarkerTooltip.UI_Map_MarkerTooltip_C.UpdateMarkerTooltip
// (BlueprintCallable, BlueprintEvent)
void UUI_Map_MarkerTooltip_C::UpdateMarkerTooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Map_MarkerTooltip.UI_Map_MarkerTooltip_C.UpdateMarkerTooltip");

	UUI_Map_MarkerTooltip_C_UpdateMarkerTooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Map_MarkerTooltip.UI_Map_MarkerTooltip_C.SetBuildingInfo
// (BlueprintCallable, BlueprintEvent)
void UUI_Map_MarkerTooltip_C::SetBuildingInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Map_MarkerTooltip.UI_Map_MarkerTooltip_C.SetBuildingInfo");

	UUI_Map_MarkerTooltip_C_SetBuildingInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Map_MarkerTooltip.UI_Map_MarkerTooltip_C.SetAnimalsInfo
// (BlueprintCallable, BlueprintEvent)
void UUI_Map_MarkerTooltip_C::SetAnimalsInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Map_MarkerTooltip.UI_Map_MarkerTooltip_C.SetAnimalsInfo");

	UUI_Map_MarkerTooltip_C_SetAnimalsInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Map_MarkerTooltip.UI_Map_MarkerTooltip_C.ExecuteUbergraph_UI_Map_MarkerTooltip
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Map_MarkerTooltip_C::ExecuteUbergraph_UI_Map_MarkerTooltip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Map_MarkerTooltip.UI_Map_MarkerTooltip_C.ExecuteUbergraph_UI_Map_MarkerTooltip");

	UUI_Map_MarkerTooltip_C_ExecuteUbergraph_UI_Map_MarkerTooltip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
