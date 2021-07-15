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

// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.MakeStorageSlotActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedSlotIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ManagementDetails_Building_C::MakeStorageSlotActive(int SelectedSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.MakeStorageSlotActive");

	UUI_ManagementDetails_Building_C_MakeStorageSlotActive_Params params;
	params.SelectedSlotIndex = SelectedSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.MakeStorageSlotUnactive
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_Building_C::MakeStorageSlotUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.MakeStorageSlotUnactive");

	UUI_ManagementDetails_Building_C_MakeStorageSlotUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.ChangeSelectedStorageSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedSlotIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ManagementDetails_Building_C::ChangeSelectedStorageSlot(int SelectedSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.ChangeSelectedStorageSlot");

	UUI_ManagementDetails_Building_C_ChangeSelectedStorageSlot_Params params;
	params.SelectedSlotIndex = SelectedSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.CalculateTradeSkillPower
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_Building_C::CalculateTradeSkillPower()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.CalculateTradeSkillPower");

	UUI_ManagementDetails_Building_C_CalculateTradeSkillPower_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.UpdateTradePowerPercentageUsage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Profession_E_Profession> Profession                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ManagementDetails_Building_C::UpdateTradePowerPercentageUsage(TEnumAsByte<E_Profession_E_Profession> Profession)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.UpdateTradePowerPercentageUsage");

	UUI_ManagementDetails_Building_C_UpdateTradePowerPercentageUsage_Params params;
	params.Profession = Profession;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.UpdateMarketStallName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_Building_C::UpdateMarketStallName()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.UpdateMarketStallName");

	UUI_ManagementDetails_Building_C_UpdateMarketStallName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.UpdateTradingGoods
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_Building_C::UpdateTradingGoods()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.UpdateTradingGoods");

	UUI_ManagementDetails_Building_C_UpdateTradingGoods_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.GetStatus
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (Parm, OutParm)
// struct FSlateColor             Color                          (Parm, OutParm)
void UUI_ManagementDetails_Building_C::GetStatus(struct FText* Text, struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.GetStatus");

	UUI_ManagementDetails_Building_C_GetStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
	if (Color != nullptr)
		*Color = params.Color;

}


// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.InputConfirm
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HoldingExecutesEvent           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_ManagementDetails_Building_C::InputConfirm(bool* HoldingExecutesEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.InputConfirm");

	UUI_ManagementDetails_Building_C_InputConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HoldingExecutesEvent != nullptr)
		*HoldingExecutesEvent = params.HoldingExecutesEvent;

}


// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.InputDropHeld
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_Building_C::InputDropHeld()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.InputDropHeld");

	UUI_ManagementDetails_Building_C_InputDropHeld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.InputDropReleased
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_Building_C::InputDropReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.InputDropReleased");

	UUI_ManagementDetails_Building_C_InputDropReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.InputDropPressed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HoldingExecutesEvent           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Handled_                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_ManagementDetails_Building_C::InputDropPressed(bool* HoldingExecutesEvent, bool* Handled_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.InputDropPressed");

	UUI_ManagementDetails_Building_C_InputDropPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HoldingExecutesEvent != nullptr)
		*HoldingExecutesEvent = params.HoldingExecutesEvent;
	if (Handled_ != nullptr)
		*Handled_ = params.Handled_;

}


// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.MakeTradeSlotUnactive
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_Building_C::MakeTradeSlotUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.MakeTradeSlotUnactive");

	UUI_ManagementDetails_Building_C_MakeTradeSlotUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.MakeTradeSlotActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedSlotIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ManagementDetails_Building_C::MakeTradeSlotActive(int SelectedSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.MakeTradeSlotActive");

	UUI_ManagementDetails_Building_C_MakeTradeSlotActive_Params params;
	params.SelectedSlotIndex = SelectedSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.ChangeSelectedTradeSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedSlotIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ManagementDetails_Building_C::ChangeSelectedTradeSlot(int SelectedSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.ChangeSelectedTradeSlot");

	UUI_ManagementDetails_Building_C_ChangeSelectedTradeSlot_Params params;
	params.SelectedSlotIndex = SelectedSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.MakeProductionSlotUnactive
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_Building_C::MakeProductionSlotUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.MakeProductionSlotUnactive");

	UUI_ManagementDetails_Building_C_MakeProductionSlotUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.MakeProductionSlotActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedSlotIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ManagementDetails_Building_C::MakeProductionSlotActive(int SelectedSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.MakeProductionSlotActive");

	UUI_ManagementDetails_Building_C_MakeProductionSlotActive_Params params;
	params.SelectedSlotIndex = SelectedSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.ChangeSelectedProductionSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedSlotIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ManagementDetails_Building_C::ChangeSelectedProductionSlot(int SelectedSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.ChangeSelectedProductionSlot");

	UUI_ManagementDetails_Building_C_ChangeSelectedProductionSlot_Params params;
	params.SelectedSlotIndex = SelectedSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.CalculateSkillPower
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_Production_Progress ProductionItem                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UUI_ManagementDetails_Building_C::CalculateSkillPower(const struct FST_Production_Progress& ProductionItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.CalculateSkillPower");

	UUI_ManagementDetails_Building_C_CalculateSkillPower_Params params;
	params.ProductionItem = ProductionItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.UpdatePowerPercentageUsage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Profession_E_Profession> Profession                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ManagementDetails_Building_C::UpdatePowerPercentageUsage(TEnumAsByte<E_Profession_E_Profession> Profession)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.UpdatePowerPercentageUsage");

	UUI_ManagementDetails_Building_C_UpdatePowerPercentageUsage_Params params;
	params.Profession = Profession;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.DecreaseSelectedLabel
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_Building_C::DecreaseSelectedLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.DecreaseSelectedLabel");

	UUI_ManagementDetails_Building_C_DecreaseSelectedLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.IncreaseSelectedLabel
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_Building_C::IncreaseSelectedLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.IncreaseSelectedLabel");

	UUI_ManagementDetails_Building_C_IncreaseSelectedLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.ChangeSelectedLabel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ManagementDetails_Building_C::ChangeSelectedLabel(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.ChangeSelectedLabel");

	UUI_ManagementDetails_Building_C_ChangeSelectedLabel_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.CreateProfessions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_Building_C::CreateProfessions()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.CreateProfessions");

	UUI_ManagementDetails_Building_C_CreateProfessions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.MakeCraftingSlotUnactive
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_Building_C::MakeCraftingSlotUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.MakeCraftingSlotUnactive");

	UUI_ManagementDetails_Building_C_MakeCraftingSlotUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.MakeCraftingSlotActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedSlotIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ManagementDetails_Building_C::MakeCraftingSlotActive(int SelectedSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.MakeCraftingSlotActive");

	UUI_ManagementDetails_Building_C_MakeCraftingSlotActive_Params params;
	params.SelectedSlotIndex = SelectedSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.ChangeSelectedCraftingSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedSlotIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ManagementDetails_Building_C::ChangeSelectedCraftingSlot(int SelectedSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.ChangeSelectedCraftingSlot");

	UUI_ManagementDetails_Building_C_ChangeSelectedCraftingSlot_Params params;
	params.SelectedSlotIndex = SelectedSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.MakeSlotsUnactive
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_Building_C::MakeSlotsUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.MakeSlotsUnactive");

	UUI_ManagementDetails_Building_C_MakeSlotsUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.MakeSlotActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedSlotIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ManagementDetails_Building_C::MakeSlotActive(int SelectedSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.MakeSlotActive");

	UUI_ManagementDetails_Building_C_MakeSlotActive_Params params;
	params.SelectedSlotIndex = SelectedSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.ChangeSelectedSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedSlotIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ManagementDetails_Building_C::ChangeSelectedSlot(int SelectedSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.ChangeSelectedSlot");

	UUI_ManagementDetails_Building_C_ChangeSelectedSlot_Params params;
	params.SelectedSlotIndex = SelectedSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_ManagementDetails_Building_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.Construct");

	UUI_ManagementDetails_Building_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.InputDecreaseIndex
// (BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_Building_C::InputDecreaseIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.InputDecreaseIndex");

	UUI_ManagementDetails_Building_C_InputDecreaseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.InputIncreaseIndex
// (BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_Building_C::InputIncreaseIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.InputIncreaseIndex");

	UUI_ManagementDetails_Building_C_InputIncreaseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.InputCancel
// (BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_Building_C::InputCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.InputCancel");

	UUI_ManagementDetails_Building_C_InputCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.Uncrop
// (BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_Building_C::Uncrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.Uncrop");

	UUI_ManagementDetails_Building_C_Uncrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.InputRight
// (BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_Building_C::InputRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.InputRight");

	UUI_ManagementDetails_Building_C_InputRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.InputLeft
// (BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_Building_C::InputLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.InputLeft");

	UUI_ManagementDetails_Building_C_InputLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.UpdateDemands
// (BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_Building_C::UpdateDemands()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.UpdateDemands");

	UUI_ManagementDetails_Building_C_UpdateDemands_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.FakeCropForShop
// (BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_Building_C::FakeCropForShop()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.FakeCropForShop");

	UUI_ManagementDetails_Building_C_FakeCropForShop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.Crop
// (BlueprintCallable, BlueprintEvent)
void UUI_ManagementDetails_Building_C::Crop()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.Crop");

	UUI_ManagementDetails_Building_C_Crop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.ExecuteUbergraph_UI_ManagementDetails_Building
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ManagementDetails_Building_C::ExecuteUbergraph_UI_ManagementDetails_Building(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ManagementDetails_Building.UI_ManagementDetails_Building_C.ExecuteUbergraph_UI_ManagementDetails_Building");

	UUI_ManagementDetails_Building_C_ExecuteUbergraph_UI_ManagementDetails_Building_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
