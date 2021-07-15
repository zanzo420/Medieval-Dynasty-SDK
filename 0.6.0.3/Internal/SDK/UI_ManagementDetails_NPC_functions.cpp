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

// Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.GetStatus
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Status                         (Parm, OutParm)
// struct FSlateColor             Color                          (Parm, OutParm)
void UUI_ManagementDetails_NPC_C::GetStatus(struct FText* Status, struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.GetStatus");

	UUI_ManagementDetails_NPC_C_GetStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Status != nullptr)
		*Status = params.Status;
	if (Color != nullptr)
		*Color = params.Color;

}


// Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.InputConfirm
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HoldingExecutesEvent           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_ManagementDetails_NPC_C::InputConfirm(bool* HoldingExecutesEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.InputConfirm");

	UUI_ManagementDetails_NPC_C_InputConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HoldingExecutesEvent != nullptr)
		*HoldingExecutesEvent = params.HoldingExecutesEvent;

}


// Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.InputDropPressed
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HoldingExecutesEvent           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Handled_                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_ManagementDetails_NPC_C::InputDropPressed(bool* HoldingExecutesEvent, bool* Handled_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.InputDropPressed");

	UUI_ManagementDetails_NPC_C_InputDropPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HoldingExecutesEvent != nullptr)
		*HoldingExecutesEvent = params.HoldingExecutesEvent;
	if (Handled_ != nullptr)
		*Handled_ = params.Handled_;

}


// Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.FillFamilySlots
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_NPC_C::FillFamilySlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.FillFamilySlots");

	UUI_ManagementDetails_NPC_C_FillFamilySlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.ChangeSelectedSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedSlotIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ManagementDetails_NPC_C::ChangeSelectedSlot(int SelectedSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.ChangeSelectedSlot");

	UUI_ManagementDetails_NPC_C_ChangeSelectedSlot_Params params;
	params.SelectedSlotIndex = SelectedSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_ManagementDetails_NPC_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.Construct");

	UUI_ManagementDetails_NPC_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.InputDecreaseIndex
// (BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_NPC_C::InputDecreaseIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.InputDecreaseIndex");

	UUI_ManagementDetails_NPC_C_InputDecreaseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.InputIncreaseIndex
// (BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_NPC_C::InputIncreaseIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.InputIncreaseIndex");

	UUI_ManagementDetails_NPC_C_InputIncreaseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.InputCancel
// (BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_NPC_C::InputCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.InputCancel");

	UUI_ManagementDetails_NPC_C_InputCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.Uncrop
// (BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_NPC_C::Uncrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.Uncrop");

	UUI_ManagementDetails_NPC_C_Uncrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.Update
// (BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_NPC_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.Update");

	UUI_ManagementDetails_NPC_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.Crop
// (BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_NPC_C::Crop()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.Crop");

	UUI_ManagementDetails_NPC_C_Crop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.ExecuteUbergraph_UI_ManagementDetails_NPC
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ManagementDetails_NPC_C::ExecuteUbergraph_UI_ManagementDetails_NPC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_NPC.UI_ManagementDetails_NPC_C.ExecuteUbergraph_UI_ManagementDetails_NPC");

	UUI_ManagementDetails_NPC_C_ExecuteUbergraph_UI_ManagementDetails_NPC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
