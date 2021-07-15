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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PC_Player.PC_Player_C
// 0x0158 (FullSize[0x06C8] - InheritedSize[0x0570])
class APC_Player_C : public APlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0570(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class URiderControllerComponent*                   riderController;                                           // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UUI_HUD_C*                                   UI_PlayerHUDReference;                                     // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGI_MedievalDynasty_C*                       GameInstanceReference;                                     // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsInFreeMode;                                              // 0x0590(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_B6TE[0x7];                                     // 0x0591(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AP_Spectator_C*                              SpectatorPawnReference;                                    // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerCharacter_C*                       PlayerCharacterReference;                                  // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsGameMenuActive;                                          // 0x05A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsInventoryKeyDown;                                        // 0x05A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               AnotherDialogue;                                           // 0x05AA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5QGG[0x5];                                     // 0x05AB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUI_MasterEvent_C*                           UI_EventReference;                                         // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_MasterChallange_C*                       UI_ChallangeReference;                                     // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsMainMenuActive;                                          // 0x05C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsEventActive;                                             // 0x05C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsChallengeActive;                                         // 0x05C2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CancelButtonPressed;                                       // 0x05C3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsSumUpActive;                                             // 0x05C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YTP4[0x3];                                     // 0x05C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUI_SeasonSumUp_C*                           UI_SeasonSumUpReference;                                   // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Trading_C*                               UI_TradingMenuReference;                                   // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Goal;                                                      // 0x05D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     RotateToGoal;                                              // 0x05E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_InventoryMainTab_E_InventoryMainTab> InventoryTabToOpen;                                        // 0x05F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldOpenLastTab_;                                        // 0x05F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ClosingInventory_;                                         // 0x05F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_52BU[0x5];                                     // 0x05F3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      LookAtActor;                                               // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FinishedMovement;                                          // 0x0600(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               RotateDuringMovement;                                      // 0x0601(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UsePlayerLookAt;                                           // 0x0602(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               FadeStopped;                                               // 0x0603(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DeathScreenActive;                                         // 0x0604(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OWUL[0x3];                                     // 0x0605(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUI_DeathMenu_C*                             UI_DeathMenuReference;                                     // 0x0608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_MainMenu_C*                              UI_MainMenuReference;                                      // 0x0610(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_IntroScreen_C*                           UI_IntroScreenReference;                                   // 0x0618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Dialogue_C*                              UI_DialogueReference;                                      // 0x0620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      FovMode;                                                   // 0x0628(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               LockFreeCam;                                               // 0x0629(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_C1N7[0x2];                                     // 0x062A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    RotationBeforeFreeMode;                                    // 0x062C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    RotationInFreeMode;                                        // 0x0638(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CKII[0x4];                                     // 0x0644(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    ChangeSteeringType;                                        // 0x0648(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               IsSteeringSetToGamepad_;                                   // 0x0658(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IgnoreTechnologyCost;                                      // 0x0659(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IgnoreCraftingCost;                                        // 0x065A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7UIW[0x5];                                     // 0x065B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUI_LogosScreen_C*                           UI_LogosScreenReference;                                   // 0x0660(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_PlayerDeathChildTransition_C*            deathTransitionMenu;                                       // 0x0668(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnInputKeybindChange;                                      // 0x0670(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               UI_UP_Pressed;                                             // 0x0680(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UI_Down_Pressed;                                           // 0x0681(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UI_Left_Pressed;                                           // 0x0682(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UI_Right_Pressed;                                          // 0x0683(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UI_Previous_Pressed;                                       // 0x0684(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UI_Next_Pressed;                                           // 0x0685(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UI_Drop_Pressed;                                           // 0x0686(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UI_Confirm_Pressed;                                        // 0x0687(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CheckDropHold;                                             // 0x0688(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CheckConfirmHold;                                          // 0x0689(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1MEN[0x2];                                     // 0x068A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              UI_Drop_HeldTime;                                          // 0x068C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              UI_Confirm_HeldTime;                                       // 0x0690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InputsDelay;                                               // 0x0694(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InputHeldCount;                                            // 0x0698(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BaseInputsDelay;                                           // 0x069C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SliderStepSizeMultiplier;                                  // 0x06A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_InputMode_E_InputMode>               InputMode;                                                 // 0x06A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_P3IZ[0x3];                                     // 0x06A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimeForHoldAction;                                         // 0x06A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   MousePositionForSteering;                                  // 0x06AC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CheckMouseSteering;                                        // 0x06B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsAutorunOn;                                               // 0x06B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ShouldHUDBeHidden;                                         // 0x06B6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               LeftActionPressed;                                         // 0x06B7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               RightActionPressed;                                        // 0x06B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_THNJ[0x7];                                     // 0x06B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUI_Cutscene_C*                              UI_CutsceneReference;                                      // 0x06C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PC_Player.PC_Player_C");
		return ptr;
	}



	class URiderControllerComponent* GetRiderControllerComponent();
	bool OnChangeSeatActionFailed(const struct FMountActionResponse& Response);
	bool OnDismountActionFailed(class AActor* currentMount, const struct FMountActionResponse& Response);
	bool OnMountActionFailed(class AActor* newMount, class AActor* newLinkedActor, const struct FMountActionResponse& Response);
	bool OnOtherRiderChangedSeats(class AActor* otherRider, int oldSeatId, int newSeatId);
	bool OnRiderAdded(class AActor* newRider, int seatId);
	bool OnRiderRemoved(class AActor* removedRider, int seatId);
	bool PossessCharacter(class APawn* characterToPossess);
	class AController* GetCharacterController();
	class AActor* GetCharacterMount();
	class APawn* GetCharacterPawn();
	bool IsCharacterMountable();
	bool IsMounted();
	bool PerformDismountPawn(class APawn* mountOrRider);
	bool PerformMountPawn(class APawn* mountOrRider);
	bool PrepareToDismount(class AActor* mountOrRider, struct FMountActionResponse* Response);
	bool PrepareToMount(class AActor* mountOrRider, class AActor* linkedActor, struct FMountActionResponse* Response);
	void ReleaseAllUIInputs();
	void CheckCzechQuickslot(const struct FKey& Key);
	void UpdateInputHoldingTime(float DeltaTime);
	void ResetInputHoldingCount();
	void InputHoldingWithCount();
	void OnHeadbobbingChanged();
	void UpdateFoV();
	void OnLockFreeCam(bool LockFreeCam);
	void ChangeCrosshairStatePC(bool Aiming);
	void UserConstructionScript();
	void InpActEvt_Add_K2Node_InputKeyEvent_18(const struct FKey& Key);
	void InpActEvt_Subtract_K2Node_InputKeyEvent_17(const struct FKey& Key);
	void InpActEvt_Inventory_K2Node_InputActionEvent_77(const struct FKey& Key);
	void InpActEvt_Inventory_K2Node_InputActionEvent_76(const struct FKey& Key);
	void InpActEvt_Multiply_K2Node_InputKeyEvent_16(const struct FKey& Key);
	void InpActEvt_Map_K2Node_InputActionEvent_75(const struct FKey& Key);
	void InpActEvt_Map_K2Node_InputActionEvent_74(const struct FKey& Key);
	void InpActEvt_Skills_K2Node_InputActionEvent_73(const struct FKey& Key);
	void InpActEvt_Skills_K2Node_InputActionEvent_72(const struct FKey& Key);
	void InpActEvt_Journal_K2Node_InputActionEvent_71(const struct FKey& Key);
	void InpActEvt_Journal_K2Node_InputActionEvent_70(const struct FKey& Key);
	void InpActEvt_LastInventoryTab_K2Node_InputActionEvent_69(const struct FKey& Key);
	void InpActEvt_LastInventoryTab_K2Node_InputActionEvent_68(const struct FKey& Key);
	void InpActEvt_UI_Confirm_K2Node_InputActionEvent_67(const struct FKey& Key);
	void InpActEvt_UI_Confirm_K2Node_InputActionEvent_66(const struct FKey& Key);
	void InpActEvt_UI_Up_K2Node_InputActionEvent_65(const struct FKey& Key);
	void InpActEvt_UI_Up_K2Node_InputActionEvent_64(const struct FKey& Key);
	void InpActEvt_UI_Down_K2Node_InputActionEvent_63(const struct FKey& Key);
	void InpActEvt_UI_Down_K2Node_InputActionEvent_62(const struct FKey& Key);
	void InpActEvt_UI_Right_K2Node_InputActionEvent_61(const struct FKey& Key);
	void InpActEvt_UI_Right_K2Node_InputActionEvent_60(const struct FKey& Key);
	void InpActEvt_UI_Left_K2Node_InputActionEvent_59(const struct FKey& Key);
	void InpActEvt_UI_Left_K2Node_InputActionEvent_58(const struct FKey& Key);
	void InpActEvt_UI_Cancel_K2Node_InputActionEvent_57(const struct FKey& Key);
	void InpActEvt_UI_Cancel_K2Node_InputActionEvent_56(const struct FKey& Key);
	void InpActEvt_Backslash_K2Node_InputKeyEvent_15(const struct FKey& Key);
	void InpActEvt_BackSpace_K2Node_InputKeyEvent_14(const struct FKey& Key);
	void InpActEvt_PageDown_K2Node_InputKeyEvent_13(const struct FKey& Key);
	void InpActEvt_Management_K2Node_InputActionEvent_55(const struct FKey& Key);
	void InpActEvt_Management_K2Node_InputActionEvent_54(const struct FKey& Key);
	void InpActEvt_NumPadFour_K2Node_InputKeyEvent_12(const struct FKey& Key);
	void InpActEvt_PageDown_K2Node_InputKeyEvent_11(const struct FKey& Key);
	void InpActEvt_PageDown_K2Node_InputKeyEvent_10(const struct FKey& Key);
	void InpActEvt_PageUp_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void InpActEvt_PageUp_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_UI_Drop_K2Node_InputActionEvent_53(const struct FKey& Key);
	void InpActEvt_UI_Drop_K2Node_InputActionEvent_52(const struct FKey& Key);
	void InpActEvt_Torch_K2Node_InputActionEvent_51(const struct FKey& Key);
	void InpActEvt_QuickslotMenu_K2Node_InputActionEvent_50(const struct FKey& Key);
	void InpActEvt_LeftAction_K2Node_InputActionEvent_49(const struct FKey& Key);
	void InpActEvt_LeftAction_K2Node_InputActionEvent_48(const struct FKey& Key);
	void InpActEvt_RightAction_K2Node_InputActionEvent_47(const struct FKey& Key);
	void InpActEvt_RightAction_K2Node_InputActionEvent_46(const struct FKey& Key);
	void InpActEvt_QuickSlot4_K2Node_InputActionEvent_45(const struct FKey& Key);
	void InpActEvt_QuickSlot8_K2Node_InputActionEvent_44(const struct FKey& Key);
	void InpActEvt_QuickSlot3_K2Node_InputActionEvent_43(const struct FKey& Key);
	void InpActEvt_QuickSlot7_K2Node_InputActionEvent_42(const struct FKey& Key);
	void InpActEvt_QuickSlot2_K2Node_InputActionEvent_41(const struct FKey& Key);
	void InpActEvt_QuickSlot6_K2Node_InputActionEvent_40(const struct FKey& Key);
	void InpActEvt_QuickSlot5_K2Node_InputActionEvent_39(const struct FKey& Key);
	void InpActEvt_QuickSlot1_K2Node_InputActionEvent_38(const struct FKey& Key);
	void InpActEvt_InteractAction_K2Node_InputActionEvent_37(const struct FKey& Key);
	void InpActEvt_InteractAction_K2Node_InputActionEvent_36(const struct FKey& Key);
	void InpActEvt_SprintAction_K2Node_InputActionEvent_35(const struct FKey& Key);
	void InpActEvt_SprintAction_K2Node_InputActionEvent_34(const struct FKey& Key);
	void InpActEvt_InspectorMode_K2Node_InputActionEvent_33(const struct FKey& Key);
	void InpActEvt_InspectorMode_K2Node_InputActionEvent_32(const struct FKey& Key);
	void InpActEvt_HolsterHoldableItem_K2Node_InputActionEvent_31(const struct FKey& Key);
	void InpActEvt_E_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_E_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_UI_AdditionalInteraction_K2Node_InputActionEvent_30(const struct FKey& Key);
	void InpActEvt_GameMenu_K2Node_InputActionEvent_29(const struct FKey& Key);
	void InpActEvt_UI_PreviousSection_K2Node_InputActionEvent_28(const struct FKey& Key);
	void InpActEvt_UI_PreviousSection_K2Node_InputActionEvent_27(const struct FKey& Key);
	void InpActEvt_UI_NextSection_K2Node_InputActionEvent_26(const struct FKey& Key);
	void InpActEvt_UI_NextSection_K2Node_InputActionEvent_25(const struct FKey& Key);
	void InpActEvt_SelectRotationMode_1_K2Node_InputActionEvent_24(const struct FKey& Key);
	void InpActEvt_SelectRotationMode_2_K2Node_InputActionEvent_23(const struct FKey& Key);
	void InpActEvt_WalkAction_K2Node_InputActionEvent_22(const struct FKey& Key);
	void InpActEvt_StanceAction_K2Node_InputActionEvent_21(const struct FKey& Key);
	void InpActEvt_StanceAction_K2Node_InputActionEvent_20(const struct FKey& Key);
	void InpActEvt_CameraAction_K2Node_InputActionEvent_19(const struct FKey& Key);
	void InpActEvt_CameraAction_K2Node_InputActionEvent_18(const struct FKey& Key);
	void InpActEvt_JumpAction_K2Node_InputActionEvent_17(const struct FKey& Key);
	void InpActEvt_JumpAction_K2Node_InputActionEvent_16(const struct FKey& Key);
	void InpActEvt_Technology_K2Node_InputActionEvent_15(const struct FKey& Key);
	void InpActEvt_Technology_K2Node_InputActionEvent_14(const struct FKey& Key);
	void InpActEvt_Home_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_Insert_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_ChoiceMenu_K2Node_InputActionEvent_13(const struct FKey& Key);
	void InpActEvt_ChoiceMenu_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_F5_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_ChangeInputAction_K2Node_InputActionEvent_11(const struct FKey& Key);
	void InpActEvt_Equals_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_F9_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_ChangeCharacter_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_HideHUD_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_RotateGhost_Right_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_RotateGhost_Right_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_RotateGhost_Left_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_RotateGhost_Left_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_UI_SpecialAction_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_DismountAction_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_DismountAction_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_SummonMount_K2Node_InputActionEvent_1(const struct FKey& Key);
	void BPI_OnHeadbobbingChanged();
	void BPI_UpdateControlsSensitivity();
	void Server_PossessPawn(class APawn* characterToPossess);
	void ReceivePossess(class APawn* PossessedPawn);
	void ToggleInventory(TEnumAsByte<E_InventoryMainTab_E_InventoryMainTab> MainTab, bool OpenLastTab_, bool Close_);
	void ToggleEvent(bool CheatStart, bool CheatEnd);
	void ToggleChallange();
	void ToggleSeasonSumUp();
	void ToggleTradingMenu(bool WithNPC_, class UInventoryComponent_C* OtherInventoryComponentReference, bool WithHorse_, bool GiftGiving);
	void Increase_TP_Camera_Distance();
	void Decrease_TP_Camera_Distance();
	void Player_Move_For_Interaction(const struct FVector& Target, const struct FVector& LookAtTarget, bool RotateDuringMovement, bool UsePlayerLookAt, bool ResetLookAtPitch);
	void InputLastInventoryTab();
	void InputManagementTab();
	void InputJournalTab();
	void InputSkillsTab();
	void InputMapTab();
	void InputInventoryTab();
	void EventToggleInventory();
	void Player_Look_At_For_Dialogue(class AActor* targetActor, const struct FVector& TargetLocation);
	void OnDialogueEnded();
	void OnDialogueStarted();
	void Right_K2Node_InputAxisEvent_7(float AxisValue);
	void InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1(float AxisValue);
	void Backwards_K2Node_InputAxisEvent_1(float AxisValue);
	void Left_K2Node_InputAxisEvent_2(float AxisValue);
	void InputTechnologyTab();
	void CreateDeathScreen(TEnumAsByte<E_DeathType_E_DeathType> DeathType);
	void CreateMainMenu();
	void RemoveMainMenu(float Delay);
	void CreateIntro();
	void RemoveIntro(float Delay, class UMediaPlayer* MediaPlayer);
	void Reset_Camera_Pitch();
	void InitWideCamera();
	void ReceiveBeginPlay();
	void EnterFreeCam();
	void InpAxisEvt_ChangeInputOnMouseMove_K2Node_InputAxisEvent_5(float AxisValue);
	void InpAxisEvt_ChangeInputOnGamepadThumbstickMove_K2Node_InputAxisEvent_6(float AxisValue);
	void InterruptPlayerLooktAtForDialogue();
	void UpdateControlsSensitivity();
	void InterruptPlayerMove();
	void PlayerLookAt_Event(class AActor* targetActor, const struct FVector& TargetLocation, const struct FRotator& TargetRotation, bool ResetPitch);
	void PlayerLookAt_Interrupt_Event();
	void ChangeSteeringType_Event(bool Gamepad);
	void CreateLogos();
	void RemoveLogos(float Delay, class UMediaPlayer* MediaPlayer);
	void CheatMenu();
	void Down_K2Node_InputAxisEvent_4(float AxisValue);
	void InputHoldAction_UI_Drop();
	void ReceiveTick(float DeltaSeconds);
	void InputHoldAction_UI_Confirm();
	void StartAutorun();
	void Autorun();
	void StopAutorun();
	void CreateCutscene();
	void RemoveCutscene(float Delay, class UMediaPlayer* MediaPlayer);
	void Event_SetManualCameraFade_PC(float InFadeAmount, const struct FLinearColor& Color, bool bInFadeAudio);
	void Event_StopCameraFade_PC();
	void Event_StartCameraFade_PC(float FromAlpha, float ToAlpha, float Duration, const struct FLinearColor& Color, bool bShouldFadeAudio, bool bHoldWhenFinished, bool ReverseOnFinish);
	void ExecuteUbergraph_PC_Player(int EntryPoint);
	void OnInputKeybindChange__DelegateSignature();
	void ChangeSteeringType__DelegateSignature(bool Gamepad);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
