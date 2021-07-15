// Name: Medieval Dynasty, Version: 0.6.0.3

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function UI_HUD.UI_HUD_C.UpdateDelayedNotifications
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_C::UpdateDelayedNotifications(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.UpdateDelayedNotifications");

	UUI_HUD_C_UpdateDelayedNotifications_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.TryToUpdateNotification
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_ItemInventorys      Item                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   WarningText                    (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<E_Notifications_E_Notifications> NotificationType               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           NotificationUpdated            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUD_C::TryToUpdateNotification(const struct FST_ItemInventorys& Item, const struct FText& WarningText, TEnumAsByte<E_Notifications_E_Notifications> NotificationType, bool* NotificationUpdated)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.TryToUpdateNotification");

	UUI_HUD_C_TryToUpdateNotification_Params params;
	params.Item = Item;
	params.WarningText = WarningText;
	params.NotificationType = NotificationType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NotificationUpdated != nullptr)
		*NotificationUpdated = params.NotificationUpdated;

}


// Function UI_HUD.UI_HUD_C.HeldInput_UI_Confirm
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::HeldInput_UI_Confirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.HeldInput_UI_Confirm");

	UUI_HUD_C_HeldInput_UI_Confirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.ReleasedInput_UI_Confirm
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::ReleasedInput_UI_Confirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.ReleasedInput_UI_Confirm");

	UUI_HUD_C_ReleasedInput_UI_Confirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.PressedInput_UI_Confirm
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HoldingExecutesEvent           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUD_C::PressedInput_UI_Confirm(bool* HoldingExecutesEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.PressedInput_UI_Confirm");

	UUI_HUD_C_PressedInput_UI_Confirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HoldingExecutesEvent != nullptr)
		*HoldingExecutesEvent = params.HoldingExecutesEvent;

}


// Function UI_HUD.UI_HUD_C.InputHeld_UI_Drop
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::InputHeld_UI_Drop()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.InputHeld_UI_Drop");

	UUI_HUD_C_InputHeld_UI_Drop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.InputReleased_UI_Drop
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::InputReleased_UI_Drop()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.InputReleased_UI_Drop");

	UUI_HUD_C_InputReleased_UI_Drop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.InputPressed_UI_Drop
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HoldingExecutesEvent           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUD_C::InputPressed_UI_Drop(bool* HoldingExecutesEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.InputPressed_UI_Drop");

	UUI_HUD_C_InputPressed_UI_Drop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HoldingExecutesEvent != nullptr)
		*HoldingExecutesEvent = params.HoldingExecutesEvent;

}


