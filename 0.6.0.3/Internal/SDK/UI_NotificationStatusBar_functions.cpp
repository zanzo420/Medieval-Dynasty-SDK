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

// Function UI_NotificationStatusBar.UI_NotificationStatusBar_C.UpdatePeopleNotification
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NoPeopleHome                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NoPeopleFood                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NoPeopleWood                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_NotificationStatusBar_C::UpdatePeopleNotification(int NoPeopleHome, int NoPeopleFood, int NoPeopleWood)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationStatusBar.UI_NotificationStatusBar_C.UpdatePeopleNotification");

	UUI_NotificationStatusBar_C_UpdatePeopleNotification_Params params;
	params.NoPeopleHome = NoPeopleHome;
	params.NoPeopleFood = NoPeopleFood;
	params.NoPeopleWood = NoPeopleWood;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_NotificationStatusBar.UI_NotificationStatusBar_C.UpdateAnimalsNotification
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NoAnimalsHome                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NoAnimalsFood                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_NotificationStatusBar_C::UpdateAnimalsNotification(int NoAnimalsHome, int NoAnimalsFood)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationStatusBar.UI_NotificationStatusBar_C.UpdateAnimalsNotification");

	UUI_NotificationStatusBar_C_UpdateAnimalsNotification_Params params;
	params.NoAnimalsHome = NoAnimalsHome;
	params.NoAnimalsFood = NoAnimalsFood;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_NotificationStatusBar.UI_NotificationStatusBar_C.ExecuteUbergraph_UI_NotificationStatusBar
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_NotificationStatusBar_C::ExecuteUbergraph_UI_NotificationStatusBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NotificationStatusBar.UI_NotificationStatusBar_C.ExecuteUbergraph_UI_NotificationStatusBar");

	UUI_NotificationStatusBar_C_ExecuteUbergraph_UI_NotificationStatusBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
