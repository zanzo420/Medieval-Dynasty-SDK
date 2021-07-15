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

// Function UI_TechnologyLabels.UI_TechnologyLabels_C.btn_Farming_Clicked
// (BlueprintCallable, BlueprintEvent)
void UUI_TechnologyLabels_C::btn_Farming_Clicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TechnologyLabels.UI_TechnologyLabels_C.btn_Farming_Clicked");

	UUI_TechnologyLabels_C_btn_Farming_Clicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_TechnologyLabels.UI_TechnologyLabels_C.btn_Survival_Clicked
// (BlueprintCallable, BlueprintEvent)
void UUI_TechnologyLabels_C::btn_Survival_Clicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TechnologyLabels.UI_TechnologyLabels_C.btn_Survival_Clicked");

	UUI_TechnologyLabels_C_btn_Survival_Clicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_TechnologyLabels.UI_TechnologyLabels_C.btn_Building_Clicked
// (BlueprintCallable, BlueprintEvent)
void UUI_TechnologyLabels_C::btn_Building_Clicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TechnologyLabels.UI_TechnologyLabels_C.btn_Building_Clicked");

	UUI_TechnologyLabels_C_btn_Building_Clicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_TechnologyLabels.UI_TechnologyLabels_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_TechnologyLabels_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TechnologyLabels.UI_TechnologyLabels_C.Construct");

	UUI_TechnologyLabels_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_TechnologyLabels.UI_TechnologyLabels_C.btn_Crafting_Clicked
// (BlueprintCallable, BlueprintEvent)
void UUI_TechnologyLabels_C::btn_Crafting_Clicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TechnologyLabels.UI_TechnologyLabels_C.btn_Crafting_Clicked");

	UUI_TechnologyLabels_C_btn_Crafting_Clicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_TechnologyLabels.UI_TechnologyLabels_C.ExecuteUbergraph_UI_TechnologyLabels
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_TechnologyLabels_C::ExecuteUbergraph_UI_TechnologyLabels(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TechnologyLabels.UI_TechnologyLabels_C.ExecuteUbergraph_UI_TechnologyLabels");

	UUI_TechnologyLabels_C_ExecuteUbergraph_UI_TechnologyLabels_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_TechnologyLabels_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(btn_Building, UUI_LabelButton_C);
	READ_PTR_FULL(btn_Crafting, UUI_LabelButton_C);
	READ_PTR_FULL(btn_Farming, UUI_LabelButton_C);
	READ_PTR_FULL(btn_Survival, UUI_LabelButton_C);
	READ_PTR_FULL(Labels, UHorizontalBox);
	READ_PTR_FULL(TechnologyTabReference, UUI_Book_Technology_C);
}

void UUI_TechnologyLabels_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(btn_Building);
	DELE_PTR_FULL(btn_Crafting);
	DELE_PTR_FULL(btn_Farming);
	DELE_PTR_FULL(btn_Survival);
	DELE_PTR_FULL(Labels);
	DELE_PTR_FULL(TechnologyTabReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
