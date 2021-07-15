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

// Function UI_Management_BuildingLabels.UI_Management_BuildingLabels_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Management_BuildingLabels_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Management_BuildingLabels.UI_Management_BuildingLabels_C.PreConstruct");

	UUI_Management_BuildingLabels_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Management_BuildingLabels.UI_Management_BuildingLabels_C.ExecuteUbergraph_UI_Management_BuildingLabels
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Management_BuildingLabels_C::ExecuteUbergraph_UI_Management_BuildingLabels(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Management_BuildingLabels.UI_Management_BuildingLabels_C.ExecuteUbergraph_UI_Management_BuildingLabels");

	UUI_Management_BuildingLabels_C_ExecuteUbergraph_UI_Management_BuildingLabels_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
