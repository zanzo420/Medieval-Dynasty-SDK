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

// Function UI_Assignment_StoreType.UI_Assignment_StoreType_C.MakeUnactive
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Assignment_StoreType_C::MakeUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignment_StoreType.UI_Assignment_StoreType_C.MakeUnactive");

	UUI_Assignment_StoreType_C_MakeUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Assignment_StoreType.UI_Assignment_StoreType_C.MakeActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Assignment_StoreType_C::MakeActive(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignment_StoreType.UI_Assignment_StoreType_C.MakeActive");

	UUI_Assignment_StoreType_C_MakeActive_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Assignment_StoreType.UI_Assignment_StoreType_C.ChangeSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Assignment_StoreType_C::ChangeSelection(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignment_StoreType.UI_Assignment_StoreType_C.ChangeSelection");

	UUI_Assignment_StoreType_C_ChangeSelection_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Assignment_StoreType.UI_Assignment_StoreType_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Assignment_StoreType_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignment_StoreType.UI_Assignment_StoreType_C.Construct");

	UUI_Assignment_StoreType_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Assignment_StoreType.UI_Assignment_StoreType_C.InputIncreaseIndex
// (BlueprintCallable, BlueprintEvent)
void UUI_Assignment_StoreType_C::InputIncreaseIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignment_StoreType.UI_Assignment_StoreType_C.InputIncreaseIndex");

	UUI_Assignment_StoreType_C_InputIncreaseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Assignment_StoreType.UI_Assignment_StoreType_C.InputDecreaseIndex
// (BlueprintCallable, BlueprintEvent)
void UUI_Assignment_StoreType_C::InputDecreaseIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignment_StoreType.UI_Assignment_StoreType_C.InputDecreaseIndex");

	UUI_Assignment_StoreType_C_InputDecreaseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Assignment_StoreType.UI_Assignment_StoreType_C.InputConfirm
// (BlueprintCallable, BlueprintEvent)
void UUI_Assignment_StoreType_C::InputConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignment_StoreType.UI_Assignment_StoreType_C.InputConfirm");

	UUI_Assignment_StoreType_C_InputConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Assignment_StoreType.UI_Assignment_StoreType_C.InputCancel
// (BlueprintCallable, BlueprintEvent)
void UUI_Assignment_StoreType_C::InputCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignment_StoreType.UI_Assignment_StoreType_C.InputCancel");

	UUI_Assignment_StoreType_C_InputCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Assignment_StoreType.UI_Assignment_StoreType_C.ExecuteUbergraph_UI_Assignment_StoreType
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Assignment_StoreType_C::ExecuteUbergraph_UI_Assignment_StoreType(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignment_StoreType.UI_Assignment_StoreType_C.ExecuteUbergraph_UI_Assignment_StoreType");

	UUI_Assignment_StoreType_C_ExecuteUbergraph_UI_Assignment_StoreType_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_Assignment_StoreType_C::AfterRead()
{
	UUI_MasterAssignment_C::AfterRead();

	READ_PTR_FULL(Image_7, UImage);
	READ_PTR_FULL(Image_8, UImage);
	READ_PTR_FULL(Image_70, UImage);
	READ_PTR_FULL(Image_120, UImage);
	READ_PTR_FULL(ShopsBox, UVerticalBox);
	READ_PTR_FULL(ShopsScrollBox, UScrollBox);
	READ_PTR_FULL(ShopsVerticalBox, UVerticalBox);
	READ_PTR_FULL(UI_FieldDetails_StoreTypeLabels, UUI_FieldDetails_StoreTypeLabels_C);
	READ_PTR_FULL(UI_ManagementReference, UUI_Book_Management_C);
}

void UUI_Assignment_StoreType_C::BeforeDelete()
{
	UUI_MasterAssignment_C::BeforeDelete();

	DELE_PTR_FULL(Image_7);
	DELE_PTR_FULL(Image_8);
	DELE_PTR_FULL(Image_70);
	DELE_PTR_FULL(Image_120);
	DELE_PTR_FULL(ShopsBox);
	DELE_PTR_FULL(ShopsScrollBox);
	DELE_PTR_FULL(ShopsVerticalBox);
	DELE_PTR_FULL(UI_FieldDetails_StoreTypeLabels);
	DELE_PTR_FULL(UI_ManagementReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
