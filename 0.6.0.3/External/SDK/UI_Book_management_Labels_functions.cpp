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

// Function UI_Book_management_Labels.UI_Book_management_Labels_C.Init
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_management_Labels_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_management_Labels.UI_Book_management_Labels_C.Init");

	UUI_Book_management_Labels_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_management_Labels.UI_Book_management_Labels_C.ChangeLabelToNPC
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_management_Labels_C::ChangeLabelToNPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_management_Labels.UI_Book_management_Labels_C.ChangeLabelToNPC");

	UUI_Book_management_Labels_C_ChangeLabelToNPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_management_Labels.UI_Book_management_Labels_C.ChangeLabelToBuildings
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_management_Labels_C::ChangeLabelToBuildings()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_management_Labels.UI_Book_management_Labels_C.ChangeLabelToBuildings");

	UUI_Book_management_Labels_C_ChangeLabelToBuildings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_management_Labels.UI_Book_management_Labels_C.ChangeLabelToFields
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_management_Labels_C::ChangeLabelToFields()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_management_Labels.UI_Book_management_Labels_C.ChangeLabelToFields");

	UUI_Book_management_Labels_C_ChangeLabelToFields_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_management_Labels.UI_Book_management_Labels_C.ChangeLabelToAnimals
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_management_Labels_C::ChangeLabelToAnimals()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_management_Labels.UI_Book_management_Labels_C.ChangeLabelToAnimals");

	UUI_Book_management_Labels_C_ChangeLabelToAnimals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_management_Labels.UI_Book_management_Labels_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Book_management_Labels_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_management_Labels.UI_Book_management_Labels_C.Construct");

	UUI_Book_management_Labels_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_management_Labels.UI_Book_management_Labels_C.AllHovered
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_management_Labels_C::AllHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_management_Labels.UI_Book_management_Labels_C.AllHovered");

	UUI_Book_management_Labels_C_AllHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_management_Labels.UI_Book_management_Labels_C.ToolsHovered
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_management_Labels_C::ToolsHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_management_Labels.UI_Book_management_Labels_C.ToolsHovered");

	UUI_Book_management_Labels_C_ToolsHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_management_Labels.UI_Book_management_Labels_C.ArmorHovered
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_management_Labels_C::ArmorHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_management_Labels.UI_Book_management_Labels_C.ArmorHovered");

	UUI_Book_management_Labels_C_ArmorHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_management_Labels.UI_Book_management_Labels_C.ConsumableHovered
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_management_Labels_C::ConsumableHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_management_Labels.UI_Book_management_Labels_C.ConsumableHovered");

	UUI_Book_management_Labels_C_ConsumableHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_management_Labels.UI_Book_management_Labels_C.ExecuteUbergraph_UI_Book_management_Labels
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_management_Labels_C::ExecuteUbergraph_UI_Book_management_Labels(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_management_Labels.UI_Book_management_Labels_C.ExecuteUbergraph_UI_Book_management_Labels");

	UUI_Book_management_Labels_C_ExecuteUbergraph_UI_Book_management_Labels_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_Book_management_Labels_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(btn_Animals, UUI_LabelButton_C);
	READ_PTR_FULL(btn_Buildings, UUI_LabelButton_C);
	READ_PTR_FULL(btn_Fields, UUI_LabelButton_C);
	READ_PTR_FULL(btn_NPC, UUI_LabelButton_C);
	READ_PTR_FULL(Labels, UHorizontalBox);
	READ_PTR_FULL(ParentWidget, UUI_Book_Management_C);
}

void UUI_Book_management_Labels_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(btn_Animals);
	DELE_PTR_FULL(btn_Buildings);
	DELE_PTR_FULL(btn_Fields);
	DELE_PTR_FULL(btn_NPC);
	DELE_PTR_FULL(Labels);
	DELE_PTR_FULL(ParentWidget);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
