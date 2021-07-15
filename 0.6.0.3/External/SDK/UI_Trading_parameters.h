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

// Function UI_Trading.UI_Trading_C.GiveGift
struct UUI_Trading_C_GiveGift_Params
{
};

// Function UI_Trading.UI_Trading_C.UIConfirmHeld
struct UUI_Trading_C_UIConfirmHeld_Params
{
};

// Function UI_Trading.UI_Trading_C.UIConfirmReleased
struct UUI_Trading_C_UIConfirmReleased_Params
{
};

// Function UI_Trading.UI_Trading_C.UIConfirmPressed
struct UUI_Trading_C_UIConfirmPressed_Params
{
	bool                                               HoldingExecutesEvent;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Trading.UI_Trading_C.ChangeSelectedSide
struct UUI_Trading_C_ChangeSelectedSide_Params
{
	bool                                               IsPlayerSetValue;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Trading.UI_Trading_C.IsTransfering?
struct UUI_Trading_C_IsTransfering__Params
{
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Trading.UI_Trading_C.UI_Up
struct UUI_Trading_C_UI_Up_Params
{
};

// Function UI_Trading.UI_Trading_C.UI_NextCategory
struct UUI_Trading_C_UI_NextCategory_Params
{
};

// Function UI_Trading.UI_Trading_C.UI_Down
struct UUI_Trading_C_UI_Down_Params
{
};

// Function UI_Trading.UI_Trading_C.UI_NextSection
struct UUI_Trading_C_UI_NextSection_Params
{
};

// Function UI_Trading.UI_Trading_C.UI_PreviousSection
struct UUI_Trading_C_UI_PreviousSection_Params
{
};

// Function UI_Trading.UI_Trading_C.UI_Exit
struct UUI_Trading_C_UI_Exit_Params
{
};

// Function UI_Trading.UI_Trading_C.UI_PreviousCategory
struct UUI_Trading_C_UI_PreviousCategory_Params
{
};

// Function UI_Trading.UI_Trading_C.UI_TradeItem
struct UUI_Trading_C_UI_TradeItem_Params
{
};

// Function UI_Trading.UI_Trading_C.FinalizeTrade
struct UUI_Trading_C_FinalizeTrade_Params
{
	int                                                Count;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Trading.UI_Trading_C.Construct
struct UUI_Trading_C_Construct_Params
{
};

// Function UI_Trading.UI_Trading_C.UI_TransferItem
struct UUI_Trading_C_UI_TransferItem_Params
{
	bool                                               ShouldCheckContainerRestrictions;                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Trading.UI_Trading_C.FinalizeTransfer
struct UUI_Trading_C_FinalizeTransfer_Params
{
	int                                                Count;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Trading.UI_Trading_C.OnYouClicked
struct UUI_Trading_C_OnYouClicked_Params
{
};

// Function UI_Trading.UI_Trading_C.OnTraderClicked
struct UUI_Trading_C_OnTraderClicked_Params
{
};

// Function UI_Trading.UI_Trading_C.OnStorageClicked
struct UUI_Trading_C_OnStorageClicked_Params
{
};

// Function UI_Trading.UI_Trading_C.ChangeSteeringType_Event_1
struct UUI_Trading_C_ChangeSteeringType_Event_1_Params
{
	bool                                               Gamepad;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Trading.UI_Trading_C.PreConstruct
struct UUI_Trading_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Trading.UI_Trading_C.Tick
struct UUI_Trading_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Trading.UI_Trading_C.Btn_Confirm
struct UUI_Trading_C_Btn_Confirm_Params
{
};

// Function UI_Trading.UI_Trading_C.Btn_Up
struct UUI_Trading_C_Btn_Up_Params
{
};

// Function UI_Trading.UI_Trading_C.Btn_Down
struct UUI_Trading_C_Btn_Down_Params
{
};

// Function UI_Trading.UI_Trading_C.Btn_Left
struct UUI_Trading_C_Btn_Left_Params
{
};

// Function UI_Trading.UI_Trading_C.Btn_Right
struct UUI_Trading_C_Btn_Right_Params
{
};

// Function UI_Trading.UI_Trading_C.Btn_Previous
struct UUI_Trading_C_Btn_Previous_Params
{
};

// Function UI_Trading.UI_Trading_C.Btn_Next
struct UUI_Trading_C_Btn_Next_Params
{
};

// Function UI_Trading.UI_Trading_C.btn_Return
struct UUI_Trading_C_btn_Return_Params
{
};

// Function UI_Trading.UI_Trading_C.Btn_ConfirmHold
struct UUI_Trading_C_Btn_ConfirmHold_Params
{
};

// Function UI_Trading.UI_Trading_C.ExecuteUbergraph_UI_Trading
struct UUI_Trading_C_ExecuteUbergraph_UI_Trading_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
