#pragma once

// Name: Medieval Dynasty, Version: 0.6.0.3


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function UI_SaveMenu.UI_SaveMenu_C.CreateNewGameSlot
struct UUI_SaveMenu_C_CreateNewGameSlot_Params
{
	struct FString                                     UserSaveName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function UI_SaveMenu.UI_SaveMenu_C.DropAction
struct UUI_SaveMenu_C_DropAction_Params
{
};

// Function UI_SaveMenu.UI_SaveMenu_C.ConfirmSelection
struct UUI_SaveMenu_C_ConfirmSelection_Params
{
};

// Function UI_SaveMenu.UI_SaveMenu_C.MakeSaveSlotActive
struct UUI_SaveMenu_C_MakeSaveSlotActive_Params
{
	int                                                SelectedSaveSlot;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SaveMenu.UI_SaveMenu_C.MakeSaveSlotsUnactive
struct UUI_SaveMenu_C_MakeSaveSlotsUnactive_Params
{
};

// Function UI_SaveMenu.UI_SaveMenu_C.IncreaseSelectedSaveSlotIndex
struct UUI_SaveMenu_C_IncreaseSelectedSaveSlotIndex_Params
{
};

// Function UI_SaveMenu.UI_SaveMenu_C.DecreaseSelectedSaveSlotIndex
struct UUI_SaveMenu_C_DecreaseSelectedSaveSlotIndex_Params
{
};

// Function UI_SaveMenu.UI_SaveMenu_C.LoadSavedGames
struct UUI_SaveMenu_C_LoadSavedGames_Params
{
};

// Function UI_SaveMenu.UI_SaveMenu_C.DeleteSavedGameSlot
struct UUI_SaveMenu_C_DeleteSavedGameSlot_Params
{
	bool                                               Accepted_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_SaveMenu.UI_SaveMenu_C.OverwriteSaveGameSlot
struct UUI_SaveMenu_C_OverwriteSaveGameSlot_Params
{
	bool                                               Accepted_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     UserSaveName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__Button_113_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_SaveMenu_C_BndEvt__Button_113_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_SaveMenu.UI_SaveMenu_C.SortAndReSpawnSaveSlots
struct UUI_SaveMenu_C_SortAndReSpawnSaveSlots_Params
{
};

// Function UI_SaveMenu.UI_SaveMenu_C.MakeActive
struct UUI_SaveMenu_C_MakeActive_Params
{
	class UTextBlock*                                  txt;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                     btn;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SaveMenu.UI_SaveMenu_C.MakeUnactive
struct UUI_SaveMenu_C_MakeUnactive_Params
{
	class UTextBlock*                                  txt;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                     btn;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_OptionsBack_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_SaveMenu_C_BndEvt__btn_OptionsBack_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
struct UUI_SaveMenu_C_BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
struct UUI_SaveMenu_C_BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_OptionsBack_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UUI_SaveMenu_C_BndEvt__btn_OptionsBack_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_OptionsBack_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UUI_SaveMenu_C_BndEvt__btn_OptionsBack_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_OptionsBack_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UUI_SaveMenu_C_BndEvt__btn_OptionsBack_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_SaveMenu.UI_SaveMenu_C.Construct
struct UUI_SaveMenu_C_Construct_Params
{
};

// Function UI_SaveMenu.UI_SaveMenu_C.CancelAction
struct UUI_SaveMenu_C_CancelAction_Params
{
};

// Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_Overwrite_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
struct UUI_SaveMenu_C_BndEvt__btn_Overwrite_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_Overwrite_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
struct UUI_SaveMenu_C_BndEvt__btn_Overwrite_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_Overwrite_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
struct UUI_SaveMenu_C_BndEvt__btn_Overwrite_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_DeleteSaved_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
struct UUI_SaveMenu_C_BndEvt__btn_DeleteSaved_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_DeleteSaved_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
struct UUI_SaveMenu_C_BndEvt__btn_DeleteSaved_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_DeleteSaved_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
struct UUI_SaveMenu_C_BndEvt__btn_DeleteSaved_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_SaveGame_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
struct UUI_SaveMenu_C_BndEvt__btn_SaveGame_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_SaveGame_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
struct UUI_SaveMenu_C_BndEvt__btn_SaveGame_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_SaveMenu.UI_SaveMenu_C.BndEvt__btn_SaveGame_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
struct UUI_SaveMenu_C_BndEvt__btn_SaveGame_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_SaveMenu.UI_SaveMenu_C.ChangeSteeringType_Event_1
struct UUI_SaveMenu_C_ChangeSteeringType_Event_1_Params
{
	bool                                               Gamepad;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_SaveMenu.UI_SaveMenu_C.ExecuteUbergraph_UI_SaveMenu
struct UUI_SaveMenu_C_ExecuteUbergraph_UI_SaveMenu_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
