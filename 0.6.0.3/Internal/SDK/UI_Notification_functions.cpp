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

// Function UI_Notification.UI_Notification_C.UpdateNotification
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_ItemInventorys      Item                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   WarningText                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UUI_Notification_C::UpdateNotification(const struct FST_ItemInventorys& Item, const struct FText& WarningText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Notification.UI_Notification_C.UpdateNotification");

	UUI_Notification_C_UpdateNotification_Params params;
	params.Item = Item;
	params.WarningText = WarningText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Notification.UI_Notification_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Notification_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Notification.UI_Notification_C.Construct");

	UUI_Notification_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Notification.UI_Notification_C.AnimateNotification
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          StartAtTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NumLoopsToPlay                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Notification_C::AnimateNotification(class UWidgetAnimation* Animation, float StartAtTime, int NumLoopsToPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Notification.UI_Notification_C.AnimateNotification");

	UUI_Notification_C_AnimateNotification_Params params;
	params.Animation = Animation;
	params.StartAtTime = StartAtTime;
	params.NumLoopsToPlay = NumLoopsToPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Notification.UI_Notification_C.StartCountingToHide
// (BlueprintCallable, BlueprintEvent)
void UUI_Notification_C::StartCountingToHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Notification.UI_Notification_C.StartCountingToHide");

	UUI_Notification_C_StartCountingToHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Notification.UI_Notification_C.Destroy
// (BlueprintCallable, BlueprintEvent)
void UUI_Notification_C::Destroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Notification.UI_Notification_C.Destroy");

	UUI_Notification_C_Destroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Notification.UI_Notification_C.EndUpdateCount
// (BlueprintCallable, BlueprintEvent)
void UUI_Notification_C::EndUpdateCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Notification.UI_Notification_C.EndUpdateCount");

	UUI_Notification_C_EndUpdateCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Notification.UI_Notification_C.StartUpdateCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   NewCount                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UUI_Notification_C::StartUpdateCount(const struct FText& NewCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Notification.UI_Notification_C.StartUpdateCount");

	UUI_Notification_C_StartUpdateCount_Params params;
	params.NewCount = NewCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Notification.UI_Notification_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Notification_C*      NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Notification_C::Init(class UUI_Notification_C* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Notification.UI_Notification_C.Init");

	UUI_Notification_C_Init_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Notification.UI_Notification_C.ExecuteUbergraph_UI_Notification
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Notification_C::ExecuteUbergraph_UI_Notification(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Notification.UI_Notification_C.ExecuteUbergraph_UI_Notification");

	UUI_Notification_C_ExecuteUbergraph_UI_Notification_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
