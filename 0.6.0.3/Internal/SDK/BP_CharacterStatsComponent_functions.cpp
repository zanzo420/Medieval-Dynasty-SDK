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

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetPersonality
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::SetPersonality()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetPersonality");

	UBP_CharacterStatsComponent_C_SetPersonality_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.Debug
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::Debug()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.Debug");

	UBP_CharacterStatsComponent_C_Debug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateFX
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::UpdateFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateFX");

	UBP_CharacterStatsComponent_C_UpdateFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.Consume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Food                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          water                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Health                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Stamina                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Poison                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Alcohol                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::Consume(float Food, float water, float Health, float Stamina, float Poison, float Alcohol)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.Consume");

	UBP_CharacterStatsComponent_C_Consume_Params params;
	params.Food = Food;
	params.water = water;
	params.Health = Health;
	params.Stamina = Stamina;
	params.Poison = Poison;
	params.Alcohol = Alcohol;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseAlcoholWithTime
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::DecreaseAlcoholWithTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseAlcoholWithTime");

	UBP_CharacterStatsComponent_C_DecreaseAlcoholWithTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseAlcohol
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alcohol                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::DecreaseAlcohol(float Alcohol)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseAlcohol");

	UBP_CharacterStatsComponent_C_DecreaseAlcohol_Params params;
	params.Alcohol = Alcohol;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseAlcohol
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alcohol                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::IncreaseAlcohol(float Alcohol)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseAlcohol");

	UBP_CharacterStatsComponent_C_IncreaseAlcohol_Params params;
	params.Alcohol = Alcohol;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseBuilderStack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::IncreaseBuilderStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseBuilderStack");

	UBP_CharacterStatsComponent_C_IncreaseBuilderStack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseFarmerStack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::IncreaseFarmerStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseFarmerStack");

	UBP_CharacterStatsComponent_C_IncreaseFarmerStack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.CheckStamina_Jump
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Enough                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_CharacterStatsComponent_C::CheckStamina_Jump(bool* Enough)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.CheckStamina_Jump");

	UBP_CharacterStatsComponent_C_CheckStamina_Jump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Enough != nullptr)
		*Enough = params.Enough;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetMaxSkillByProfession
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Profession_E_Profession> Profession                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::SetMaxSkillByProfession(TEnumAsByte<E_Profession_E_Profession> Profession)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetMaxSkillByProfession");

	UBP_CharacterStatsComponent_C_SetMaxSkillByProfession_Params params;
	params.Profession = Profession;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.ApplySmoothTemperature
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::ApplySmoothTemperature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.ApplySmoothTemperature");

	UBP_CharacterStatsComponent_C_ApplySmoothTemperature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseSomnolenceWithTime
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::IncreaseSomnolenceWithTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseSomnolenceWithTime");

	UBP_CharacterStatsComponent_C_IncreaseSomnolenceWithTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseSomnolence
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Somnolence                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::DecreaseSomnolence(float Somnolence)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseSomnolence");

	UBP_CharacterStatsComponent_C_DecreaseSomnolence_Params params;
	params.Somnolence = Somnolence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseSomnolence
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Somnolence                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::IncreaseSomnolence(float Somnolence)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseSomnolence");

	UBP_CharacterStatsComponent_C_IncreaseSomnolence_Params params;
	params.Somnolence = Somnolence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateOldness
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::UpdateOldness()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateOldness");

	UBP_CharacterStatsComponent_C_UpdateOldness_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnAgeChange
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::OnAgeChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnAgeChange");

	UBP_CharacterStatsComponent_C_OnAgeChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetTalentsLevels
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<int>                    ExtractionTalents              (Parm, OutParm)
// TArray<int>                    HuntingTalents                 (Parm, OutParm)
// TArray<int>                    AnimalHusbandryTalents         (Parm, OutParm)
// TArray<int>                    DiplomacyTalents               (Parm, OutParm)
// TArray<int>                    SurvivalTalents                (Parm, OutParm)
// TArray<int>                    CraftingTalents                (Parm, OutParm)
void UBP_CharacterStatsComponent_C::GetTalentsLevels(TArray<int>* ExtractionTalents, TArray<int>* HuntingTalents, TArray<int>* AnimalHusbandryTalents, TArray<int>* DiplomacyTalents, TArray<int>* SurvivalTalents, TArray<int>* CraftingTalents)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetTalentsLevels");

	UBP_CharacterStatsComponent_C_GetTalentsLevels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ExtractionTalents != nullptr)
		*ExtractionTalents = params.ExtractionTalents;
	if (HuntingTalents != nullptr)
		*HuntingTalents = params.HuntingTalents;
	if (AnimalHusbandryTalents != nullptr)
		*AnimalHusbandryTalents = params.AnimalHusbandryTalents;
	if (DiplomacyTalents != nullptr)
		*DiplomacyTalents = params.DiplomacyTalents;
	if (SurvivalTalents != nullptr)
		*SurvivalTalents = params.SurvivalTalents;
	if (CraftingTalents != nullptr)
		*CraftingTalents = params.CraftingTalents;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.InitTalents
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    ExtractionTalents              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<int>                    HuntingTalents                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<int>                    AnimalHusbandryTalents         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<int>                    DiplomacyTalents               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<int>                    SurvivalTalents                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<int>                    CraftingTalents                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_CharacterStatsComponent_C::InitTalents(TArray<int>* ExtractionTalents, TArray<int>* HuntingTalents, TArray<int>* AnimalHusbandryTalents, TArray<int>* DiplomacyTalents, TArray<int>* SurvivalTalents, TArray<int>* CraftingTalents)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.InitTalents");

	UBP_CharacterStatsComponent_C_InitTalents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ExtractionTalents != nullptr)
		*ExtractionTalents = params.ExtractionTalents;
	if (HuntingTalents != nullptr)
		*HuntingTalents = params.HuntingTalents;
	if (AnimalHusbandryTalents != nullptr)
		*AnimalHusbandryTalents = params.AnimalHusbandryTalents;
	if (DiplomacyTalents != nullptr)
		*DiplomacyTalents = params.DiplomacyTalents;
	if (SurvivalTalents != nullptr)
		*SurvivalTalents = params.SurvivalTalents;
	if (CraftingTalents != nullptr)
		*CraftingTalents = params.CraftingTalents;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.RandomSkills
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Birth                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_CharacterStatsComponent_C::RandomSkills(bool Birth)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.RandomSkills");

	UBP_CharacterStatsComponent_C_RandomSkills_Params params;
	params.Birth = Birth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreasePoisoningWithTime
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::DecreasePoisoningWithTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreasePoisoningWithTime");

	UBP_CharacterStatsComponent_C_DecreasePoisoningWithTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreasePoison
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Poison                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::DecreasePoison(float Poison)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreasePoison");

	UBP_CharacterStatsComponent_C_DecreasePoison_Params params;
	params.Poison = Poison;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreasePoison
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Poison                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::IncreasePoison(float Poison)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreasePoison");

	UBP_CharacterStatsComponent_C_IncreasePoison_Params params;
	params.Poison = Poison;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseHealthWithTime
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::DecreaseHealthWithTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseHealthWithTime");

	UBP_CharacterStatsComponent_C_DecreaseHealthWithTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateSensedTemperature
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::UpdateSensedTemperature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateSensedTemperature");

	UBP_CharacterStatsComponent_C_UpdateSensedTemperature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetStats
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Food                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          water                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Health                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            DeadChance                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsSick                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsInjured                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Mood                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::SetStats(float Food, float water, float Health, int DeadChance, bool IsSick, bool IsInjured, float Mood)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetStats");

	UBP_CharacterStatsComponent_C_SetStats_Params params;
	params.Food = Food;
	params.water = water;
	params.Health = Health;
	params.DeadChance = DeadChance;
	params.IsSick = IsSick;
	params.IsInjured = IsInjured;
	params.Mood = Mood;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetCharacterSkillAndTallents
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetTalents                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_CharacterSkillsValues Extraction                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FST_CharacterSkillsValues Hunting                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FST_CharacterSkillsValues Farming                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FST_CharacterSkillsValues Diplomacy                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FST_CharacterSkillsValues SurvivalS                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FST_CharacterSkillsValues Crafting                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::SetCharacterSkillAndTallents(bool SetTalents, const struct FST_CharacterSkillsValues& Extraction, const struct FST_CharacterSkillsValues& Hunting, const struct FST_CharacterSkillsValues& Farming, const struct FST_CharacterSkillsValues& Diplomacy, const struct FST_CharacterSkillsValues& SurvivalS, const struct FST_CharacterSkillsValues& Crafting)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetCharacterSkillAndTallents");

	UBP_CharacterStatsComponent_C_SetCharacterSkillAndTallents_Params params;
	params.SetTalents = SetTalents;
	params.Extraction = Extraction;
	params.Hunting = Hunting;
	params.Farming = Farming;
	params.Diplomacy = Diplomacy;
	params.SurvivalS = SurvivalS;
	params.Crafting = Crafting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.CheckStamina
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Stamina                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Enough_                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_CharacterStatsComponent_C::CheckStamina(float Stamina, bool* Enough_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.CheckStamina");

	UBP_CharacterStatsComponent_C_CheckStamina_Params params;
	params.Stamina = Stamina;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Enough_ != nullptr)
		*Enough_ = params.Enough_;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseStamina_Jump
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enough                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_CharacterStatsComponent_C::DecreaseStamina_Jump(bool* Enough)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseStamina_Jump");

	UBP_CharacterStatsComponent_C_DecreaseStamina_Jump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Enough != nullptr)
		*Enough = params.Enough;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.InitLifeStats
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Health                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Stamina                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Food                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          water                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Somnolence                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Temperature                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Dirtiness                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Poison                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Poisoned                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Alcohol                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::InitLifeStats(float Health, float Stamina, float Food, float water, float Somnolence, float Temperature, float Dirtiness, float Poison, bool Poisoned, float Alcohol)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.InitLifeStats");

	UBP_CharacterStatsComponent_C_InitLifeStats_Params params;
	params.Health = Health;
	params.Stamina = Stamina;
	params.Food = Food;
	params.water = water;
	params.Somnolence = Somnolence;
	params.Temperature = Temperature;
	params.Dirtiness = Dirtiness;
	params.Poison = Poison;
	params.Poisoned = Poisoned;
	params.Alcohol = Alcohol;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseStamina
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Stamina                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Ditrtness                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Enough                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_CharacterStatsComponent_C::DecreaseStamina(float Stamina, bool Ditrtness, bool* Enough)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseStamina");

	UBP_CharacterStatsComponent_C_DecreaseStamina_Params params;
	params.Stamina = Stamina;
	params.Ditrtness = Ditrtness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Enough != nullptr)
		*Enough = params.Enough;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseStamina
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Stamina                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::IncreaseStamina(float Stamina)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseStamina");

	UBP_CharacterStatsComponent_C_IncreaseStamina_Params params;
	params.Stamina = Stamina;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseHealth
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Health                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_DamageType_E_DamageType> DamageType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::DecreaseHealth(float Health, TEnumAsByte<E_DamageType_E_DamageType> DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseHealth");

	UBP_CharacterStatsComponent_C_DecreaseHealth_Params params;
	params.Health = Health;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Health                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::IncreaseHealth(float Health)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseHealth");

	UBP_CharacterStatsComponent_C_IncreaseHealth_Params params;
	params.Health = Health;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseWaterWithTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::DecreaseWaterWithTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseWaterWithTime");

	UBP_CharacterStatsComponent_C_DecreaseWaterWithTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseWater
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          water                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::DecreaseWater(float water)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseWater");

	UBP_CharacterStatsComponent_C_DecreaseWater_Params params;
	params.water = water;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseWater
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          water                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::IncreaseWater(float water)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseWater");

	UBP_CharacterStatsComponent_C_IncreaseWater_Params params;
	params.water = water;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseFoodWithTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::DecreaseFoodWithTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseFoodWithTime");

	UBP_CharacterStatsComponent_C_DecreaseFoodWithTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseFood
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Food                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::DecreaseFood(float Food)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseFood");

	UBP_CharacterStatsComponent_C_DecreaseFood_Params params;
	params.Food = Food;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseFood
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Food                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::IncreaseFood(float Food)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseFood");

	UBP_CharacterStatsComponent_C_IncreaseFood_Params params;
	params.Food = Food;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetDirtiness
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Dirtiness                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::GetDirtiness(float* Dirtiness)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetDirtiness");

	UBP_CharacterStatsComponent_C_GetDirtiness_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Dirtiness != nullptr)
		*Dirtiness = params.Dirtiness;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetDirtiness
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Dirtiness                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::SetDirtiness(float Dirtiness)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetDirtiness");

	UBP_CharacterStatsComponent_C_SetDirtiness_Params params;
	params.Dirtiness = Dirtiness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateDirtiness
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::UpdateDirtiness(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateDirtiness");

	UBP_CharacterStatsComponent_C_UpdateDirtiness_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.ResetSkillTalentPoints
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Skills_E_Skills> SkillToReset                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::ResetSkillTalentPoints(TEnumAsByte<E_Skills_E_Skills> SkillToReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.ResetSkillTalentPoints");

	UBP_CharacterStatsComponent_C_ResetSkillTalentPoints_Params params;
	params.SkillToReset = SkillToReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseExtractionStack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::IncreaseExtractionStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseExtractionStack");

	UBP_CharacterStatsComponent_C_IncreaseExtractionStack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateHIConditionMultiplier
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::UpdateHIConditionMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateHIConditionMultiplier");

	UBP_CharacterStatsComponent_C_UpdateHIConditionMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateCrafting'sTalent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TalentID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::UpdateCraftingsTalent(int TalentID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateCrafting'sTalent");

	UBP_CharacterStatsComponent_C_UpdateCraftingsTalent_Params params;
	params.TalentID = TalentID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateSurvival'sTalent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TalentID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::UpdateSurvivalsTalent(int TalentID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateSurvival'sTalent");

	UBP_CharacterStatsComponent_C_UpdateSurvivalsTalent_Params params;
	params.TalentID = TalentID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateDiplomacy'sTalent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TalentID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::UpdateDiplomacysTalent(int TalentID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateDiplomacy'sTalent");

	UBP_CharacterStatsComponent_C_UpdateDiplomacysTalent_Params params;
	params.TalentID = TalentID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateFarming'sTalent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TalentID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::UpdateFarmingsTalent(int TalentID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateFarming'sTalent");

	UBP_CharacterStatsComponent_C_UpdateFarmingsTalent_Params params;
	params.TalentID = TalentID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateExtraction'sTalent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TalentID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::UpdateExtractionsTalent(int TalentID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateExtraction'sTalent");

	UBP_CharacterStatsComponent_C_UpdateExtractionsTalent_Params params;
	params.TalentID = TalentID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateHunter'sTalent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TalentID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::UpdateHuntersTalent(int TalentID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateHunter'sTalent");

	UBP_CharacterStatsComponent_C_UpdateHuntersTalent_Params params;
	params.TalentID = TalentID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetSkillLevel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_Skills_E_Skills> SkillType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Level                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::GetSkillLevel(TEnumAsByte<E_Skills_E_Skills> SkillType, int* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetSkillLevel");

	UBP_CharacterStatsComponent_C_GetSkillLevel_Params params;
	params.SkillType = SkillType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Level != nullptr)
		*Level = params.Level;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseMood
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::DecreaseMood(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseMood");

	UBP_CharacterStatsComponent_C_DecreaseMood_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseMood
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::IncreaseMood(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseMood");

	UBP_CharacterStatsComponent_C_IncreaseMood_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetMaxSkill
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Skills_E_Skills> MaxSkill                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::GetMaxSkill(TEnumAsByte<E_Skills_E_Skills>* MaxSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetMaxSkill");

	UBP_CharacterStatsComponent_C_GetMaxSkill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MaxSkill != nullptr)
		*MaxSkill = params.MaxSkill;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetCharacterStats
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Name                           (Parm, OutParm)
// TEnumAsByte<E_Sex_E_Sex>       Sex                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Age                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Extraction                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Hunting                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Farming                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Diplomacy                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Survival                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Crafting                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Mood                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::GetCharacterStats(struct FText* Name, TEnumAsByte<E_Sex_E_Sex>* Sex, float* Age, float* Extraction, float* Hunting, float* Farming, float* Diplomacy, float* Survival, float* Crafting, float* Mood)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetCharacterStats");

	UBP_CharacterStatsComponent_C_GetCharacterStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
	if (Sex != nullptr)
		*Sex = params.Sex;
	if (Age != nullptr)
		*Age = params.Age;
	if (Extraction != nullptr)
		*Extraction = params.Extraction;
	if (Hunting != nullptr)
		*Hunting = params.Hunting;
	if (Farming != nullptr)
		*Farming = params.Farming;
	if (Diplomacy != nullptr)
		*Diplomacy = params.Diplomacy;
	if (Survival != nullptr)
		*Survival = params.Survival;
	if (Crafting != nullptr)
		*Crafting = params.Crafting;
	if (Mood != nullptr)
		*Mood = params.Mood;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetStats
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Name                           (Parm, OutParm)
// TEnumAsByte<E_Sex_E_Sex>       Sex                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Age                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_CharacterType_E_CharacterType> CharacterType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Mood                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::GetStats(struct FText* Name, TEnumAsByte<E_Sex_E_Sex>* Sex, float* Age, TEnumAsByte<E_CharacterType_E_CharacterType>* CharacterType, float* Mood)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetStats");

	UBP_CharacterStatsComponent_C_GetStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
	if (Sex != nullptr)
		*Sex = params.Sex;
	if (Age != nullptr)
		*Age = params.Age;
	if (CharacterType != nullptr)
		*CharacterType = params.CharacterType;
	if (Mood != nullptr)
		*Mood = params.Mood;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.AddSkills
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Skills_E_Skills> Skill                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::AddSkills(TEnumAsByte<E_Skills_E_Skills> Skill, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.AddSkills");

	UBP_CharacterStatsComponent_C_AddSkills_Params params;
	params.Skill = Skill;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetSkills
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Extraction                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Hunting                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          AnimalHusbandry                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Diplomacy                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Survival                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Crafting                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::GetSkills(float* Extraction, float* Hunting, float* AnimalHusbandry, float* Diplomacy, float* Survival, float* Crafting)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetSkills");

	UBP_CharacterStatsComponent_C_GetSkills_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Extraction != nullptr)
		*Extraction = params.Extraction;
	if (Hunting != nullptr)
		*Hunting = params.Hunting;
	if (AnimalHusbandry != nullptr)
		*AnimalHusbandry = params.AnimalHusbandry;
	if (Diplomacy != nullptr)
		*Diplomacy = params.Diplomacy;
	if (Survival != nullptr)
		*Survival = params.Survival;
	if (Crafting != nullptr)
		*Crafting = params.Crafting;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.InitSkills
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ExtractionLevel                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ExtractionProgress             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ExtractionPointsToSpend        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            HuntingLevel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          HuntingProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            HuntingPointsToSpend           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            AnimalHusbandryLevel           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          AnimalHusbandryProgress        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            AnimalHusbandryPointsToSpend   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            DiplomacyLevel                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DiplomacyProgress              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            DiplomacyPointsToSpend         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            SurvivalLevel                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SurvivalProgress               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            SurvivalPointsToSpend          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            CraftingLevel                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          CraftingProgress               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            CraftingPointsToSpend          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::InitSkills(int ExtractionLevel, float ExtractionProgress, int ExtractionPointsToSpend, int HuntingLevel, float HuntingProgress, int HuntingPointsToSpend, int AnimalHusbandryLevel, float AnimalHusbandryProgress, int AnimalHusbandryPointsToSpend, int DiplomacyLevel, float DiplomacyProgress, int DiplomacyPointsToSpend, int SurvivalLevel, float SurvivalProgress, int SurvivalPointsToSpend, int CraftingLevel, float CraftingProgress, int CraftingPointsToSpend)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.InitSkills");

	UBP_CharacterStatsComponent_C_InitSkills_Params params;
	params.ExtractionLevel = ExtractionLevel;
	params.ExtractionProgress = ExtractionProgress;
	params.ExtractionPointsToSpend = ExtractionPointsToSpend;
	params.HuntingLevel = HuntingLevel;
	params.HuntingProgress = HuntingProgress;
	params.HuntingPointsToSpend = HuntingPointsToSpend;
	params.AnimalHusbandryLevel = AnimalHusbandryLevel;
	params.AnimalHusbandryProgress = AnimalHusbandryProgress;
	params.AnimalHusbandryPointsToSpend = AnimalHusbandryPointsToSpend;
	params.DiplomacyLevel = DiplomacyLevel;
	params.DiplomacyProgress = DiplomacyProgress;
	params.DiplomacyPointsToSpend = DiplomacyPointsToSpend;
	params.SurvivalLevel = SurvivalLevel;
	params.SurvivalProgress = SurvivalProgress;
	params.SurvivalPointsToSpend = SurvivalPointsToSpend;
	params.CraftingLevel = CraftingLevel;
	params.CraftingProgress = CraftingProgress;
	params.CraftingPointsToSpend = CraftingPointsToSpend;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseCrafting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           AffectedByCraftingTalent       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           AffectedBySewingTalent         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           AffectedByCookingTalent        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_CharacterStatsComponent_C::IncreaseCrafting(float Value, bool AffectedByCraftingTalent, bool AffectedBySewingTalent, bool AffectedByCookingTalent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseCrafting");

	UBP_CharacterStatsComponent_C_IncreaseCrafting_Params params;
	params.Value = Value;
	params.AffectedByCraftingTalent = AffectedByCraftingTalent;
	params.AffectedBySewingTalent = AffectedBySewingTalent;
	params.AffectedByCookingTalent = AffectedByCookingTalent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseSurvival
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           AffectedByTalent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_CharacterStatsComponent_C::IncreaseSurvival(float Value, bool AffectedByTalent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseSurvival");

	UBP_CharacterStatsComponent_C_IncreaseSurvival_Params params;
	params.Value = Value;
	params.AffectedByTalent = AffectedByTalent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseDiplomacy
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           AffectedByTalent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_CharacterStatsComponent_C::IncreaseDiplomacy(float Value, bool AffectedByTalent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseDiplomacy");

	UBP_CharacterStatsComponent_C_IncreaseDiplomacy_Params params;
	params.Value = Value;
	params.AffectedByTalent = AffectedByTalent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseFarming
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           AffectedByTalent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_CharacterStatsComponent_C::IncreaseFarming(float Value, bool AffectedByTalent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseFarming");

	UBP_CharacterStatsComponent_C_IncreaseFarming_Params params;
	params.Value = Value;
	params.AffectedByTalent = AffectedByTalent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseHunting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           AffectedByTalent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_CharacterStatsComponent_C::IncreaseHunting(float Value, bool AffectedByTalent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseHunting");

	UBP_CharacterStatsComponent_C_IncreaseHunting_Params params;
	params.Value = Value;
	params.AffectedByTalent = AffectedByTalent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseDeadChance
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::IncreaseDeadChance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseDeadChance");

	UBP_CharacterStatsComponent_C_IncreaseDeadChance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetInitialStats
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<E_Sex_E_Sex>       Sex                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Age                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MinDeadAge                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::SetInitialStats(const struct FText& Name, TEnumAsByte<E_Sex_E_Sex> Sex, float Age, float MinDeadAge)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetInitialStats");

	UBP_CharacterStatsComponent_C_SetInitialStats_Params params;
	params.Name = Name;
	params.Sex = Sex;
	params.Age = Age;
	params.MinDeadAge = MinDeadAge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseExtraction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           AffectedByTalent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_CharacterStatsComponent_C::IncreaseExtraction(float Value, bool AffectedByTalent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseExtraction");

	UBP_CharacterStatsComponent_C_IncreaseExtraction_Params params;
	params.Value = Value;
	params.AffectedByTalent = AffectedByTalent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.CheckDeadChance
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::CheckDeadChance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.CheckDeadChance");

	UBP_CharacterStatsComponent_C_CheckDeadChance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseAge
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::IncreaseAge()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseAge");

	UBP_CharacterStatsComponent_C_IncreaseAge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StartStackCounting
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_TalentTrance_E_TalentTrance> WoodcutterTrance_              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TranceTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::StartStackCounting(TEnumAsByte<E_TalentTrance_E_TalentTrance> WoodcutterTrance_, float TranceTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StartStackCounting");

	UBP_CharacterStatsComponent_C_StartStackCounting_Params params;
	params.WoodcutterTrance_ = WoodcutterTrance_;
	params.TranceTime = TranceTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateMinerStacks
// (BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::UpdateMinerStacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateMinerStacks");

	UBP_CharacterStatsComponent_C_UpdateMinerStacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StopStackCounting
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_TalentTrance_E_TalentTrance> Woodcutter                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::StopStackCounting(TEnumAsByte<E_TalentTrance_E_TalentTrance> Woodcutter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StopStackCounting");

	UBP_CharacterStatsComponent_C_StopStackCounting_Params params;
	params.Woodcutter = Woodcutter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateStats
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IteratorNumber                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::UpdateStats(int IteratorNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateStats");

	UBP_CharacterStatsComponent_C_UpdateStats_Params params;
	params.IteratorNumber = IteratorNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StartTimer_Stamina
// (BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::StartTimer_Stamina()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StartTimer_Stamina");

	UBP_CharacterStatsComponent_C_StartTimer_Stamina_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StopTimer_Stamina
// (BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::StopTimer_Stamina()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StopTimer_Stamina");

	UBP_CharacterStatsComponent_C_StopTimer_Stamina_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OpenStaminaGate
// (BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::OpenStaminaGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OpenStaminaGate");

	UBP_CharacterStatsComponent_C_OpenStaminaGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.CloseStaminaGate
// (BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::CloseStaminaGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.CloseStaminaGate");

	UBP_CharacterStatsComponent_C_CloseStaminaGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateStamina
// (BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::UpdateStamina()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateStamina");

	UBP_CharacterStatsComponent_C_UpdateStamina_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.InitStatComponent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::InitStatComponent(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.InitStatComponent");

	UBP_CharacterStatsComponent_C_InitStatComponent_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.ResetStats
// (BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::ResetStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.ResetStats");

	UBP_CharacterStatsComponent_C_ResetStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateOnSeasonChanged
// (BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::UpdateOnSeasonChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateOnSeasonChanged");

	UBP_CharacterStatsComponent_C_UpdateOnSeasonChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateWoodcutterStacks
// (BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::UpdateWoodcutterStacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateWoodcutterStacks");

	UBP_CharacterStatsComponent_C_UpdateWoodcutterStacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateFarmerStacks
// (BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::UpdateFarmerStacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateFarmerStacks");

	UBP_CharacterStatsComponent_C_UpdateFarmerStacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateBuilderStacks
// (BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::UpdateBuilderStacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateBuilderStacks");

	UBP_CharacterStatsComponent_C_UpdateBuilderStacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.ReceiveTick");

	UBP_CharacterStatsComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.WaterBlink
// (BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::WaterBlink()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.WaterBlink");

	UBP_CharacterStatsComponent_C_WaterBlink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.FoodBlink
// (BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::FoodBlink()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.FoodBlink");

	UBP_CharacterStatsComponent_C_FoodBlink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.PoisonBlink
// (BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::PoisonBlink()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.PoisonBlink");

	UBP_CharacterStatsComponent_C_PoisonBlink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.ExecuteUbergraph_BP_CharacterStatsComponent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterStatsComponent_C::ExecuteUbergraph_BP_CharacterStatsComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.ExecuteUbergraph_BP_CharacterStatsComponent");

	UBP_CharacterStatsComponent_C_ExecuteUbergraph_BP_CharacterStatsComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnAlcoholChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::OnAlcoholChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnAlcoholChange__DelegateSignature");

	UBP_CharacterStatsComponent_C_OnAlcoholChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnWaterChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::OnWaterChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnWaterChange__DelegateSignature");

	UBP_CharacterStatsComponent_C_OnWaterChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnFoodChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::OnFoodChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnFoodChange__DelegateSignature");

	UBP_CharacterStatsComponent_C_OnFoodChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnDead__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::OnDead__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnDead__DelegateSignature");

	UBP_CharacterStatsComponent_C_OnDead__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnDirtinessChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::OnDirtinessChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnDirtinessChange__DelegateSignature");

	UBP_CharacterStatsComponent_C_OnDirtinessChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnTemperatureChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::OnTemperatureChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnTemperatureChange__DelegateSignature");

	UBP_CharacterStatsComponent_C_OnTemperatureChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnPoisonStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::OnPoisonStart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnPoisonStart__DelegateSignature");

	UBP_CharacterStatsComponent_C_OnPoisonStart__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnStaminaStartIncreasing__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::OnStaminaStartIncreasing__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnStaminaStartIncreasing__DelegateSignature");

	UBP_CharacterStatsComponent_C_OnStaminaStartIncreasing__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnHealthChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::OnHealthChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnHealthChange__DelegateSignature");

	UBP_CharacterStatsComponent_C_OnHealthChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnEncumbered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::OnEncumbered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnEncumbered__DelegateSignature");

	UBP_CharacterStatsComponent_C_OnEncumbered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnStaminaChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::OnStaminaChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnStaminaChange__DelegateSignature");

	UBP_CharacterStatsComponent_C_OnStaminaChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnPoisonChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::OnPoisonChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnPoisonChange__DelegateSignature");

	UBP_CharacterStatsComponent_C_OnPoisonChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnSkillChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_CharacterStatsComponent_C::OnSkillChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnSkillChange__DelegateSignature");

	UBP_CharacterStatsComponent_C_OnSkillChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
