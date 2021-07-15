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

// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.DropAction
struct UUI_NewGameConfigurationMenu_C_DropAction_Params
{
};

// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.AdditionalAction
struct UUI_NewGameConfigurationMenu_C_AdditionalAction_Params
{
};

// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.OptionsCancel
struct UUI_NewGameConfigurationMenu_C_OptionsCancel_Params
{
};

// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.ConfirmMainSelection
struct UUI_NewGameConfigurationMenu_C_ConfirmMainSelection_Params
{
};

// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.DecreaseIndex
struct UUI_NewGameConfigurationMenu_C_DecreaseIndex_Params
{
};

// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.IncreaseIndex
struct UUI_NewGameConfigurationMenu_C_IncreaseIndex_Params
{
};

// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.MakeMainButtonsUnactive
struct UUI_NewGameConfigurationMenu_C_MakeMainButtonsUnactive_Params
{
};

// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.MakeMainButtonActive
struct UUI_NewGameConfigurationMenu_C_MakeMainButtonActive_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.SetCurrentTabButtonID
struct UUI_NewGameConfigurationMenu_C_SetCurrentTabButtonID_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.IncreaseHorizontalID
struct UUI_NewGameConfigurationMenu_C_IncreaseHorizontalID_Params
{
	int                                                Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Max;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Min;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.DecreaseHorizontalID
struct UUI_NewGameConfigurationMenu_C_DecreaseHorizontalID_Params
{
	int                                                Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Max;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Min;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.Construct
struct UUI_NewGameConfigurationMenu_C_Construct_Params
{
};

// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UUI_NewGameConfigurationMenu_C_BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.SettingsLeftArrow
struct UUI_NewGameConfigurationMenu_C_SettingsLeftArrow_Params
{
};

// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.SettingsRightArrow
struct UUI_NewGameConfigurationMenu_C_SettingsRightArrow_Params
{
};

// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.BndEvt__btn_GraphicsAccept_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UUI_NewGameConfigurationMenu_C_BndEvt__btn_GraphicsAccept_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.Back
struct UUI_NewGameConfigurationMenu_C_Back_Params
{
};

// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.MakeActive
struct UUI_NewGameConfigurationMenu_C_MakeActive_Params
{
	class UTextBlock*                                  txt;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                     btn;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.MakeUnactive
struct UUI_NewGameConfigurationMenu_C_MakeUnactive_Params
{
	class UTextBlock*                                  txt;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                     btn;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.BndEvt__btn_GraphicsAccept_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
struct UUI_NewGameConfigurationMenu_C_BndEvt__btn_GraphicsAccept_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
struct UUI_NewGameConfigurationMenu_C_BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.BndEvt__btn_GraphicsAccept_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
struct UUI_NewGameConfigurationMenu_C_BndEvt__btn_GraphicsAccept_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
struct UUI_NewGameConfigurationMenu_C_BndEvt__btn_GraphicsBack_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.SetActivityOnHovered
struct UUI_NewGameConfigurationMenu_C_SetActivityOnHovered_Params
{
};

// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.Tick
struct UUI_NewGameConfigurationMenu_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.AcceptSettings
struct UUI_NewGameConfigurationMenu_C_AcceptSettings_Params
{
};

// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.RejectSettings
struct UUI_NewGameConfigurationMenu_C_RejectSettings_Params
{
};

// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.CancelSettings
struct UUI_NewGameConfigurationMenu_C_CancelSettings_Params
{
};

// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.GameSettings
struct UUI_NewGameConfigurationMenu_C_GameSettings_Params
{
};

// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.SetActivityOnHovered_Game
struct UUI_NewGameConfigurationMenu_C_SetActivityOnHovered_Game_Params
{
};

// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.ChangeSteeringType_Event_1
struct UUI_NewGameConfigurationMenu_C_ChangeSteeringType_Event_1_Params
{
	bool                                               Gamepad;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.BndEvt__btn_OptionsDefaultSettings_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_NewGameConfigurationMenu_C_BndEvt__btn_OptionsDefaultSettings_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.BndEvt__btn_OptionsDefaultSettings_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
struct UUI_NewGameConfigurationMenu_C_BndEvt__btn_OptionsDefaultSettings_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.BndEvt__btn_OptionsDefaultSettings_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
struct UUI_NewGameConfigurationMenu_C_BndEvt__btn_OptionsDefaultSettings_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.StartGame
struct UUI_NewGameConfigurationMenu_C_StartGame_Params
{
};

// Function UI_NewGameConfigurationMenu.UI_NewGameConfigurationMenu_C.ExecuteUbergraph_UI_NewGameConfigurationMenu
struct UUI_NewGameConfigurationMenu_C_ExecuteUbergraph_UI_NewGameConfigurationMenu_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
