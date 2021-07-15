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

// Function UI_BuildingDetails_ToolLabels.UI_BuildingDetails_ToolLabels_C.SetLabelType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           House                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_BuildingDetails_ToolLabels_C::SetLabelType(bool House)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_ToolLabels.UI_BuildingDetails_ToolLabels_C.SetLabelType");

	UUI_BuildingDetails_ToolLabels_C_SetLabelType_Params params;
	params.House = House;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_ToolLabels.UI_BuildingDetails_ToolLabels_C.ExecuteUbergraph_UI_BuildingDetails_ToolLabels
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_BuildingDetails_ToolLabels_C::ExecuteUbergraph_UI_BuildingDetails_ToolLabels(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_ToolLabels.UI_BuildingDetails_ToolLabels_C.ExecuteUbergraph_UI_BuildingDetails_ToolLabels");

	UUI_BuildingDetails_ToolLabels_C_ExecuteUbergraph_UI_BuildingDetails_ToolLabels_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_BuildingDetails_ToolLabels_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(txt_2, UTextBlock);
}

void UUI_BuildingDetails_ToolLabels_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(txt_2);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
