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

// Function UI_Talent_TreeButton.UI_Talent_TreeButton_C.SetValues
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MasterTalent        Talent                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UUI_TalentTree_C*        TalentTreeReference            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Talent_TreeButton_C::SetValues(const struct FST_MasterTalent& Talent, class UUI_TalentTree_C* TalentTreeReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Talent_TreeButton.UI_Talent_TreeButton_C.SetValues");

	UUI_Talent_TreeButton_C_SetValues_Params params;
	params.Talent = Talent;
	params.TalentTreeReference = TalentTreeReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Talent_TreeButton.UI_Talent_TreeButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Talent_TreeButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Talent_TreeButton.UI_Talent_TreeButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_Talent_TreeButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Talent_TreeButton.UI_Talent_TreeButton_C.UpdateTalentValues
// (BlueprintCallable, BlueprintEvent)
void UUI_Talent_TreeButton_C::UpdateTalentValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Talent_TreeButton.UI_Talent_TreeButton_C.UpdateTalentValues");

	UUI_Talent_TreeButton_C_UpdateTalentValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Talent_TreeButton.UI_Talent_TreeButton_C.UpdateTalentAvailability
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TalentAvailability             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Talent_TreeButton_C::UpdateTalentAvailability(bool TalentAvailability)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Talent_TreeButton.UI_Talent_TreeButton_C.UpdateTalentAvailability");

	UUI_Talent_TreeButton_C_UpdateTalentAvailability_Params params;
	params.TalentAvailability = TalentAvailability;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Talent_TreeButton.UI_Talent_TreeButton_C.MakeActive
// (BlueprintCallable, BlueprintEvent)
void UUI_Talent_TreeButton_C::MakeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Talent_TreeButton.UI_Talent_TreeButton_C.MakeActive");

	UUI_Talent_TreeButton_C_MakeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Talent_TreeButton.UI_Talent_TreeButton_C.MakeUnactive
// (BlueprintCallable, BlueprintEvent)
void UUI_Talent_TreeButton_C::MakeUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Talent_TreeButton.UI_Talent_TreeButton_C.MakeUnactive");

	UUI_Talent_TreeButton_C_MakeUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Talent_TreeButton.UI_Talent_TreeButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Talent_TreeButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Talent_TreeButton.UI_Talent_TreeButton_C.Construct");

	UUI_Talent_TreeButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Talent_TreeButton.UI_Talent_TreeButton_C.BndEvt__UI_Talent_TreeButton_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Talent_TreeButton_C::BndEvt__UI_Talent_TreeButton_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Talent_TreeButton.UI_Talent_TreeButton_C.BndEvt__UI_Talent_TreeButton_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UUI_Talent_TreeButton_C_BndEvt__UI_Talent_TreeButton_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Talent_TreeButton.UI_Talent_TreeButton_C.BndEvt__UI_Talent_TreeButton_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Talent_TreeButton_C::BndEvt__UI_Talent_TreeButton_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Talent_TreeButton.UI_Talent_TreeButton_C.BndEvt__UI_Talent_TreeButton_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UUI_Talent_TreeButton_C_BndEvt__UI_Talent_TreeButton_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Talent_TreeButton.UI_Talent_TreeButton_C.ExecuteUbergraph_UI_Talent_TreeButton
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Talent_TreeButton_C::ExecuteUbergraph_UI_Talent_TreeButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Talent_TreeButton.UI_Talent_TreeButton_C.ExecuteUbergraph_UI_Talent_TreeButton");

	UUI_Talent_TreeButton_C_ExecuteUbergraph_UI_Talent_TreeButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