// Function UI_HUD.UI_HUD_C.ActionsSpecificToItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::ActionsSpecificToItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.ActionsSpecificToItem");

	UUI_HUD_C_ActionsSpecificToItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.AddNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Notification_C*      NotificationWidget             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_C::AddNotification(class UUI_Notification_C* NotificationWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.AddNotification");

	UUI_HUD_C_AddNotification_Params params;
	params.NotificationWidget = NotificationWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.FindNextQuestToTrack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::FindNextQuestToTrack()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.FindNextQuestToTrack");

	UUI_HUD_C_FindNextQuestToTrack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.SetMarkersDirection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::SetMarkersDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.SetMarkersDirection");

	UUI_HUD_C_SetMarkersDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.CanTutorialMessageBeShown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUD_C::CanTutorialMessageBeShown(bool* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.CanTutorialMessageBeShown");

	UUI_HUD_C_CanTutorialMessageBeShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

}


// Function UI_HUD.UI_HUD_C.ChangeCrosshairStateHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Aiming                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUD_C::ChangeCrosshairStateHUD(bool Aiming)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.ChangeCrosshairStateHUD");

	UUI_HUD_C_ChangeCrosshairStateHUD_Params params;
	params.Aiming = Aiming;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.SneakingVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UUI_HUD_C::SneakingVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.SneakingVisibility");

	UUI_HUD_C_SneakingVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UI_HUD.UI_HUD_C.CheckIfBehind
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CameraObjectDotProduct         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUD_C::CheckIfBehind(float CameraObjectDotProduct, bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.CheckIfBehind");

	UUI_HUD_C_CheckIfBehind_Params params;
	params.CameraObjectDotProduct = CameraObjectDotProduct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function UI_HUD.UI_HUD_C.ChangeBlackScreenVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UMG_ESlateVisibility           InVisibility                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_C::ChangeBlackScreenVisibility(UMG_ESlateVisibility InVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.ChangeBlackScreenVisibility");

	UUI_HUD_C_ChangeBlackScreenVisibility_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.InteractAndCrosshairVisibility
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::InteractAndCrosshairVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.InteractAndCrosshairVisibility");

	UUI_HUD_C_InteractAndCrosshairVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.ResetQuickSlotSelection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::ResetQuickSlotSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.ResetQuickSlotSelection");

	UUI_HUD_C_ResetQuickSlotSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.CheckMarkers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::CheckMarkers()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.CheckMarkers");

	UUI_HUD_C_CheckMarkers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.PB_StaminaVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UUI_HUD_C::PB_StaminaVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.PB_StaminaVisibility");

	UUI_HUD_C_PB_StaminaVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UI_HUD.UI_HUD_C.UpdatePoison
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::UpdatePoison()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.UpdatePoison");

	UUI_HUD_C_UpdatePoison_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.UpdateStamina_HUD
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::UpdateStamina_HUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.UpdateStamina_HUD");

	UUI_HUD_C_UpdateStamina_HUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_HUD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.Construct");

	UUI_HUD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.CreateNotification
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_ItemInventorys      Item                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Notification_Image             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<E_Notifications_E_Notifications> Notification_Type              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Warning_Text                   (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          NotificationTimeOut            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          NotificationDelay              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_C::CreateNotification(const struct FST_ItemInventorys& Item, bool Notification_Image, TEnumAsByte<E_Notifications_E_Notifications> Notification_Type, const struct FText& Warning_Text, float NotificationTimeOut, float NotificationDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.CreateNotification");

	UUI_HUD_C_CreateNotification_Params params;
	params.Item = Item;
	params.Notification_Image = Notification_Image;
	params.Notification_Type = Notification_Type;
	params.Warning_Text = Warning_Text;
	params.NotificationTimeOut = NotificationTimeOut;
	params.NotificationDelay = NotificationDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.HealthPulsationStart_HUD
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::HealthPulsationStart_HUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.HealthPulsationStart_HUD");

	UUI_HUD_C_HealthPulsationStart_HUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.HealthPulsationStop_HUD
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::HealthPulsationStop_HUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.HealthPulsationStop_HUD");

	UUI_HUD_C_HealthPulsationStop_HUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.CreateBuildingMenu
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::CreateBuildingMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.CreateBuildingMenu");

	UUI_HUD_C_CreateBuildingMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.ExecuteBuildingMenu
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::ExecuteBuildingMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.ExecuteBuildingMenu");

	UUI_HUD_C_ExecuteBuildingMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.HideHUD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           WithNotifications_             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUD_C::HideHUD(bool WithNotifications_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.HideHUD");

	UUI_HUD_C_HideHUD_Params params;
	params.WithNotifications_ = WithNotifications_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.ShowHUD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           WithNotifications_             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUD_C::ShowHUD(bool WithNotifications_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.ShowHUD");

	UUI_HUD_C_ShowHUD_Params params;
	params.WithNotifications_ = WithNotifications_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.InitHUD
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::InitHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.InitHUD");

	UUI_HUD_C_InitHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.DestroyBuildingMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsQuit                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUD_C::DestroyBuildingMenu(bool IsQuit)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.DestroyBuildingMenu");

	UUI_HUD_C_DestroyBuildingMenu_Params params;
	params.IsQuit = IsQuit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.CreateQuickslotMenu
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::CreateQuickslotMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.CreateQuickslotMenu");

	UUI_HUD_C_CreateQuickslotMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.ExecuteQuickslotMenu
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::ExecuteQuickslotMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.ExecuteQuickslotMenu");

	UUI_HUD_C_ExecuteQuickslotMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.DestroyQuickslotMenu
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::DestroyQuickslotMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.DestroyQuickslotMenu");

	UUI_HUD_C_DestroyQuickslotMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.CreateBuildingModificationMenu
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::CreateBuildingModificationMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.CreateBuildingModificationMenu");

	UUI_HUD_C_CreateBuildingModificationMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.UpdateHealth_HUD
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::UpdateHealth_HUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.UpdateHealth_HUD");

	UUI_HUD_C_UpdateHealth_HUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.CreateQuestNotification
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   QuestName                      (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<E_QuestState_E_QuestState> QuestState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           isUpdated                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           isCanceled                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUD_C::CreateQuestNotification(const struct FText& QuestName, TEnumAsByte<E_QuestState_E_QuestState> QuestState, bool isUpdated, bool isCanceled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.CreateQuestNotification");

	UUI_HUD_C_CreateQuestNotification_Params params;
	params.QuestName = QuestName;
	params.QuestState = QuestState;
	params.isUpdated = isUpdated;
	params.isCanceled = isCanceled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.UpdateQuestTracker
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::UpdateQuestTracker()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.UpdateQuestTracker");

	UUI_HUD_C_UpdateQuestTracker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.ChangeTrackedQuestNumber
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TrackedQuestNumber             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_C::ChangeTrackedQuestNumber(int TrackedQuestNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.ChangeTrackedQuestNumber");

	UUI_HUD_C_ChangeTrackedQuestNumber_Params params;
	params.TrackedQuestNumber = TrackedQuestNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.CreateTutorialMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Tutorials_E_Tutorials> TutorialType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_C::CreateTutorialMessage(class UClass* Class, TEnumAsByte<E_Tutorials_E_Tutorials> TutorialType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.CreateTutorialMessage");

	UUI_HUD_C_CreateTutorialMessage_Params params;
	params.Class = Class;
	params.TutorialType = TutorialType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.CreateCraftingMenu
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDataTableRowHandle> WorkbenchCategories            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<E_Workbenches_E_Workbenches> WorkbenchType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           NoWorkbench_                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUD_C::CreateCraftingMenu(TArray<struct FDataTableRowHandle>* WorkbenchCategories, TEnumAsByte<E_Workbenches_E_Workbenches> WorkbenchType, bool NoWorkbench_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.CreateCraftingMenu");

	UUI_HUD_C_CreateCraftingMenu_Params params;
	params.WorkbenchType = WorkbenchType;
	params.NoWorkbench_ = NoWorkbench_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WorkbenchCategories != nullptr)
		*WorkbenchCategories = params.WorkbenchCategories;

}


// Function UI_HUD.UI_HUD_C.DestroyCraftingMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsQuit                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUD_C::DestroyCraftingMenu(bool IsQuit)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.DestroyCraftingMenu");

	UUI_HUD_C_DestroyCraftingMenu_Params params;
	params.IsQuit = IsQuit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.ExecuteCraftingMenu
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::ExecuteCraftingMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.ExecuteCraftingMenu");

	UUI_HUD_C_ExecuteCraftingMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.CreateChoiceMenu
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::CreateChoiceMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.CreateChoiceMenu");

	UUI_HUD_C_CreateChoiceMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.ExecuteChoiceMenu
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::ExecuteChoiceMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.ExecuteChoiceMenu");

	UUI_HUD_C_ExecuteChoiceMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.DestroyChoiceMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsQuit                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUD_C::DestroyChoiceMenu(bool IsQuit)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.DestroyChoiceMenu");

	UUI_HUD_C_DestroyChoiceMenu_Params params;
	params.IsQuit = IsQuit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.PressedInput_QuickslotMenu
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::PressedInput_QuickslotMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.PressedInput_QuickslotMenu");

	UUI_HUD_C_PressedInput_QuickslotMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.PressedInput_UI_AdditionalInteraction
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::PressedInput_UI_AdditionalInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.PressedInput_UI_AdditionalInteraction");

	UUI_HUD_C_PressedInput_UI_AdditionalInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.UpdateWeight_HUD
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::UpdateWeight_HUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.UpdateWeight_HUD");

	UUI_HUD_C_UpdateWeight_HUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.UpdateTemperature_HUD
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::UpdateTemperature_HUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.UpdateTemperature_HUD");

	UUI_HUD_C_UpdateTemperature_HUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.CreateModuleModificationMenu
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_Module>      Modules                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ABP_MasterBuildModule_C* ModuleReference                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_C::CreateModuleModificationMenu(TArray<struct FST_Module>* Modules, class ABP_MasterBuildModule_C* ModuleReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.CreateModuleModificationMenu");

	UUI_HUD_C_CreateModuleModificationMenu_Params params;
	params.ModuleReference = ModuleReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Modules != nullptr)
		*Modules = params.Modules;

}


// Function UI_HUD.UI_HUD_C.UpdateHoldableItemInputs
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::UpdateHoldableItemInputs()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.UpdateHoldableItemInputs");

	UUI_HUD_C_UpdateHoldableItemInputs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.CreateMiddleNotification
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   NotificationHeadline           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   NotificationText               (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*              Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          NotificationTimeOut            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_C::CreateMiddleNotification(const struct FText& NotificationHeadline, const struct FText& NotificationText, class UTexture2D* Icon, float NotificationTimeOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.CreateMiddleNotification");

	UUI_HUD_C_CreateMiddleNotification_Params params;
	params.NotificationHeadline = NotificationHeadline;
	params.NotificationText = NotificationText;
	params.Icon = Icon;
	params.NotificationTimeOut = NotificationTimeOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.DestroySleepMenu
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::DestroySleepMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.DestroySleepMenu");

	UUI_HUD_C_DestroySleepMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.CreateSleepMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Campfire_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUD_C::CreateSleepMenu(bool Campfire_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.CreateSleepMenu");

	UUI_HUD_C_CreateSleepMenu_Params params;
	params.Campfire_ = Campfire_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.ExecuteSleepMenu
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::ExecuteSleepMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.ExecuteSleepMenu");

	UUI_HUD_C_ExecuteSleepMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.CreateFurnituresMenu
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::CreateFurnituresMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.CreateFurnituresMenu");

	UUI_HUD_C_CreateFurnituresMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.CreateBagMenu
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::CreateBagMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.CreateBagMenu");

	UUI_HUD_C_CreateBagMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.RemoveAllReferencedUIs
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::RemoveAllReferencedUIs()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.RemoveAllReferencedUIs");

	UUI_HUD_C_RemoveAllReferencedUIs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.FadeAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reverse                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUD_C::FadeAnimation(bool Reverse)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.FadeAnimation");

	UUI_HUD_C_FadeAnimation_Params params;
	params.Reverse = Reverse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.OnDirtinessChange_Event_1
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::OnDirtinessChange_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.OnDirtinessChange_Event_1");

	UUI_HUD_C_OnDirtinessChange_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.UpdatePeopleNotificationPanel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NoPeopleHome                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NoPeopleFood                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NoPeopleWood                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_C::UpdatePeopleNotificationPanel(int NoPeopleHome, int NoPeopleFood, int NoPeopleWood)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.UpdatePeopleNotificationPanel");

	UUI_HUD_C_UpdatePeopleNotificationPanel_Params params;
	params.NoPeopleHome = NoPeopleHome;
	params.NoPeopleFood = NoPeopleFood;
	params.NoPeopleWood = NoPeopleWood;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.UpdateFood_HUD
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::UpdateFood_HUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.UpdateFood_HUD");

	UUI_HUD_C_UpdateFood_HUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.UpdateWater_HUD
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::UpdateWater_HUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.UpdateWater_HUD");

	UUI_HUD_C_UpdateWater_HUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.PressedInput_UI_SpecialAction
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::PressedInput_UI_SpecialAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.PressedInput_UI_SpecialAction");

	UUI_HUD_C_PressedInput_UI_SpecialAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.BindMountStatsHUD
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::BindMountStatsHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.BindMountStatsHUD");

	UUI_HUD_C_BindMountStatsHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.UpdateMountHealthHUD
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::UpdateMountHealthHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.UpdateMountHealthHUD");

	UUI_HUD_C_UpdateMountHealthHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.UpdateMountStaminaHUD
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::UpdateMountStaminaHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.UpdateMountStaminaHUD");

	UUI_HUD_C_UpdateMountStaminaHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.UpdateMountWeightHUD
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::UpdateMountWeightHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.UpdateMountWeightHUD");

	UUI_HUD_C_UpdateMountWeightHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.UnbindMountStatsHUD
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::UnbindMountStatsHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.UnbindMountStatsHUD");

	UUI_HUD_C_UnbindMountStatsHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.CreateFenceMenu
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::CreateFenceMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.CreateFenceMenu");

	UUI_HUD_C_CreateFenceMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.UpdateAnimalsNotificationPanel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NoAnimalsHome                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NoAnimalsFood                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_C::UpdateAnimalsNotificationPanel(int NoAnimalsHome, int NoAnimalsFood)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.UpdateAnimalsNotificationPanel");

	UUI_HUD_C_UpdateAnimalsNotificationPanel_Params params;
	params.NoAnimalsHome = NoAnimalsHome;
	params.NoAnimalsFood = NoAnimalsFood;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.StartPoison
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::StartPoison()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.StartPoison");

	UUI_HUD_C_StartPoison_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.UpdateAlcohol
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_C::UpdateAlcohol()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.UpdateAlcohol");

	UUI_HUD_C_UpdateAlcohol_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.Tick");

	UUI_HUD_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD.UI_HUD_C.ExecuteUbergraph_UI_HUD
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_C::ExecuteUbergraph_UI_HUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.ExecuteUbergraph_UI_HUD");

	UUI_HUD_C_ExecuteUbergraph_UI_HUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_HUD_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(fade, UWidgetAnimation);
	READ_PTR_FULL(FarAwayPulsation, UWidgetAnimation);
	READ_PTR_FULL(HealthPulsation, UWidgetAnimation);
	READ_PTR_FULL(BlackScreen, UBorder);
	READ_PTR_FULL(Border_Cheating, UBorder);
	READ_PTR_FULL(Border_Trading, UBorder);
	READ_PTR_FULL(CompassPanel, UCanvasPanel);
	READ_PTR_FULL(DropActionPopUp, UBorder);
	READ_PTR_FULL(HoldableItemInputs, UVerticalBox);
	READ_PTR_FULL(HUDPanel, UCanvasPanel);
	READ_PTR_FULL(HUDTutorial, UBorder);
	READ_PTR_FULL(HUDTutorialSlot, UBorder);
	READ_PTR_FULL(Marker, UImage);
	READ_PTR_FULL(MarkersPanel, UCanvasPanel);
	READ_PTR_FULL(NotificationPanel, UVerticalBox);
	READ_PTR_FULL(Points, UImage);
	READ_PTR_FULL(QuestNotificationSlot, UWidgetSwitcher);
	READ_PTR_FULL(TutorialMessageSlot, UBorder);
	READ_PTR_FULL(txt_FarAwayFromFamily, UTextBlock);
	READ_PTR_FULL(txt_VersionIdentifier, UTextBlock);
	READ_PTR_FULL(UI_BuildingPanel, UUI_BuildingPanel_C);
	READ_PTR_FULL(UI_HUD_LifeStats, UUI_HUD_LifeStats_C);
	READ_PTR_FULL(UI_Interaction, UUI_Interaction_C);
	READ_PTR_FULL(UI_Inventory, UUI_Book_C);
	READ_PTR_FULL(UI_NotificationStatusBar, UUI_NotificationStatusBar_C);
	READ_PTR_FULL(UI_QuestTracker, UUI_QuestTracker_C);
	READ_PTR_FULL(UI_QuickSlot_HUD, UUI_ItemQuickSlot_C);
	READ_PTR_FULL(UI_Timer, UUI_SeasonProgress_C);
	READ_PTR_FULL(PlayerControllerReference, APC_Player_C);
	READ_PTR_FULL(BuildingMenu, UUI_BuildingMenu_C);
	READ_PTR_FULL(FurnituresMenu, UUI_Furniture_DecorationMenu_C);
	READ_PTR_FULL(FencesMenu, UUI_FenceMenu_C);
	READ_PTR_FULL(QuickslotMenu, UUI_QuickslotMasterRadialMenu_C);
	READ_PTR_FULL(BuildingModificationMenu, UUI_BuildingModificationMenu_C);
	READ_PTR_FULL(CraftingMenu, UUI_CraftingMenu_C);
	READ_PTR_FULL(ChoiceMenu, UUI_QChoiceMasterRadialMenu_C);
	READ_PTR_FULL(ModuleModificationMenu, UUI_ModuleModificationMenu_C);
	READ_PTR_FULL(SleepMenu, UUI_SleepMasterRadialMenu_C);
	READ_PTR_FULL(HomeMarker, UUI_CompassMarker_C);
	READ_PTR_FULL(BagModeMenu, UUI_BagMasterRadialMenu_C);
	READ_PTR_FULL(HUDMasterTutorialReference, UUI_HUDTutorial_Master_C);
	READ_PTR_FULL(GM_Reference, AGM_MedievalDynasty_C);
	READ_PTR_FULL(WaypointMarker, UUI_CompassMarker_C);
	READ_PTR_FULL(HorseMarker, UUI_CompassMarker_C);
}

void UUI_HUD_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(fade);
	DELE_PTR_FULL(FarAwayPulsation);
	DELE_PTR_FULL(HealthPulsation);
	DELE_PTR_FULL(BlackScreen);
	DELE_PTR_FULL(Border_Cheating);
	DELE_PTR_FULL(Border_Trading);
	DELE_PTR_FULL(CompassPanel);
	DELE_PTR_FULL(DropActionPopUp);
	DELE_PTR_FULL(HoldableItemInputs);
	DELE_PTR_FULL(HUDPanel);
	DELE_PTR_FULL(HUDTutorial);
	DELE_PTR_FULL(HUDTutorialSlot);
	DELE_PTR_FULL(Marker);
	DELE_PTR_FULL(MarkersPanel);
	DELE_PTR_FULL(NotificationPanel);
	DELE_PTR_FULL(Points);
	DELE_PTR_FULL(QuestNotificationSlot);
	DELE_PTR_FULL(TutorialMessageSlot);
	DELE_PTR_FULL(txt_FarAwayFromFamily);
	DELE_PTR_FULL(txt_VersionIdentifier);
	DELE_PTR_FULL(UI_BuildingPanel);
	DELE_PTR_FULL(UI_HUD_LifeStats);
	DELE_PTR_FULL(UI_Interaction);
	DELE_PTR_FULL(UI_Inventory);
	DELE_PTR_FULL(UI_NotificationStatusBar);
	DELE_PTR_FULL(UI_QuestTracker);
	DELE_PTR_FULL(UI_QuickSlot_HUD);
	DELE_PTR_FULL(UI_Timer);
	DELE_PTR_FULL(PlayerControllerReference);
	DELE_PTR_FULL(BuildingMenu);
	DELE_PTR_FULL(FurnituresMenu);
	DELE_PTR_FULL(FencesMenu);
	DELE_PTR_FULL(QuickslotMenu);
	DELE_PTR_FULL(BuildingModificationMenu);
	DELE_PTR_FULL(CraftingMenu);
	DELE_PTR_FULL(ChoiceMenu);
	DELE_PTR_FULL(ModuleModificationMenu);
	DELE_PTR_FULL(SleepMenu);
	DELE_PTR_FULL(HomeMarker);
	DELE_PTR_FULL(BagModeMenu);
	DELE_PTR_FULL(HUDMasterTutorialReference);
	DELE_PTR_FULL(GM_Reference);
	DELE_PTR_FULL(WaypointMarker);
	DELE_PTR_FULL(HorseMarker);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
