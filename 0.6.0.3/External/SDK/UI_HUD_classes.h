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

// WidgetBlueprintGeneratedClass UI_HUD.UI_HUD_C
// 0x0270 (FullSize[0x04D0] - InheritedSize[0x0260])
class UUI_HUD_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                            fade;                                                      // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            FarAwayPulsation;                                          // 0x0270(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            HealthPulsation;                                           // 0x0278(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                     BlackScreen;                                               // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     Border_Cheating;                                           // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     Border_Trading;                                            // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                CompassPanel;                                              // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     DropActionPopUp;                                           // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                HoldableItemInputs;                                        // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                HUDPanel;                                                  // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     HUDTutorial;                                               // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     HUDTutorialSlot;                                           // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Marker;                                                    // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                MarkersPanel;                                              // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                NotificationPanel;                                         // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Points;                                                    // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             QuestNotificationSlot;                                     // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     TutorialMessageSlot;                                       // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_FarAwayFromFamily;                                     // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  txt_VersionIdentifier;                                     // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_BuildingPanel_C*                         UI_BuildingPanel;                                          // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_HUD_LifeStats_C*                         UI_HUD_LifeStats;                                          // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Interaction_C*                           UI_Interaction;                                            // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Book_C*                                  UI_Inventory;                                              // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_NotificationStatusBar_C*                 UI_NotificationStatusBar;                                  // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_QuestTracker_C*                          UI_QuestTracker;                                           // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ItemQuickSlot_C*                         UI_QuickSlot_HUD;                                          // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SeasonProgress_C*                        UI_Timer;                                                  // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class APC_Player_C*                                PlayerControllerReference;                                 // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMG_ESlateVisibility                               InvetoryVisibility;                                        // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_S3HQ[0x7];                                     // 0x0351(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UUI_Notification_C*>                  Notifications;                                             // 0x0358(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                               IsTryingToAssignToQuickSlot;                               // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_304F[0x7];                                     // 0x0369(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUI_BuildingMenu_C*                          BuildingMenu;                                              // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Furniture_DecorationMenu_C*              FurnituresMenu;                                            // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_FenceMenu_C*                             FencesMenu;                                                // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_QuickslotMasterRadialMenu_C*             QuickslotMenu;                                             // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_BuildingModificationMenu_C*              BuildingModificationMenu;                                  // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TrackedQuestNumber;                                        // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UXBB[0x4];                                     // 0x039C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUI_CraftingMenu_C*                          CraftingMenu;                                              // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_QChoiceMasterRadialMenu_C*               ChoiceMenu;                                                // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_ModuleModificationMenu_C*                ModuleModificationMenu;                                    // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               tmpBoolForCompass;                                         // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               tmp_IsQuestActive;                                         // 0x03B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_O6Z3[0x6];                                     // 0x03BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUI_SleepMasterRadialMenu_C*                 SleepMenu;                                                 // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<struct FString, class UUI_CompassMarker_C*>   NPCMarkers;                                                // 0x03C8(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UUI_CompassMarker_C*>                 GoalMarkers;                                               // 0x0418(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UUI_CompassMarker_C*>                 FurnitureMarkers;                                          // 0x0428(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UUI_CompassMarker_C*                         HomeMarker;                                                // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldShowOwnership;                                       // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NO5D[0x7];                                     // 0x0441(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUI_BagMasterRadialMenu_C*                   BagModeMenu;                                               // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_HUDTutorial_Master_C*                    HUDMasterTutorialReference;                                // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGM_MedievalDynasty_C*                       GM_Reference;                                              // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<TEnumAsByte<E_Tutorials_E_Tutorials>, class UClass*> TutorialsStack;                                            // 0x0460(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UUI_CompassMarker_C*                         WaypointMarker;                                            // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_CompassMarker_C*                         HorseMarker;                                               // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_Notification>                    DelayedNotifications;                                      // 0x04C0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUD.UI_HUD_C");
		return ptr;
	}



	void UpdateDelayedNotifications(float DeltaTime);
	void TryToUpdateNotification(const struct FST_ItemInventorys& Item, const struct FText& WarningText, TEnumAsByte<E_Notifications_E_Notifications> NotificationType, bool* NotificationUpdated);
	void HeldInput_UI_Confirm();
	void ReleasedInput_UI_Confirm();
	void PressedInput_UI_Confirm(bool* HoldingExecutesEvent);
	void InputHeld_UI_Drop();
	void InputReleased_UI_Drop();
	void InputPressed_UI_Drop(bool* HoldingExecutesEvent);
	void ActionsSpecificToItem();
	void AddNotification(class UUI_Notification_C* NotificationWidget);
	void FindNextQuestToTrack();
	void SetMarkersDirection();
	void CanTutorialMessageBeShown(bool* Value);
	void ChangeCrosshairStateHUD(bool Aiming);
	UMG_ESlateVisibility SneakingVisibility();
	void CheckIfBehind(float CameraObjectDotProduct, bool* Return);
	void ChangeBlackScreenVisibility(UMG_ESlateVisibility InVisibility);
	void InteractAndCrosshairVisibility();
	void ResetQuickSlotSelection();
	void CheckMarkers();
	UMG_ESlateVisibility PB_StaminaVisibility();
	void UpdatePoison();
	void UpdateStamina_HUD();
	void Construct();
	void CreateNotification(const struct FST_ItemInventorys& Item, bool Notification_Image, TEnumAsByte<E_Notifications_E_Notifications> Notification_Type, const struct FText& Warning_Text, float NotificationTimeOut, float NotificationDelay);
	void HealthPulsationStart_HUD();
	void HealthPulsationStop_HUD();
	void CreateBuildingMenu();
	void ExecuteBuildingMenu();
	void HideHUD(bool WithNotifications_);
	void ShowHUD(bool WithNotifications_);
	void InitHUD();
	void DestroyBuildingMenu(bool IsQuit);
	void CreateQuickslotMenu();
	void ExecuteQuickslotMenu();
	void DestroyQuickslotMenu();
	void CreateBuildingModificationMenu();
	void UpdateHealth_HUD();
	void CreateQuestNotification(const struct FText& QuestName, TEnumAsByte<E_QuestState_E_QuestState> QuestState, bool isUpdated, bool isCanceled);
	void UpdateQuestTracker();
	void ChangeTrackedQuestNumber(int TrackedQuestNumber);
	void CreateTutorialMessage(class UClass* Class, TEnumAsByte<E_Tutorials_E_Tutorials> TutorialType);
	void CreateCraftingMenu(TArray<struct FDataTableRowHandle>* WorkbenchCategories, TEnumAsByte<E_Workbenches_E_Workbenches> WorkbenchType, bool NoWorkbench_);
	void DestroyCraftingMenu(bool IsQuit);
	void ExecuteCraftingMenu();
	void CreateChoiceMenu();
	void ExecuteChoiceMenu();
	void DestroyChoiceMenu(bool IsQuit);
	void PressedInput_QuickslotMenu();
	void PressedInput_UI_AdditionalInteraction();
	void UpdateWeight_HUD();
	void UpdateTemperature_HUD();
	void CreateModuleModificationMenu(TArray<struct FST_Module>* Modules, class ABP_MasterBuildModule_C* ModuleReference);
	void UpdateHoldableItemInputs();
	void CreateMiddleNotification(const struct FText& NotificationHeadline, const struct FText& NotificationText, class UTexture2D* Icon, float NotificationTimeOut);
	void DestroySleepMenu();
	void CreateSleepMenu(bool Campfire_);
	void ExecuteSleepMenu();
	void CreateFurnituresMenu();
	void CreateBagMenu();
	void RemoveAllReferencedUIs();
	void FadeAnimation(bool Reverse);
	void OnDirtinessChange_Event_1();
	void UpdatePeopleNotificationPanel(int NoPeopleHome, int NoPeopleFood, int NoPeopleWood);
	void UpdateFood_HUD();
	void UpdateWater_HUD();
	void PressedInput_UI_SpecialAction();
	void BindMountStatsHUD();
	void UpdateMountHealthHUD();
	void UpdateMountStaminaHUD();
	void UpdateMountWeightHUD();
	void UnbindMountStatsHUD();
	void CreateFenceMenu();
	void UpdateAnimalsNotificationPanel(int NoAnimalsHome, int NoAnimalsFood);
	void StartPoison();
	void UpdateAlcohol();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_UI_HUD(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
