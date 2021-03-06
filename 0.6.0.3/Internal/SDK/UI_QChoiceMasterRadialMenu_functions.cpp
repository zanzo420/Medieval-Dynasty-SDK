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

// Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.SetParentWidget
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_QChoiceMasterRadialMenu_C::SetParentWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.SetParentWidget");

	UUI_QChoiceMasterRadialMenu_C_SetParentWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.GetMouseOver
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_QChoiceMasterRadialMenu_C::GetMouseOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.GetMouseOver");

	UUI_QChoiceMasterRadialMenu_C_GetMouseOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.SetSegmentOver
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_QChoiceSegment_C*    Segment                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Rotation__                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Rotation__=                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ExtraCheck                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Extra__                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Extra__=                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_QChoiceMasterRadialMenu_C::SetSegmentOver(class UUI_QChoiceSegment_C* Segment, float Rotation__, float Rotation__=, bool ExtraCheck, float Extra__, float Extra__=)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.SetSegmentOver");

	UUI_QChoiceMasterRadialMenu_C_SetSegmentOver_Params params;
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


// Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.GetMouseRotation
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_QChoiceMasterRadialMenu_C::GetMouseRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.GetMouseRotation");

	UUI_QChoiceMasterRadialMenu_C_GetMouseRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_QChoiceMasterRadialMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.Construct");

	UUI_QChoiceMasterRadialMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.RemoveMenu
// (BlueprintCallable, BlueprintEvent)
void UUI_QChoiceMasterRadialMenu_C::RemoveMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.RemoveMenu");

	UUI_QChoiceMasterRadialMenu_C_RemoveMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.SelectMenuSegment
// (BlueprintCallable, BlueprintEvent)
void UUI_QChoiceMasterRadialMenu_C::SelectMenuSegment()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.SelectMenuSegment");

	UUI_QChoiceMasterRadialMenu_C_SelectMenuSegment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.ChangeInformationAboutSegment
// (BlueprintCallable, BlueprintEvent)
void UUI_QChoiceMasterRadialMenu_C::ChangeInformationAboutSegment()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.ChangeInformationAboutSegment");

	UUI_QChoiceMasterRadialMenu_C_ChangeInformationAboutSegment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_QChoiceMasterRadialMenu_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.PreConstruct");

	UUI_QChoiceMasterRadialMenu_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.ExecuteUbergraph_UI_QChoiceMasterRadialMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_QChoiceMasterRadialMenu_C::ExecuteUbergraph_UI_QChoiceMasterRadialMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.ExecuteUbergraph_UI_QChoiceMasterRadialMenu");

	UUI_QChoiceMasterRadialMenu_C_ExecuteUbergraph_UI_QChoiceMasterRadialMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.SegmentChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UUI_QChoiceMasterRadialMenu_C::SegmentChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QChoiceMasterRadialMenu.UI_QChoiceMasterRadialMenu_C.SegmentChanged__DelegateSignature");

	UUI_QChoiceMasterRadialMenu_C_SegmentChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
