#pragma once

// Name: Medieval Dynasty, Version: 0.6.0.3


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetPersonality
struct UBP_CharacterStatsComponent_C_SetPersonality_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.Debug
struct UBP_CharacterStatsComponent_C_Debug_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateFX
struct UBP_CharacterStatsComponent_C_UpdateFX_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.Consume
struct UBP_CharacterStatsComponent_C_Consume_Params
{
	float                                              Food;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              water;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Health;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Stamina;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Poison;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Alcohol;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseAlcoholWithTime
struct UBP_CharacterStatsComponent_C_DecreaseAlcoholWithTime_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseAlcohol
struct UBP_CharacterStatsComponent_C_DecreaseAlcohol_Params
{
	float                                              Alcohol;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseAlcohol
struct UBP_CharacterStatsComponent_C_IncreaseAlcohol_Params
{
	float                                              Alcohol;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseBuilderStack
struct UBP_CharacterStatsComponent_C_IncreaseBuilderStack_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseFarmerStack
struct UBP_CharacterStatsComponent_C_IncreaseFarmerStack_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.CheckStamina_Jump
struct UBP_CharacterStatsComponent_C_CheckStamina_Jump_Params
{
	bool                                               Enough;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetMaxSkillByProfession
struct UBP_CharacterStatsComponent_C_SetMaxSkillByProfession_Params
{
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.ApplySmoothTemperature
struct UBP_CharacterStatsComponent_C_ApplySmoothTemperature_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseSomnolenceWithTime
struct UBP_CharacterStatsComponent_C_IncreaseSomnolenceWithTime_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseSomnolence
struct UBP_CharacterStatsComponent_C_DecreaseSomnolence_Params
{
	float                                              Somnolence;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseSomnolence
struct UBP_CharacterStatsComponent_C_IncreaseSomnolence_Params
{
	float                                              Somnolence;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateOldness
struct UBP_CharacterStatsComponent_C_UpdateOldness_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnAgeChange
struct UBP_CharacterStatsComponent_C_OnAgeChange_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetTalentsLevels
struct UBP_CharacterStatsComponent_C_GetTalentsLevels_Params
{
	TArray<int>                                        ExtractionTalents;                                         // (Parm, OutParm)
	TArray<int>                                        HuntingTalents;                                            // (Parm, OutParm)
	TArray<int>                                        AnimalHusbandryTalents;                                    // (Parm, OutParm)
	TArray<int>                                        DiplomacyTalents;                                          // (Parm, OutParm)
	TArray<int>                                        SurvivalTalents;                                           // (Parm, OutParm)
	TArray<int>                                        CraftingTalents;                                           // (Parm, OutParm)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.InitTalents
struct UBP_CharacterStatsComponent_C_InitTalents_Params
{
	TArray<int>                                        ExtractionTalents;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<int>                                        HuntingTalents;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<int>                                        AnimalHusbandryTalents;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<int>                                        DiplomacyTalents;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<int>                                        SurvivalTalents;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<int>                                        CraftingTalents;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.RandomSkills
struct UBP_CharacterStatsComponent_C_RandomSkills_Params
{
	bool                                               Birth;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreasePoisoningWithTime
struct UBP_CharacterStatsComponent_C_DecreasePoisoningWithTime_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreasePoison
struct UBP_CharacterStatsComponent_C_DecreasePoison_Params
{
	float                                              Poison;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreasePoison
struct UBP_CharacterStatsComponent_C_IncreasePoison_Params
{
	float                                              Poison;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseHealthWithTime
struct UBP_CharacterStatsComponent_C_DecreaseHealthWithTime_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateSensedTemperature
struct UBP_CharacterStatsComponent_C_UpdateSensedTemperature_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetStats
struct UBP_CharacterStatsComponent_C_SetStats_Params
{
	float                                              Food;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              water;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Health;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DeadChance;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSick;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsInjured;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Mood;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetCharacterSkillAndTallents
struct UBP_CharacterStatsComponent_C_SetCharacterSkillAndTallents_Params
{
	bool                                               SetTalents;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_CharacterSkillsValues                   Extraction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FST_CharacterSkillsValues                   Hunting;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FST_CharacterSkillsValues                   Farming;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FST_CharacterSkillsValues                   Diplomacy;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FST_CharacterSkillsValues                   SurvivalS;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FST_CharacterSkillsValues                   Crafting;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.CheckStamina
struct UBP_CharacterStatsComponent_C_CheckStamina_Params
{
	float                                              Stamina;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Enough_;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseStamina_Jump
struct UBP_CharacterStatsComponent_C_DecreaseStamina_Jump_Params
{
	bool                                               Enough;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.InitLifeStats
struct UBP_CharacterStatsComponent_C_InitLifeStats_Params
{
	float                                              Health;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Stamina;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Food;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              water;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Somnolence;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Temperature;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Dirtiness;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Poison;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Poisoned;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Alcohol;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseStamina
struct UBP_CharacterStatsComponent_C_DecreaseStamina_Params
{
	float                                              Stamina;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Ditrtness;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Enough;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseStamina
struct UBP_CharacterStatsComponent_C_IncreaseStamina_Params
{
	float                                              Stamina;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseHealth
struct UBP_CharacterStatsComponent_C_DecreaseHealth_Params
{
	float                                              Health;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_DamageType_E_DamageType>             DamageType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseHealth
struct UBP_CharacterStatsComponent_C_IncreaseHealth_Params
{
	float                                              Health;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseWaterWithTime
struct UBP_CharacterStatsComponent_C_DecreaseWaterWithTime_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseWater
struct UBP_CharacterStatsComponent_C_DecreaseWater_Params
{
	float                                              water;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseWater
struct UBP_CharacterStatsComponent_C_IncreaseWater_Params
{
	float                                              water;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseFoodWithTime
struct UBP_CharacterStatsComponent_C_DecreaseFoodWithTime_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseFood
struct UBP_CharacterStatsComponent_C_DecreaseFood_Params
{
	float                                              Food;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseFood
struct UBP_CharacterStatsComponent_C_IncreaseFood_Params
{
	float                                              Food;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetDirtiness
struct UBP_CharacterStatsComponent_C_GetDirtiness_Params
{
	float                                              Dirtiness;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetDirtiness
struct UBP_CharacterStatsComponent_C_SetDirtiness_Params
{
	float                                              Dirtiness;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateDirtiness
struct UBP_CharacterStatsComponent_C_UpdateDirtiness_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.ResetSkillTalentPoints
struct UBP_CharacterStatsComponent_C_ResetSkillTalentPoints_Params
{
	TEnumAsByte<E_Skills_E_Skills>                     SkillToReset;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseExtractionStack
struct UBP_CharacterStatsComponent_C_IncreaseExtractionStack_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateHIConditionMultiplier
struct UBP_CharacterStatsComponent_C_UpdateHIConditionMultiplier_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateCrafting'sTalent
struct UBP_CharacterStatsComponent_C_UpdateCraftingsTalent_Params
{
	int                                                TalentID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateSurvival'sTalent
struct UBP_CharacterStatsComponent_C_UpdateSurvivalsTalent_Params
{
	int                                                TalentID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateDiplomacy'sTalent
struct UBP_CharacterStatsComponent_C_UpdateDiplomacysTalent_Params
{
	int                                                TalentID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateFarming'sTalent
struct UBP_CharacterStatsComponent_C_UpdateFarmingsTalent_Params
{
	int                                                TalentID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateExtraction'sTalent
struct UBP_CharacterStatsComponent_C_UpdateExtractionsTalent_Params
{
	int                                                TalentID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateHunter'sTalent
struct UBP_CharacterStatsComponent_C_UpdateHuntersTalent_Params
{
	int                                                TalentID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetSkillLevel
struct UBP_CharacterStatsComponent_C_GetSkillLevel_Params
{
	TEnumAsByte<E_Skills_E_Skills>                     SkillType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Level;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.DecreaseMood
struct UBP_CharacterStatsComponent_C_DecreaseMood_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseMood
struct UBP_CharacterStatsComponent_C_IncreaseMood_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetMaxSkill
struct UBP_CharacterStatsComponent_C_GetMaxSkill_Params
{
	TEnumAsByte<E_Skills_E_Skills>                     MaxSkill;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetCharacterStats
struct UBP_CharacterStatsComponent_C_GetCharacterStats_Params
{
	struct FText                                       Name;                                                      // (Parm, OutParm)
	TEnumAsByte<E_Sex_E_Sex>                           Sex;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Age;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Extraction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Hunting;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Farming;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Diplomacy;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Survival;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Crafting;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Mood;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetStats
struct UBP_CharacterStatsComponent_C_GetStats_Params
{
	struct FText                                       Name;                                                      // (Parm, OutParm)
	TEnumAsByte<E_Sex_E_Sex>                           Sex;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Age;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_CharacterType_E_CharacterType>       CharacterType;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Mood;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.AddSkills
struct UBP_CharacterStatsComponent_C_AddSkills_Params
{
	TEnumAsByte<E_Skills_E_Skills>                     Skill;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.GetSkills
struct UBP_CharacterStatsComponent_C_GetSkills_Params
{
	float                                              Extraction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Hunting;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AnimalHusbandry;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Diplomacy;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Survival;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Crafting;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.InitSkills
struct UBP_CharacterStatsComponent_C_InitSkills_Params
{
	int                                                ExtractionLevel;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ExtractionProgress;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ExtractionPointsToSpend;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HuntingLevel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HuntingProgress;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HuntingPointsToSpend;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AnimalHusbandryLevel;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AnimalHusbandryProgress;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AnimalHusbandryPointsToSpend;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DiplomacyLevel;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DiplomacyProgress;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DiplomacyPointsToSpend;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SurvivalLevel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SurvivalProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SurvivalPointsToSpend;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CraftingLevel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CraftingProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CraftingPointsToSpend;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseCrafting
struct UBP_CharacterStatsComponent_C_IncreaseCrafting_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AffectedByCraftingTalent;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AffectedBySewingTalent;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AffectedByCookingTalent;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseSurvival
struct UBP_CharacterStatsComponent_C_IncreaseSurvival_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AffectedByTalent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseDiplomacy
struct UBP_CharacterStatsComponent_C_IncreaseDiplomacy_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AffectedByTalent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseFarming
struct UBP_CharacterStatsComponent_C_IncreaseFarming_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AffectedByTalent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseHunting
struct UBP_CharacterStatsComponent_C_IncreaseHunting_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AffectedByTalent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseDeadChance
struct UBP_CharacterStatsComponent_C_IncreaseDeadChance_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.SetInitialStats
struct UBP_CharacterStatsComponent_C_SetInitialStats_Params
{
	struct FText                                       Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<E_Sex_E_Sex>                           Sex;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Age;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinDeadAge;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseExtraction
struct UBP_CharacterStatsComponent_C_IncreaseExtraction_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AffectedByTalent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.CheckDeadChance
struct UBP_CharacterStatsComponent_C_CheckDeadChance_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.IncreaseAge
struct UBP_CharacterStatsComponent_C_IncreaseAge_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StartStackCounting
struct UBP_CharacterStatsComponent_C_StartStackCounting_Params
{
	TEnumAsByte<E_TalentTrance_E_TalentTrance>         WoodcutterTrance_;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TranceTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateMinerStacks
struct UBP_CharacterStatsComponent_C_UpdateMinerStacks_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StopStackCounting
struct UBP_CharacterStatsComponent_C_StopStackCounting_Params
{
	TEnumAsByte<E_TalentTrance_E_TalentTrance>         Woodcutter;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateStats
struct UBP_CharacterStatsComponent_C_UpdateStats_Params
{
	int                                                IteratorNumber;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StartTimer_Stamina
struct UBP_CharacterStatsComponent_C_StartTimer_Stamina_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.StopTimer_Stamina
struct UBP_CharacterStatsComponent_C_StopTimer_Stamina_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OpenStaminaGate
struct UBP_CharacterStatsComponent_C_OpenStaminaGate_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.CloseStaminaGate
struct UBP_CharacterStatsComponent_C_CloseStaminaGate_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateStamina
struct UBP_CharacterStatsComponent_C_UpdateStamina_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.InitStatComponent
struct UBP_CharacterStatsComponent_C_InitStatComponent_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.ResetStats
struct UBP_CharacterStatsComponent_C_ResetStats_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateOnSeasonChanged
struct UBP_CharacterStatsComponent_C_UpdateOnSeasonChanged_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateWoodcutterStacks
struct UBP_CharacterStatsComponent_C_UpdateWoodcutterStacks_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateFarmerStacks
struct UBP_CharacterStatsComponent_C_UpdateFarmerStacks_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.UpdateBuilderStacks
struct UBP_CharacterStatsComponent_C_UpdateBuilderStacks_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.ReceiveTick
struct UBP_CharacterStatsComponent_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.WaterBlink
struct UBP_CharacterStatsComponent_C_WaterBlink_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.FoodBlink
struct UBP_CharacterStatsComponent_C_FoodBlink_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.PoisonBlink
struct UBP_CharacterStatsComponent_C_PoisonBlink_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.ExecuteUbergraph_BP_CharacterStatsComponent
struct UBP_CharacterStatsComponent_C_ExecuteUbergraph_BP_CharacterStatsComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnAlcoholChange__DelegateSignature
struct UBP_CharacterStatsComponent_C_OnAlcoholChange__DelegateSignature_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnWaterChange__DelegateSignature
struct UBP_CharacterStatsComponent_C_OnWaterChange__DelegateSignature_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnFoodChange__DelegateSignature
struct UBP_CharacterStatsComponent_C_OnFoodChange__DelegateSignature_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnDead__DelegateSignature
struct UBP_CharacterStatsComponent_C_OnDead__DelegateSignature_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnDirtinessChange__DelegateSignature
struct UBP_CharacterStatsComponent_C_OnDirtinessChange__DelegateSignature_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnTemperatureChange__DelegateSignature
struct UBP_CharacterStatsComponent_C_OnTemperatureChange__DelegateSignature_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnPoisonStart__DelegateSignature
struct UBP_CharacterStatsComponent_C_OnPoisonStart__DelegateSignature_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnStaminaStartIncreasing__DelegateSignature
struct UBP_CharacterStatsComponent_C_OnStaminaStartIncreasing__DelegateSignature_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnHealthChange__DelegateSignature
struct UBP_CharacterStatsComponent_C_OnHealthChange__DelegateSignature_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnEncumbered__DelegateSignature
struct UBP_CharacterStatsComponent_C_OnEncumbered__DelegateSignature_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnStaminaChange__DelegateSignature
struct UBP_CharacterStatsComponent_C_OnStaminaChange__DelegateSignature_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnPoisonChange__DelegateSignature
struct UBP_CharacterStatsComponent_C_OnPoisonChange__DelegateSignature_Params
{
};

// Function BP_CharacterStatsComponent.BP_CharacterStatsComponent_C.OnSkillChange__DelegateSignature
struct UBP_CharacterStatsComponent_C_OnSkillChange__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
