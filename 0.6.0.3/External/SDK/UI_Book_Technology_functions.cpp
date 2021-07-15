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

// Function UI_Book_Technology.UI_Book_Technology_C.UpdatePurchasedCountInSchemes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes> ActiveTechnology               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_Technology_C::UpdatePurchasedCountInSchemes(TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes> ActiveTechnology)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Technology.UI_Book_Technology_C.UpdatePurchasedCountInSchemes");

	UUI_Book_Technology_C_UpdatePurchasedCountInSchemes_Params params;
	params.ActiveTechnology = ActiveTechnology;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Technology.UI_Book_Technology_C.SetFocusSchemes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FocusSchemes                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Book_Technology_C::SetFocusSchemes(bool FocusSchemes)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Technology.UI_Book_Technology_C.SetFocusSchemes");

	UUI_Book_Technology_C_SetFocusSchemes_Params params;
	params.FocusSchemes = FocusSchemes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Technology.UI_Book_Technology_C.UpdateInputsTextsAndVisibility
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Technology_C::UpdateInputsTextsAndVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Technology.UI_Book_Technology_C.UpdateInputsTextsAndVisibility");

	UUI_Book_Technology_C_UpdateInputsTextsAndVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Technology.UI_Book_Technology_C.UpdateDescription
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Technology_SchemeSlot_C* SchemeReference                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_Technology_C::UpdateDescription(class UUI_Technology_SchemeSlot_C* SchemeReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Technology.UI_Book_Technology_C.UpdateDescription");

	UUI_Book_Technology_C_UpdateDescription_Params params;
	params.SchemeReference = SchemeReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Technology.UI_Book_Technology_C.UpdateTechnology
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Book_Technology_C::UpdateTechnology()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Technology.UI_Book_Technology_C.UpdateTechnology");

	UUI_Book_Technology_C_UpdateTechnology_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Technology.UI_Book_Technology_C.TechnologyCancel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputHandled                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Book_Technology_C::TechnologyCancel(bool* InputHandled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Technology.UI_Book_Technology_C.TechnologyCancel");

	UUI_Book_Technology_C_TechnologyCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputHandled != nullptr)
		*InputHandled = params.InputHandled;

}


