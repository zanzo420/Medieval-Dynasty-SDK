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

// Function UI_EventDetails.UI_EventDetails_C.ItemsRestriction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_EventButtonRestrictions Restrictions                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UUI_EventDetails_C::ItemsRestriction(const struct FST_EventButtonRestrictions& Restrictions)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_EventDetails.UI_EventDetails_C.ItemsRestriction");

	UUI_EventDetails_C_ItemsRestriction_Params params;
	params.Restrictions = Restrictions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_EventDetails.UI_EventDetails_C.VillageRestriction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_EventButtonRestrictions Restrictions                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UUI_EventDetails_C::VillageRestriction(const struct FST_EventButtonRestrictions& Restrictions)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_EventDetails.UI_EventDetails_C.VillageRestriction");

	UUI_EventDetails_C_VillageRestriction_Params params;
	params.Restrictions = Restrictions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_EventDetails.UI_EventDetails_C.SkillRestriction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_EventButtonRestrictions Restrictions                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UUI_EventDetails_C::SkillRestriction(const struct FST_EventButtonRestrictions& Restrictions)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_EventDetails.UI_EventDetails_C.SkillRestriction");

	UUI_EventDetails_C_SkillRestriction_Params params;
	params.Restrictions = Restrictions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_EventDetails.UI_EventDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_EventDetails_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_EventDetails.UI_EventDetails_C.Construct");

	UUI_EventDetails_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_EventDetails.UI_EventDetails_C.ExecuteUbergraph_UI_EventDetails
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_EventDetails_C::ExecuteUbergraph_UI_EventDetails(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_EventDetails.UI_EventDetails_C.ExecuteUbergraph_UI_EventDetails");

	UUI_EventDetails_C_ExecuteUbergraph_UI_EventDetails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_EventDetails.UI_EventDetails_C.ActionDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UUI_EventDetails_C::ActionDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_EventDetails.UI_EventDetails_C.ActionDispatcher__DelegateSignature");

	UUI_EventDetails_C_ActionDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_EventDetails_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(ButtonRestrictionsBox, UGridPanel);
	READ_PTR_FULL(Image_11, UImage);
	READ_PTR_FULL(Image_13, UImage);
	READ_PTR_FULL(Image_14, UImage);
	READ_PTR_FULL(txt_TabName, UTextBlock);
	READ_PTR_FULL(PlayerControllerReference, APC_Player_C);
}

void UUI_EventDetails_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(ButtonRestrictionsBox);
	DELE_PTR_FULL(Image_11);
	DELE_PTR_FULL(Image_13);
	DELE_PTR_FULL(Image_14);
	DELE_PTR_FULL(txt_TabName);
	DELE_PTR_FULL(PlayerControllerReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
