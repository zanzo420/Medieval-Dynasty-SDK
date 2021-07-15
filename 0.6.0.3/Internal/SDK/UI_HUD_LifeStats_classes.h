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
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_HUD_LifeStats.UI_HUD_LifeStats_C
// 0x013C (FullSize[0x039C] - InheritedSize[0x0260])
class UUI_HUD_LifeStats_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                      Icn_FoodBar;                                               // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Icn_HealthBar;                                             // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Icn_StaminaBar;                                            // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Icn_WaterBar;                                              // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              StatusesBox;                                               // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                              Health;                                                    // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Stamina;                                                   // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Poison;                                                    // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ActualWeight;                                              // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InitialOverload;                                           // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxOverload;                                               // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SafeLowTemperature;                                        // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SafeHighTemperature;                                       // 0x02AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SensedTemperature;                                         // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_M015[0x4];                                     // 0x02B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                StatusCheckerTimer;                                        // 0x02B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              LowestTemperature;                                         // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HighestTemperature;                                        // 0x02C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_HUD_C*                                   HudReference;                                              // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlinkingUpdateFrequency;                                   // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4XUK[0x4];                                     // 0x02D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUI_HUD_LifeStats_Poison_C*                  PoisonStatusReference;                                     // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_HUD_LifeStats_Weight_C*                  WeightStatusReference;                                     // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_HUD_LifeStats_Cold_C*                    ColdStatusReference;                                       // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_HUD_LifeStats_Overheating_C*             OverheatingStatusReference;                                // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               tmp_StatusThatShouldBlink;                                 // 0x02F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1HQO[0x7];                                     // 0x02F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                StaminaBlinkTimer;                                         // 0x0300(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              StaminaBlinkingProcessTime;                                // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StaminaBlinkingActualTime;                                 // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsHealthBlinking;                                          // 0x0310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0NYH[0x3];                                     // 0x0311(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimeSinceLastHealthBlink;                                  // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HealthBlinkingActualTime;                                  // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HealthBlinkingProcessTime;                                 // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                HealthBlinkTimer;                                          // 0x0320(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldHealthBlinkDueToDamage;                              // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsCold;                                                    // 0x0329(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsOverheating;                                             // 0x032A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KNJH[0x5];                                     // 0x032B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUI_HUD_Status_ExtractionTrance_C*           MinerTranceStatusReference;                                // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_HUD_Status_ExtractionTrance_C*           WoodcutterTranceStatusReference;                           // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_HUD_Status_ExtractionTrance_C*           FarmerTranceStatusReference;                               // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_HUD_Status_ExtractionTrance_C*           BuilderTranceStatusReference;                              // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TranceMaxTime;                                             // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Dirtiness;                                                 // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_HUD_LifeStats_Dirtness_C*                DirtinessStatusReference;                                  // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_HUD_HorseLife_C*                         HorseLifeReference;                                        // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_HUD_HorseStamina_C*                      HorseStaminaReference;                                     // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MountActualWeight;                                         // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MountInitialOverload;                                      // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MountMaxOverload;                                          // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6CUY[0x4];                                     // 0x037C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUI_HUD_LifeStats_MountWeight_C*             MountWeightStatusReference;                                // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsPoisoned;                                                // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsDrunk;                                                   // 0x0389(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5H9L[0x2];                                     // 0x038A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Alcohol;                                                   // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_HUD_LifeStats_Alcohol_C*                 AlcoholStatusReference;                                    // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Max_Health;                                                // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUD_LifeStats.UI_HUD_LifeStats_C");
		return ptr;
	}



	void UpdatePoison(float Poison, bool IsPoisoned);
	void UpdateHealth(float Health, float MaxHealth);
	void UpdateStamina(float Stamina);
	void StartPoison();
	void UpdateWeight(float ActualWeight, float InitialOverload, float MaxOverload);
	void UpdateTemperature(float SensedTemperature, bool IsCold, bool IsOverheating, float SafeLowTemperature, float SafeHighTemperature);
	void StaminaBlink();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void HealthBlink();
	void WaterBlink(float WaterBlinkingActualTime, float WaterBlinkingProcessTime);
	void FoodBlink(float FoodBlinkingActualTime, float FoodBlinkingProcessTime);
	void StartTrance(float TranceMaxTime, TEnumAsByte<E_TalentTrance_E_TalentTrance> WoodcutterTrance_);
	void UpdateTranceStatus(float Time, int NumberOfStacks, TEnumAsByte<E_TalentTrance_E_TalentTrance> WoodcutterTrance_);
	void RemoveTranceStatus(TEnumAsByte<E_TalentTrance_E_TalentTrance> WoodcutterTrance_);
	void UpdateDirtiness(float Dirtiness);
	void UpdateWater(float water);
	void UpdateFood(float Food);
	void UpdateMountHealth(bool IsPlayerMounted, float MountHealth, float MountMaxHealth);
	void UpdateMountStamina(bool IsPlayerMounted, float HorseStamina);
	void UpdateMountWeight(bool PlayerHasMount, float MountActualWeight, float MountInitialOverload, float MountMaxOverload);
	void PoisonBlink(float PoisonBlinkingActualTime, float PoisonBlinkingProcessTime);
	void UpdateAlcohol(float Alcohol, bool IsDrunk);
	void ExecuteUbergraph_UI_HUD_LifeStats(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
