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

// Function UI_SaveMenu.UI_SaveMenu_C.CreateNewGameSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UserSaveName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UUI_SaveMenu_C::CreateNewGameSlot(const struct FString& UserSaveName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveMenu.UI_SaveMenu_C.CreateNewGameSlot");

	UUI_SaveMenu_C_CreateNewGameSlot_Params params;
	params.UserSaveName = UserSaveName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveMenu.UI_SaveMenu_C.DropAction
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_SaveMenu_C::DropAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveMenu.UI_SaveMenu_C.DropAction");

	UUI_SaveMenu_C_DropAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveMenu.UI_SaveMenu_C.ConfirmSelection
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_SaveMenu_C::ConfirmSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveMenu.UI_SaveMenu_C.ConfirmSelection");

	UUI_SaveMenu_C_ConfirmSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveMenu.UI_SaveMenu_C.MakeSaveSlotActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedSaveSlot               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SaveMenu_C::MakeSaveSlotActive(int SelectedSaveSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveMenu.UI_SaveMenu_C.MakeSaveSlotActive");

	UUI_SaveMenu_C_MakeSaveSlotActive_Params params;
	params.SelectedSaveSlot = SelectedSaveSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveMenu.UI_SaveMenu_C.MakeSaveSlotsUnactive
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_SaveMenu_C::MakeSaveSlotsUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveMenu.UI_SaveMenu_C.MakeSaveSlotsUnactive");

	UUI_SaveMenu_C_MakeSaveSlotsUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveMenu.UI_SaveMenu_C.IncreaseSelectedSaveSlotIndex
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_SaveMenu_C::IncreaseSelectedSaveSlotIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveMenu.UI_SaveMenu_C.IncreaseSelectedSaveSlotIndex");

	UUI_SaveMenu_C_IncreaseSelectedSaveSlotIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveMenu.UI_SaveMenu_C.DecreaseSelectedSaveSlotIndex
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_SaveMenu_C::DecreaseSelectedSaveSlotIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveMenu.UI_SaveMenu_C.DecreaseSelectedSaveSlotIndex");

	UUI_SaveMenu_C_DecreaseSelectedSaveSlotIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveMenu.UI_SaveMenu_C.LoadSavedGames
// (BlueprintCallable, BlueprintEvent)
void UUI_SaveMenu_C::LoadSavedGames()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveMenu.UI_SaveMenu_C.LoadSavedGames");

	UUI_SaveMenu_C_LoadSavedGames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveMenu.UI_SaveMenu_C.DeleteSavedGameSlot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Accepted_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_SaveMenu_C::DeleteSavedGameSlot(bool Accepted_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveMenu.UI_SaveMenu_C.DeleteSavedGameSlot");

	UUI_SaveMenu_C_DeleteSavedGameSlot_Params params;
	params.Accepted_ = Accepted_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveMenu.UI_SaveMenu_C.OverwriteSaveGameSlot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Accepted_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 UserSaveName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UUI_SaveMenu_C::OverwriteSaveGameSlot(bool Accepted_, const struct FString& UserSaveName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveMenu.UI_SaveMenu_C.OverwriteSaveGameSlot");

	UUI_SaveMenu_C_OverwriteSaveGameSlot_Params params;
	params.Accepted_ = Accepted_;
	params.UserSaveName = UserSaveName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__Button_113_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_SaveMenu_C::BndEvt__Button_113_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__Button_113_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_SaveMenu_C_BndEvt__Button_113_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveMenu.UI_SaveMenu_C.SortAndReSpawnSaveSlots
// (BlueprintCallable, BlueprintEvent)
void UUI_SaveMenu_C::SortAndReSpawnSaveSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveMenu.UI_SaveMenu_C.SortAndReSpawnSaveSlots");

	UUI_SaveMenu_C_SortAndReSpawnSaveSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveMenu.UI_SaveMenu_C.MakeActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              txt                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                 btn                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SaveMenu_C::MakeActive(class UTextBlock* txt, class UButton* btn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveMenu.UI_SaveMenu_C.MakeActive");

	UUI_SaveMenu_C_MakeActive_Params params;
	params.txt = txt;
	params.btn = btn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveMenu.UI_SaveMenu_C.MakeUnactive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              txt                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                 btn                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SaveMenu_C::MakeUnactive(class UTextBlock* txt, class UButton* btn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveMenu.UI_SaveMenu_C.MakeUnactive");

	UUI_SaveMenu_C_MakeUnactive_Params params;
	params.txt = txt;
	params.btn = btn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_OptionsBack_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_SaveMenu_C::BndEvt__btn_OptionsBack_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_OptionsBack_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_SaveMenu_C_BndEvt__btn_OptionsBack_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_SaveMenu_C::BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");

	UUI_SaveMenu_C_BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_SaveMenu_C::BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature");

	UUI_SaveMenu_C_BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_OptionsBack_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_SaveMenu_C::BndEvt__btn_OptionsBack_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_OptionsBack_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UUI_SaveMenu_C_BndEvt__btn_OptionsBack_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_OptionsBack_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_SaveMenu_C::BndEvt__btn_OptionsBack_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_OptionsBack_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UUI_SaveMenu_C_BndEvt__btn_OptionsBack_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_OptionsBack_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_SaveMenu_C::BndEvt__btn_OptionsBack_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_OptionsBack_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UUI_SaveMenu_C_BndEvt__btn_OptionsBack_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveMenu.UI_SaveMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_SaveMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveMenu.UI_SaveMenu_C.Construct");

	UUI_SaveMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveMenu.UI_SaveMenu_C.CancelAction
// (BlueprintCallable, BlueprintEvent)
void UUI_SaveMenu_C::CancelAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveMenu.UI_SaveMenu_C.CancelAction");

	UUI_SaveMenu_C_CancelAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_Overwrite_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_SaveMenu_C::BndEvt__btn_Overwrite_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_Overwrite_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UUI_SaveMenu_C_BndEvt__btn_Overwrite_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_Overwrite_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_SaveMenu_C::BndEvt__btn_Overwrite_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_Overwrite_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UUI_SaveMenu_C_BndEvt__btn_Overwrite_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_Overwrite_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_SaveMenu_C::BndEvt__btn_Overwrite_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_Overwrite_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UUI_SaveMenu_C_BndEvt__btn_Overwrite_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_DeleteSaved_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_SaveMenu_C::BndEvt__btn_DeleteSaved_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_DeleteSaved_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");

	UUI_SaveMenu_C_BndEvt__btn_DeleteSaved_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_DeleteSaved_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_SaveMenu_C::BndEvt__btn_DeleteSaved_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_DeleteSaved_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");

	UUI_SaveMenu_C_BndEvt__btn_DeleteSaved_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_DeleteSaved_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_SaveMenu_C::BndEvt__btn_DeleteSaved_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_DeleteSaved_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");

	UUI_SaveMenu_C_BndEvt__btn_DeleteSaved_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_SaveGame_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_SaveMenu_C::BndEvt__btn_SaveGame_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_SaveGame_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature");

	UUI_SaveMenu_C_BndEvt__btn_SaveGame_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_SaveGame_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_SaveMenu_C::BndEvt__btn_SaveGame_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_SaveGame_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature");

	UUI_SaveMenu_C_BndEvt__btn_SaveGame_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_SaveGame_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_SaveMenu_C::BndEvt__btn_SaveGame_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_SaveGame_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");

	UUI_SaveMenu_C_BndEvt__btn_SaveGame_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveMenu.UI_SaveMenu_C.ChangeSteeringType_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Gamepad                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_SaveMenu_C::ChangeSteeringType_Event_1(bool Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveMenu.UI_SaveMenu_C.ChangeSteeringType_Event_1");

	UUI_SaveMenu_C_ChangeSteeringType_Event_1_Params params;
	params.Gamepad = Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SaveMenu.UI_SaveMenu_C.ExecuteUbergraph_UI_SaveMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SaveMenu_C::ExecuteUbergraph_UI_SaveMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SaveMenu.UI_SaveMenu_C.ExecuteUbergraph_UI_SaveMenu");

	UUI_SaveMenu_C_ExecuteUbergraph_UI_SaveMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_SaveMenu_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Border_ConfirmationPanelSlot, UBorder);
	READ_PTR_FULL(btn_DeleteSaved, UButton);
	READ_PTR_FULL(btn_NewSave, UUI_SaveGameSlot_C);
	READ_PTR_FULL(btn_OptionsBack, UButton);
	READ_PTR_FULL(btn_OptionsBack_2, UButton);
	READ_PTR_FULL(btn_Overwrite, UButton);
	READ_PTR_FULL(btn_SaveGame, UButton);
	READ_PTR_FULL(DecisionInfo, UHorizontalBox);
	READ_PTR_FULL(Image, UImage);
	READ_PTR_FULL(Image_2, UImage);
	READ_PTR_FULL(Image_3, UImage);
	READ_PTR_FULL(Image_4, UImage);
	READ_PTR_FULL(Image_5, UImage);
	READ_PTR_FULL(Image_6, UImage);
	READ_PTR_FULL(Image_7, UImage);
	READ_PTR_FULL(Image_8, UImage);
	READ_PTR_FULL(Image_9, UImage);
	READ_PTR_FULL(Image_110, UImage);
	READ_PTR_FULL(SB_SaveSlots, UScrollBox);
	READ_PTR_FULL(TextBlock_3, UTextBlock);
	READ_PTR_FULL(txt_Back, UTextBlock);
	READ_PTR_FULL(txt_Back_2, UTextBlock);
	READ_PTR_FULL(txt_ConfirmLetter, UTextBlock);
	READ_PTR_FULL(txt_ConfirmLetter2, UTextBlock);
	READ_PTR_FULL(txt_DeleteSave, UTextBlock);
	READ_PTR_FULL(txt_DropLetter, UTextBlock);
	READ_PTR_FULL(txt_Overwrite, UTextBlock);
	READ_PTR_FULL(txt_SaveGame, UTextBlock);
	READ_PTR_FULL(UI_SaveGameSlot_Labels, UUI_SaveGameSlot_Labels_C);
	READ_PTR_FULL(WidgetSwitcher_1, UWidgetSwitcher);
	READ_PTR_FULL(WidgetSwitcher_2, UWidgetSwitcher);
	READ_PTR_FULL(WidgetSwitcher_3, UWidgetSwitcher);
	READ_PTR_FULL(WidgetSwitcher_4, UWidgetSwitcher);
	READ_PTR_FULL(WidgetSwitcher_5, UWidgetSwitcher);
	READ_PTR_FULL(WidgetSwitcher_6, UWidgetSwitcher);
	READ_PTR_FULL(MenuButtonReference, UUI_MenuButton_C);
	READ_PTR_FULL(GameMenuReference, UUI_GameMenu_C);
	READ_PTR_FULL(tmp_SlotToOverride, UWidget);
}

void UUI_SaveMenu_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Border_ConfirmationPanelSlot);
	DELE_PTR_FULL(btn_DeleteSaved);
	DELE_PTR_FULL(btn_NewSave);
	DELE_PTR_FULL(btn_OptionsBack);
	DELE_PTR_FULL(btn_OptionsBack_2);
	DELE_PTR_FULL(btn_Overwrite);
	DELE_PTR_FULL(btn_SaveGame);
	DELE_PTR_FULL(DecisionInfo);
	DELE_PTR_FULL(Image);
	DELE_PTR_FULL(Image_2);
	DELE_PTR_FULL(Image_3);
	DELE_PTR_FULL(Image_4);
	DELE_PTR_FULL(Image_5);
	DELE_PTR_FULL(Image_6);
	DELE_PTR_FULL(Image_7);
	DELE_PTR_FULL(Image_8);
	DELE_PTR_FULL(Image_9);
	DELE_PTR_FULL(Image_110);
	DELE_PTR_FULL(SB_SaveSlots);
	DELE_PTR_FULL(TextBlock_3);
	DELE_PTR_FULL(txt_Back);
	DELE_PTR_FULL(txt_Back_2);
	DELE_PTR_FULL(txt_ConfirmLetter);
	DELE_PTR_FULL(txt_ConfirmLetter2);
	DELE_PTR_FULL(txt_DeleteSave);
	DELE_PTR_FULL(txt_DropLetter);
	DELE_PTR_FULL(txt_Overwrite);
	DELE_PTR_FULL(txt_SaveGame);
	DELE_PTR_FULL(UI_SaveGameSlot_Labels);
	DELE_PTR_FULL(WidgetSwitcher_1);
	DELE_PTR_FULL(WidgetSwitcher_2);
	DELE_PTR_FULL(WidgetSwitcher_3);
	DELE_PTR_FULL(WidgetSwitcher_4);
	DELE_PTR_FULL(WidgetSwitcher_5);
	DELE_PTR_FULL(WidgetSwitcher_6);
	DELE_PTR_FULL(MenuButtonReference);
	DELE_PTR_FULL(GameMenuReference);
	DELE_PTR_FULL(tmp_SlotToOverride);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