// Function UI_Book_Technology.UI_Book_Technology_C.TechnologyConfirm
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Book_Technology_C::TechnologyConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Technology.UI_Book_Technology_C.TechnologyConfirm");

	UUI_Book_Technology_C_TechnologyConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Technology.UI_Book_Technology_C.IncreaseTechnologyCategoryID
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Technology_C::IncreaseTechnologyCategoryID()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Technology.UI_Book_Technology_C.IncreaseTechnologyCategoryID");

	UUI_Book_Technology_C_IncreaseTechnologyCategoryID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Technology.UI_Book_Technology_C.DecreaseTechnologyCategoryID
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Technology_C::DecreaseTechnologyCategoryID()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Technology.UI_Book_Technology_C.DecreaseTechnologyCategoryID");

	UUI_Book_Technology_C_DecreaseTechnologyCategoryID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Technology.UI_Book_Technology_C.ChangeSelectedTechnologyItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TechnologyID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_Technology_C::ChangeSelectedTechnologyItem(int TechnologyID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Technology.UI_Book_Technology_C.ChangeSelectedTechnologyItem");

	UUI_Book_Technology_C_ChangeSelectedTechnologyItem_Params params;
	params.TechnologyID = TechnologyID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Technology.UI_Book_Technology_C.DecreaseTechnologyIndex
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Technology_C::DecreaseTechnologyIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Technology.UI_Book_Technology_C.DecreaseTechnologyIndex");

	UUI_Book_Technology_C_DecreaseTechnologyIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Technology.UI_Book_Technology_C.IncreaseTechnologyIndex
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Technology_C::IncreaseTechnologyIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Technology.UI_Book_Technology_C.IncreaseTechnologyIndex");

	UUI_Book_Technology_C_IncreaseTechnologyIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Technology.UI_Book_Technology_C.MakeTechnologySlotActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TechnologyID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_Technology_C::MakeTechnologySlotActive(int TechnologyID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Technology.UI_Book_Technology_C.MakeTechnologySlotActive");

	UUI_Book_Technology_C_MakeTechnologySlotActive_Params params;
	params.TechnologyID = TechnologyID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Technology.UI_Book_Technology_C.MakeTechnologySlotsUnactive
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_Book_Technology_C::MakeTechnologySlotsUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Technology.UI_Book_Technology_C.MakeTechnologySlotsUnactive");

	UUI_Book_Technology_C_MakeTechnologySlotsUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Technology.UI_Book_Technology_C.MakeTechnologyLabelsUnactive
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_Technology_C::MakeTechnologyLabelsUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Technology.UI_Book_Technology_C.MakeTechnologyLabelsUnactive");

	UUI_Book_Technology_C_MakeTechnologyLabelsUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Technology.UI_Book_Technology_C.MakeTechnologyLabelActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index_                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_Technology_C::MakeTechnologyLabelActive(int Index_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Technology.UI_Book_Technology_C.MakeTechnologyLabelActive");

	UUI_Book_Technology_C_MakeTechnologyLabelActive_Params params;
	params.Index_ = Index_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Technology.UI_Book_Technology_C.ChangeTechnologyVisibilityOnCategoryChange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes> Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ResetIndex_                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Book_Technology_C::ChangeTechnologyVisibilityOnCategoryChange(TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes> Selected, bool ResetIndex_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Technology.UI_Book_Technology_C.ChangeTechnologyVisibilityOnCategoryChange");

	UUI_Book_Technology_C_ChangeTechnologyVisibilityOnCategoryChange_Params params;
	params.Selected = Selected;
	params.ResetIndex_ = ResetIndex_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Technology.UI_Book_Technology_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Book_Technology_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Technology.UI_Book_Technology_C.Construct");

	UUI_Book_Technology_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Technology.UI_Book_Technology_C.OnTechnologyChange
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Technology_C::OnTechnologyChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Technology.UI_Book_Technology_C.OnTechnologyChange");

	UUI_Book_Technology_C_OnTechnologyChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Technology.UI_Book_Technology_C.OnSchemePurchased_Event
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Technology_C::OnSchemePurchased_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Technology.UI_Book_Technology_C.OnSchemePurchased_Event");

	UUI_Book_Technology_C_OnSchemePurchased_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Technology.UI_Book_Technology_C.ChangeSteeringType_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Gamepad                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Book_Technology_C::ChangeSteeringType_Event_1(bool Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Technology.UI_Book_Technology_C.ChangeSteeringType_Event_1");

	UUI_Book_Technology_C_ChangeSteeringType_Event_1_Params params;
	params.Gamepad = Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Technology.UI_Book_Technology_C.Init
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Technology_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Technology.UI_Book_Technology_C.Init");

	UUI_Book_Technology_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Technology.UI_Book_Technology_C.RemoveTab
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Technology_C::RemoveTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Technology.UI_Book_Technology_C.RemoveTab");

	UUI_Book_Technology_C_RemoveTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Technology.UI_Book_Technology_C.Btn_Confirm
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Technology_C::Btn_Confirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Technology.UI_Book_Technology_C.Btn_Confirm");

	UUI_Book_Technology_C_Btn_Confirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Technology.UI_Book_Technology_C.Btn_Up
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Technology_C::Btn_Up()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Technology.UI_Book_Technology_C.Btn_Up");

	UUI_Book_Technology_C_Btn_Up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Technology.UI_Book_Technology_C.Btn_Down
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Technology_C::Btn_Down()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Technology.UI_Book_Technology_C.Btn_Down");

	UUI_Book_Technology_C_Btn_Down_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Technology.UI_Book_Technology_C.Btn_Left
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Technology_C::Btn_Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Technology.UI_Book_Technology_C.Btn_Left");

	UUI_Book_Technology_C_Btn_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Technology.UI_Book_Technology_C.Btn_Right
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Technology_C::Btn_Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Technology.UI_Book_Technology_C.Btn_Right");

	UUI_Book_Technology_C_Btn_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Technology.UI_Book_Technology_C.Btn_Previous
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Technology_C::Btn_Previous()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Technology.UI_Book_Technology_C.Btn_Previous");

	UUI_Book_Technology_C_Btn_Previous_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Technology.UI_Book_Technology_C.Btn_Next
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Technology_C::Btn_Next()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Technology.UI_Book_Technology_C.Btn_Next");

	UUI_Book_Technology_C_Btn_Next_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Technology.UI_Book_Technology_C.btn_Return
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_Technology_C::btn_Return()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Technology.UI_Book_Technology_C.btn_Return");

	UUI_Book_Technology_C_btn_Return_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Technology.UI_Book_Technology_C.ExecuteUbergraph_UI_Book_Technology
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_Technology_C::ExecuteUbergraph_UI_Book_Technology(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Technology.UI_Book_Technology_C.ExecuteUbergraph_UI_Book_Technology");

	UUI_Book_Technology_C_ExecuteUbergraph_UI_Book_Technology_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_Technology.UI_Book_Technology_C.OnSchemePurchased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UUI_Book_Technology_C::OnSchemePurchased__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_Technology.UI_Book_Technology_C.OnSchemePurchased__DelegateSignature");

	UUI_Book_Technology_C_OnSchemePurchased__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_Book_Technology_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(ActionDescriptionButtonsRight_2, UHorizontalBox);
	READ_PTR_FULL(BuildingScrollBox, UScrollBox);
	READ_PTR_FULL(BuildingTechnologiesBox, UVerticalBox);
	READ_PTR_FULL(CraftingScrollBox, UScrollBox);
	READ_PTR_FULL(CraftingTechnologiesBox, UVerticalBox);
	READ_PTR_FULL(FarmingScrollBox, UScrollBox);
	READ_PTR_FULL(FarmingTechnologiesBox, UVerticalBox);
	READ_PTR_FULL(Image_2, UImage);
	READ_PTR_FULL(Image_248, UImage);
	READ_PTR_FULL(InputChangeCategory, UUI_Book_InputButton_C);
	READ_PTR_FULL(InputChangeSelection, UUI_Book_InputButton_C);
	READ_PTR_FULL(InputChangeTab, UUI_Book_InputButton_C);
	READ_PTR_FULL(InputConfirm, UUI_Book_InputButton_C);
	READ_PTR_FULL(InputReturn, UUI_Book_InputButton_C);
	READ_PTR_FULL(PB_Building, UProgressBar);
	READ_PTR_FULL(PB_Crafting, UProgressBar);
	READ_PTR_FULL(PB_Farming, UProgressBar);
	READ_PTR_FULL(PB_Survival, UProgressBar);
	READ_PTR_FULL(SurvivalScrollBox, UScrollBox);
	READ_PTR_FULL(SurvivalTechnologiesBox, UVerticalBox);
	READ_PTR_FULL(Switcher_Technology, UWidgetSwitcher);
	READ_PTR_FULL(txt_Technology, UTextBlock);
	READ_PTR_FULL(UI_Technology_Description, UUI_Technology_Description_Right_C);
	READ_PTR_FULL(UI_Technology_Description_Left, UUI_Technology_Description_Left_C);
	READ_PTR_FULL(UI_Technology_SchemesList, UUI_Technology_SchemesList_C);
	READ_PTR_FULL(UI_TechnologyBuildingSlot, UUI_Technology_BuildingSlot_C);
	READ_PTR_FULL(UI_TechnologyBuildingSlot_2, UUI_Technology_BuildingSlot_C);
	READ_PTR_FULL(UI_TechnologyBuildingSlot_3, UUI_Technology_BuildingSlot_C);
	READ_PTR_FULL(UI_TechnologyBuildingSlot_4, UUI_Technology_BuildingSlot_C);
	READ_PTR_FULL(UI_TechnologyBuildingSlot_5, UUI_Technology_BuildingSlot_C);
	READ_PTR_FULL(UI_TechnologyBuildingSlot_6, UUI_Technology_BuildingSlot_C);
	READ_PTR_FULL(UI_TechnologyBuildingSlot_7, UUI_Technology_BuildingSlot_C);
	READ_PTR_FULL(UI_TechnologyBuildingSlot_8, UUI_Technology_BuildingSlot_C);
	READ_PTR_FULL(UI_TechnologyBuildingSlot_9, UUI_Technology_BuildingSlot_C);
	READ_PTR_FULL(UI_TechnologyBuildingSlot_10, UUI_Technology_BuildingSlot_C);
	READ_PTR_FULL(UI_TechnologyBuildingSlot_11, UUI_Technology_BuildingSlot_C);
	READ_PTR_FULL(UI_TechnologyBuildingSlot_12, UUI_Technology_BuildingSlot_C);
	READ_PTR_FULL(UI_TechnologyBuildingSlot_13, UUI_Technology_BuildingSlot_C);
	READ_PTR_FULL(UI_TechnologyBuildingSlot_14, UUI_Technology_BuildingSlot_C);
	READ_PTR_FULL(UI_TechnologyBuildingSlot_15, UUI_Technology_BuildingSlot_C);
	READ_PTR_FULL(UI_TechnologyBuildingSlot_16, UUI_Technology_BuildingSlot_C);
	READ_PTR_FULL(UI_TechnologyBuildingSlot_17, UUI_Technology_BuildingSlot_C);
	READ_PTR_FULL(UI_TechnologyBuildingSlot_18, UUI_Technology_BuildingSlot_C);
	READ_PTR_FULL(UI_TechnologyBuildingSlot_19, UUI_Technology_BuildingSlot_C);
	READ_PTR_FULL(UI_TechnologyBuildingSlot_20, UUI_Technology_BuildingSlot_C);
	READ_PTR_FULL(UI_TechnologyBuildingSlot_21, UUI_Technology_BuildingSlot_C);
	READ_PTR_FULL(UI_TechnologyBuildingSlot_22, UUI_Technology_BuildingSlot_C);
	READ_PTR_FULL(UI_TechnologyBuildingSlot_23, UUI_Technology_BuildingSlot_C);
	READ_PTR_FULL(UI_TechnologyBuildingSlot_24, UUI_Technology_BuildingSlot_C);
	READ_PTR_FULL(UI_TechnologyBuildingSlot_25, UUI_Technology_BuildingSlot_C);
	READ_PTR_FULL(UI_TechnologyBuildingSlot_26, UUI_Technology_BuildingSlot_C);
	READ_PTR_FULL(UI_TechnologyBuildingSlot_27, UUI_Technology_BuildingSlot_C);
	READ_PTR_FULL(UI_TechnologyBuildingSlot_28, UUI_Technology_BuildingSlot_C);
	READ_PTR_FULL(UI_TechnologyBuildingSlot_29, UUI_Technology_BuildingSlot_C);
	READ_PTR_FULL(UI_TechnologyBuildingSlot_30, UUI_Technology_BuildingSlot_C);
	READ_PTR_FULL(UI_TechnologyBuildingSlot_31, UUI_Technology_BuildingSlot_C);
	READ_PTR_FULL(UI_TechnologyBuildingSlot_32, UUI_Technology_BuildingSlot_C);
	READ_PTR_FULL(UI_TechnologyBuildingSlot_33, UUI_Technology_BuildingSlot_C);
	READ_PTR_FULL(UI_TechnologyBuildingSlot_34, UUI_Technology_BuildingSlot_C);
	READ_PTR_FULL(UI_TechnologyBuildingSlot_35, UUI_Technology_BuildingSlot_C);
	READ_PTR_FULL(UI_TechnologyBuildingSlot_36, UUI_Technology_BuildingSlot_C);
	READ_PTR_FULL(UI_TechnologyBuildingSlot_37, UUI_Technology_BuildingSlot_C);
	READ_PTR_FULL(UI_TechnologyBuildingSlot_38, UUI_Technology_BuildingSlot_C);
	READ_PTR_FULL(UI_TechnologyBuildingSlot_39, UUI_Technology_BuildingSlot_C);
	READ_PTR_FULL(UI_TechnologyLabels, UUI_TechnologyLabels_C);
	READ_PTR_FULL(BookReference, UUI_Book_C);
	READ_PTR_FULL(NewVar_1, UUniformGridPanel);
}

void UUI_Book_Technology_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(ActionDescriptionButtonsRight_2);
	DELE_PTR_FULL(BuildingScrollBox);
	DELE_PTR_FULL(BuildingTechnologiesBox);
	DELE_PTR_FULL(CraftingScrollBox);
	DELE_PTR_FULL(CraftingTechnologiesBox);
	DELE_PTR_FULL(FarmingScrollBox);
	DELE_PTR_FULL(FarmingTechnologiesBox);
	DELE_PTR_FULL(Image_2);
	DELE_PTR_FULL(Image_248);
	DELE_PTR_FULL(InputChangeCategory);
	DELE_PTR_FULL(InputChangeSelection);
	DELE_PTR_FULL(InputChangeTab);
	DELE_PTR_FULL(InputConfirm);
	DELE_PTR_FULL(InputReturn);
	DELE_PTR_FULL(PB_Building);
	DELE_PTR_FULL(PB_Crafting);
	DELE_PTR_FULL(PB_Farming);
	DELE_PTR_FULL(PB_Survival);
	DELE_PTR_FULL(SurvivalScrollBox);
	DELE_PTR_FULL(SurvivalTechnologiesBox);
	DELE_PTR_FULL(Switcher_Technology);
	DELE_PTR_FULL(txt_Technology);
	DELE_PTR_FULL(UI_Technology_Description);
	DELE_PTR_FULL(UI_Technology_Description_Left);
	DELE_PTR_FULL(UI_Technology_SchemesList);
	DELE_PTR_FULL(UI_TechnologyBuildingSlot);
	DELE_PTR_FULL(UI_TechnologyBuildingSlot_2);
	DELE_PTR_FULL(UI_TechnologyBuildingSlot_3);
	DELE_PTR_FULL(UI_TechnologyBuildingSlot_4);
	DELE_PTR_FULL(UI_TechnologyBuildingSlot_5);
	DELE_PTR_FULL(UI_TechnologyBuildingSlot_6);
	DELE_PTR_FULL(UI_TechnologyBuildingSlot_7);
	DELE_PTR_FULL(UI_TechnologyBuildingSlot_8);
	DELE_PTR_FULL(UI_TechnologyBuildingSlot_9);
	DELE_PTR_FULL(UI_TechnologyBuildingSlot_10);
	DELE_PTR_FULL(UI_TechnologyBuildingSlot_11);
	DELE_PTR_FULL(UI_TechnologyBuildingSlot_12);
	DELE_PTR_FULL(UI_TechnologyBuildingSlot_13);
	DELE_PTR_FULL(UI_TechnologyBuildingSlot_14);
	DELE_PTR_FULL(UI_TechnologyBuildingSlot_15);
	DELE_PTR_FULL(UI_TechnologyBuildingSlot_16);
	DELE_PTR_FULL(UI_TechnologyBuildingSlot_17);
	DELE_PTR_FULL(UI_TechnologyBuildingSlot_18);
	DELE_PTR_FULL(UI_TechnologyBuildingSlot_19);
	DELE_PTR_FULL(UI_TechnologyBuildingSlot_20);
	DELE_PTR_FULL(UI_TechnologyBuildingSlot_21);
	DELE_PTR_FULL(UI_TechnologyBuildingSlot_22);
	DELE_PTR_FULL(UI_TechnologyBuildingSlot_23);
	DELE_PTR_FULL(UI_TechnologyBuildingSlot_24);
	DELE_PTR_FULL(UI_TechnologyBuildingSlot_25);
	DELE_PTR_FULL(UI_TechnologyBuildingSlot_26);
	DELE_PTR_FULL(UI_TechnologyBuildingSlot_27);
	DELE_PTR_FULL(UI_TechnologyBuildingSlot_28);
	DELE_PTR_FULL(UI_TechnologyBuildingSlot_29);
	DELE_PTR_FULL(UI_TechnologyBuildingSlot_30);
	DELE_PTR_FULL(UI_TechnologyBuildingSlot_31);
	DELE_PTR_FULL(UI_TechnologyBuildingSlot_32);
	DELE_PTR_FULL(UI_TechnologyBuildingSlot_33);
	DELE_PTR_FULL(UI_TechnologyBuildingSlot_34);
	DELE_PTR_FULL(UI_TechnologyBuildingSlot_35);
	DELE_PTR_FULL(UI_TechnologyBuildingSlot_36);
	DELE_PTR_FULL(UI_TechnologyBuildingSlot_37);
	DELE_PTR_FULL(UI_TechnologyBuildingSlot_38);
	DELE_PTR_FULL(UI_TechnologyBuildingSlot_39);
	DELE_PTR_FULL(UI_TechnologyLabels);
	DELE_PTR_FULL(BookReference);
	DELE_PTR_FULL(NewVar_1);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
