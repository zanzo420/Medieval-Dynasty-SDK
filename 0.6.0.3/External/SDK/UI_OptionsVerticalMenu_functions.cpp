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

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.ChangeSelectedMainButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OptionsVerticalMenu_C::ChangeSelectedMainButton(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.ChangeSelectedMainButton");

	UUI_OptionsVerticalMenu_C_ChangeSelectedMainButton_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.ChangeSelectedKeybind
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            KeybindsID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OptionsVerticalMenu_C::ChangeSelectedKeybind(int KeybindsID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.ChangeSelectedKeybind");

	UUI_OptionsVerticalMenu_C_ChangeSelectedKeybind_Params params;
	params.KeybindsID = KeybindsID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.DropAction
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_OptionsVerticalMenu_C::DropAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.DropAction");

	UUI_OptionsVerticalMenu_C_DropAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UUI_OptionsVerticalMenu_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.OnKeyDown");

	UUI_OptionsVerticalMenu_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.PreviousSection
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_OptionsVerticalMenu_C::PreviousSection()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.PreviousSection");

	UUI_OptionsVerticalMenu_C_PreviousSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.NextSection
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_OptionsVerticalMenu_C::NextSection()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.NextSection");

	UUI_OptionsVerticalMenu_C_NextSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.AdditionalAction
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_OptionsVerticalMenu_C::AdditionalAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.AdditionalAction");

	UUI_OptionsVerticalMenu_C_AdditionalAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.CheckIfChangesWereMade
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Graphics_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Volume_                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Game_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_OptionsVerticalMenu_C::CheckIfChangesWereMade(bool Graphics_, bool Volume_, bool Game_, bool* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.CheckIfChangesWereMade");

	UUI_OptionsVerticalMenu_C_CheckIfChangesWereMade_Params params;
	params.Graphics_ = Graphics_;
	params.Volume_ = Volume_;
	params.Game_ = Game_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.OptionsCancel
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_OptionsVerticalMenu_C::OptionsCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.OptionsCancel");

	UUI_OptionsVerticalMenu_C_OptionsCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.ConfirmMainSelection
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_OptionsVerticalMenu_C::ConfirmMainSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.ConfirmMainSelection");

	UUI_OptionsVerticalMenu_C_ConfirmMainSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.DecreaseIndex
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_OptionsVerticalMenu_C::DecreaseIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.DecreaseIndex");

	UUI_OptionsVerticalMenu_C_DecreaseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.IncreaseIndex
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_OptionsVerticalMenu_C::IncreaseIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.IncreaseIndex");

	UUI_OptionsVerticalMenu_C_IncreaseIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.MakeMainButtonsUnactive
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_OptionsVerticalMenu_C::MakeMainButtonsUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.MakeMainButtonsUnactive");

	UUI_OptionsVerticalMenu_C_MakeMainButtonsUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.MakeMainButtonActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OptionsVerticalMenu_C::MakeMainButtonActive(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.MakeMainButtonActive");

	UUI_OptionsVerticalMenu_C_MakeMainButtonActive_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.GetGraphicSettings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_OptionsVerticalMenu_C::GetGraphicSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.GetGraphicSettings");

	UUI_OptionsVerticalMenu_C_GetGraphicSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.SaveSettings_Game
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_OptionsVerticalMenu_C::SaveSettings_Game()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.SaveSettings_Game");

	UUI_OptionsVerticalMenu_C_SaveSettings_Game_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.SaveSettings_Sound
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_OptionsVerticalMenu_C::SaveSettings_Sound()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.SaveSettings_Sound");

	UUI_OptionsVerticalMenu_C_SaveSettings_Sound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.SaveSettings_Graphics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShowAcceptationUI              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_OptionsVerticalMenu_C::SaveSettings_Graphics(bool ShowAcceptationUI)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.SaveSettings_Graphics");

	UUI_OptionsVerticalMenu_C_SaveSettings_Graphics_Params params;
	params.ShowAcceptationUI = ShowAcceptationUI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.SetCurrentTabButtonID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OptionsVerticalMenu_C::SetCurrentTabButtonID(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.SetCurrentTabButtonID");

	UUI_OptionsVerticalMenu_C_SetCurrentTabButtonID_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.IncreaseHorizontalID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Target                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Min                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OptionsVerticalMenu_C::IncreaseHorizontalID(int* Target, int Max, int Min)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.IncreaseHorizontalID");

	UUI_OptionsVerticalMenu_C_IncreaseHorizontalID_Params params;
	params.Max = Max;
	params.Min = Min;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.DecreaseHorizontalID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Target                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Min                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OptionsVerticalMenu_C::DecreaseHorizontalID(int* Target, int Max, int Min)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.DecreaseHorizontalID");

	UUI_OptionsVerticalMenu_C_DecreaseHorizontalID_Params params;
	params.Max = Max;
	params.Min = Min;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.UpdateGraphicsSettingButtons
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_OptionsVerticalMenu_C::UpdateGraphicsSettingButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.UpdateGraphicsSettingButtons");

	UUI_OptionsVerticalMenu_C_UpdateGraphicsSettingButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_OptionsVerticalMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.Construct");

	UUI_OptionsVerticalMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_OptionsVerticalMenu_C::BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UUI_OptionsVerticalMenu_C_BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.SettingsLeftArrow
// (BlueprintCallable, BlueprintEvent)
void UUI_OptionsVerticalMenu_C::SettingsLeftArrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.SettingsLeftArrow");

	UUI_OptionsVerticalMenu_C_SettingsLeftArrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.SettingsRightArrow
// (BlueprintCallable, BlueprintEvent)
void UUI_OptionsVerticalMenu_C::SettingsRightArrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.SettingsRightArrow");

	UUI_OptionsVerticalMenu_C_SettingsRightArrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_GraphicsAccept_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_OptionsVerticalMenu_C::BndEvt__btn_GraphicsAccept_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_GraphicsAccept_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UUI_OptionsVerticalMenu_C_BndEvt__btn_GraphicsAccept_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.Graphic
// (BlueprintCallable, BlueprintEvent)
void UUI_OptionsVerticalMenu_C::Graphic()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.Graphic");

	UUI_OptionsVerticalMenu_C_Graphic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.Back
// (BlueprintCallable, BlueprintEvent)
void UUI_OptionsVerticalMenu_C::Back()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.Back");

	UUI_OptionsVerticalMenu_C_Back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.Sound
// (BlueprintCallable, BlueprintEvent)
void UUI_OptionsVerticalMenu_C::Sound()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.Sound");

	UUI_OptionsVerticalMenu_C_Sound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.MakeActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              txt                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                 btn                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OptionsVerticalMenu_C::MakeActive(class UTextBlock* txt, class UButton* btn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.MakeActive");

	UUI_OptionsVerticalMenu_C_MakeActive_Params params;
	params.txt = txt;
	params.btn = btn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.MakeUnactive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              txt                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                 btn                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OptionsVerticalMenu_C::MakeUnactive(class UTextBlock* txt, class UButton* btn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.MakeUnactive");

	UUI_OptionsVerticalMenu_C_MakeUnactive_Params params;
	params.txt = txt;
	params.btn = btn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_GraphicsAccept_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_OptionsVerticalMenu_C::BndEvt__btn_GraphicsAccept_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_GraphicsAccept_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");

	UUI_OptionsVerticalMenu_C_BndEvt__btn_GraphicsAccept_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_OptionsVerticalMenu_C::BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");

	UUI_OptionsVerticalMenu_C_BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_GraphicsAccept_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_OptionsVerticalMenu_C::BndEvt__btn_GraphicsAccept_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_GraphicsAccept_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");

	UUI_OptionsVerticalMenu_C_BndEvt__btn_GraphicsAccept_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_OptionsVerticalMenu_C::BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature");

	UUI_OptionsVerticalMenu_C_BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.SetActivityOnHovered
// (BlueprintCallable, BlueprintEvent)
void UUI_OptionsVerticalMenu_C::SetActivityOnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.SetActivityOnHovered");

	UUI_OptionsVerticalMenu_C_SetActivityOnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OptionsVerticalMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.Tick");

	UUI_OptionsVerticalMenu_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.AcceptSettings
// (BlueprintCallable, BlueprintEvent)
void UUI_OptionsVerticalMenu_C::AcceptSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.AcceptSettings");

	UUI_OptionsVerticalMenu_C_AcceptSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.RejectSettings
// (BlueprintCallable, BlueprintEvent)
void UUI_OptionsVerticalMenu_C::RejectSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.RejectSettings");

	UUI_OptionsVerticalMenu_C_RejectSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.ChangeMusicVolume
// (BlueprintCallable, BlueprintEvent)
void UUI_OptionsVerticalMenu_C::ChangeMusicVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.ChangeMusicVolume");

	UUI_OptionsVerticalMenu_C_ChangeMusicVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.ChangeEffectsVolume
// (BlueprintCallable, BlueprintEvent)
void UUI_OptionsVerticalMenu_C::ChangeEffectsVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.ChangeEffectsVolume");

	UUI_OptionsVerticalMenu_C_ChangeEffectsVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.ChangeAmbientVolume
// (BlueprintCallable, BlueprintEvent)
void UUI_OptionsVerticalMenu_C::ChangeAmbientVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.ChangeAmbientVolume");

	UUI_OptionsVerticalMenu_C_ChangeAmbientVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.CancelSettings
// (BlueprintCallable, BlueprintEvent)
void UUI_OptionsVerticalMenu_C::CancelSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.CancelSettings");

	UUI_OptionsVerticalMenu_C_CancelSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.SetActivityOnHovered_Graphics
// (BlueprintCallable, BlueprintEvent)
void UUI_OptionsVerticalMenu_C::SetActivityOnHovered_Graphics()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.SetActivityOnHovered_Graphics");

	UUI_OptionsVerticalMenu_C_SetActivityOnHovered_Graphics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.SetActivityOnHovered_Sound
// (BlueprintCallable, BlueprintEvent)
void UUI_OptionsVerticalMenu_C::SetActivityOnHovered_Sound()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.SetActivityOnHovered_Sound");

	UUI_OptionsVerticalMenu_C_SetActivityOnHovered_Sound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.ChangeMasterVolume
// (BlueprintCallable, BlueprintEvent)
void UUI_OptionsVerticalMenu_C::ChangeMasterVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.ChangeMasterVolume");

	UUI_OptionsVerticalMenu_C_ChangeMasterVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.ChangeEnvironmentVolume
// (BlueprintCallable, BlueprintEvent)
void UUI_OptionsVerticalMenu_C::ChangeEnvironmentVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.ChangeEnvironmentVolume");

	UUI_OptionsVerticalMenu_C_ChangeEnvironmentVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.ChangeUIVolume
// (BlueprintCallable, BlueprintEvent)
void UUI_OptionsVerticalMenu_C::ChangeUIVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.ChangeUIVolume");

	UUI_OptionsVerticalMenu_C_ChangeUIVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.Keybinds
// (BlueprintCallable, BlueprintEvent)
void UUI_OptionsVerticalMenu_C::Keybinds()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.Keybinds");

	UUI_OptionsVerticalMenu_C_Keybinds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.GameSettings
// (BlueprintCallable, BlueprintEvent)
void UUI_OptionsVerticalMenu_C::GameSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.GameSettings");

	UUI_OptionsVerticalMenu_C_GameSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.SetActivityOnHovered_Game
// (BlueprintCallable, BlueprintEvent)
void UUI_OptionsVerticalMenu_C::SetActivityOnHovered_Game()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.SetActivityOnHovered_Game");

	UUI_OptionsVerticalMenu_C_SetActivityOnHovered_Game_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_OptionsAccept_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_OptionsVerticalMenu_C::BndEvt__btn_OptionsAccept_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_OptionsAccept_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UUI_OptionsVerticalMenu_C_BndEvt__btn_OptionsAccept_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_OptionsAccept_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_OptionsVerticalMenu_C::BndEvt__btn_OptionsAccept_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_OptionsAccept_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UUI_OptionsVerticalMenu_C_BndEvt__btn_OptionsAccept_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_OptionsAccept_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_OptionsVerticalMenu_C::BndEvt__btn_OptionsAccept_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_OptionsAccept_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UUI_OptionsVerticalMenu_C_BndEvt__btn_OptionsAccept_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.ChangeSteeringType_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Gamepad                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_OptionsVerticalMenu_C::ChangeSteeringType_Event_1(bool Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.ChangeSteeringType_Event_1");

	UUI_OptionsVerticalMenu_C_ChangeSteeringType_Event_1_Params params;
	params.Gamepad = Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_OptionsDefaultSettings_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_OptionsVerticalMenu_C::BndEvt__btn_OptionsDefaultSettings_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_OptionsDefaultSettings_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_OptionsVerticalMenu_C_BndEvt__btn_OptionsDefaultSettings_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_OptionsDefaultSettings_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_OptionsVerticalMenu_C::BndEvt__btn_OptionsDefaultSettings_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_OptionsDefaultSettings_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UUI_OptionsVerticalMenu_C_BndEvt__btn_OptionsDefaultSettings_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_OptionsDefaultSettings_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_OptionsVerticalMenu_C::BndEvt__btn_OptionsDefaultSettings_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_OptionsDefaultSettings_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	UUI_OptionsVerticalMenu_C_BndEvt__btn_OptionsDefaultSettings_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.UpdateInputLetters
// (BlueprintCallable, BlueprintEvent)
void UUI_OptionsVerticalMenu_C::UpdateInputLetters()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.UpdateInputLetters");

	UUI_OptionsVerticalMenu_C_UpdateInputLetters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BindEventsToMusicSliders
// (BlueprintCallable, BlueprintEvent)
void UUI_OptionsVerticalMenu_C::BindEventsToMusicSliders()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BindEventsToMusicSliders");

	UUI_OptionsVerticalMenu_C_BindEventsToMusicSliders_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BindEventsToMainButtons
// (BlueprintCallable, BlueprintEvent)
void UUI_OptionsVerticalMenu_C::BindEventsToMainButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BindEventsToMainButtons");

	UUI_OptionsVerticalMenu_C_BindEventsToMainButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.CancelAfterAcceptation
// (BlueprintCallable, BlueprintEvent)
void UUI_OptionsVerticalMenu_C::CancelAfterAcceptation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.CancelAfterAcceptation");

	UUI_OptionsVerticalMenu_C_CancelAfterAcceptation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_OptionsSelect_1_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_OptionsVerticalMenu_C::BndEvt__btn_OptionsSelect_1_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_OptionsSelect_1_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");

	UUI_OptionsVerticalMenu_C_BndEvt__btn_OptionsSelect_1_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_OptionsSelect_1_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_OptionsVerticalMenu_C::BndEvt__btn_OptionsSelect_1_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_OptionsSelect_1_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature");

	UUI_OptionsVerticalMenu_C_BndEvt__btn_OptionsSelect_1_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_OptionsSelect_1_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_OptionsVerticalMenu_C::BndEvt__btn_OptionsSelect_1_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_OptionsSelect_1_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature");

	UUI_OptionsVerticalMenu_C_BndEvt__btn_OptionsSelect_1_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_OptionsSelect_2_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_OptionsVerticalMenu_C::BndEvt__btn_OptionsSelect_2_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_OptionsSelect_2_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");

	UUI_OptionsVerticalMenu_C_BndEvt__btn_OptionsSelect_2_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_OptionsSelect_2_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_OptionsVerticalMenu_C::BndEvt__btn_OptionsSelect_2_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_OptionsSelect_2_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature");

	UUI_OptionsVerticalMenu_C_BndEvt__btn_OptionsSelect_2_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_OptionsSelect_2_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_OptionsVerticalMenu_C::BndEvt__btn_OptionsSelect_2_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_OptionsSelect_2_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature");

	UUI_OptionsVerticalMenu_C_BndEvt__btn_OptionsSelect_2_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.ExecuteUbergraph_UI_OptionsVerticalMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OptionsVerticalMenu_C::ExecuteUbergraph_UI_OptionsVerticalMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.ExecuteUbergraph_UI_OptionsVerticalMenu");

	UUI_OptionsVerticalMenu_C_ExecuteUbergraph_UI_OptionsVerticalMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_OptionsVerticalMenu_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Anti_AliasingBox, UUI_HorizontalOptionButton_C);
	READ_PTR_FULL(AspectRatioBox, UUI_HorizontalOptionButton_C);
	READ_PTR_FULL(Border_SettingsAcceptation, UBorder);
	READ_PTR_FULL(btn_Game, UUI_MenuButton_C);
	READ_PTR_FULL(btn_Graphic, UUI_MenuButton_C);
	READ_PTR_FULL(btn_Keybinding, UUI_MenuButton_C);
	READ_PTR_FULL(Btn_Left, UButton);
	READ_PTR_FULL(btn_OptionsAccept, UButton);
	READ_PTR_FULL(btn_OptionsBack, UButton);
	READ_PTR_FULL(btn_OptionsDefaultSettings, UButton);
	READ_PTR_FULL(btn_OptionsSelect, UButton);
	READ_PTR_FULL(Btn_Right, UButton);
	READ_PTR_FULL(btn_Sound, UUI_MenuButton_C);
	READ_PTR_FULL(CrouchType, UUI_HorizontalOptionButton_C);
	READ_PTR_FULL(DecisionButtons, UHorizontalBox);
	READ_PTR_FULL(DFAOBox, UUI_HorizontalOptionButton_Checkbox_C);
	READ_PTR_FULL(EffectsBox, UUI_HorizontalOptionButton_C);
	READ_PTR_FULL(EffectsOption, UUI_HorizontalOptionButton_Slider_C);
	READ_PTR_FULL(EnableBlood, UUI_HorizontalOptionButton_Checkbox_C);
	READ_PTR_FULL(EnableHeadbobbing, UUI_HorizontalOptionButton_Checkbox_C);
	READ_PTR_FULL(EnvironmentOption, UUI_HorizontalOptionButton_Slider_C);
	READ_PTR_FULL(FieldOfViewBox, UUI_HorizontalOptionButton_Slider_C);
	READ_PTR_FULL(FoliageBox, UUI_HorizontalOptionButton_C);
	READ_PTR_FULL(FramerateLimitBox, UUI_HorizontalOptionButton_C);
	READ_PTR_FULL(GamePanel, UVerticalBox);
	READ_PTR_FULL(GraphicPanel, UVerticalBox);
	READ_PTR_FULL(GraphicSettingsPanel, UScrollBox);
	READ_PTR_FULL(HorizontalSensitivityOption, UUI_HorizontalOptionButton_Slider_C);
	READ_PTR_FULL(Image, UImage);
	READ_PTR_FULL(Image_2, UImage);
	READ_PTR_FULL(Image_3, UImage);
	READ_PTR_FULL(Image_4, UImage);
	READ_PTR_FULL(Image_5, UImage);
	READ_PTR_FULL(Image_6, UImage);
	READ_PTR_FULL(Image_7, UImage);
	READ_PTR_FULL(Image_8, UImage);
	READ_PTR_FULL(Image_9, UImage);
	READ_PTR_FULL(Image_10, UImage);
	READ_PTR_FULL(Image_11, UImage);
	READ_PTR_FULL(Image_12, UImage);
	READ_PTR_FULL(Image_13, UImage);
	READ_PTR_FULL(Image_14, UImage);
	READ_PTR_FULL(Image_15, UImage);
	READ_PTR_FULL(Image_16, UImage);
	READ_PTR_FULL(Image_17, UImage);
	READ_PTR_FULL(Image_18, UImage);
	READ_PTR_FULL(Image_110, UImage);
	READ_PTR_FULL(Image_350, UImage);
	READ_PTR_FULL(InvertMouseOption, UUI_HorizontalOptionButton_Checkbox_C);
	READ_PTR_FULL(KeybindsPanel_Gamepad, UVerticalBox);
	READ_PTR_FULL(KeybindsPanel_Keyboard, UVerticalBox);
	READ_PTR_FULL(KeybindsScrollBox, UScrollBox);
	READ_PTR_FULL(KeybindsSwitcher, UWidgetSwitcher);
	READ_PTR_FULL(KeyboardBindsBox, UVerticalBox);
	READ_PTR_FULL(LanguageBox, UUI_HorizontalOptionButton_C);
	READ_PTR_FULL(Main, UVerticalBox);
	READ_PTR_FULL(MasterOption, UUI_HorizontalOptionButton_Slider_C);
	READ_PTR_FULL(MusicOption, UUI_HorizontalOptionButton_Slider_C);
	READ_PTR_FULL(PostProcessingBox, UUI_HorizontalOptionButton_C);
	READ_PTR_FULL(QuickslotsType, UUI_HorizontalOptionButton_C);
	READ_PTR_FULL(ResolutionBox, UUI_HorizontalOptionButton_C);
	READ_PTR_FULL(RightLeftChangerBox, UHorizontalBox);
	READ_PTR_FULL(RotationBindsBox, UVerticalBox);
	READ_PTR_FULL(ShadingBox, UUI_HorizontalOptionButton_C);
	READ_PTR_FULL(ShadowsBox, UUI_HorizontalOptionButton_C);
	READ_PTR_FULL(SoundPanel, UVerticalBox);
	READ_PTR_FULL(SprintType, UUI_HorizontalOptionButton_C);
	READ_PTR_FULL(TexturesBox, UUI_HorizontalOptionButton_C);
	READ_PTR_FULL(TonemapperBox, UUI_HorizontalOptionButton_C);
	READ_PTR_FULL(txt_Accept, UTextBlock);
	READ_PTR_FULL(txt_Accept_2, UTextBlock);
	READ_PTR_FULL(txt_AdditionalInteractionLetter, UTextBlock);
	READ_PTR_FULL(txt_Back, UTextBlock);
	READ_PTR_FULL(txt_ConfirmLetter, UTextBlock);
	READ_PTR_FULL(txt_DropLetter, UTextBlock);
	READ_PTR_FULL(txt_LeftLetter, UTextBlock);
	READ_PTR_FULL(txt_LeftRightChanger, UTextBlock);
	READ_PTR_FULL(txt_RightLetter, UTextBlock);
	READ_PTR_FULL(txt_Select, UTextBlock);
	READ_PTR_FULL(UI_KeyBinding, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_2, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_3, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_4, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_5, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_6, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_7, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_8, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_9, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_10, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_11, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_12, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_13, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_14, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_15, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_16, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_17, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_18, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_19, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_20, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_21, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_22, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_23, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_24, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_25, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_26, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_27, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_28, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_29, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_30, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_31, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_32, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_33, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_34, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_35, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_37, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_38, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_39, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_41, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_42, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_43, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_44, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_45, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_46, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_47, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_49, UUI_KeyBinding_C);
	READ_PTR_FULL(UI_KeyBinding_50, UUI_KeyBinding_C);
	READ_PTR_FULL(UIBindsBox, UVerticalBox);
	READ_PTR_FULL(UIOption, UUI_HorizontalOptionButton_Slider_C);
	READ_PTR_FULL(V_syncBox, UUI_HorizontalOptionButton_C);
	READ_PTR_FULL(VerticalSensitivityOption, UUI_HorizontalOptionButton_Slider_C);
	READ_PTR_FULL(ViewDistanceBox, UUI_HorizontalOptionButton_C);
	READ_PTR_FULL(VoiceOption, UUI_HorizontalOptionButton_Slider_C);
	READ_PTR_FULL(WidgetSwitcher, UWidgetSwitcher);
	READ_PTR_FULL(WidgetSwitcher_1, UWidgetSwitcher);
	READ_PTR_FULL(WidgetSwitcher_2, UWidgetSwitcher);
	READ_PTR_FULL(WidgetSwitcher_3, UWidgetSwitcher);
	READ_PTR_FULL(WidgetSwitcher_4, UWidgetSwitcher);
	READ_PTR_FULL(WidgetSwitcher_5, UWidgetSwitcher);
	READ_PTR_FULL(WidgetSwitcher_6, UWidgetSwitcher);
	READ_PTR_FULL(WidgetSwitcher_7, UWidgetSwitcher);
	READ_PTR_FULL(WidgetSwitcher_8, UWidgetSwitcher);
	READ_PTR_FULL(WidgetSwitcher_9, UWidgetSwitcher);
	READ_PTR_FULL(WindowModeBox, UUI_HorizontalOptionButton_C);
	READ_PTR_FULL(ParentVerticalBox, UVerticalBox);
	READ_PTR_FULL(GameInstanceReference, UGI_MedievalDynasty_C);
	READ_PTR_FULL(PlayerControllerReference, APC_Player_C);
}

void UUI_OptionsVerticalMenu_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Anti_AliasingBox);
	DELE_PTR_FULL(AspectRatioBox);
	DELE_PTR_FULL(Border_SettingsAcceptation);
	DELE_PTR_FULL(btn_Game);
	DELE_PTR_FULL(btn_Graphic);
	DELE_PTR_FULL(btn_Keybinding);
	DELE_PTR_FULL(Btn_Left);
	DELE_PTR_FULL(btn_OptionsAccept);
	DELE_PTR_FULL(btn_OptionsBack);
	DELE_PTR_FULL(btn_OptionsDefaultSettings);
	DELE_PTR_FULL(btn_OptionsSelect);
	DELE_PTR_FULL(Btn_Right);
	DELE_PTR_FULL(btn_Sound);
	DELE_PTR_FULL(CrouchType);
	DELE_PTR_FULL(DecisionButtons);
	DELE_PTR_FULL(DFAOBox);
	DELE_PTR_FULL(EffectsBox);
	DELE_PTR_FULL(EffectsOption);
	DELE_PTR_FULL(EnableBlood);
	DELE_PTR_FULL(EnableHeadbobbing);
	DELE_PTR_FULL(EnvironmentOption);
	DELE_PTR_FULL(FieldOfViewBox);
	DELE_PTR_FULL(FoliageBox);
	DELE_PTR_FULL(FramerateLimitBox);
	DELE_PTR_FULL(GamePanel);
	DELE_PTR_FULL(GraphicPanel);
	DELE_PTR_FULL(GraphicSettingsPanel);
	DELE_PTR_FULL(HorizontalSensitivityOption);
	DELE_PTR_FULL(Image);
	DELE_PTR_FULL(Image_2);
	DELE_PTR_FULL(Image_3);
	DELE_PTR_FULL(Image_4);
	DELE_PTR_FULL(Image_5);
	DELE_PTR_FULL(Image_6);
	DELE_PTR_FULL(Image_7);
	DELE_PTR_FULL(Image_8);
	DELE_PTR_FULL(Image_9);
	DELE_PTR_FULL(Image_10);
	DELE_PTR_FULL(Image_11);
	DELE_PTR_FULL(Image_12);
	DELE_PTR_FULL(Image_13);
	DELE_PTR_FULL(Image_14);
	DELE_PTR_FULL(Image_15);
	DELE_PTR_FULL(Image_16);
	DELE_PTR_FULL(Image_17);
	DELE_PTR_FULL(Image_18);
	DELE_PTR_FULL(Image_110);
	DELE_PTR_FULL(Image_350);
	DELE_PTR_FULL(InvertMouseOption);
	DELE_PTR_FULL(KeybindsPanel_Gamepad);
	DELE_PTR_FULL(KeybindsPanel_Keyboard);
	DELE_PTR_FULL(KeybindsScrollBox);
	DELE_PTR_FULL(KeybindsSwitcher);
	DELE_PTR_FULL(KeyboardBindsBox);
	DELE_PTR_FULL(LanguageBox);
	DELE_PTR_FULL(Main);
	DELE_PTR_FULL(MasterOption);
	DELE_PTR_FULL(MusicOption);
	DELE_PTR_FULL(PostProcessingBox);
	DELE_PTR_FULL(QuickslotsType);
	DELE_PTR_FULL(ResolutionBox);
	DELE_PTR_FULL(RightLeftChangerBox);
	DELE_PTR_FULL(RotationBindsBox);
	DELE_PTR_FULL(ShadingBox);
	DELE_PTR_FULL(ShadowsBox);
	DELE_PTR_FULL(SoundPanel);
	DELE_PTR_FULL(SprintType);
	DELE_PTR_FULL(TexturesBox);
	DELE_PTR_FULL(TonemapperBox);
	DELE_PTR_FULL(txt_Accept);
	DELE_PTR_FULL(txt_Accept_2);
	DELE_PTR_FULL(txt_AdditionalInteractionLetter);
	DELE_PTR_FULL(txt_Back);
	DELE_PTR_FULL(txt_ConfirmLetter);
	DELE_PTR_FULL(txt_DropLetter);
	DELE_PTR_FULL(txt_LeftLetter);
	DELE_PTR_FULL(txt_LeftRightChanger);
	DELE_PTR_FULL(txt_RightLetter);
	DELE_PTR_FULL(txt_Select);
	DELE_PTR_FULL(UI_KeyBinding);
	DELE_PTR_FULL(UI_KeyBinding_2);
	DELE_PTR_FULL(UI_KeyBinding_3);
	DELE_PTR_FULL(UI_KeyBinding_4);
	DELE_PTR_FULL(UI_KeyBinding_5);
	DELE_PTR_FULL(UI_KeyBinding_6);
	DELE_PTR_FULL(UI_KeyBinding_7);
	DELE_PTR_FULL(UI_KeyBinding_8);
	DELE_PTR_FULL(UI_KeyBinding_9);
	DELE_PTR_FULL(UI_KeyBinding_10);
	DELE_PTR_FULL(UI_KeyBinding_11);
	DELE_PTR_FULL(UI_KeyBinding_12);
	DELE_PTR_FULL(UI_KeyBinding_13);
	DELE_PTR_FULL(UI_KeyBinding_14);
	DELE_PTR_FULL(UI_KeyBinding_15);
	DELE_PTR_FULL(UI_KeyBinding_16);
	DELE_PTR_FULL(UI_KeyBinding_17);
	DELE_PTR_FULL(UI_KeyBinding_18);
	DELE_PTR_FULL(UI_KeyBinding_19);
	DELE_PTR_FULL(UI_KeyBinding_20);
	DELE_PTR_FULL(UI_KeyBinding_21);
	DELE_PTR_FULL(UI_KeyBinding_22);
	DELE_PTR_FULL(UI_KeyBinding_23);
	DELE_PTR_FULL(UI_KeyBinding_24);
	DELE_PTR_FULL(UI_KeyBinding_25);
	DELE_PTR_FULL(UI_KeyBinding_26);
	DELE_PTR_FULL(UI_KeyBinding_27);
	DELE_PTR_FULL(UI_KeyBinding_28);
	DELE_PTR_FULL(UI_KeyBinding_29);
	DELE_PTR_FULL(UI_KeyBinding_30);
	DELE_PTR_FULL(UI_KeyBinding_31);
	DELE_PTR_FULL(UI_KeyBinding_32);
	DELE_PTR_FULL(UI_KeyBinding_33);
	DELE_PTR_FULL(UI_KeyBinding_34);
	DELE_PTR_FULL(UI_KeyBinding_35);
	DELE_PTR_FULL(UI_KeyBinding_37);
	DELE_PTR_FULL(UI_KeyBinding_38);
	DELE_PTR_FULL(UI_KeyBinding_39);
	DELE_PTR_FULL(UI_KeyBinding_41);
	DELE_PTR_FULL(UI_KeyBinding_42);
	DELE_PTR_FULL(UI_KeyBinding_43);
	DELE_PTR_FULL(UI_KeyBinding_44);
	DELE_PTR_FULL(UI_KeyBinding_45);
	DELE_PTR_FULL(UI_KeyBinding_46);
	DELE_PTR_FULL(UI_KeyBinding_47);
	DELE_PTR_FULL(UI_KeyBinding_49);
	DELE_PTR_FULL(UI_KeyBinding_50);
	DELE_PTR_FULL(UIBindsBox);
	DELE_PTR_FULL(UIOption);
	DELE_PTR_FULL(V_syncBox);
	DELE_PTR_FULL(VerticalSensitivityOption);
	DELE_PTR_FULL(ViewDistanceBox);
	DELE_PTR_FULL(VoiceOption);
	DELE_PTR_FULL(WidgetSwitcher);
	DELE_PTR_FULL(WidgetSwitcher_1);
	DELE_PTR_FULL(WidgetSwitcher_2);
	DELE_PTR_FULL(WidgetSwitcher_3);
	DELE_PTR_FULL(WidgetSwitcher_4);
	DELE_PTR_FULL(WidgetSwitcher_5);
	DELE_PTR_FULL(WidgetSwitcher_6);
	DELE_PTR_FULL(WidgetSwitcher_7);
	DELE_PTR_FULL(WidgetSwitcher_8);
	DELE_PTR_FULL(WidgetSwitcher_9);
	DELE_PTR_FULL(WindowModeBox);
	DELE_PTR_FULL(ParentVerticalBox);
	DELE_PTR_FULL(GameInstanceReference);
	DELE_PTR_FULL(PlayerControllerReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
