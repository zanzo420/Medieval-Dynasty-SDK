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

// Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.InputAdditionalAction
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_MasterManagementDetails_C::InputAdditionalAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.InputAdditionalAction");

	UUI_MasterManagementDetails_C_InputAdditionalAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.InputSpecialAction
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_MasterManagementDetails_C::InputSpecialAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.InputSpecialAction");

	UUI_MasterManagementDetails_C_InputSpecialAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.InputConfirm
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HoldingExecutesEvent           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_MasterManagementDetails_C::InputConfirm(bool* HoldingExecutesEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.InputConfirm");

	UUI_MasterManagementDetails_C_InputConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HoldingExecutesEvent != nullptr)
		*HoldingExecutesEvent = params.HoldingExecutesEvent;

}


// Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.InputDropHeld
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_MasterManagementDetails_C::InputDropHeld()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.InputDropHeld");

	UUI_MasterManagementDetails_C_InputDropHeld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.InputDropReleased
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_MasterManagementDetails_C::InputDropReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.InputDropReleased");

	UUI_MasterManagementDetails_C_InputDropReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.InputDropPressed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HoldingExecutesEvent           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Handled_                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_MasterManagementDetails_C::InputDropPressed(bool* HoldingExecutesEvent, bool* Handled_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.InputDropPressed");

	UUI_MasterManagementDetails_C_InputDropPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HoldingExecutesEvent != nullptr)
		*HoldingExecutesEvent = params.HoldingExecutesEvent;
	if (Handled_ != nullptr)
		*Handled_ = params.Handled_;

}


// Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.ChangeSelectedLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MasterManagementDetails_C::ChangeSelectedLabel(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.ChangeSelectedLabel");

	UUI_MasterManagementDetails_C_ChangeSelectedLabel_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.Crop
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterManagementDetails_C::Crop()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.Crop");

	UUI_MasterManagementDetails_C_Crop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.Uncrop
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterManagementDetails_C::Uncrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.Uncrop");

	UUI_MasterManagementDetails_C_Uncrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.InputCancel
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterManagementDetails_C::InputCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.InputCancel");

	UUI_MasterManagementDetails_C_InputCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.InputLeft
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterManagementDetails_C::InputLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.InputLeft");

	UUI_MasterManagementDetails_C_InputLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.InputRight
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterManagementDetails_C::InputRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.InputRight");

	UUI_MasterManagementDetails_C_InputRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_MasterManagementDetails_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.Construct");

	UUI_MasterManagementDetails_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.Regenerate
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterManagementDetails_C::Regenerate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.Regenerate");

	UUI_MasterManagementDetails_C_Regenerate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.InputDecreaseIndex
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterManagementDetails_C::InputDecreaseIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.InputDecreaseIndex");

	UUI_MasterManagementDetails_C_InputDecreaseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.InputIncreaseIndex
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterManagementDetails_C::InputIncreaseIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.InputIncreaseIndex");

	UUI_MasterManagementDetails_C_InputIncreaseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.ExecuteUbergraph_UI_MasterManagementDetails
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MasterManagementDetails_C::ExecuteUbergraph_UI_MasterManagementDetails(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterManagementDetails.UI_MasterManagementDetails_C.ExecuteUbergraph_UI_MasterManagementDetails");

	UUI_MasterManagementDetails_C_ExecuteUbergraph_UI_MasterManagementDetails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_MasterManagementDetails_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(BookManagementReference, UUI_Book_Management_C);
}

void UUI_MasterManagementDetails_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(BookManagementReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
