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

// Function UI_WorkplaceSlot_NPCDetails.UI_WorkplaceSlot_NPCDetails_C.UpdateStatus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Empty                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_WorkplaceSlot_NPCDetails_C::UpdateStatus(bool* Empty)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WorkplaceSlot_NPCDetails.UI_WorkplaceSlot_NPCDetails_C.UpdateStatus");

	UUI_WorkplaceSlot_NPCDetails_C_UpdateStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Empty != nullptr)
		*Empty = params.Empty;

}


// Function UI_WorkplaceSlot_NPCDetails.UI_WorkplaceSlot_NPCDetails_C.MakeActive
// (BlueprintCallable, BlueprintEvent)
void UUI_WorkplaceSlot_NPCDetails_C::MakeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WorkplaceSlot_NPCDetails.UI_WorkplaceSlot_NPCDetails_C.MakeActive");

	UUI_WorkplaceSlot_NPCDetails_C_MakeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_WorkplaceSlot_NPCDetails.UI_WorkplaceSlot_NPCDetails_C.MakeUnactive
// (BlueprintCallable, BlueprintEvent)
void UUI_WorkplaceSlot_NPCDetails_C::MakeUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WorkplaceSlot_NPCDetails.UI_WorkplaceSlot_NPCDetails_C.MakeUnactive");

	UUI_WorkplaceSlot_NPCDetails_C_MakeUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_WorkplaceSlot_NPCDetails.UI_WorkplaceSlot_NPCDetails_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_WorkplaceSlot_NPCDetails_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WorkplaceSlot_NPCDetails.UI_WorkplaceSlot_NPCDetails_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_WorkplaceSlot_NPCDetails_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_WorkplaceSlot_NPCDetails.UI_WorkplaceSlot_NPCDetails_C.SetSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_WorkplaceSlot_NPCDetails_C::SetSelected(bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WorkplaceSlot_NPCDetails.UI_WorkplaceSlot_NPCDetails_C.SetSelected");

	UUI_WorkplaceSlot_NPCDetails_C_SetSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_WorkplaceSlot_NPCDetails.UI_WorkplaceSlot_NPCDetails_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_WorkplaceSlot_NPCDetails_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WorkplaceSlot_NPCDetails.UI_WorkplaceSlot_NPCDetails_C.Tick");

	UUI_WorkplaceSlot_NPCDetails_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_WorkplaceSlot_NPCDetails.UI_WorkplaceSlot_NPCDetails_C.BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_WorkplaceSlot_NPCDetails_C::BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WorkplaceSlot_NPCDetails.UI_WorkplaceSlot_NPCDetails_C.BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UUI_WorkplaceSlot_NPCDetails_C_BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_WorkplaceSlot_NPCDetails.UI_WorkplaceSlot_NPCDetails_C.BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_WorkplaceSlot_NPCDetails_C::BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WorkplaceSlot_NPCDetails.UI_WorkplaceSlot_NPCDetails_C.BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UUI_WorkplaceSlot_NPCDetails_C_BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_WorkplaceSlot_NPCDetails.UI_WorkplaceSlot_NPCDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_WorkplaceSlot_NPCDetails_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WorkplaceSlot_NPCDetails.UI_WorkplaceSlot_NPCDetails_C.Construct");

	UUI_WorkplaceSlot_NPCDetails_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_WorkplaceSlot_NPCDetails.UI_WorkplaceSlot_NPCDetails_C.ExecuteUbergraph_UI_WorkplaceSlot_NPCDetails
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_WorkplaceSlot_NPCDetails_C::ExecuteUbergraph_UI_WorkplaceSlot_NPCDetails(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WorkplaceSlot_NPCDetails.UI_WorkplaceSlot_NPCDetails_C.ExecuteUbergraph_UI_WorkplaceSlot_NPCDetails");

	UUI_WorkplaceSlot_NPCDetails_C_ExecuteUbergraph_UI_WorkplaceSlot_NPCDetails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_WorkplaceSlot_NPCDetails.UI_WorkplaceSlot_NPCDetails_C.OnHoveredDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UUI_WorkplaceSlot_NPCDetails_C::OnHoveredDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WorkplaceSlot_NPCDetails.UI_WorkplaceSlot_NPCDetails_C.OnHoveredDispatcher__DelegateSignature");

	UUI_WorkplaceSlot_NPCDetails_C_OnHoveredDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
