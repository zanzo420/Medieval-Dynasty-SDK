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

// Function UI_Management_FieldDetails_Labels.UI_Management_FieldDetails_Labels_C.btn_Crafting_Clicked
// (BlueprintCallable, BlueprintEvent)
void UUI_Management_FieldDetails_Labels_C::btn_Crafting_Clicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Management_FieldDetails_Labels.UI_Management_FieldDetails_Labels_C.btn_Crafting_Clicked");

	UUI_Management_FieldDetails_Labels_C_btn_Crafting_Clicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Management_FieldDetails_Labels.UI_Management_FieldDetails_Labels_C.btn_Overview_Clicked
// (BlueprintCallable, BlueprintEvent)
void UUI_Management_FieldDetails_Labels_C::btn_Overview_Clicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Management_FieldDetails_Labels.UI_Management_FieldDetails_Labels_C.btn_Overview_Clicked");

	UUI_Management_FieldDetails_Labels_C_btn_Overview_Clicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Management_FieldDetails_Labels.UI_Management_FieldDetails_Labels_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Management_FieldDetails_Labels_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Management_FieldDetails_Labels.UI_Management_FieldDetails_Labels_C.Construct");

	UUI_Management_FieldDetails_Labels_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Management_FieldDetails_Labels.UI_Management_FieldDetails_Labels_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Management_FieldDetails_Labels_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Management_FieldDetails_Labels.UI_Management_FieldDetails_Labels_C.PreConstruct");

	UUI_Management_FieldDetails_Labels_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Management_FieldDetails_Labels.UI_Management_FieldDetails_Labels_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_MasterManagementDetails_C* UI_Details                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_FieldCategories_E_FieldCategories> FieldType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Management_FieldDetails_Labels_C::Init(class UUI_MasterManagementDetails_C* UI_Details, TEnumAsByte<E_FieldCategories_E_FieldCategories> FieldType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Management_FieldDetails_Labels.UI_Management_FieldDetails_Labels_C.Init");

	UUI_Management_FieldDetails_Labels_C_Init_Params params;
	params.UI_Details = UI_Details;
	params.FieldType = FieldType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Management_FieldDetails_Labels.UI_Management_FieldDetails_Labels_C.AllHovered
// (BlueprintCallable, BlueprintEvent)
void UUI_Management_FieldDetails_Labels_C::AllHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Management_FieldDetails_Labels.UI_Management_FieldDetails_Labels_C.AllHovered");

	UUI_Management_FieldDetails_Labels_C_AllHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Management_FieldDetails_Labels.UI_Management_FieldDetails_Labels_C.ToolsHovered
// (BlueprintCallable, BlueprintEvent)
void UUI_Management_FieldDetails_Labels_C::ToolsHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Management_FieldDetails_Labels.UI_Management_FieldDetails_Labels_C.ToolsHovered");

	UUI_Management_FieldDetails_Labels_C_ToolsHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Management_FieldDetails_Labels.UI_Management_FieldDetails_Labels_C.ExecuteUbergraph_UI_Management_FieldDetails_Labels
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Management_FieldDetails_Labels_C::ExecuteUbergraph_UI_Management_FieldDetails_Labels(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Management_FieldDetails_Labels.UI_Management_FieldDetails_Labels_C.ExecuteUbergraph_UI_Management_FieldDetails_Labels");

	UUI_Management_FieldDetails_Labels_C_ExecuteUbergraph_UI_Management_FieldDetails_Labels_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
