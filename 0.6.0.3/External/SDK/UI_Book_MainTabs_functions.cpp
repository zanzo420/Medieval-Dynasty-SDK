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

// Function UI_Book_MainTabs.UI_Book_MainTabs_C.UpdateTabNotificationsVisibility
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_Book_MainTabs_C::UpdateTabNotificationsVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_MainTabs.UI_Book_MainTabs_C.UpdateTabNotificationsVisibility");

	UUI_Book_MainTabs_C_UpdateTabNotificationsVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_MainTabs.UI_Book_MainTabs_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Book_MainTabs_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_MainTabs.UI_Book_MainTabs_C.Construct");

	UUI_Book_MainTabs_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_MainTabs.UI_Book_MainTabs_C.OnClicked_Inventory
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_MainTabs_C::OnClicked_Inventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_MainTabs.UI_Book_MainTabs_C.OnClicked_Inventory");

	UUI_Book_MainTabs_C_OnClicked_Inventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_MainTabs.UI_Book_MainTabs_C.OnClicked_Journal
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_MainTabs_C::OnClicked_Journal()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_MainTabs.UI_Book_MainTabs_C.OnClicked_Journal");

	UUI_Book_MainTabs_C_OnClicked_Journal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_MainTabs.UI_Book_MainTabs_C.OnClicked_Skills
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_MainTabs_C::OnClicked_Skills()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_MainTabs.UI_Book_MainTabs_C.OnClicked_Skills");

	UUI_Book_MainTabs_C_OnClicked_Skills_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_MainTabs.UI_Book_MainTabs_C.OnClicked_Management
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_MainTabs_C::OnClicked_Management()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_MainTabs.UI_Book_MainTabs_C.OnClicked_Management");

	UUI_Book_MainTabs_C_OnClicked_Management_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_MainTabs.UI_Book_MainTabs_C.OnClicked_Map
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_MainTabs_C::OnClicked_Map()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_MainTabs.UI_Book_MainTabs_C.OnClicked_Map");

	UUI_Book_MainTabs_C_OnClicked_Map_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_MainTabs.UI_Book_MainTabs_C.OnClicked_Technology
// (BlueprintCallable, BlueprintEvent)
void UUI_Book_MainTabs_C::OnClicked_Technology()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_MainTabs.UI_Book_MainTabs_C.OnClicked_Technology");

	UUI_Book_MainTabs_C_OnClicked_Technology_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Book_MainTabs.UI_Book_MainTabs_C.ExecuteUbergraph_UI_Book_MainTabs
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Book_MainTabs_C::ExecuteUbergraph_UI_Book_MainTabs(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Book_MainTabs.UI_Book_MainTabs_C.ExecuteUbergraph_UI_Book_MainTabs");

	UUI_Book_MainTabs_C_ExecuteUbergraph_UI_Book_MainTabs_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_Book_MainTabs_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(btn_Inventory, UUI_Book_Tab_C);
	READ_PTR_FULL(btn_Management, UUI_Book_Tab_C);
	READ_PTR_FULL(btn_Map, UUI_Book_Tab_C);
	READ_PTR_FULL(btn_QuestLog, UUI_Book_Tab_C);
	READ_PTR_FULL(btn_Skills, UUI_Book_Tab_C);
	READ_PTR_FULL(btn_Technology, UUI_Book_Tab_C);
	READ_PTR_FULL(Image_83, UImage);
	READ_PTR_FULL(UI_HUD, UUI_HUD_C);
	READ_PTR_FULL(UI_Inventory, UUI_Book_C);
}

void UUI_Book_MainTabs_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(btn_Inventory);
	DELE_PTR_FULL(btn_Management);
	DELE_PTR_FULL(btn_Map);
	DELE_PTR_FULL(btn_QuestLog);
	DELE_PTR_FULL(btn_Skills);
	DELE_PTR_FULL(btn_Technology);
	DELE_PTR_FULL(Image_83);
	DELE_PTR_FULL(UI_HUD);
	DELE_PTR_FULL(UI_Inventory);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
