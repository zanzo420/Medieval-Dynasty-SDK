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

// Function UI_GameMenu.UI_GameMenu_C.CreateMenuNotification
struct UUI_GameMenu_C_CreateMenuNotification_Params
{
	TEnumAsByte<E_Notifications_E_Notifications>       NotificationType;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       WarningText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              NotificationTimeOut;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GameMenu.UI_GameMenu_C.PreviousSection
struct UUI_GameMenu_C_PreviousSection_Params
{
};

// Function UI_GameMenu.UI_GameMenu_C.NextSection
struct UUI_GameMenu_C_NextSection_Params
{
};

// Function UI_GameMenu.UI_GameMenu_C.AdditionalAction
struct UUI_GameMenu_C_AdditionalAction_Params
{
};

// Function UI_GameMenu.UI_GameMenu_C.DropAction
struct UUI_GameMenu_C_DropAction_Params
{
};

// Function UI_GameMenu.UI_GameMenu_C.CancelAction
struct UUI_GameMenu_C_CancelAction_Params
{
};

// Function UI_GameMenu.UI_GameMenu_C.MakeButtonsUnactive
struct UUI_GameMenu_C_MakeButtonsUnactive_Params
{
};

// Function UI_GameMenu.UI_GameMenu_C.MakeButtonActive
struct UUI_GameMenu_C_MakeButtonActive_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GameMenu.UI_GameMenu_C.ConfirmSelection
struct UUI_GameMenu_C_ConfirmSelection_Params
{
};

// Function UI_GameMenu.UI_GameMenu_C.DecreaseIndex
struct UUI_GameMenu_C_DecreaseIndex_Params
{
};

// Function UI_GameMenu.UI_GameMenu_C.IncreaseIndex
struct UUI_GameMenu_C_IncreaseIndex_Params
{
};

// Function UI_GameMenu.UI_GameMenu_C.Construct
struct UUI_GameMenu_C_Construct_Params
{
};

// Function UI_GameMenu.UI_GameMenu_C.Resume
struct UUI_GameMenu_C_Resume_Params
{
};

// Function UI_GameMenu.UI_GameMenu_C.Save
struct UUI_GameMenu_C_Save_Params
{
};

// Function UI_GameMenu.UI_GameMenu_C.Load
struct UUI_GameMenu_C_Load_Params
{
};

// Function UI_GameMenu.UI_GameMenu_C.Quit
struct UUI_GameMenu_C_Quit_Params
{
};

// Function UI_GameMenu.UI_GameMenu_C.MainMenu
struct UUI_GameMenu_C_MainMenu_Params
{
};

// Function UI_GameMenu.UI_GameMenu_C.Settings
struct UUI_GameMenu_C_Settings_Params
{
};

// Function UI_GameMenu.UI_GameMenu_C.SetActivityOnHovered
struct UUI_GameMenu_C_SetActivityOnHovered_Params
{
};

// Function UI_GameMenu.UI_GameMenu_C.Tick
struct UUI_GameMenu_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GameMenu.UI_GameMenu_C.Unstuck
struct UUI_GameMenu_C_Unstuck_Params
{
};

// Function UI_GameMenu.UI_GameMenu_C.ExecuteUbergraph_UI_GameMenu
struct UUI_GameMenu_C_ExecuteUbergraph_UI_GameMenu_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
