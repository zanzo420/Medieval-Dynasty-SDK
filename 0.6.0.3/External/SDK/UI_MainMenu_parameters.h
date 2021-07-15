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

// Function UI_MainMenu.UI_MainMenu_C.OnKeyDown
struct UUI_MainMenu_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function UI_MainMenu.UI_MainMenu_C.PreviousSection
struct UUI_MainMenu_C_PreviousSection_Params
{
};

// Function UI_MainMenu.UI_MainMenu_C.NextSection
struct UUI_MainMenu_C_NextSection_Params
{
};

// Function UI_MainMenu.UI_MainMenu_C.CheckContinueVisibility
struct UUI_MainMenu_C_CheckContinueVisibility_Params
{
};

// Function UI_MainMenu.UI_MainMenu_C.GetSaveFileNameForContinue
struct UUI_MainMenu_C_GetSaveFileNameForContinue_Params
{
	struct FString                                     SaveSlotName;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               SaveSlotFound;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_MainMenu.UI_MainMenu_C.AdditionalAction
struct UUI_MainMenu_C_AdditionalAction_Params
{
};

// Function UI_MainMenu.UI_MainMenu_C.DropAction
struct UUI_MainMenu_C_DropAction_Params
{
};

// Function UI_MainMenu.UI_MainMenu_C.CancelAction
struct UUI_MainMenu_C_CancelAction_Params
{
};

// Function UI_MainMenu.UI_MainMenu_C.MakeButtonActive
struct UUI_MainMenu_C_MakeButtonActive_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_MainMenu.UI_MainMenu_C.MakeButtonsUnactive
struct UUI_MainMenu_C_MakeButtonsUnactive_Params
{
};

// Function UI_MainMenu.UI_MainMenu_C.ConfirmSelection
struct UUI_MainMenu_C_ConfirmSelection_Params
{
};

// Function UI_MainMenu.UI_MainMenu_C.DecreaseIndex
struct UUI_MainMenu_C_DecreaseIndex_Params
{
};

// Function UI_MainMenu.UI_MainMenu_C.IncreaseIndex
struct UUI_MainMenu_C_IncreaseIndex_Params
{
};

// Function UI_MainMenu.UI_MainMenu_C.Construct
struct UUI_MainMenu_C_Construct_Params
{
};

// Function UI_MainMenu.UI_MainMenu_C.NewGame
struct UUI_MainMenu_C_NewGame_Params
{
};

// Function UI_MainMenu.UI_MainMenu_C.Quit
struct UUI_MainMenu_C_Quit_Params
{
};

// Function UI_MainMenu.UI_MainMenu_C.Load
struct UUI_MainMenu_C_Load_Params
{
};

// Function UI_MainMenu.UI_MainMenu_C.Settings
struct UUI_MainMenu_C_Settings_Params
{
};

// Function UI_MainMenu.UI_MainMenu_C.SetActivityOnHovered
struct UUI_MainMenu_C_SetActivityOnHovered_Params
{
};

// Function UI_MainMenu.UI_MainMenu_C.Tick
struct UUI_MainMenu_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_MainMenu.UI_MainMenu_C.Continue
struct UUI_MainMenu_C_Continue_Params
{
};

// Function UI_MainMenu.UI_MainMenu_C.FadeAnimation
struct UUI_MainMenu_C_FadeAnimation_Params
{
	bool                                               Reverse;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_MainMenu.UI_MainMenu_C.Credits
struct UUI_MainMenu_C_Credits_Params
{
};

// Function UI_MainMenu.UI_MainMenu_C.ExecuteUbergraph_UI_MainMenu
struct UUI_MainMenu_C_ExecuteUbergraph_UI_MainMenu_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
