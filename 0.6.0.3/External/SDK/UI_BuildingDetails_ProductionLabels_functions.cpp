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

// Function UI_BuildingDetails_ProductionLabels.UI_BuildingDetails_ProductionLabels_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_BuildingDetails_ProductionLabels_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_ProductionLabels.UI_BuildingDetails_ProductionLabels_C.Construct");

	UUI_BuildingDetails_ProductionLabels_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_ProductionLabels.UI_BuildingDetails_ProductionLabels_C.ExecuteUbergraph_UI_BuildingDetails_ProductionLabels
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_BuildingDetails_ProductionLabels_C::ExecuteUbergraph_UI_BuildingDetails_ProductionLabels(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_ProductionLabels.UI_BuildingDetails_ProductionLabels_C.ExecuteUbergraph_UI_BuildingDetails_ProductionLabels");

	UUI_BuildingDetails_ProductionLabels_C_ExecuteUbergraph_UI_BuildingDetails_ProductionLabels_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_BuildingDetails_ProductionLabels_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(txt_OneDay1, UTextBlock);
	READ_PTR_FULL(txt_OneDay2, UTextBlock);
	READ_PTR_FULL(txt_OneDay3, UTextBlock);
}

void UUI_BuildingDetails_ProductionLabels_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(txt_OneDay1);
	DELE_PTR_FULL(txt_OneDay2);
	DELE_PTR_FULL(txt_OneDay3);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
