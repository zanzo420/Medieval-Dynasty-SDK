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

// Function UI_Assignments_ProfessionPower.UI_Assignments_ProfessionPower_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Assignments_ProfessionPower_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignments_ProfessionPower.UI_Assignments_ProfessionPower_C.Construct");

	UUI_Assignments_ProfessionPower_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Assignments_ProfessionPower.UI_Assignments_ProfessionPower_C.UpdatePower
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UsedPower                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Assignments_ProfessionPower_C::UpdatePower(int UsedPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignments_ProfessionPower.UI_Assignments_ProfessionPower_C.UpdatePower");

	UUI_Assignments_ProfessionPower_C_UpdatePower_Params params;
	params.UsedPower = UsedPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Assignments_ProfessionPower.UI_Assignments_ProfessionPower_C.ExecuteUbergraph_UI_Assignments_ProfessionPower
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Assignments_ProfessionPower_C::ExecuteUbergraph_UI_Assignments_ProfessionPower(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Assignments_ProfessionPower.UI_Assignments_ProfessionPower_C.ExecuteUbergraph_UI_Assignments_ProfessionPower");

	UUI_Assignments_ProfessionPower_C_ExecuteUbergraph_UI_Assignments_ProfessionPower_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_Assignments_ProfessionPower_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(DirtnessBar, UImage);
	READ_PTR_FULL(SkillIcon, UImage);
	READ_PTR_FULL(slider_QuantityToDrop, USlider);
	READ_PTR_FULL(txt_Profession, UTextBlock);
	READ_PTR_FULL(txt_SkillName, UTextBlock);
	READ_PTR_FULL(txt_TotalSkill, UTextBlock);
	READ_PTR_FULL(txt_UsedPower, UTextBlock);
}

void UUI_Assignments_ProfessionPower_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(DirtnessBar);
	DELE_PTR_FULL(SkillIcon);
	DELE_PTR_FULL(slider_QuantityToDrop);
	DELE_PTR_FULL(txt_Profession);
	DELE_PTR_FULL(txt_SkillName);
	DELE_PTR_FULL(txt_TotalSkill);
	DELE_PTR_FULL(txt_UsedPower);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
