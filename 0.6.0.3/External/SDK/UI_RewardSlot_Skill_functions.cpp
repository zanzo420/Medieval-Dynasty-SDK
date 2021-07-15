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

// Function UI_RewardSlot_Skill.UI_RewardSlot_Skill_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_RewardSlot_Skill_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RewardSlot_Skill.UI_RewardSlot_Skill_C.Construct");

	UUI_RewardSlot_Skill_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_RewardSlot_Skill.UI_RewardSlot_Skill_C.ExecuteUbergraph_UI_RewardSlot_Skill
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_RewardSlot_Skill_C::ExecuteUbergraph_UI_RewardSlot_Skill(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RewardSlot_Skill.UI_RewardSlot_Skill_C.ExecuteUbergraph_UI_RewardSlot_Skill");

	UUI_RewardSlot_Skill_C_ExecuteUbergraph_UI_RewardSlot_Skill_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_RewardSlot_Skill_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(txt_Count, UTextBlock);
	READ_PTR_FULL(txt_SkillName, UTextBlock);
}

void UUI_RewardSlot_Skill_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(txt_Count);
	DELE_PTR_FULL(txt_SkillName);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
