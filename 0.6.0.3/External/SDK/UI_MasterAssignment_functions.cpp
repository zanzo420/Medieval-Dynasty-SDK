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

// Function UI_MasterAssignment.UI_MasterAssignment_C.InputIncreaseIndex
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterAssignment_C::InputIncreaseIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterAssignment.UI_MasterAssignment_C.InputIncreaseIndex");

	UUI_MasterAssignment_C_InputIncreaseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterAssignment.UI_MasterAssignment_C.InputDecreaseIndex
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterAssignment_C::InputDecreaseIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterAssignment.UI_MasterAssignment_C.InputDecreaseIndex");

	UUI_MasterAssignment_C_InputDecreaseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterAssignment.UI_MasterAssignment_C.InputConfirm
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterAssignment_C::InputConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterAssignment.UI_MasterAssignment_C.InputConfirm");

	UUI_MasterAssignment_C_InputConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterAssignment.UI_MasterAssignment_C.Regenerate
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterAssignment_C::Regenerate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterAssignment.UI_MasterAssignment_C.Regenerate");

	UUI_MasterAssignment_C_Regenerate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterAssignment.UI_MasterAssignment_C.InputCancel
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterAssignment_C::InputCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterAssignment.UI_MasterAssignment_C.InputCancel");

	UUI_MasterAssignment_C_InputCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterAssignment.UI_MasterAssignment_C.ExecuteUbergraph_UI_MasterAssignment
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MasterAssignment_C::ExecuteUbergraph_UI_MasterAssignment(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterAssignment.UI_MasterAssignment_C.ExecuteUbergraph_UI_MasterAssignment");

	UUI_MasterAssignment_C_ExecuteUbergraph_UI_MasterAssignment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_MasterAssignment_C::AfterRead()
{
	UUserWidget::AfterRead();

}

void UUI_MasterAssignment_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
