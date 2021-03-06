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

// Function UI_QuestLabels.UI_QuestLabels_C.btn_Failed_Clicked
// (BlueprintCallable, BlueprintEvent)
void UUI_QuestLabels_C::btn_Failed_Clicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuestLabels.UI_QuestLabels_C.btn_Failed_Clicked");

	UUI_QuestLabels_C_btn_Failed_Clicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuestLabels.UI_QuestLabels_C.btn_Complete_Clicked
// (BlueprintCallable, BlueprintEvent)
void UUI_QuestLabels_C::btn_Complete_Clicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuestLabels.UI_QuestLabels_C.btn_Complete_Clicked");

	UUI_QuestLabels_C_btn_Complete_Clicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuestLabels.UI_QuestLabels_C.btn_Active_Clicked
// (BlueprintCallable, BlueprintEvent)
void UUI_QuestLabels_C::btn_Active_Clicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuestLabels.UI_QuestLabels_C.btn_Active_Clicked");

	UUI_QuestLabels_C_btn_Active_Clicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuestLabels.UI_QuestLabels_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_QuestLabels_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuestLabels.UI_QuestLabels_C.Construct");

	UUI_QuestLabels_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuestLabels.UI_QuestLabels_C.btn_Knowledge_Clicked
// (BlueprintCallable, BlueprintEvent)
void UUI_QuestLabels_C::btn_Knowledge_Clicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuestLabels.UI_QuestLabels_C.btn_Knowledge_Clicked");

	UUI_QuestLabels_C_btn_Knowledge_Clicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuestLabels.UI_QuestLabels_C.btn_Event_Clicked
// (BlueprintCallable, BlueprintEvent)
void UUI_QuestLabels_C::btn_Event_Clicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuestLabels.UI_QuestLabels_C.btn_Event_Clicked");

	UUI_QuestLabels_C_btn_Event_Clicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuestLabels.UI_QuestLabels_C.ExecuteUbergraph_UI_QuestLabels
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_QuestLabels_C::ExecuteUbergraph_UI_QuestLabels(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuestLabels.UI_QuestLabels_C.ExecuteUbergraph_UI_QuestLabels");

	UUI_QuestLabels_C_ExecuteUbergraph_UI_QuestLabels_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_QuestLabels_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(btn_Active, UUI_LabelButton_C);
	READ_PTR_FULL(btn_Complete, UUI_LabelButton_C);
	READ_PTR_FULL(btn_Event, UUI_LabelButton_C);
	READ_PTR_FULL(btn_Failed, UUI_LabelButton_C);
	READ_PTR_FULL(btn_Knowledge, UUI_LabelButton_C);
	READ_PTR_FULL(Labels, UHorizontalBox);
	READ_PTR_FULL(UI_Inventory, UUI_Book_C);
}

void UUI_QuestLabels_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(btn_Active);
	DELE_PTR_FULL(btn_Complete);
	DELE_PTR_FULL(btn_Event);
	DELE_PTR_FULL(btn_Failed);
	DELE_PTR_FULL(btn_Knowledge);
	DELE_PTR_FULL(Labels);
	DELE_PTR_FULL(UI_Inventory);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
