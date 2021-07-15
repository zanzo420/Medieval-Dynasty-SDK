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

// Function UI_MasterRadialMenu.UI_MasterRadialMenu_C.SetSegmentOver
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_RadialSegment_C*     Segment                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Rotation__                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Rotation__=                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ExtraCheck                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Extra__                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Extra__=                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MasterRadialMenu_C::SetSegmentOver(class UUI_RadialSegment_C* Segment, float Rotation__, float Rotation__=, bool ExtraCheck, float Extra__, float Extra__=)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterRadialMenu.UI_MasterRadialMenu_C.SetSegmentOver");

	UUI_MasterRadialMenu_C_SetSegmentOver_Params params;
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


// Function UI_MasterRadialMenu.UI_MasterRadialMenu_C.GetMouseRotation
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_MasterRadialMenu_C::GetMouseRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterRadialMenu.UI_MasterRadialMenu_C.GetMouseRotation");

	UUI_MasterRadialMenu_C_GetMouseRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterRadialMenu.UI_MasterRadialMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_MasterRadialMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterRadialMenu.UI_MasterRadialMenu_C.Construct");

	UUI_MasterRadialMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterRadialMenu.UI_MasterRadialMenu_C.OnSpawned
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterRadialMenu_C::OnSpawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterRadialMenu.UI_MasterRadialMenu_C.OnSpawned");

	UUI_MasterRadialMenu_C_OnSpawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterRadialMenu.UI_MasterRadialMenu_C.RemoveMenu
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterRadialMenu_C::RemoveMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterRadialMenu.UI_MasterRadialMenu_C.RemoveMenu");

	UUI_MasterRadialMenu_C_RemoveMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterRadialMenu.UI_MasterRadialMenu_C.SelectMenuSegment
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterRadialMenu_C::SelectMenuSegment()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterRadialMenu.UI_MasterRadialMenu_C.SelectMenuSegment");

	UUI_MasterRadialMenu_C_SelectMenuSegment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterRadialMenu.UI_MasterRadialMenu_C.NextPage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SwitcherIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MasterRadialMenu_C::NextPage(int SwitcherIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterRadialMenu.UI_MasterRadialMenu_C.NextPage");

	UUI_MasterRadialMenu_C_NextPage_Params params;
	params.SwitcherIndex = SwitcherIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterRadialMenu.UI_MasterRadialMenu_C.PreviousPage
// (BlueprintCallable, BlueprintEvent)
void UUI_MasterRadialMenu_C::PreviousPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterRadialMenu.UI_MasterRadialMenu_C.PreviousPage");

	UUI_MasterRadialMenu_C_PreviousPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_MasterRadialMenu.UI_MasterRadialMenu_C.ExecuteUbergraph_UI_MasterRadialMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MasterRadialMenu_C::ExecuteUbergraph_UI_MasterRadialMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MasterRadialMenu.UI_MasterRadialMenu_C.ExecuteUbergraph_UI_MasterRadialMenu");

	UUI_MasterRadialMenu_C_ExecuteUbergraph_UI_MasterRadialMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_MasterRadialMenu_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Mouse_Over_Segment, UUI_RadialSegment_C);
	READ_PTR_FULL(PlayerCharacterReference, ABP_PlayerCharacter_C);
	READ_PTR_FULL(ModuleReference, ABP_MasterBuildModule_C);
}

void UUI_MasterRadialMenu_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Mouse_Over_Segment);
	DELE_PTR_FULL(PlayerCharacterReference);
	DELE_PTR_FULL(ModuleReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
