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

// Function UI_LoadMenu.UI_LoadMenu_C.DropAction
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_LoadMenu_C::DropAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadMenu.UI_LoadMenu_C.DropAction");

	UUI_LoadMenu_C_DropAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoadMenu.UI_LoadMenu_C.ConfirmSelection
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_LoadMenu_C::ConfirmSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadMenu.UI_LoadMenu_C.ConfirmSelection");

	UUI_LoadMenu_C_ConfirmSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoadMenu.UI_LoadMenu_C.MakeSaveSlotActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedSaveSlot               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_LoadMenu_C::MakeSaveSlotActive(int SelectedSaveSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadMenu.UI_LoadMenu_C.MakeSaveSlotActive");

	UUI_LoadMenu_C_MakeSaveSlotActive_Params params;
	params.SelectedSaveSlot = SelectedSaveSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoadMenu.UI_LoadMenu_C.MakeSaveSlotsUnactive
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_LoadMenu_C::MakeSaveSlotsUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadMenu.UI_LoadMenu_C.MakeSaveSlotsUnactive");

	UUI_LoadMenu_C_MakeSaveSlotsUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoadMenu.UI_LoadMenu_C.IncreaseSelectedSaveSlotIndex
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_LoadMenu_C::IncreaseSelectedSaveSlotIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadMenu.UI_LoadMenu_C.IncreaseSelectedSaveSlotIndex");

	UUI_LoadMenu_C_IncreaseSelectedSaveSlotIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoadMenu.UI_LoadMenu_C.DecreaseSelectedSaveSlotIndex
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_LoadMenu_C::DecreaseSelectedSaveSlotIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadMenu.UI_LoadMenu_C.DecreaseSelectedSaveSlotIndex");

	UUI_LoadMenu_C_DecreaseSelectedSaveSlotIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoadMenu.UI_LoadMenu_C.LoadSavedGames
// (BlueprintCallable, BlueprintEvent)
void UUI_LoadMenu_C::LoadSavedGames()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadMenu.UI_LoadMenu_C.LoadSavedGames");

	UUI_LoadMenu_C_LoadSavedGames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoadMenu.UI_LoadMenu_C.DeleteSavedGameSlot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Accepted_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_LoadMenu_C::DeleteSavedGameSlot(bool Accepted_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadMenu.UI_LoadMenu_C.DeleteSavedGameSlot");

	UUI_LoadMenu_C_DeleteSavedGameSlot_Params params;
	params.Accepted_ = Accepted_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoadMenu.UI_LoadMenu_C.LoadGameFromSlot
// (BlueprintCallable, BlueprintEvent)
void UUI_LoadMenu_C::LoadGameFromSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadMenu.UI_LoadMenu_C.LoadGameFromSlot");

	UUI_LoadMenu_C_LoadGameFromSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoadMenu.UI_LoadMenu_C.SortAndReSpawnSaveSlots
// (BlueprintCallable, BlueprintEvent)
void UUI_LoadMenu_C::SortAndReSpawnSaveSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadMenu.UI_LoadMenu_C.SortAndReSpawnSaveSlots");

	UUI_LoadMenu_C_SortAndReSpawnSaveSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoadMenu.UI_LoadMenu_C.BndEvt__btn_OptionsBack_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_LoadMenu_C::BndEvt__btn_OptionsBack_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadMenu.UI_LoadMenu_C.BndEvt__btn_OptionsBack_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_LoadMenu_C_BndEvt__btn_OptionsBack_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoadMenu.UI_LoadMenu_C.MakeActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              txt                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                 btn                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_LoadMenu_C::MakeActive(class UTextBlock* txt, class UButton* btn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadMenu.UI_LoadMenu_C.MakeActive");

	UUI_LoadMenu_C_MakeActive_Params params;
	params.txt = txt;
	params.btn = btn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoadMenu.UI_LoadMenu_C.MakeUnactive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              txt                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                 btn                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_LoadMenu_C::MakeUnactive(class UTextBlock* txt, class UButton* btn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadMenu.UI_LoadMenu_C.MakeUnactive");

	UUI_LoadMenu_C_MakeUnactive_Params params;
	params.txt = txt;
	params.btn = btn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoadMenu.UI_LoadMenu_C.BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_LoadMenu_C::BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadMenu.UI_LoadMenu_C.BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");

	UUI_LoadMenu_C_BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoadMenu.UI_LoadMenu_C.BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_LoadMenu_C::BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadMenu.UI_LoadMenu_C.BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature");

	UUI_LoadMenu_C_BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoadMenu.UI_LoadMenu_C.CancelAction
// (BlueprintCallable, BlueprintEvent)
void UUI_LoadMenu_C::CancelAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadMenu.UI_LoadMenu_C.CancelAction");

	UUI_LoadMenu_C_CancelAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoadMenu.UI_LoadMenu_C.BndEvt__btn_DeleteSave_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_LoadMenu_C::BndEvt__btn_DeleteSave_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadMenu.UI_LoadMenu_C.BndEvt__btn_DeleteSave_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UUI_LoadMenu_C_BndEvt__btn_DeleteSave_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoadMenu.UI_LoadMenu_C.BndEvt__btn_DeleteSave_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_LoadMenu_C::BndEvt__btn_DeleteSave_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadMenu.UI_LoadMenu_C.BndEvt__btn_DeleteSave_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UUI_LoadMenu_C_BndEvt__btn_DeleteSave_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoadMenu.UI_LoadMenu_C.BndEvt__btn_DeleteSave_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_LoadMenu_C::BndEvt__btn_DeleteSave_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadMenu.UI_LoadMenu_C.BndEvt__btn_DeleteSave_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UUI_LoadMenu_C_BndEvt__btn_DeleteSave_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoadMenu.UI_LoadMenu_C.BndEvt__btn_LoadGame_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_LoadMenu_C::BndEvt__btn_LoadGame_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadMenu.UI_LoadMenu_C.BndEvt__btn_LoadGame_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UUI_LoadMenu_C_BndEvt__btn_LoadGame_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoadMenu.UI_LoadMenu_C.BndEvt__btn_LoadGame_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_LoadMenu_C::BndEvt__btn_LoadGame_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadMenu.UI_LoadMenu_C.BndEvt__btn_LoadGame_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UUI_LoadMenu_C_BndEvt__btn_LoadGame_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoadMenu.UI_LoadMenu_C.BndEvt__btn_LoadGame_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_LoadMenu_C::BndEvt__btn_LoadGame_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadMenu.UI_LoadMenu_C.BndEvt__btn_LoadGame_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UUI_LoadMenu_C_BndEvt__btn_LoadGame_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoadMenu.UI_LoadMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_LoadMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadMenu.UI_LoadMenu_C.Construct");

	UUI_LoadMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoadMenu.UI_LoadMenu_C.ChangeSteeringType_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Gamepad                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_LoadMenu_C::ChangeSteeringType_Event_1(bool Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadMenu.UI_LoadMenu_C.ChangeSteeringType_Event_1");

	UUI_LoadMenu_C_ChangeSteeringType_Event_1_Params params;
	params.Gamepad = Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_LoadMenu.UI_LoadMenu_C.ExecuteUbergraph_UI_LoadMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_LoadMenu_C::ExecuteUbergraph_UI_LoadMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadMenu.UI_LoadMenu_C.ExecuteUbergraph_UI_LoadMenu");

	UUI_LoadMenu_C_ExecuteUbergraph_UI_LoadMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_LoadMenu_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Border_ConfirmationPanelSlot, UBorder);
	READ_PTR_FULL(btn_DeleteSave, UButton);
	READ_PTR_FULL(btn_LoadGame, UButton);
	READ_PTR_FULL(btn_OptionsBack, UButton);
	READ_PTR_FULL(DecisionInfo, UHorizontalBox);
	READ_PTR_FULL(Image, UImage);
	READ_PTR_FULL(Image_2, UImage);
	READ_PTR_FULL(Image_3, UImage);
	READ_PTR_FULL(Image_4, UImage);
	READ_PTR_FULL(Image_5, UImage);
	READ_PTR_FULL(Image_110, UImage);
	READ_PTR_FULL(SB_SaveSlots, UScrollBox);
	READ_PTR_FULL(txt_Back, UTextBlock);
	READ_PTR_FULL(txt_ConfirmLetter, UTextBlock);
	READ_PTR_FULL(txt_DeleteSave, UTextBlock);
	READ_PTR_FULL(txt_DropLetter, UTextBlock);
	READ_PTR_FULL(txt_LoadGame, UTextBlock);
	READ_PTR_FULL(UI_SaveGameSlot_Labels, UUI_SaveGameSlot_Labels_C);
	READ_PTR_FULL(WidgetSwitcher_1, UWidgetSwitcher);
	READ_PTR_FULL(WidgetSwitcher_2, UWidgetSwitcher);
	READ_PTR_FULL(WidgetSwitcher_3, UWidgetSwitcher);
	READ_PTR_FULL(MenuButtonReference, UUI_MenuButton_C);
	READ_PTR_FULL(MainMenuReference, UUI_MainMenu_C);
}

void UUI_LoadMenu_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Border_ConfirmationPanelSlot);
	DELE_PTR_FULL(btn_DeleteSave);
	DELE_PTR_FULL(btn_LoadGame);
	DELE_PTR_FULL(btn_OptionsBack);
	DELE_PTR_FULL(DecisionInfo);
	DELE_PTR_FULL(Image);
	DELE_PTR_FULL(Image_2);
	DELE_PTR_FULL(Image_3);
	DELE_PTR_FULL(Image_4);
	DELE_PTR_FULL(Image_5);
	DELE_PTR_FULL(Image_110);
	DELE_PTR_FULL(SB_SaveSlots);
	DELE_PTR_FULL(txt_Back);
	DELE_PTR_FULL(txt_ConfirmLetter);
	DELE_PTR_FULL(txt_DeleteSave);
	DELE_PTR_FULL(txt_DropLetter);
	DELE_PTR_FULL(txt_LoadGame);
	DELE_PTR_FULL(UI_SaveGameSlot_Labels);
	DELE_PTR_FULL(WidgetSwitcher_1);
	DELE_PTR_FULL(WidgetSwitcher_2);
	DELE_PTR_FULL(WidgetSwitcher_3);
	DELE_PTR_FULL(MenuButtonReference);
	DELE_PTR_FULL(MainMenuReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
