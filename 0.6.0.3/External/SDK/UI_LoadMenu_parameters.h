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

// Function UI_LoadMenu.UI_LoadMenu_C.DropAction
struct UUI_LoadMenu_C_DropAction_Params
{
};

// Function UI_LoadMenu.UI_LoadMenu_C.ConfirmSelection
struct UUI_LoadMenu_C_ConfirmSelection_Params
{
};

// Function UI_LoadMenu.UI_LoadMenu_C.MakeSaveSlotActive
struct UUI_LoadMenu_C_MakeSaveSlotActive_Params
{
	int                                                SelectedSaveSlot;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_LoadMenu.UI_LoadMenu_C.MakeSaveSlotsUnactive
struct UUI_LoadMenu_C_MakeSaveSlotsUnactive_Params
{
};

// Function UI_LoadMenu.UI_LoadMenu_C.IncreaseSelectedSaveSlotIndex
struct UUI_LoadMenu_C_IncreaseSelectedSaveSlotIndex_Params
{
};

// Function UI_LoadMenu.UI_LoadMenu_C.DecreaseSelectedSaveSlotIndex
struct UUI_LoadMenu_C_DecreaseSelectedSaveSlotIndex_Params
{
};

// Function UI_LoadMenu.UI_LoadMenu_C.LoadSavedGames
struct UUI_LoadMenu_C_LoadSavedGames_Params
{
};

// Function UI_LoadMenu.UI_LoadMenu_C.DeleteSavedGameSlot
struct UUI_LoadMenu_C_DeleteSavedGameSlot_Params
{
	bool                                               Accepted_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_LoadMenu.UI_LoadMenu_C.LoadGameFromSlot
struct UUI_LoadMenu_C_LoadGameFromSlot_Params
{
};

// Function UI_LoadMenu.UI_LoadMenu_C.SortAndReSpawnSaveSlots
struct UUI_LoadMenu_C_SortAndReSpawnSaveSlots_Params
{
};

// Function UI_LoadMenu.UI_LoadMenu_C.BndEvt__btn_OptionsBack_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_LoadMenu_C_BndEvt__btn_OptionsBack_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_LoadMenu.UI_LoadMenu_C.MakeActive
struct UUI_LoadMenu_C_MakeActive_Params
{
	class UTextBlock*                                  txt;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                     btn;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_LoadMenu.UI_LoadMenu_C.MakeUnactive
struct UUI_LoadMenu_C_MakeUnactive_Params
{
	class UTextBlock*                                  txt;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                     btn;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_LoadMenu.UI_LoadMenu_C.BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
struct UUI_LoadMenu_C_BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_LoadMenu.UI_LoadMenu_C.BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
struct UUI_LoadMenu_C_BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_LoadMenu.UI_LoadMenu_C.CancelAction
struct UUI_LoadMenu_C_CancelAction_Params
{
};

// Function UI_LoadMenu.UI_LoadMenu_C.BndEvt__btn_DeleteSave_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UUI_LoadMenu_C_BndEvt__btn_DeleteSave_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_LoadMenu.UI_LoadMenu_C.BndEvt__btn_DeleteSave_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UUI_LoadMenu_C_BndEvt__btn_DeleteSave_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_LoadMenu.UI_LoadMenu_C.BndEvt__btn_DeleteSave_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UUI_LoadMenu_C_BndEvt__btn_DeleteSave_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_LoadMenu.UI_LoadMenu_C.BndEvt__btn_LoadGame_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UUI_LoadMenu_C_BndEvt__btn_LoadGame_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_LoadMenu.UI_LoadMenu_C.BndEvt__btn_LoadGame_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
struct UUI_LoadMenu_C_BndEvt__btn_LoadGame_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_LoadMenu.UI_LoadMenu_C.BndEvt__btn_LoadGame_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UUI_LoadMenu_C_BndEvt__btn_LoadGame_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_LoadMenu.UI_LoadMenu_C.Construct
struct UUI_LoadMenu_C_Construct_Params
{
};

// Function UI_LoadMenu.UI_LoadMenu_C.ChangeSteeringType_Event_1
struct UUI_LoadMenu_C_ChangeSteeringType_Event_1_Params
{
	bool                                               Gamepad;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_LoadMenu.UI_LoadMenu_C.ExecuteUbergraph_UI_LoadMenu
struct UUI_LoadMenu_C_ExecuteUbergraph_UI_LoadMenu_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
