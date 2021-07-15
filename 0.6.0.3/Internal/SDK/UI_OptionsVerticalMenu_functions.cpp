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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
