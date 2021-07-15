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

// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.UpdatePoison
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Poison                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsPoisoned                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUD_LifeStats_C::UpdatePoison(float Poison, bool IsPoisoned)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.UpdatePoison");

	UUI_HUD_LifeStats_C_UpdatePoison_Params params;
	params.Poison = Poison;
	params.IsPoisoned = IsPoisoned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.UpdateHealth
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Health                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MaxHealth                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_LifeStats_C::UpdateHealth(float Health, float MaxHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.UpdateHealth");

	UUI_HUD_LifeStats_C_UpdateHealth_Params params;
	params.Health = Health;
	params.MaxHealth = MaxHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.UpdateStamina
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Stamina                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_LifeStats_C::UpdateStamina(float Stamina)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.UpdateStamina");

	UUI_HUD_LifeStats_C_UpdateStamina_Params params;
	params.Stamina = Stamina;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.StartPoison
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_LifeStats_C::StartPoison()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.StartPoison");

	UUI_HUD_LifeStats_C_StartPoison_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.UpdateWeight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ActualWeight                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          InitialOverload                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MaxOverload                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_LifeStats_C::UpdateWeight(float ActualWeight, float InitialOverload, float MaxOverload)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.UpdateWeight");

	UUI_HUD_LifeStats_C_UpdateWeight_Params params;
	params.ActualWeight = ActualWeight;
	params.InitialOverload = InitialOverload;
	params.MaxOverload = MaxOverload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.UpdateTemperature
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SensedTemperature              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsCold                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsOverheating                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          SafeLowTemperature             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SafeHighTemperature            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_LifeStats_C::UpdateTemperature(float SensedTemperature, bool IsCold, bool IsOverheating, float SafeLowTemperature, float SafeHighTemperature)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.UpdateTemperature");

	UUI_HUD_LifeStats_C_UpdateTemperature_Params params;
	params.SensedTemperature = SensedTemperature;
	params.IsCold = IsCold;
	params.IsOverheating = IsOverheating;
	params.SafeLowTemperature = SafeLowTemperature;
	params.SafeHighTemperature = SafeHighTemperature;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.StaminaBlink
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_LifeStats_C::StaminaBlink()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.StaminaBlink");

	UUI_HUD_LifeStats_C_StaminaBlink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_LifeStats_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.Tick");

	UUI_HUD_LifeStats_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.HealthBlink
// (BlueprintCallable, BlueprintEvent)
void UUI_HUD_LifeStats_C::HealthBlink()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.HealthBlink");

	UUI_HUD_LifeStats_C_HealthBlink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.WaterBlink
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          WaterBlinkingActualTime        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          WaterBlinkingProcessTime       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_LifeStats_C::WaterBlink(float WaterBlinkingActualTime, float WaterBlinkingProcessTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.WaterBlink");

	UUI_HUD_LifeStats_C_WaterBlink_Params params;
	params.WaterBlinkingActualTime = WaterBlinkingActualTime;
	params.WaterBlinkingProcessTime = WaterBlinkingProcessTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.FoodBlink
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FoodBlinkingActualTime         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          FoodBlinkingProcessTime        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_LifeStats_C::FoodBlink(float FoodBlinkingActualTime, float FoodBlinkingProcessTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.FoodBlink");

	UUI_HUD_LifeStats_C_FoodBlink_Params params;
	params.FoodBlinkingActualTime = FoodBlinkingActualTime;
	params.FoodBlinkingProcessTime = FoodBlinkingProcessTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.StartTrance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TranceMaxTime                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_TalentTrance_E_TalentTrance> WoodcutterTrance_              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_LifeStats_C::StartTrance(float TranceMaxTime, TEnumAsByte<E_TalentTrance_E_TalentTrance> WoodcutterTrance_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.StartTrance");

	UUI_HUD_LifeStats_C_StartTrance_Params params;
	params.TranceMaxTime = TranceMaxTime;
	params.WoodcutterTrance_ = WoodcutterTrance_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.UpdateTranceStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NumberOfStacks                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_TalentTrance_E_TalentTrance> WoodcutterTrance_              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_LifeStats_C::UpdateTranceStatus(float Time, int NumberOfStacks, TEnumAsByte<E_TalentTrance_E_TalentTrance> WoodcutterTrance_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.UpdateTranceStatus");

	UUI_HUD_LifeStats_C_UpdateTranceStatus_Params params;
	params.Time = Time;
	params.NumberOfStacks = NumberOfStacks;
	params.WoodcutterTrance_ = WoodcutterTrance_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.RemoveTranceStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_TalentTrance_E_TalentTrance> WoodcutterTrance_              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_LifeStats_C::RemoveTranceStatus(TEnumAsByte<E_TalentTrance_E_TalentTrance> WoodcutterTrance_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.RemoveTranceStatus");

	UUI_HUD_LifeStats_C_RemoveTranceStatus_Params params;
	params.WoodcutterTrance_ = WoodcutterTrance_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.UpdateDirtiness
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Dirtiness                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_LifeStats_C::UpdateDirtiness(float Dirtiness)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.UpdateDirtiness");

	UUI_HUD_LifeStats_C_UpdateDirtiness_Params params;
	params.Dirtiness = Dirtiness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.UpdateWater
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          water                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_LifeStats_C::UpdateWater(float water)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.UpdateWater");

	UUI_HUD_LifeStats_C_UpdateWater_Params params;
	params.water = water;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.UpdateFood
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Food                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_LifeStats_C::UpdateFood(float Food)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.UpdateFood");

	UUI_HUD_LifeStats_C_UpdateFood_Params params;
	params.Food = Food;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.UpdateMountHealth
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPlayerMounted                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          MountHealth                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MountMaxHealth                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_LifeStats_C::UpdateMountHealth(bool IsPlayerMounted, float MountHealth, float MountMaxHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.UpdateMountHealth");

	UUI_HUD_LifeStats_C_UpdateMountHealth_Params params;
	params.IsPlayerMounted = IsPlayerMounted;
	params.MountHealth = MountHealth;
	params.MountMaxHealth = MountMaxHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.UpdateMountStamina
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPlayerMounted                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          HorseStamina                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_LifeStats_C::UpdateMountStamina(bool IsPlayerMounted, float HorseStamina)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.UpdateMountStamina");

	UUI_HUD_LifeStats_C_UpdateMountStamina_Params params;
	params.IsPlayerMounted = IsPlayerMounted;
	params.HorseStamina = HorseStamina;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.UpdateMountWeight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PlayerHasMount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          MountActualWeight              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MountInitialOverload           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MountMaxOverload               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_LifeStats_C::UpdateMountWeight(bool PlayerHasMount, float MountActualWeight, float MountInitialOverload, float MountMaxOverload)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.UpdateMountWeight");

	UUI_HUD_LifeStats_C_UpdateMountWeight_Params params;
	params.PlayerHasMount = PlayerHasMount;
	params.MountActualWeight = MountActualWeight;
	params.MountInitialOverload = MountInitialOverload;
	params.MountMaxOverload = MountMaxOverload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.PoisonBlink
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          PoisonBlinkingActualTime       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          PoisonBlinkingProcessTime      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_LifeStats_C::PoisonBlink(float PoisonBlinkingActualTime, float PoisonBlinkingProcessTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.PoisonBlink");

	UUI_HUD_LifeStats_C_PoisonBlink_Params params;
	params.PoisonBlinkingActualTime = PoisonBlinkingActualTime;
	params.PoisonBlinkingProcessTime = PoisonBlinkingProcessTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.UpdateAlcohol
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alcohol                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsDrunk                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUD_LifeStats_C::UpdateAlcohol(float Alcohol, bool IsDrunk)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.UpdateAlcohol");

	UUI_HUD_LifeStats_C_UpdateAlcohol_Params params;
	params.Alcohol = Alcohol;
	params.IsDrunk = IsDrunk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.ExecuteUbergraph_UI_HUD_LifeStats
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_LifeStats_C::ExecuteUbergraph_UI_HUD_LifeStats(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_LifeStats.UI_HUD_LifeStats_C.ExecuteUbergraph_UI_HUD_LifeStats");

	UUI_HUD_LifeStats_C_ExecuteUbergraph_UI_HUD_LifeStats_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_HUD_LifeStats_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Icn_FoodBar, UImage);
	READ_PTR_FULL(Icn_HealthBar, UImage);
	READ_PTR_FULL(Icn_StaminaBar, UImage);
	READ_PTR_FULL(Icn_WaterBar, UImage);
	READ_PTR_FULL(StatusesBox, UHorizontalBox);
	READ_PTR_FULL(HudReference, UUI_HUD_C);
	READ_PTR_FULL(PoisonStatusReference, UUI_HUD_LifeStats_Poison_C);
	READ_PTR_FULL(WeightStatusReference, UUI_HUD_LifeStats_Weight_C);
	READ_PTR_FULL(ColdStatusReference, UUI_HUD_LifeStats_Cold_C);
	READ_PTR_FULL(OverheatingStatusReference, UUI_HUD_LifeStats_Overheating_C);
	READ_PTR_FULL(MinerTranceStatusReference, UUI_HUD_Status_ExtractionTrance_C);
	READ_PTR_FULL(WoodcutterTranceStatusReference, UUI_HUD_Status_ExtractionTrance_C);
	READ_PTR_FULL(FarmerTranceStatusReference, UUI_HUD_Status_ExtractionTrance_C);
	READ_PTR_FULL(BuilderTranceStatusReference, UUI_HUD_Status_ExtractionTrance_C);
	READ_PTR_FULL(DirtinessStatusReference, UUI_HUD_LifeStats_Dirtness_C);
	READ_PTR_FULL(HorseLifeReference, UUI_HUD_HorseLife_C);
	READ_PTR_FULL(HorseStaminaReference, UUI_HUD_HorseStamina_C);
	READ_PTR_FULL(MountWeightStatusReference, UUI_HUD_LifeStats_MountWeight_C);
	READ_PTR_FULL(AlcoholStatusReference, UUI_HUD_LifeStats_Alcohol_C);
}

void UUI_HUD_LifeStats_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Icn_FoodBar);
	DELE_PTR_FULL(Icn_HealthBar);
	DELE_PTR_FULL(Icn_StaminaBar);
	DELE_PTR_FULL(Icn_WaterBar);
	DELE_PTR_FULL(StatusesBox);
	DELE_PTR_FULL(HudReference);
	DELE_PTR_FULL(PoisonStatusReference);
	DELE_PTR_FULL(WeightStatusReference);
	DELE_PTR_FULL(ColdStatusReference);
	DELE_PTR_FULL(OverheatingStatusReference);
	DELE_PTR_FULL(MinerTranceStatusReference);
	DELE_PTR_FULL(WoodcutterTranceStatusReference);
	DELE_PTR_FULL(FarmerTranceStatusReference);
	DELE_PTR_FULL(BuilderTranceStatusReference);
	DELE_PTR_FULL(DirtinessStatusReference);
	DELE_PTR_FULL(HorseLifeReference);
	DELE_PTR_FULL(HorseStaminaReference);
	DELE_PTR_FULL(MountWeightStatusReference);
	DELE_PTR_FULL(AlcoholStatusReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
