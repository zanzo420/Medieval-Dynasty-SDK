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

// Function UI_HUD.UI_HUD_C.UpdateDelayedNotifications
struct UUI_HUD_C_UpdateDelayedNotifications_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD.UI_HUD_C.TryToUpdateNotification
struct UUI_HUD_C_TryToUpdateNotification_Params
{
	struct FST_ItemInventorys                          Item;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       WarningText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<E_Notifications_E_Notifications>       NotificationType;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               NotificationUpdated;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_HUD.UI_HUD_C.HeldInput_UI_Confirm
struct UUI_HUD_C_HeldInput_UI_Confirm_Params
{
};

// Function UI_HUD.UI_HUD_C.ReleasedInput_UI_Confirm
struct UUI_HUD_C_ReleasedInput_UI_Confirm_Params
{
};

// Function UI_HUD.UI_HUD_C.PressedInput_UI_Confirm
struct UUI_HUD_C_PressedInput_UI_Confirm_Params
{
	bool                                               HoldingExecutesEvent;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_HUD.UI_HUD_C.InputHeld_UI_Drop
struct UUI_HUD_C_InputHeld_UI_Drop_Params
{
};

// Function UI_HUD.UI_HUD_C.InputReleased_UI_Drop
struct UUI_HUD_C_InputReleased_UI_Drop_Params
{
};

// Function UI_HUD.UI_HUD_C.InputPressed_UI_Drop
struct UUI_HUD_C_InputPressed_UI_Drop_Params
{
	bool                                               HoldingExecutesEvent;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_HUD.UI_HUD_C.ActionsSpecificToItem
struct UUI_HUD_C_ActionsSpecificToItem_Params
{
};

// Function UI_HUD.UI_HUD_C.AddNotification
struct UUI_HUD_C_AddNotification_Params
{
	class UUI_Notification_C*                          NotificationWidget;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD.UI_HUD_C.FindNextQuestToTrack
struct UUI_HUD_C_FindNextQuestToTrack_Params
{
};

// Function UI_HUD.UI_HUD_C.SetMarkersDirection
struct UUI_HUD_C_SetMarkersDirection_Params
{
};

// Function UI_HUD.UI_HUD_C.CanTutorialMessageBeShown
struct UUI_HUD_C_CanTutorialMessageBeShown_Params
{
	bool                                               Value;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_HUD.UI_HUD_C.ChangeCrosshairStateHUD
struct UUI_HUD_C_ChangeCrosshairStateHUD_Params
{
	bool                                               Aiming;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_HUD.UI_HUD_C.SneakingVisibility
struct UUI_HUD_C_SneakingVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD.UI_HUD_C.CheckIfBehind
struct UUI_HUD_C_CheckIfBehind_Params
{
	float                                              CameraObjectDotProduct;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_HUD.UI_HUD_C.ChangeBlackScreenVisibility
struct UUI_HUD_C_ChangeBlackScreenVisibility_Params
{
	UMG_ESlateVisibility                               InVisibility;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD.UI_HUD_C.InteractAndCrosshairVisibility
struct UUI_HUD_C_InteractAndCrosshairVisibility_Params
{
};

// Function UI_HUD.UI_HUD_C.ResetQuickSlotSelection
struct UUI_HUD_C_ResetQuickSlotSelection_Params
{
};

// Function UI_HUD.UI_HUD_C.CheckMarkers
struct UUI_HUD_C_CheckMarkers_Params
{
};

// Function UI_HUD.UI_HUD_C.PB_StaminaVisibility
struct UUI_HUD_C_PB_StaminaVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD.UI_HUD_C.UpdatePoison
struct UUI_HUD_C_UpdatePoison_Params
{
};

// Function UI_HUD.UI_HUD_C.UpdateStamina_HUD
struct UUI_HUD_C_UpdateStamina_HUD_Params
{
};

// Function UI_HUD.UI_HUD_C.Construct
struct UUI_HUD_C_Construct_Params
{
};

// Function UI_HUD.UI_HUD_C.CreateNotification
struct UUI_HUD_C_CreateNotification_Params
{
	struct FST_ItemInventorys                          Item;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Notification_Image;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Notifications_E_Notifications>       Notification_Type;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Warning_Text;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              NotificationTimeOut;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NotificationDelay;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD.UI_HUD_C.HealthPulsationStart_HUD
struct UUI_HUD_C_HealthPulsationStart_HUD_Params
{
};

// Function UI_HUD.UI_HUD_C.HealthPulsationStop_HUD
struct UUI_HUD_C_HealthPulsationStop_HUD_Params
{
};

// Function UI_HUD.UI_HUD_C.CreateBuildingMenu
struct UUI_HUD_C_CreateBuildingMenu_Params
{
};

// Function UI_HUD.UI_HUD_C.ExecuteBuildingMenu
struct UUI_HUD_C_ExecuteBuildingMenu_Params
{
};

// Function UI_HUD.UI_HUD_C.HideHUD
struct UUI_HUD_C_HideHUD_Params
{
	bool                                               WithNotifications_;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_HUD.UI_HUD_C.ShowHUD
struct UUI_HUD_C_ShowHUD_Params
{
	bool                                               WithNotifications_;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_HUD.UI_HUD_C.InitHUD
struct UUI_HUD_C_InitHUD_Params
{
};

// Function UI_HUD.UI_HUD_C.DestroyBuildingMenu
struct UUI_HUD_C_DestroyBuildingMenu_Params
{
	bool                                               IsQuit;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_HUD.UI_HUD_C.CreateQuickslotMenu
struct UUI_HUD_C_CreateQuickslotMenu_Params
{
};

// Function UI_HUD.UI_HUD_C.ExecuteQuickslotMenu
struct UUI_HUD_C_ExecuteQuickslotMenu_Params
{
};

// Function UI_HUD.UI_HUD_C.DestroyQuickslotMenu
struct UUI_HUD_C_DestroyQuickslotMenu_Params
{
};

// Function UI_HUD.UI_HUD_C.CreateBuildingModificationMenu
struct UUI_HUD_C_CreateBuildingModificationMenu_Params
{
};

// Function UI_HUD.UI_HUD_C.UpdateHealth_HUD
struct UUI_HUD_C_UpdateHealth_HUD_Params
{
};

// Function UI_HUD.UI_HUD_C.CreateQuestNotification
struct UUI_HUD_C_CreateQuestNotification_Params
{
	struct FText                                       QuestName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<E_QuestState_E_QuestState>             QuestState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isUpdated;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               isCanceled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_HUD.UI_HUD_C.UpdateQuestTracker
struct UUI_HUD_C_UpdateQuestTracker_Params
{
};

// Function UI_HUD.UI_HUD_C.ChangeTrackedQuestNumber
struct UUI_HUD_C_ChangeTrackedQuestNumber_Params
{
	int                                                TrackedQuestNumber;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD.UI_HUD_C.CreateTutorialMessage
struct UUI_HUD_C_CreateTutorialMessage_Params
{
	class UClass*                                      Class;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tutorials_E_Tutorials>               TutorialType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD.UI_HUD_C.CreateCraftingMenu
struct UUI_HUD_C_CreateCraftingMenu_Params
{
	TArray<struct FDataTableRowHandle>                 WorkbenchCategories;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<E_Workbenches_E_Workbenches>           WorkbenchType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               NoWorkbench_;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_HUD.UI_HUD_C.DestroyCraftingMenu
struct UUI_HUD_C_DestroyCraftingMenu_Params
{
	bool                                               IsQuit;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_HUD.UI_HUD_C.ExecuteCraftingMenu
struct UUI_HUD_C_ExecuteCraftingMenu_Params
{
};

// Function UI_HUD.UI_HUD_C.CreateChoiceMenu
struct UUI_HUD_C_CreateChoiceMenu_Params
{
};

// Function UI_HUD.UI_HUD_C.ExecuteChoiceMenu
struct UUI_HUD_C_ExecuteChoiceMenu_Params
{
};

// Function UI_HUD.UI_HUD_C.DestroyChoiceMenu
struct UUI_HUD_C_DestroyChoiceMenu_Params
{
	bool                                               IsQuit;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_HUD.UI_HUD_C.PressedInput_QuickslotMenu
struct UUI_HUD_C_PressedInput_QuickslotMenu_Params
{
};

// Function UI_HUD.UI_HUD_C.PressedInput_UI_AdditionalInteraction
struct UUI_HUD_C_PressedInput_UI_AdditionalInteraction_Params
{
};

// Function UI_HUD.UI_HUD_C.UpdateWeight_HUD
struct UUI_HUD_C_UpdateWeight_HUD_Params
{
};

// Function UI_HUD.UI_HUD_C.UpdateTemperature_HUD
struct UUI_HUD_C_UpdateTemperature_HUD_Params
{
};

// Function UI_HUD.UI_HUD_C.CreateModuleModificationMenu
struct UUI_HUD_C_CreateModuleModificationMenu_Params
{
	TArray<struct FST_Module>                          Modules;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ABP_MasterBuildModule_C*                     ModuleReference;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD.UI_HUD_C.UpdateHoldableItemInputs
struct UUI_HUD_C_UpdateHoldableItemInputs_Params
{
};

// Function UI_HUD.UI_HUD_C.CreateMiddleNotification
struct UUI_HUD_C_CreateMiddleNotification_Params
{
	struct FText                                       NotificationHeadline;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       NotificationText;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                                  Icon;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NotificationTimeOut;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD.UI_HUD_C.DestroySleepMenu
struct UUI_HUD_C_DestroySleepMenu_Params
{
};

// Function UI_HUD.UI_HUD_C.CreateSleepMenu
struct UUI_HUD_C_CreateSleepMenu_Params
{
	bool                                               Campfire_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_HUD.UI_HUD_C.ExecuteSleepMenu
struct UUI_HUD_C_ExecuteSleepMenu_Params
{
};

// Function UI_HUD.UI_HUD_C.CreateFurnituresMenu
struct UUI_HUD_C_CreateFurnituresMenu_Params
{
};

// Function UI_HUD.UI_HUD_C.CreateBagMenu
struct UUI_HUD_C_CreateBagMenu_Params
{
};

// Function UI_HUD.UI_HUD_C.RemoveAllReferencedUIs
struct UUI_HUD_C_RemoveAllReferencedUIs_Params
{
};

// Function UI_HUD.UI_HUD_C.FadeAnimation
struct UUI_HUD_C_FadeAnimation_Params
{
	bool                                               Reverse;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_HUD.UI_HUD_C.OnDirtinessChange_Event_1
struct UUI_HUD_C_OnDirtinessChange_Event_1_Params
{
};

// Function UI_HUD.UI_HUD_C.UpdatePeopleNotificationPanel
struct UUI_HUD_C_UpdatePeopleNotificationPanel_Params
{
	int                                                NoPeopleHome;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NoPeopleFood;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NoPeopleWood;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD.UI_HUD_C.UpdateFood_HUD
struct UUI_HUD_C_UpdateFood_HUD_Params
{
};

// Function UI_HUD.UI_HUD_C.UpdateWater_HUD
struct UUI_HUD_C_UpdateWater_HUD_Params
{
};

// Function UI_HUD.UI_HUD_C.PressedInput_UI_SpecialAction
struct UUI_HUD_C_PressedInput_UI_SpecialAction_Params
{
};

// Function UI_HUD.UI_HUD_C.BindMountStatsHUD
struct UUI_HUD_C_BindMountStatsHUD_Params
{
};

// Function UI_HUD.UI_HUD_C.UpdateMountHealthHUD
struct UUI_HUD_C_UpdateMountHealthHUD_Params
{
};

// Function UI_HUD.UI_HUD_C.UpdateMountStaminaHUD
struct UUI_HUD_C_UpdateMountStaminaHUD_Params
{
};

// Function UI_HUD.UI_HUD_C.UpdateMountWeightHUD
struct UUI_HUD_C_UpdateMountWeightHUD_Params
{
};

// Function UI_HUD.UI_HUD_C.UnbindMountStatsHUD
struct UUI_HUD_C_UnbindMountStatsHUD_Params
{
};

// Function UI_HUD.UI_HUD_C.CreateFenceMenu
struct UUI_HUD_C_CreateFenceMenu_Params
{
};

// Function UI_HUD.UI_HUD_C.UpdateAnimalsNotificationPanel
struct UUI_HUD_C_UpdateAnimalsNotificationPanel_Params
{
	int                                                NoAnimalsHome;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NoAnimalsFood;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD.UI_HUD_C.StartPoison
struct UUI_HUD_C_StartPoison_Params
{
};

// Function UI_HUD.UI_HUD_C.UpdateAlcohol
struct UUI_HUD_C_UpdateAlcohol_Params
{
};

// Function UI_HUD.UI_HUD_C.Tick
struct UUI_HUD_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD.UI_HUD_C.ExecuteUbergraph_UI_HUD
struct UUI_HUD_C_ExecuteUbergraph_UI_HUD_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
