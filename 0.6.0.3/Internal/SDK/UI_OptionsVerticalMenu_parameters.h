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

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.ChangeSelectedMainButton
struct UUI_OptionsVerticalMenu_C_ChangeSelectedMainButton_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.ChangeSelectedKeybind
struct UUI_OptionsVerticalMenu_C_ChangeSelectedKeybind_Params
{
	int                                                KeybindsID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.DropAction
struct UUI_OptionsVerticalMenu_C_DropAction_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.OnKeyDown
struct UUI_OptionsVerticalMenu_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.PreviousSection
struct UUI_OptionsVerticalMenu_C_PreviousSection_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.NextSection
struct UUI_OptionsVerticalMenu_C_NextSection_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.AdditionalAction
struct UUI_OptionsVerticalMenu_C_AdditionalAction_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.CheckIfChangesWereMade
struct UUI_OptionsVerticalMenu_C_CheckIfChangesWereMade_Params
{
	bool                                               Graphics_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Volume_;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Game_;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Value;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.OptionsCancel
struct UUI_OptionsVerticalMenu_C_OptionsCancel_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.ConfirmMainSelection
struct UUI_OptionsVerticalMenu_C_ConfirmMainSelection_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.DecreaseIndex
struct UUI_OptionsVerticalMenu_C_DecreaseIndex_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.IncreaseIndex
struct UUI_OptionsVerticalMenu_C_IncreaseIndex_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.MakeMainButtonsUnactive
struct UUI_OptionsVerticalMenu_C_MakeMainButtonsUnactive_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.MakeMainButtonActive
struct UUI_OptionsVerticalMenu_C_MakeMainButtonActive_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.GetGraphicSettings
struct UUI_OptionsVerticalMenu_C_GetGraphicSettings_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.SaveSettings_Game
struct UUI_OptionsVerticalMenu_C_SaveSettings_Game_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.SaveSettings_Sound
struct UUI_OptionsVerticalMenu_C_SaveSettings_Sound_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.SaveSettings_Graphics
struct UUI_OptionsVerticalMenu_C_SaveSettings_Graphics_Params
{
	bool                                               ShowAcceptationUI;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.SetCurrentTabButtonID
struct UUI_OptionsVerticalMenu_C_SetCurrentTabButtonID_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.IncreaseHorizontalID
struct UUI_OptionsVerticalMenu_C_IncreaseHorizontalID_Params
{
	int                                                Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Max;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Min;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.DecreaseHorizontalID
struct UUI_OptionsVerticalMenu_C_DecreaseHorizontalID_Params
{
	int                                                Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Max;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Min;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.UpdateGraphicsSettingButtons
struct UUI_OptionsVerticalMenu_C_UpdateGraphicsSettingButtons_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.Construct
struct UUI_OptionsVerticalMenu_C_Construct_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UUI_OptionsVerticalMenu_C_BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.SettingsLeftArrow
struct UUI_OptionsVerticalMenu_C_SettingsLeftArrow_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.SettingsRightArrow
struct UUI_OptionsVerticalMenu_C_SettingsRightArrow_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_GraphicsAccept_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UUI_OptionsVerticalMenu_C_BndEvt__btn_GraphicsAccept_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.Graphic
struct UUI_OptionsVerticalMenu_C_Graphic_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.Back
struct UUI_OptionsVerticalMenu_C_Back_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.Sound
struct UUI_OptionsVerticalMenu_C_Sound_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.MakeActive
struct UUI_OptionsVerticalMenu_C_MakeActive_Params
{
	class UTextBlock*                                  txt;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                     btn;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.MakeUnactive
struct UUI_OptionsVerticalMenu_C_MakeUnactive_Params
{
	class UTextBlock*                                  txt;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                     btn;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_GraphicsAccept_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
struct UUI_OptionsVerticalMenu_C_BndEvt__btn_GraphicsAccept_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
struct UUI_OptionsVerticalMenu_C_BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_GraphicsAccept_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
struct UUI_OptionsVerticalMenu_C_BndEvt__btn_GraphicsAccept_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
struct UUI_OptionsVerticalMenu_C_BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.SetActivityOnHovered
struct UUI_OptionsVerticalMenu_C_SetActivityOnHovered_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.Tick
struct UUI_OptionsVerticalMenu_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.AcceptSettings
struct UUI_OptionsVerticalMenu_C_AcceptSettings_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.RejectSettings
struct UUI_OptionsVerticalMenu_C_RejectSettings_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.ChangeMusicVolume
struct UUI_OptionsVerticalMenu_C_ChangeMusicVolume_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.ChangeEffectsVolume
struct UUI_OptionsVerticalMenu_C_ChangeEffectsVolume_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.ChangeAmbientVolume
struct UUI_OptionsVerticalMenu_C_ChangeAmbientVolume_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.CancelSettings
struct UUI_OptionsVerticalMenu_C_CancelSettings_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.SetActivityOnHovered_Graphics
struct UUI_OptionsVerticalMenu_C_SetActivityOnHovered_Graphics_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.SetActivityOnHovered_Sound
struct UUI_OptionsVerticalMenu_C_SetActivityOnHovered_Sound_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.ChangeMasterVolume
struct UUI_OptionsVerticalMenu_C_ChangeMasterVolume_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.ChangeEnvironmentVolume
struct UUI_OptionsVerticalMenu_C_ChangeEnvironmentVolume_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.ChangeUIVolume
struct UUI_OptionsVerticalMenu_C_ChangeUIVolume_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.Keybinds
struct UUI_OptionsVerticalMenu_C_Keybinds_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.GameSettings
struct UUI_OptionsVerticalMenu_C_GameSettings_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.SetActivityOnHovered_Game
struct UUI_OptionsVerticalMenu_C_SetActivityOnHovered_Game_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_OptionsAccept_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UUI_OptionsVerticalMenu_C_BndEvt__btn_OptionsAccept_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_OptionsAccept_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UUI_OptionsVerticalMenu_C_BndEvt__btn_OptionsAccept_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_OptionsAccept_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UUI_OptionsVerticalMenu_C_BndEvt__btn_OptionsAccept_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.ChangeSteeringType_Event_1
struct UUI_OptionsVerticalMenu_C_ChangeSteeringType_Event_1_Params
{
	bool                                               Gamepad;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_OptionsDefaultSettings_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_OptionsVerticalMenu_C_BndEvt__btn_OptionsDefaultSettings_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_OptionsDefaultSettings_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
struct UUI_OptionsVerticalMenu_C_BndEvt__btn_OptionsDefaultSettings_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_OptionsDefaultSettings_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
struct UUI_OptionsVerticalMenu_C_BndEvt__btn_OptionsDefaultSettings_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.UpdateInputLetters
struct UUI_OptionsVerticalMenu_C_UpdateInputLetters_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BindEventsToMusicSliders
struct UUI_OptionsVerticalMenu_C_BindEventsToMusicSliders_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BindEventsToMainButtons
struct UUI_OptionsVerticalMenu_C_BindEventsToMainButtons_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.CancelAfterAcceptation
struct UUI_OptionsVerticalMenu_C_CancelAfterAcceptation_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_OptionsSelect_1_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
struct UUI_OptionsVerticalMenu_C_BndEvt__btn_OptionsSelect_1_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_OptionsSelect_1_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
struct UUI_OptionsVerticalMenu_C_BndEvt__btn_OptionsSelect_1_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_OptionsSelect_1_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
struct UUI_OptionsVerticalMenu_C_BndEvt__btn_OptionsSelect_1_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_OptionsSelect_2_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
struct UUI_OptionsVerticalMenu_C_BndEvt__btn_OptionsSelect_2_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_OptionsSelect_2_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
struct UUI_OptionsVerticalMenu_C_BndEvt__btn_OptionsSelect_2_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.BndEvt__btn_OptionsSelect_2_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature
struct UUI_OptionsVerticalMenu_C_BndEvt__btn_OptionsSelect_2_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_OptionsVerticalMenu.UI_OptionsVerticalMenu_C.ExecuteUbergraph_UI_OptionsVerticalMenu
struct UUI_OptionsVerticalMenu_C_ExecuteUbergraph_UI_OptionsVerticalMenu_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
