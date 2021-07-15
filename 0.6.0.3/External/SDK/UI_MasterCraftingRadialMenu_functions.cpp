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

// Function UI_MasterCraftingRadialMenu.UI_MasterCraftingRadialMenu_C.SetSegmentOver
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_CraftingRadialSegment_C* Segment                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Rotation__                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Rotation__=                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ExtraCheck                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Extra__                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Extra__=                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MasterCraftingRadialMenu_C::SetSegmentOver(class UUI_CraftingRadialSegment_C* Segment, float Rotation__, float Rotation__=, bool ExtraCheck, float Extra__, float Extra__=)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterCraftingRadialMenu.UI_MasterCraftingRadialMenu_C.SetSegmentOver");

	UUI_MasterCraftingRadialMenu_C_SetSegmentOver_Params params;
	params.Segment = Segment;
	params.Rotation__ = Rotation__;
	params.Rotation__= = Rotation__=;
	params.ExtraCheck = ExtraCheck;
	params.Extra__ = Extra__;
	params.Extra__= = Extra__=;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterCraftingRadialMenu.UI_MasterCraftingRadialMenu_C.GetMouseRotation
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_MasterCraftingRadialMenu_C::GetMouseRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterCraftingRadialMenu.UI_MasterCraftingRadialMenu_C.GetMouseRotation");

	UUI_MasterCraftingRadialMenu_C_GetMouseRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterCraftingRadialMenu.UI_MasterCraftingRadialMenu_C.OnSpawned
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterCraftingRadialMenu_C::OnSpawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterCraftingRadialMenu.UI_MasterCraftingRadialMenu_C.OnSpawned");

	UUI_MasterCraftingRadialMenu_C_OnSpawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterCraftingRadialMenu.UI_MasterCraftingRadialMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_MasterCraftingRadialMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterCraftingRadialMenu.UI_MasterCraftingRadialMenu_C.Construct");

	UUI_MasterCraftingRadialMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterCraftingRadialMenu.UI_MasterCraftingRadialMenu_C.RemoveMenu
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterCraftingRadialMenu_C::RemoveMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterCraftingRadialMenu.UI_MasterCraftingRadialMenu_C.RemoveMenu");

	UUI_MasterCraftingRadialMenu_C_RemoveMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterCraftingRadialMenu.UI_MasterCraftingRadialMenu_C.SelectMenuSegment
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterCraftingRadialMenu_C::SelectMenuSegment()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterCraftingRadialMenu.UI_MasterCraftingRadialMenu_C.SelectMenuSegment");

	UUI_MasterCraftingRadialMenu_C_SelectMenuSegment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterCraftingRadialMenu.UI_MasterCraftingRadialMenu_C.NextPage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SwitcherIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MasterCraftingRadialMenu_C::NextPage(int SwitcherIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterCraftingRadialMenu.UI_MasterCraftingRadialMenu_C.NextPage");

	UUI_MasterCraftingRadialMenu_C_NextPage_Params params;
	params.SwitcherIndex = SwitcherIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterCraftingRadialMenu.UI_MasterCraftingRadialMenu_C.PreviousPage
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterCraftingRadialMenu_C::PreviousPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterCraftingRadialMenu.UI_MasterCraftingRadialMenu_C.PreviousPage");

	UUI_MasterCraftingRadialMenu_C_PreviousPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterCraftingRadialMenu.UI_MasterCraftingRadialMenu_C.ExecuteUbergraph_UI_MasterCraftingRadialMenu
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MasterCraftingRadialMenu_C::ExecuteUbergraph_UI_MasterCraftingRadialMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterCraftingRadialMenu.UI_MasterCraftingRadialMenu_C.ExecuteUbergraph_UI_MasterCraftingRadialMenu");

	UUI_MasterCraftingRadialMenu_C_ExecuteUbergraph_UI_MasterCraftingRadialMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_MasterCraftingRadialMenu_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Mouse_Over_Segment, UUI_CraftingRadialSegment_C);
	READ_PTR_FULL(PlayerCharacterReference, ABP_PlayerCharacter_C);
}

void UUI_MasterCraftingRadialMenu_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Mouse_Over_Segment);
	DELE_PTR_FULL(PlayerCharacterReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
