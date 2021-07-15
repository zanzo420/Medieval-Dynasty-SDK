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

// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.UpdatePoison
struct UUI_HUD_LifeStats_C_UpdatePoison_Params
{
	float                                              Poison;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsPoisoned;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.UpdateHealth
struct UUI_HUD_LifeStats_C_UpdateHealth_Params
{
	float                                              Health;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxHealth;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.UpdateStamina
struct UUI_HUD_LifeStats_C_UpdateStamina_Params
{
	float                                              Stamina;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.StartPoison
struct UUI_HUD_LifeStats_C_StartPoison_Params
{
};

// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.UpdateWeight
struct UUI_HUD_LifeStats_C_UpdateWeight_Params
{
	float                                              ActualWeight;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InitialOverload;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxOverload;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.UpdateTemperature
struct UUI_HUD_LifeStats_C_UpdateTemperature_Params
{
	float                                              SensedTemperature;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsCold;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsOverheating;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              SafeLowTemperature;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SafeHighTemperature;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.StaminaBlink
struct UUI_HUD_LifeStats_C_StaminaBlink_Params
{
};

// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.Tick
struct UUI_HUD_LifeStats_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.HealthBlink
struct UUI_HUD_LifeStats_C_HealthBlink_Params
{
};

// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.WaterBlink
struct UUI_HUD_LifeStats_C_WaterBlink_Params
{
	float                                              WaterBlinkingActualTime;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WaterBlinkingProcessTime;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.FoodBlink
struct UUI_HUD_LifeStats_C_FoodBlink_Params
{
	float                                              FoodBlinkingActualTime;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FoodBlinkingProcessTime;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.StartTrance
struct UUI_HUD_LifeStats_C_StartTrance_Params
{
	float                                              TranceMaxTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_TalentTrance_E_TalentTrance>         WoodcutterTrance_;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.UpdateTranceStatus
struct UUI_HUD_LifeStats_C_UpdateTranceStatus_Params
{
	float                                              Time;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumberOfStacks;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_TalentTrance_E_TalentTrance>         WoodcutterTrance_;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.RemoveTranceStatus
struct UUI_HUD_LifeStats_C_RemoveTranceStatus_Params
{
	TEnumAsByte<E_TalentTrance_E_TalentTrance>         WoodcutterTrance_;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.UpdateDirtiness
struct UUI_HUD_LifeStats_C_UpdateDirtiness_Params
{
	float                                              Dirtiness;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.UpdateWater
struct UUI_HUD_LifeStats_C_UpdateWater_Params
{
	float                                              water;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.UpdateFood
struct UUI_HUD_LifeStats_C_UpdateFood_Params
{
	float                                              Food;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.UpdateMountHealth
struct UUI_HUD_LifeStats_C_UpdateMountHealth_Params
{
	bool                                               IsPlayerMounted;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MountHealth;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MountMaxHealth;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.UpdateMountStamina
struct UUI_HUD_LifeStats_C_UpdateMountStamina_Params
{
	bool                                               IsPlayerMounted;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              HorseStamina;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.UpdateMountWeight
struct UUI_HUD_LifeStats_C_UpdateMountWeight_Params
{
	bool                                               PlayerHasMount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MountActualWeight;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MountInitialOverload;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MountMaxOverload;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.PoisonBlink
struct UUI_HUD_LifeStats_C_PoisonBlink_Params
{
	float                                              PoisonBlinkingActualTime;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PoisonBlinkingProcessTime;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.UpdateAlcohol
struct UUI_HUD_LifeStats_C_UpdateAlcohol_Params
{
	float                                              Alcohol;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsDrunk;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.ExecuteUbergraph_UI_HUD_LifeStats
struct UUI_HUD_LifeStats_C_ExecuteUbergraph_UI_HUD_LifeStats_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
