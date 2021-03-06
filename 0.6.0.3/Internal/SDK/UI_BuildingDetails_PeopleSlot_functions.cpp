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

// Function UI_BuildingDetails_PeopleSlot.UI_BuildingDetails_PeopleSlot_C.UpdateStatus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Empty                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_BuildingDetails_PeopleSlot_C::UpdateStatus(bool* Empty)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_PeopleSlot.UI_BuildingDetails_PeopleSlot_C.UpdateStatus");

	UUI_BuildingDetails_PeopleSlot_C_UpdateStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Empty != nullptr)
		*Empty = params.Empty;

}


// Function UI_BuildingDetails_PeopleSlot.UI_BuildingDetails_PeopleSlot_C.GetSkillForProfession
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Skills_E_Skills> SkillType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ShowSkill                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_BuildingDetails_PeopleSlot_C::GetSkillForProfession(TEnumAsByte<E_Skills_E_Skills>* SkillType, bool* ShowSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_PeopleSlot.UI_BuildingDetails_PeopleSlot_C.GetSkillForProfession");

	UUI_BuildingDetails_PeopleSlot_C_GetSkillForProfession_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SkillType != nullptr)
		*SkillType = params.SkillType;
	if (ShowSkill != nullptr)
		*ShowSkill = params.ShowSkill;

}


// Function UI_BuildingDetails_PeopleSlot.UI_BuildingDetails_PeopleSlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_BuildingDetails_PeopleSlot_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_PeopleSlot.UI_BuildingDetails_PeopleSlot_C.PreConstruct");

	UUI_BuildingDetails_PeopleSlot_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_PeopleSlot.UI_BuildingDetails_PeopleSlot_C.MakeActive
// (BlueprintCallable, BlueprintEvent)
void UUI_BuildingDetails_PeopleSlot_C::MakeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_PeopleSlot.UI_BuildingDetails_PeopleSlot_C.MakeActive");

	UUI_BuildingDetails_PeopleSlot_C_MakeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_PeopleSlot.UI_BuildingDetails_PeopleSlot_C.MakeUnactive
// (BlueprintCallable, BlueprintEvent)
void UUI_BuildingDetails_PeopleSlot_C::MakeUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_PeopleSlot.UI_BuildingDetails_PeopleSlot_C.MakeUnactive");

	UUI_BuildingDetails_PeopleSlot_C_MakeUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_PeopleSlot.UI_BuildingDetails_PeopleSlot_C.UpdateNPCStatus
// (BlueprintCallable, BlueprintEvent)
void UUI_BuildingDetails_PeopleSlot_C::UpdateNPCStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_PeopleSlot.UI_BuildingDetails_PeopleSlot_C.UpdateNPCStatus");

	UUI_BuildingDetails_PeopleSlot_C_UpdateNPCStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_PeopleSlot.UI_BuildingDetails_PeopleSlot_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_BuildingDetails_PeopleSlot_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_PeopleSlot.UI_BuildingDetails_PeopleSlot_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_BuildingDetails_PeopleSlot_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_PeopleSlot.UI_BuildingDetails_PeopleSlot_C.BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_BuildingDetails_PeopleSlot_C::BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_PeopleSlot.UI_BuildingDetails_PeopleSlot_C.BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UUI_BuildingDetails_PeopleSlot_C_BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_PeopleSlot.UI_BuildingDetails_PeopleSlot_C.BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
void UUI_BuildingDetails_PeopleSlot_C::BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_PeopleSlot.UI_BuildingDetails_PeopleSlot_C.BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UUI_BuildingDetails_PeopleSlot_C_BndEvt__UI_WorkplaceSlot_NPCDetails_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_PeopleSlot.UI_BuildingDetails_PeopleSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_BuildingDetails_PeopleSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_PeopleSlot.UI_BuildingDetails_PeopleSlot_C.Construct");

	UUI_BuildingDetails_PeopleSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_PeopleSlot.UI_BuildingDetails_PeopleSlot_C.ExecuteUbergraph_UI_BuildingDetails_PeopleSlot
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_BuildingDetails_PeopleSlot_C::ExecuteUbergraph_UI_BuildingDetails_PeopleSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_PeopleSlot.UI_BuildingDetails_PeopleSlot_C.ExecuteUbergraph_UI_BuildingDetails_PeopleSlot");

	UUI_BuildingDetails_PeopleSlot_C_ExecuteUbergraph_UI_BuildingDetails_PeopleSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_BuildingDetails_PeopleSlot.UI_BuildingDetails_PeopleSlot_C.OnHoveredDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UUI_BuildingDetails_PeopleSlot_C::OnHoveredDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BuildingDetails_PeopleSlot.UI_BuildingDetails_PeopleSlot_C.OnHoveredDispatcher__DelegateSignature");

	UUI_BuildingDetails_PeopleSlot_C_OnHoveredDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
