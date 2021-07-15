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

// Function UI_RewardSlot_DevelopmentStage.UI_RewardSlot_DevelopmentStage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_RewardSlot_DevelopmentStage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RewardSlot_DevelopmentStage.UI_RewardSlot_DevelopmentStage_C.Construct");

	UUI_RewardSlot_DevelopmentStage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_RewardSlot_DevelopmentStage.UI_RewardSlot_DevelopmentStage_C.ExecuteUbergraph_UI_RewardSlot_DevelopmentStage
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_RewardSlot_DevelopmentStage_C::ExecuteUbergraph_UI_RewardSlot_DevelopmentStage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RewardSlot_DevelopmentStage.UI_RewardSlot_DevelopmentStage_C.ExecuteUbergraph_UI_RewardSlot_DevelopmentStage");

	UUI_RewardSlot_DevelopmentStage_C_ExecuteUbergraph_UI_RewardSlot_DevelopmentStage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_RewardSlot_DevelopmentStage_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(txt_RewardText, UTextBlock);
}

void UUI_RewardSlot_DevelopmentStage_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(txt_RewardText);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
