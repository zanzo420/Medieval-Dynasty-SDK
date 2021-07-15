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

// Function UI_GoalSlot_Hunt.UI_GoalSlot_Hunt_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_GoalSlot_Hunt_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GoalSlot_Hunt.UI_GoalSlot_Hunt_C.Construct");

	UUI_GoalSlot_Hunt_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GoalSlot_Hunt.UI_GoalSlot_Hunt_C.ExecuteUbergraph_UI_GoalSlot_Hunt
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_GoalSlot_Hunt_C::ExecuteUbergraph_UI_GoalSlot_Hunt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GoalSlot_Hunt.UI_GoalSlot_Hunt_C.ExecuteUbergraph_UI_GoalSlot_Hunt");

	UUI_GoalSlot_Hunt_C_ExecuteUbergraph_UI_GoalSlot_Hunt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_GoalSlot_Hunt.UI_GoalSlot_Hunt_C.NewEventDispatcher_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UUI_GoalSlot_Hunt_C::NewEventDispatcher_0__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GoalSlot_Hunt.UI_GoalSlot_Hunt_C.NewEventDispatcher_0__DelegateSignature");

	UUI_GoalSlot_Hunt_C_NewEventDispatcher_0__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_GoalSlot_Hunt_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Image_295, UImage);
	READ_PTR_FULL(txt_GoalText, UTextBlock);
	READ_PTR_FULL(txt_Hunted, UTextBlock);
}

void UUI_GoalSlot_Hunt_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Image_295);
	DELE_PTR_FULL(txt_GoalText);
	DELE_PTR_FULL(txt_Hunted);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
