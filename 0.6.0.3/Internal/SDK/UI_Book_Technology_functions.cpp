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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
