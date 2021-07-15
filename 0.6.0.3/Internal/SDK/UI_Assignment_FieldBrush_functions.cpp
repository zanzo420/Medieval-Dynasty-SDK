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

// Function UI_Assignment_FieldBrush.UI_Assignment_FieldBrush_C.MakeUnactive
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Assignment_FieldBrush_C::MakeUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignment_FieldBrush.UI_Assignment_FieldBrush_C.MakeUnactive");

	UUI_Assignment_FieldBrush_C_MakeUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Assignment_FieldBrush.UI_Assignment_FieldBrush_C.MakeActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Assignment_FieldBrush_C::MakeActive(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignment_FieldBrush.UI_Assignment_FieldBrush_C.MakeActive");

	UUI_Assignment_FieldBrush_C_MakeActive_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Assignment_FieldBrush.UI_Assignment_FieldBrush_C.ChangeSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Assignment_FieldBrush_C::ChangeSelection(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignment_FieldBrush.UI_Assignment_FieldBrush_C.ChangeSelection");

	UUI_Assignment_FieldBrush_C_ChangeSelection_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Assignment_FieldBrush.UI_Assignment_FieldBrush_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Assignment_FieldBrush_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignment_FieldBrush.UI_Assignment_FieldBrush_C.Construct");

	UUI_Assignment_FieldBrush_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Assignment_FieldBrush.UI_Assignment_FieldBrush_C.InputIncreaseIndex
// (BlueprintCallable, BlueprintEvent)
void UUI_Assignment_FieldBrush_C::InputIncreaseIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignment_FieldBrush.UI_Assignment_FieldBrush_C.InputIncreaseIndex");

	UUI_Assignment_FieldBrush_C_InputIncreaseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Assignment_FieldBrush.UI_Assignment_FieldBrush_C.InputDecreaseIndex
// (BlueprintCallable, BlueprintEvent)
void UUI_Assignment_FieldBrush_C::InputDecreaseIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignment_FieldBrush.UI_Assignment_FieldBrush_C.InputDecreaseIndex");

	UUI_Assignment_FieldBrush_C_InputDecreaseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Assignment_FieldBrush.UI_Assignment_FieldBrush_C.InputConfirm
// (BlueprintCallable, BlueprintEvent)
void UUI_Assignment_FieldBrush_C::InputConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignment_FieldBrush.UI_Assignment_FieldBrush_C.InputConfirm");

	UUI_Assignment_FieldBrush_C_InputConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Assignment_FieldBrush.UI_Assignment_FieldBrush_C.InputCancel
// (BlueprintCallable, BlueprintEvent)
void UUI_Assignment_FieldBrush_C::InputCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignment_FieldBrush.UI_Assignment_FieldBrush_C.InputCancel");

	UUI_Assignment_FieldBrush_C_InputCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Assignment_FieldBrush.UI_Assignment_FieldBrush_C.ExecuteUbergraph_UI_Assignment_FieldBrush
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Assignment_FieldBrush_C::ExecuteUbergraph_UI_Assignment_FieldBrush(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignment_FieldBrush.UI_Assignment_FieldBrush_C.ExecuteUbergraph_UI_Assignment_FieldBrush");

	UUI_Assignment_FieldBrush_C_ExecuteUbergraph_UI_Assignment_FieldBrush_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
