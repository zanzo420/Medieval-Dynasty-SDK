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

// Function UI_Notification.UI_Notification_C.UpdateNotification
struct UUI_Notification_C_UpdateNotification_Params
{
	struct FST_ItemInventorys                          Item;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       WarningText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_Notification.UI_Notification_C.Construct
struct UUI_Notification_C_Construct_Params
{
};

// Function UI_Notification.UI_Notification_C.AnimateNotification
struct UUI_Notification_C_AnimateNotification_Params
{
	class UWidgetAnimation*                            Animation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartAtTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumLoopsToPlay;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Notification.UI_Notification_C.StartCountingToHide
struct UUI_Notification_C_StartCountingToHide_Params
{
};

// Function UI_Notification.UI_Notification_C.Destroy
struct UUI_Notification_C_Destroy_Params
{
};

// Function UI_Notification.UI_Notification_C.EndUpdateCount
struct UUI_Notification_C_EndUpdateCount_Params
{
};

// Function UI_Notification.UI_Notification_C.StartUpdateCount
struct UUI_Notification_C_StartUpdateCount_Params
{
	struct FText                                       NewCount;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_Notification.UI_Notification_C.Init
struct UUI_Notification_C_Init_Params
{
	class UUI_Notification_C*                          NewParam;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Notification.UI_Notification_C.ExecuteUbergraph_UI_Notification
struct UUI_Notification_C_ExecuteUbergraph_UI_Notification_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
