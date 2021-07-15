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

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.RemoveAnimalFromSystems
struct UBP_AnimalStatsComponent_C_RemoveAnimalFromSystems_Params
{
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.CheckStamina_Jump
struct UBP_AnimalStatsComponent_C_CheckStamina_Jump_Params
{
	bool                                               Enough_;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.CheckStamina
struct UBP_AnimalStatsComponent_C_CheckStamina_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Enough_;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.DecreaseStamina_Jump
struct UBP_AnimalStatsComponent_C_DecreaseStamina_Jump_Params
{
	bool                                               Enough;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.DecreaseStamina
struct UBP_AnimalStatsComponent_C_DecreaseStamina_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Enough;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.IncreaseStamina
struct UBP_AnimalStatsComponent_C_IncreaseStamina_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.OnAnimalAgeStageChange
struct UBP_AnimalStatsComponent_C_OnAnimalAgeStageChange_Params
{
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.OnAgeChange
struct UBP_AnimalStatsComponent_C_OnAgeChange_Params
{
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.SetStats
struct UBP_AnimalStatsComponent_C_SetStats_Params
{
	float                                              Food;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              water;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Health;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DeadChance;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSick;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsInjured;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Mood;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.InitLifeStats
struct UBP_AnimalStatsComponent_C_InitLifeStats_Params
{
	float                                              Health;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Stamina;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Food;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              water;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Dirtiness;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.DecreaseHealth
struct UBP_AnimalStatsComponent_C_DecreaseHealth_Params
{
	float                                              Health;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.IncreaseHealth
struct UBP_AnimalStatsComponent_C_IncreaseHealth_Params
{
	float                                              Health;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.DecreaseWater
struct UBP_AnimalStatsComponent_C_DecreaseWater_Params
{
	float                                              water;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.IncreaseWater
struct UBP_AnimalStatsComponent_C_IncreaseWater_Params
{
	float                                              water;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.DecreaseFood
struct UBP_AnimalStatsComponent_C_DecreaseFood_Params
{
	float                                              Food;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.IncreaseFood
struct UBP_AnimalStatsComponent_C_IncreaseFood_Params
{
	float                                              Food;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.GetDirtiness
struct UBP_AnimalStatsComponent_C_GetDirtiness_Params
{
	float                                              Dirtiness;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.SetDirtiness
struct UBP_AnimalStatsComponent_C_SetDirtiness_Params
{
	float                                              Dirtiness;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.UpdateDirtiness
struct UBP_AnimalStatsComponent_C_UpdateDirtiness_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.DecreaseMood
struct UBP_AnimalStatsComponent_C_DecreaseMood_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.IncreaseMood
struct UBP_AnimalStatsComponent_C_IncreaseMood_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.GetAnimalStats
struct UBP_AnimalStatsComponent_C_GetAnimalStats_Params
{
	TEnumAsByte<E_Sex_E_Sex>                           Sex;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Age;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Mood;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.GetStats
struct UBP_AnimalStatsComponent_C_GetStats_Params
{
	TEnumAsByte<E_Sex_E_Sex>                           Sex;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Age;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AnimalAgeStage_E_AnimalAgeStage>     AgeStage;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Mood;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.SetInitialStats
struct UBP_AnimalStatsComponent_C_SetInitialStats_Params
{
	TEnumAsByte<E_Sex_E_Sex>                           Sex;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Age;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MatureAge;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinDeadAge;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AnimalAgeStage_E_AnimalAgeStage>     AgeStage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.CheckDeadChance
struct UBP_AnimalStatsComponent_C_CheckDeadChance_Params
{
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.IncreaseAge
struct UBP_AnimalStatsComponent_C_IncreaseAge_Params
{
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.InitStatComponent
struct UBP_AnimalStatsComponent_C_InitStatComponent_Params
{
	class ABP_AnimalBase_C*                            BaseAnimal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.ResetStats
struct UBP_AnimalStatsComponent_C_ResetStats_Params
{
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.UpdateOnSeasonChanged
struct UBP_AnimalStatsComponent_C_UpdateOnSeasonChanged_Params
{
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.StartTimer_StaminaAndHealth
struct UBP_AnimalStatsComponent_C_StartTimer_StaminaAndHealth_Params
{
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.StopTimer_StaminaAndHealth
struct UBP_AnimalStatsComponent_C_StopTimer_StaminaAndHealth_Params
{
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.OpenStaminaGate
struct UBP_AnimalStatsComponent_C_OpenStaminaGate_Params
{
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.CloseStaminaGate
struct UBP_AnimalStatsComponent_C_CloseStaminaGate_Params
{
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.UpdateStaminaAndHealth
struct UBP_AnimalStatsComponent_C_UpdateStaminaAndHealth_Params
{
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.ExecuteUbergraph_BP_AnimalStatsComponent
struct UBP_AnimalStatsComponent_C_ExecuteUbergraph_BP_AnimalStatsComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.OnEncumbered__DelegateSignature
struct UBP_AnimalStatsComponent_C_OnEncumbered__DelegateSignature_Params
{
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.OnStaminaStartIncreasing__DelegateSignature
struct UBP_AnimalStatsComponent_C_OnStaminaStartIncreasing__DelegateSignature_Params
{
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.OnStaminaChange__DelegateSignature
struct UBP_AnimalStatsComponent_C_OnStaminaChange__DelegateSignature_Params
{
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.OnWaterChange__DelegateSignature
struct UBP_AnimalStatsComponent_C_OnWaterChange__DelegateSignature_Params
{
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.OnFoodChange__DelegateSignature
struct UBP_AnimalStatsComponent_C_OnFoodChange__DelegateSignature_Params
{
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.OnDead__DelegateSignature
struct UBP_AnimalStatsComponent_C_OnDead__DelegateSignature_Params
{
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.OnDirtinessChange__DelegateSignature
struct UBP_AnimalStatsComponent_C_OnDirtinessChange__DelegateSignature_Params
{
};

// Function BP_AnimalStatsComponent.BP_AnimalStatsComponent_C.OnHealthChange__DelegateSignature
struct UBP_AnimalStatsComponent_C_OnHealthChange__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
