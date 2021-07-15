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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
