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

// Function PC_Player.PC_Player_C.GetRiderControllerComponent
struct APC_Player_C_GetRiderControllerComponent_Params
{
	class URiderControllerComponent*                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.OnChangeSeatActionFailed
struct APC_Player_C_OnChangeSeatActionFailed_Params
{
	struct FMountActionResponse                        Response;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PC_Player.PC_Player_C.OnDismountActionFailed
struct APC_Player_C_OnDismountActionFailed_Params
{
	class AActor*                                      currentMount;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMountActionResponse                        Response;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PC_Player.PC_Player_C.OnMountActionFailed
struct APC_Player_C_OnMountActionFailed_Params
{
	class AActor*                                      newMount;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      newLinkedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMountActionResponse                        Response;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PC_Player.PC_Player_C.OnOtherRiderChangedSeats
struct APC_Player_C_OnOtherRiderChangedSeats_Params
{
	class AActor*                                      otherRider;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                oldSeatId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                newSeatId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PC_Player.PC_Player_C.OnRiderAdded
struct APC_Player_C_OnRiderAdded_Params
{
	class AActor*                                      newRider;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                seatId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PC_Player.PC_Player_C.OnRiderRemoved
struct APC_Player_C_OnRiderRemoved_Params
{
	class AActor*                                      removedRider;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                seatId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PC_Player.PC_Player_C.PossessCharacter
struct APC_Player_C_PossessCharacter_Params
{
	class APawn*                                       characterToPossess;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PC_Player.PC_Player_C.GetCharacterController
struct APC_Player_C_GetCharacterController_Params
{
	class AController*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.GetCharacterMount
struct APC_Player_C_GetCharacterMount_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.GetCharacterPawn
struct APC_Player_C_GetCharacterPawn_Params
{
	class APawn*                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.IsCharacterMountable
struct APC_Player_C_IsCharacterMountable_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PC_Player.PC_Player_C.IsMounted
struct APC_Player_C_IsMounted_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PC_Player.PC_Player_C.PerformDismountPawn
struct APC_Player_C_PerformDismountPawn_Params
{
	class APawn*                                       mountOrRider;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PC_Player.PC_Player_C.PerformMountPawn
struct APC_Player_C_PerformMountPawn_Params
{
	class APawn*                                       mountOrRider;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PC_Player.PC_Player_C.PrepareToDismount
struct APC_Player_C_PrepareToDismount_Params
{
	class AActor*                                      mountOrRider;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMountActionResponse                        Response;                                                  // (Parm, OutParm, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PC_Player.PC_Player_C.PrepareToMount
struct APC_Player_C_PrepareToMount_Params
{
	class AActor*                                      mountOrRider;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      linkedActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMountActionResponse                        Response;                                                  // (Parm, OutParm, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PC_Player.PC_Player_C.ReleaseAllUIInputs
struct APC_Player_C_ReleaseAllUIInputs_Params
{
};

// Function PC_Player.PC_Player_C.CheckCzechQuickslot
struct APC_Player_C_CheckCzechQuickslot_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.UpdateInputHoldingTime
struct APC_Player_C_UpdateInputHoldingTime_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.ResetInputHoldingCount
struct APC_Player_C_ResetInputHoldingCount_Params
{
};

// Function PC_Player.PC_Player_C.InputHoldingWithCount
struct APC_Player_C_InputHoldingWithCount_Params
{
};

// Function PC_Player.PC_Player_C.OnHeadbobbingChanged
struct APC_Player_C_OnHeadbobbingChanged_Params
{
};

// Function PC_Player.PC_Player_C.UpdateFoV
struct APC_Player_C_UpdateFoV_Params
{
};

// Function PC_Player.PC_Player_C.OnLockFreeCam
struct APC_Player_C_OnLockFreeCam_Params
{
	bool                                               LockFreeCam;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PC_Player.PC_Player_C.ChangeCrosshairStatePC
struct APC_Player_C_ChangeCrosshairStatePC_Params
{
	bool                                               Aiming;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PC_Player.PC_Player_C.UserConstructionScript
struct APC_Player_C_UserConstructionScript_Params
{
};

// Function PC_Player.PC_Player_C.InpActEvt_Add_K2Node_InputKeyEvent_18
struct APC_Player_C_InpActEvt_Add_K2Node_InputKeyEvent_18_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_Subtract_K2Node_InputKeyEvent_17
struct APC_Player_C_InpActEvt_Subtract_K2Node_InputKeyEvent_17_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_Inventory_K2Node_InputActionEvent_77
struct APC_Player_C_InpActEvt_Inventory_K2Node_InputActionEvent_77_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_Inventory_K2Node_InputActionEvent_76
struct APC_Player_C_InpActEvt_Inventory_K2Node_InputActionEvent_76_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_Multiply_K2Node_InputKeyEvent_16
struct APC_Player_C_InpActEvt_Multiply_K2Node_InputKeyEvent_16_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_Map_K2Node_InputActionEvent_75
struct APC_Player_C_InpActEvt_Map_K2Node_InputActionEvent_75_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_Map_K2Node_InputActionEvent_74
struct APC_Player_C_InpActEvt_Map_K2Node_InputActionEvent_74_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_Skills_K2Node_InputActionEvent_73
struct APC_Player_C_InpActEvt_Skills_K2Node_InputActionEvent_73_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_Skills_K2Node_InputActionEvent_72
struct APC_Player_C_InpActEvt_Skills_K2Node_InputActionEvent_72_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_Journal_K2Node_InputActionEvent_71
struct APC_Player_C_InpActEvt_Journal_K2Node_InputActionEvent_71_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_Journal_K2Node_InputActionEvent_70
struct APC_Player_C_InpActEvt_Journal_K2Node_InputActionEvent_70_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_LastInventoryTab_K2Node_InputActionEvent_69
struct APC_Player_C_InpActEvt_LastInventoryTab_K2Node_InputActionEvent_69_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_LastInventoryTab_K2Node_InputActionEvent_68
struct APC_Player_C_InpActEvt_LastInventoryTab_K2Node_InputActionEvent_68_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_UI_Confirm_K2Node_InputActionEvent_67
struct APC_Player_C_InpActEvt_UI_Confirm_K2Node_InputActionEvent_67_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_UI_Confirm_K2Node_InputActionEvent_66
struct APC_Player_C_InpActEvt_UI_Confirm_K2Node_InputActionEvent_66_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_UI_Up_K2Node_InputActionEvent_65
struct APC_Player_C_InpActEvt_UI_Up_K2Node_InputActionEvent_65_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_UI_Up_K2Node_InputActionEvent_64
struct APC_Player_C_InpActEvt_UI_Up_K2Node_InputActionEvent_64_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_UI_Down_K2Node_InputActionEvent_63
struct APC_Player_C_InpActEvt_UI_Down_K2Node_InputActionEvent_63_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_UI_Down_K2Node_InputActionEvent_62
struct APC_Player_C_InpActEvt_UI_Down_K2Node_InputActionEvent_62_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_UI_Right_K2Node_InputActionEvent_61
struct APC_Player_C_InpActEvt_UI_Right_K2Node_InputActionEvent_61_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_UI_Right_K2Node_InputActionEvent_60
struct APC_Player_C_InpActEvt_UI_Right_K2Node_InputActionEvent_60_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_UI_Left_K2Node_InputActionEvent_59
struct APC_Player_C_InpActEvt_UI_Left_K2Node_InputActionEvent_59_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_UI_Left_K2Node_InputActionEvent_58
struct APC_Player_C_InpActEvt_UI_Left_K2Node_InputActionEvent_58_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_UI_Cancel_K2Node_InputActionEvent_57
struct APC_Player_C_InpActEvt_UI_Cancel_K2Node_InputActionEvent_57_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_UI_Cancel_K2Node_InputActionEvent_56
struct APC_Player_C_InpActEvt_UI_Cancel_K2Node_InputActionEvent_56_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_Backslash_K2Node_InputKeyEvent_15
struct APC_Player_C_InpActEvt_Backslash_K2Node_InputKeyEvent_15_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_BackSpace_K2Node_InputKeyEvent_14
struct APC_Player_C_InpActEvt_BackSpace_K2Node_InputKeyEvent_14_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_PageDown_K2Node_InputKeyEvent_13
struct APC_Player_C_InpActEvt_PageDown_K2Node_InputKeyEvent_13_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_Management_K2Node_InputActionEvent_55
struct APC_Player_C_InpActEvt_Management_K2Node_InputActionEvent_55_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_Management_K2Node_InputActionEvent_54
struct APC_Player_C_InpActEvt_Management_K2Node_InputActionEvent_54_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent_12
struct APC_Player_C_InpActEvt_NumPadFour_K2Node_InputKeyEvent_12_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_PageDown_K2Node_InputKeyEvent_11
struct APC_Player_C_InpActEvt_PageDown_K2Node_InputKeyEvent_11_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_PageDown_K2Node_InputKeyEvent_10
struct APC_Player_C_InpActEvt_PageDown_K2Node_InputKeyEvent_10_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_PageUp_K2Node_InputKeyEvent_9
struct APC_Player_C_InpActEvt_PageUp_K2Node_InputKeyEvent_9_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_PageUp_K2Node_InputKeyEvent_8
struct APC_Player_C_InpActEvt_PageUp_K2Node_InputKeyEvent_8_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_UI_Drop_K2Node_InputActionEvent_53
struct APC_Player_C_InpActEvt_UI_Drop_K2Node_InputActionEvent_53_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_UI_Drop_K2Node_InputActionEvent_52
struct APC_Player_C_InpActEvt_UI_Drop_K2Node_InputActionEvent_52_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_Torch_K2Node_InputActionEvent_51
struct APC_Player_C_InpActEvt_Torch_K2Node_InputActionEvent_51_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_QuickslotMenu_K2Node_InputActionEvent_50
struct APC_Player_C_InpActEvt_QuickslotMenu_K2Node_InputActionEvent_50_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_LeftAction_K2Node_InputActionEvent_49
struct APC_Player_C_InpActEvt_LeftAction_K2Node_InputActionEvent_49_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_LeftAction_K2Node_InputActionEvent_48
struct APC_Player_C_InpActEvt_LeftAction_K2Node_InputActionEvent_48_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_RightAction_K2Node_InputActionEvent_47
struct APC_Player_C_InpActEvt_RightAction_K2Node_InputActionEvent_47_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_RightAction_K2Node_InputActionEvent_46
struct APC_Player_C_InpActEvt_RightAction_K2Node_InputActionEvent_46_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_QuickSlot4_K2Node_InputActionEvent_45
struct APC_Player_C_InpActEvt_QuickSlot4_K2Node_InputActionEvent_45_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_QuickSlot8_K2Node_InputActionEvent_44
struct APC_Player_C_InpActEvt_QuickSlot8_K2Node_InputActionEvent_44_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_QuickSlot3_K2Node_InputActionEvent_43
struct APC_Player_C_InpActEvt_QuickSlot3_K2Node_InputActionEvent_43_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_QuickSlot7_K2Node_InputActionEvent_42
struct APC_Player_C_InpActEvt_QuickSlot7_K2Node_InputActionEvent_42_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_QuickSlot2_K2Node_InputActionEvent_41
struct APC_Player_C_InpActEvt_QuickSlot2_K2Node_InputActionEvent_41_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_QuickSlot6_K2Node_InputActionEvent_40
struct APC_Player_C_InpActEvt_QuickSlot6_K2Node_InputActionEvent_40_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_QuickSlot5_K2Node_InputActionEvent_39
struct APC_Player_C_InpActEvt_QuickSlot5_K2Node_InputActionEvent_39_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_QuickSlot1_K2Node_InputActionEvent_38
struct APC_Player_C_InpActEvt_QuickSlot1_K2Node_InputActionEvent_38_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_InteractAction_K2Node_InputActionEvent_37
struct APC_Player_C_InpActEvt_InteractAction_K2Node_InputActionEvent_37_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_InteractAction_K2Node_InputActionEvent_36
struct APC_Player_C_InpActEvt_InteractAction_K2Node_InputActionEvent_36_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_SprintAction_K2Node_InputActionEvent_35
struct APC_Player_C_InpActEvt_SprintAction_K2Node_InputActionEvent_35_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_SprintAction_K2Node_InputActionEvent_34
struct APC_Player_C_InpActEvt_SprintAction_K2Node_InputActionEvent_34_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_InspectorMode_K2Node_InputActionEvent_33
struct APC_Player_C_InpActEvt_InspectorMode_K2Node_InputActionEvent_33_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_InspectorMode_K2Node_InputActionEvent_32
struct APC_Player_C_InpActEvt_InspectorMode_K2Node_InputActionEvent_32_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_HolsterHoldableItem_K2Node_InputActionEvent_31
struct APC_Player_C_InpActEvt_HolsterHoldableItem_K2Node_InputActionEvent_31_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_E_K2Node_InputKeyEvent_7
struct APC_Player_C_InpActEvt_E_K2Node_InputKeyEvent_7_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_E_K2Node_InputKeyEvent_6
struct APC_Player_C_InpActEvt_E_K2Node_InputKeyEvent_6_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_UI_AdditionalInteraction_K2Node_InputActionEvent_30
struct APC_Player_C_InpActEvt_UI_AdditionalInteraction_K2Node_InputActionEvent_30_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_GameMenu_K2Node_InputActionEvent_29
struct APC_Player_C_InpActEvt_GameMenu_K2Node_InputActionEvent_29_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_UI_PreviousSection_K2Node_InputActionEvent_28
struct APC_Player_C_InpActEvt_UI_PreviousSection_K2Node_InputActionEvent_28_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_UI_PreviousSection_K2Node_InputActionEvent_27
struct APC_Player_C_InpActEvt_UI_PreviousSection_K2Node_InputActionEvent_27_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_UI_NextSection_K2Node_InputActionEvent_26
struct APC_Player_C_InpActEvt_UI_NextSection_K2Node_InputActionEvent_26_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_UI_NextSection_K2Node_InputActionEvent_25
struct APC_Player_C_InpActEvt_UI_NextSection_K2Node_InputActionEvent_25_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_SelectRotationMode_1_K2Node_InputActionEvent_24
struct APC_Player_C_InpActEvt_SelectRotationMode_1_K2Node_InputActionEvent_24_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_SelectRotationMode_2_K2Node_InputActionEvent_23
struct APC_Player_C_InpActEvt_SelectRotationMode_2_K2Node_InputActionEvent_23_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_WalkAction_K2Node_InputActionEvent_22
struct APC_Player_C_InpActEvt_WalkAction_K2Node_InputActionEvent_22_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_StanceAction_K2Node_InputActionEvent_21
struct APC_Player_C_InpActEvt_StanceAction_K2Node_InputActionEvent_21_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_StanceAction_K2Node_InputActionEvent_20
struct APC_Player_C_InpActEvt_StanceAction_K2Node_InputActionEvent_20_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_CameraAction_K2Node_InputActionEvent_19
struct APC_Player_C_InpActEvt_CameraAction_K2Node_InputActionEvent_19_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_CameraAction_K2Node_InputActionEvent_18
struct APC_Player_C_InpActEvt_CameraAction_K2Node_InputActionEvent_18_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_JumpAction_K2Node_InputActionEvent_17
struct APC_Player_C_InpActEvt_JumpAction_K2Node_InputActionEvent_17_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_JumpAction_K2Node_InputActionEvent_16
struct APC_Player_C_InpActEvt_JumpAction_K2Node_InputActionEvent_16_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_Technology_K2Node_InputActionEvent_15
struct APC_Player_C_InpActEvt_Technology_K2Node_InputActionEvent_15_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_Technology_K2Node_InputActionEvent_14
struct APC_Player_C_InpActEvt_Technology_K2Node_InputActionEvent_14_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_Home_K2Node_InputKeyEvent_5
struct APC_Player_C_InpActEvt_Home_K2Node_InputKeyEvent_5_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_Insert_K2Node_InputKeyEvent_4
struct APC_Player_C_InpActEvt_Insert_K2Node_InputKeyEvent_4_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_ChoiceMenu_K2Node_InputActionEvent_13
struct APC_Player_C_InpActEvt_ChoiceMenu_K2Node_InputActionEvent_13_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_ChoiceMenu_K2Node_InputActionEvent_12
struct APC_Player_C_InpActEvt_ChoiceMenu_K2Node_InputActionEvent_12_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_F5_K2Node_InputKeyEvent_3
struct APC_Player_C_InpActEvt_F5_K2Node_InputKeyEvent_3_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_ChangeInputAction_K2Node_InputActionEvent_11
struct APC_Player_C_InpActEvt_ChangeInputAction_K2Node_InputActionEvent_11_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_Equals_K2Node_InputKeyEvent_2
struct APC_Player_C_InpActEvt_Equals_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_F9_K2Node_InputKeyEvent_1
struct APC_Player_C_InpActEvt_F9_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_ChangeCharacter_K2Node_InputActionEvent_10
struct APC_Player_C_InpActEvt_ChangeCharacter_K2Node_InputActionEvent_10_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_HideHUD_K2Node_InputActionEvent_9
struct APC_Player_C_InpActEvt_HideHUD_K2Node_InputActionEvent_9_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_RotateGhost_Right_K2Node_InputActionEvent_8
struct APC_Player_C_InpActEvt_RotateGhost_Right_K2Node_InputActionEvent_8_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_RotateGhost_Right_K2Node_InputActionEvent_7
struct APC_Player_C_InpActEvt_RotateGhost_Right_K2Node_InputActionEvent_7_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_RotateGhost_Left_K2Node_InputActionEvent_6
struct APC_Player_C_InpActEvt_RotateGhost_Left_K2Node_InputActionEvent_6_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_RotateGhost_Left_K2Node_InputActionEvent_5
struct APC_Player_C_InpActEvt_RotateGhost_Left_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_UI_SpecialAction_K2Node_InputActionEvent_4
struct APC_Player_C_InpActEvt_UI_SpecialAction_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_DismountAction_K2Node_InputActionEvent_3
struct APC_Player_C_InpActEvt_DismountAction_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_DismountAction_K2Node_InputActionEvent_2
struct APC_Player_C_InpActEvt_DismountAction_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpActEvt_SummonMount_K2Node_InputActionEvent_1
struct APC_Player_C_InpActEvt_SummonMount_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.BPI_OnHeadbobbingChanged
struct APC_Player_C_BPI_OnHeadbobbingChanged_Params
{
};

// Function PC_Player.PC_Player_C.BPI_UpdateControlsSensitivity
struct APC_Player_C_BPI_UpdateControlsSensitivity_Params
{
};

// Function PC_Player.PC_Player_C.Server PossessPawn
struct APC_Player_C_Server_PossessPawn_Params
{
	class APawn*                                       characterToPossess;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.ReceivePossess
struct APC_Player_C_ReceivePossess_Params
{
	class APawn*                                       PossessedPawn;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.ToggleInventory
struct APC_Player_C_ToggleInventory_Params
{
	TEnumAsByte<E_InventoryMainTab_E_InventoryMainTab> MainTab;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OpenLastTab_;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Close_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PC_Player.PC_Player_C.ToggleEvent
struct APC_Player_C_ToggleEvent_Params
{
	bool                                               CheatStart;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               CheatEnd;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PC_Player.PC_Player_C.ToggleChallange
struct APC_Player_C_ToggleChallange_Params
{
};

// Function PC_Player.PC_Player_C.ToggleSeasonSumUp
struct APC_Player_C_ToggleSeasonSumUp_Params
{
};

// Function PC_Player.PC_Player_C.ToggleTradingMenu
struct APC_Player_C_ToggleTradingMenu_Params
{
	bool                                               WithNPC_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UInventoryComponent_C*                       OtherInventoryComponentReference;                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WithHorse_;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               GiftGiving;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PC_Player.PC_Player_C.Increase TP Camera Distance
struct APC_Player_C_Increase_TP_Camera_Distance_Params
{
};

// Function PC_Player.PC_Player_C.Decrease TP Camera Distance
struct APC_Player_C_Decrease_TP_Camera_Distance_Params
{
};

// Function PC_Player.PC_Player_C.Player Move For Interaction
struct APC_Player_C_Player_Move_For_Interaction_Params
{
	struct FVector                                     Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     LookAtTarget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RotateDuringMovement;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UsePlayerLookAt;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ResetLookAtPitch;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PC_Player.PC_Player_C.InputLastInventoryTab
struct APC_Player_C_InputLastInventoryTab_Params
{
};

// Function PC_Player.PC_Player_C.InputManagementTab
struct APC_Player_C_InputManagementTab_Params
{
};

// Function PC_Player.PC_Player_C.InputJournalTab
struct APC_Player_C_InputJournalTab_Params
{
};

// Function PC_Player.PC_Player_C.InputSkillsTab
struct APC_Player_C_InputSkillsTab_Params
{
};

// Function PC_Player.PC_Player_C.InputMapTab
struct APC_Player_C_InputMapTab_Params
{
};

// Function PC_Player.PC_Player_C.InputInventoryTab
struct APC_Player_C_InputInventoryTab_Params
{
};

// Function PC_Player.PC_Player_C.EventToggleInventory
struct APC_Player_C_EventToggleInventory_Params
{
};

// Function PC_Player.PC_Player_C.Player Look At For Dialogue
struct APC_Player_C_Player_Look_At_For_Dialogue_Params
{
	class AActor*                                      targetActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     TargetLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.OnDialogueEnded
struct APC_Player_C_OnDialogueEnded_Params
{
};

// Function PC_Player.PC_Player_C.OnDialogueStarted
struct APC_Player_C_OnDialogueStarted_Params
{
};

// Function PC_Player.PC_Player_C.Right_K2Node_InputAxisEvent_7
struct APC_Player_C_Right_K2Node_InputAxisEvent_7_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1
struct APC_Player_C_InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.Backwards_K2Node_InputAxisEvent_1
struct APC_Player_C_Backwards_K2Node_InputAxisEvent_1_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.Left_K2Node_InputAxisEvent_2
struct APC_Player_C_Left_K2Node_InputAxisEvent_2_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InputTechnologyTab
struct APC_Player_C_InputTechnologyTab_Params
{
};

// Function PC_Player.PC_Player_C.CreateDeathScreen
struct APC_Player_C_CreateDeathScreen_Params
{
	TEnumAsByte<E_DeathType_E_DeathType>               DeathType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.CreateMainMenu
struct APC_Player_C_CreateMainMenu_Params
{
};

// Function PC_Player.PC_Player_C.RemoveMainMenu
struct APC_Player_C_RemoveMainMenu_Params
{
	float                                              Delay;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.CreateIntro
struct APC_Player_C_CreateIntro_Params
{
};

// Function PC_Player.PC_Player_C.RemoveIntro
struct APC_Player_C_RemoveIntro_Params
{
	float                                              Delay;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMediaPlayer*                                MediaPlayer;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.Reset Camera Pitch
struct APC_Player_C_Reset_Camera_Pitch_Params
{
};

// Function PC_Player.PC_Player_C.InitWideCamera
struct APC_Player_C_InitWideCamera_Params
{
};

// Function PC_Player.PC_Player_C.ReceiveBeginPlay
struct APC_Player_C_ReceiveBeginPlay_Params
{
};

// Function PC_Player.PC_Player_C.EnterFreeCam
struct APC_Player_C_EnterFreeCam_Params
{
};

// Function PC_Player.PC_Player_C.InpAxisEvt_ChangeInputOnMouseMove_K2Node_InputAxisEvent_5
struct APC_Player_C_InpAxisEvt_ChangeInputOnMouseMove_K2Node_InputAxisEvent_5_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InpAxisEvt_ChangeInputOnGamepadThumbstickMove_K2Node_InputAxisEvent_6
struct APC_Player_C_InpAxisEvt_ChangeInputOnGamepadThumbstickMove_K2Node_InputAxisEvent_6_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InterruptPlayerLooktAtForDialogue
struct APC_Player_C_InterruptPlayerLooktAtForDialogue_Params
{
};

// Function PC_Player.PC_Player_C.UpdateControlsSensitivity
struct APC_Player_C_UpdateControlsSensitivity_Params
{
};

// Function PC_Player.PC_Player_C.InterruptPlayerMove
struct APC_Player_C_InterruptPlayerMove_Params
{
};

// Function PC_Player.PC_Player_C.PlayerLookAt Event
struct APC_Player_C_PlayerLookAt_Event_Params
{
	class AActor*                                      targetActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     TargetLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    TargetRotation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ResetPitch;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PC_Player.PC_Player_C.PlayerLookAt Interrupt Event
struct APC_Player_C_PlayerLookAt_Interrupt_Event_Params
{
};

// Function PC_Player.PC_Player_C.ChangeSteeringType_Event
struct APC_Player_C_ChangeSteeringType_Event_Params
{
	bool                                               Gamepad;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PC_Player.PC_Player_C.CreateLogos
struct APC_Player_C_CreateLogos_Params
{
};

// Function PC_Player.PC_Player_C.RemoveLogos
struct APC_Player_C_RemoveLogos_Params
{
	float                                              Delay;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMediaPlayer*                                MediaPlayer;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.CheatMenu
struct APC_Player_C_CheatMenu_Params
{
};

// Function PC_Player.PC_Player_C.Down_K2Node_InputAxisEvent_4
struct APC_Player_C_Down_K2Node_InputAxisEvent_4_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InputHoldAction_UI_Drop
struct APC_Player_C_InputHoldAction_UI_Drop_Params
{
};

// Function PC_Player.PC_Player_C.ReceiveTick
struct APC_Player_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.InputHoldAction_UI_Confirm
struct APC_Player_C_InputHoldAction_UI_Confirm_Params
{
};

// Function PC_Player.PC_Player_C.StartAutorun
struct APC_Player_C_StartAutorun_Params
{
};

// Function PC_Player.PC_Player_C.Autorun
struct APC_Player_C_Autorun_Params
{
};

// Function PC_Player.PC_Player_C.StopAutorun
struct APC_Player_C_StopAutorun_Params
{
};

// Function PC_Player.PC_Player_C.CreateCutscene
struct APC_Player_C_CreateCutscene_Params
{
};

// Function PC_Player.PC_Player_C.RemoveCutscene
struct APC_Player_C_RemoveCutscene_Params
{
	float                                              Delay;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMediaPlayer*                                MediaPlayer;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.Event SetManualCameraFade PC
struct APC_Player_C_Event_SetManualCameraFade_PC_Params
{
	float                                              InFadeAmount;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bInFadeAudio;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PC_Player.PC_Player_C.Event StopCameraFade PC
struct APC_Player_C_Event_StopCameraFade_PC_Params
{
};

// Function PC_Player.PC_Player_C.Event StartCameraFade PC
struct APC_Player_C_Event_StartCameraFade_PC_Params
{
	float                                              FromAlpha;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ToAlpha;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bShouldFadeAudio;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bHoldWhenFinished;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReverseOnFinish;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PC_Player.PC_Player_C.ExecuteUbergraph_PC_Player
struct APC_Player_C_ExecuteUbergraph_PC_Player_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_Player.PC_Player_C.OnInputKeybindChange__DelegateSignature
struct APC_Player_C_OnInputKeybindChange__DelegateSignature_Params
{
};

// Function PC_Player.PC_Player_C.ChangeSteeringType__DelegateSignature
struct APC_Player_C_ChangeSteeringType__DelegateSignature_Params
{
	bool                                               Gamepad;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
