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

// Function UI_EventButton.UI_EventButton_C.NPCEffects
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_EventEffect_NPCParameter ST_EventEffect_NPCParameter    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
void UUI_EventButton_C::NPCEffects(const struct FST_EventEffect_NPCParameter& ST_EventEffect_NPCParameter)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_EventButton.UI_EventButton_C.NPCEffects");

	UUI_EventButton_C_NPCEffects_Params params;
	params.ST_EventEffect_NPCParameter = ST_EventEffect_NPCParameter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_EventButton.UI_EventButton_C.AddUIToGrid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Event_ButtonConsequences_C* UIReference                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_EventButton_C::AddUIToGrid(class UUI_Event_ButtonConsequences_C* UIReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_EventButton.UI_EventButton_C.AddUIToGrid");

	UUI_EventButton_C_AddUIToGrid_Params params;
	params.UIReference = UIReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_EventButton.UI_EventButton_C.OtherEffects
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_EventEffect_Village ST_EventEffect_Village         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UUI_EventButton_C::OtherEffects(const struct FST_EventEffect_Village& ST_EventEffect_Village)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_EventButton.UI_EventButton_C.OtherEffects");

	UUI_EventButton_C_OtherEffects_Params params;
	params.ST_EventEffect_Village = ST_EventEffect_Village;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_EventButton.UI_EventButton_C.PlayerEffects
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_EventEffect_PlayerParameters ST_EventEffect_PlayerParameters (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
void UUI_EventButton_C::PlayerEffects(const struct FST_EventEffect_PlayerParameters& ST_EventEffect_PlayerParameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_EventButton.UI_EventButton_C.PlayerEffects");

	UUI_EventButton_C_PlayerEffects_Params params;
	params.ST_EventEffect_PlayerParameters = ST_EventEffect_PlayerParameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_EventButton.UI_EventButton_C.ItemsRestrictionFill
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_EventButtonRestrictions Restriction                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UUI_EventButton_C::ItemsRestrictionFill(const struct FST_EventButtonRestrictions& Restriction)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_EventButton.UI_EventButton_C.ItemsRestrictionFill");

	UUI_EventButton_C_ItemsRestrictionFill_Params params;
	params.Restriction = Restriction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_EventButton.UI_EventButton_C.FillGridPanel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_EventButton_C::FillGridPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_EventButton.UI_EventButton_C.FillGridPanel");

	UUI_EventButton_C_FillGridPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_EventButton.UI_EventButton_C.MakeActive
// (BlueprintCallable, BlueprintEvent)
void UUI_EventButton_C::MakeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_EventButton.UI_EventButton_C.MakeActive");

	UUI_EventButton_C_MakeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_EventButton.UI_EventButton_C.MakeUnactive
// (BlueprintCallable, BlueprintEvent)
void UUI_EventButton_C::MakeUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_EventButton.UI_EventButton_C.MakeUnactive");

	UUI_EventButton_C_MakeUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_EventButton.UI_EventButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_EventButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_EventButton.UI_EventButton_C.Construct");

	UUI_EventButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_EventButton.UI_EventButton_C.BndEvt__EventButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_EventButton_C::BndEvt__EventButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_EventButton.UI_EventButton_C.BndEvt__EventButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UUI_EventButton_C_BndEvt__EventButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_EventButton.UI_EventButton_C.SetLocked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Locked                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_EventButton_C::SetLocked(bool Locked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_EventButton.UI_EventButton_C.SetLocked");

	UUI_EventButton_C_SetLocked_Params params;
	params.Locked = Locked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_EventButton.UI_EventButton_C.ExecuteUbergraph_UI_EventButton
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_EventButton_C::ExecuteUbergraph_UI_EventButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_EventButton.UI_EventButton_C.ExecuteUbergraph_UI_EventButton");

	UUI_EventButton_C_ExecuteUbergraph_UI_EventButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_EventButton_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(ConsequencesOverlay, UOverlay);
	READ_PTR_FULL(EventButton, UButton);
	READ_PTR_FULL(EventText, UTextBlock);
	READ_PTR_FULL(GridPanel_102, UGridPanel);
	READ_PTR_FULL(Image_96, UImage);
	READ_PTR_FULL(img_Background, UImage);
	READ_PTR_FULL(Img_TitleBackground, UImage);
	READ_PTR_FULL(txt_Number, UTextBlock);
	READ_PTR_FULL(UIMasterEvent, UUI_MasterEvent_C);
	READ_PTR_FULL(UIRestrictionsDetails, UUI_EventDetails_C);
}

void UUI_EventButton_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(ConsequencesOverlay);
	DELE_PTR_FULL(EventButton);
	DELE_PTR_FULL(EventText);
	DELE_PTR_FULL(GridPanel_102);
	DELE_PTR_FULL(Image_96);
	DELE_PTR_FULL(img_Background);
	DELE_PTR_FULL(Img_TitleBackground);
	DELE_PTR_FULL(txt_Number);
	DELE_PTR_FULL(UIMasterEvent);
	DELE_PTR_FULL(UIRestrictionsDetails);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
