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

// BlueprintGeneratedClass BP_CharacterStatsComponent.BP_CharacterStatsComponent_C
// 0x05F8 (FullSize[0x06A8] - InheritedSize[0x00B0])
class UBP_CharacterStatsComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FText                                       Name;                                                      // 0x00B8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<E_Sex_E_Sex>                           Sex;                                                       // 0x00D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9JSW[0x3];                                     // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Age;                                                       // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinDeadAge;                                                // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_CharacterType_E_CharacterType>       CharacterType;                                             // 0x00DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DC8D[0x3];                                     // 0x00DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                DeadChance;                                                // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Dead;                                                      // 0x00E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7NDW[0x3];                                     // 0x00E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnSkillChange;                                             // 0x00E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              CurrentMood;                                               // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_62CW[0x4];                                     // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_MasterTalent>                    Talents_Extraction;                                        // 0x0100(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_MasterTalent>                    Talents_Hunting;                                           // 0x0110(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_MasterTalent>                    Talents_Farming;                                           // 0x0120(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_MasterTalent>                    Talents_Diplomacy;                                         // 0x0130(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_MasterTalent>                    Talents_Survival;                                          // 0x0140(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_MasterTalent>                    Talents_Crafting;                                          // 0x0150(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FST_Skills                                  ExtractionS;                                               // 0x0160(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FST_Skills                                  HuntingS;                                                  // 0x01C0(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FST_Skills                                  FarmingS;                                                  // 0x0220(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FST_Skills                                  DiplomacyS;                                                // 0x0280(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FST_Skills                                  SurvivalS;                                                 // 0x02E0(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FST_Skills                                  CraftingS;                                                 // 0x0340(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                               IsSick;                                                    // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KDEW[0x7];                                     // 0x03A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      FlirtingModificator;                                       // 0x03A8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                      Challange_DynastyReputationModificator;                    // 0x03B8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                      MoodLossModificator;                                       // 0x03C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                      BaseLikingModificator;                                     // 0x03D8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                      Quests_DynastyReputationModificator;                       // 0x03E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       NewLevelInfoText;                                          // 0x03F8(0x0018) (Edit, BlueprintVisible)
	TMap<TEnumAsByte<E_Skills_E_Skills>, struct FText> SkillNames;                                                // 0x0410(0x0050) (Edit, BlueprintVisible)
	float                                              HoldableItemConditionUseMultiplier;                        // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MinerStacks;                                               // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WoodcutterStacks;                                          // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinerStacksTimeOut;                                        // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Dirtiness;                                                 // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Food;                                                      // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FoodDecreaseRate;                                          // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxHealth;                                                 // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Health;                                                    // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HealthDecreaseRate;                                        // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              water;                                                     // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WaterDecreaseRate;                                         // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Stamina;                                                   // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JAOG[0x4];                                     // 0x0494(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnStaminaChange;                                           // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              MaxStamina;                                                // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StaminaUpdateDelay;                                        // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StaminaIncreaseRate;                                       // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SprintStaminaDecreaseRate;                                 // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              JumpStaminaDecreaseRate;                                   // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SprintStaminaMin;                                          // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnEncumbered;                                              // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               StaminaRegeneration;                                       // 0x04D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0X05[0x3];                                     // 0x04D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StaminaRegenerationDelay;                                  // 0x04D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StaminaRegeneratioCurrentTime;                             // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseStamina;                                                // 0x04DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_94R7[0x3];                                     // 0x04DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnHealthChange;                                            // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnStaminaStartIncreasing;                                  // 0x04F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               GodMode;                                                   // 0x0500(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RYZ9[0x3];                                     // 0x0501(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BaseTemperature;                                           // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LocalTemperature;                                          // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SensedTemperature;                                         // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentSensedTemperature;                                  // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_P565[0x4];                                     // 0x0514(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_BaseCharacter_C*                         BaseCharacterReference;                                    // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TemperatureChangeSpeed;                                    // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ColdProtection;                                            // 0x0524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HeatProtection;                                            // 0x0528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9Z8G[0x4];                                     // 0x052C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_HeatingSource>                   HeatingSources;                                            // 0x0530(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Poison;                                                    // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PoisonDecreaseRate;                                        // 0x0544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Overheating;                                               // 0x0548(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Cold;                                                      // 0x0549(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Hungry;                                                    // 0x054A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Thirsty;                                                   // 0x054B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Poisoned;                                                  // 0x054C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_T802[0x3];                                     // 0x054D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnPoisonStart;                                             // 0x0550(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnPoisonChange;                                            // 0x0560(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnTemperatureChange;                                       // 0x0570(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               IsInjured;                                                 // 0x0580(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_V0LL[0x3];                                     // 0x0581(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Somnolence;                                                // 0x0584(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SomnolenceIncreaseRate;                                    // 0x0588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HealthDecreaseRate_Poison;                                 // 0x058C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TargetMood;                                                // 0x0590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8WYQ[0x4];                                     // 0x0594(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAudioComponent*                             LifeStatsSound;                                            // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnDirtinessChange;                                         // 0x05A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnDead;                                                    // 0x05B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               NoFood;                                                    // 0x05C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               NoWater;                                                   // 0x05C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               NoWood;                                                    // 0x05C2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3S9M[0x1];                                     // 0x05C3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_Event_CharacterMultipliers              EventMultipliers;                                          // 0x05C4(0x001C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MoodChangeSpeed;                                           // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Directions_E_Directions>             MoodDirection;                                             // 0x05E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_614V[0x3];                                     // 0x05E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnFoodChange;                                              // 0x05E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnWaterChange;                                             // 0x05F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              WoodcutterStacksTimeOut;                                   // 0x0608(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FarmerStacks;                                              // 0x060C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FarmerStacksTimeOut;                                       // 0x0610(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BuilderStacks;                                             // 0x0614(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BuilderStacksTimeOut;                                      // 0x0618(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsWaterBlinking;                                           // 0x061C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsFoodBlinking;                                            // 0x061D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ON80[0x2];                                     // 0x061E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimeSinceLastWaterBlink;                                   // 0x0620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WaterBlinkingActualTime;                                   // 0x0624(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlinkingUpdateFrequency;                                   // 0x0628(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_778P[0x4];                                     // 0x062C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                WaterBlinkTimer;                                           // 0x0630(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              TimeSinceLastFoodBlink;                                    // 0x0638(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FoodBlinkingActualTime;                                    // 0x063C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                FoodBlinkTimer;                                            // 0x0640(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              FoodBlinkingProcessTime;                                   // 0x0648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WaterBlinkingProcessTime;                                  // 0x064C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Alcohol;                                                   // 0x0650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AlcoholDecreaseRate;                                       // 0x0654(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Drunk;                                                     // 0x0658(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HIWT[0x7];                                     // 0x0659(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnAlcoholChange;                                           // 0x0660(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               IsPoisonBlinking;                                          // 0x0670(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CIW1[0x3];                                     // 0x0671(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimeSinceLastPoisonBlink;                                  // 0x0674(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PoisonBlinkingActualTime;                                  // 0x0678(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_68KI[0x4];                                     // 0x067C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                PoisonBlinkTimer;                                          // 0x0680(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              PoisonBlinkingProcessTime;                                 // 0x0688(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SafeLowTemperature;                                        // 0x068C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SafeHighTemperature;                                       // 0x0690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TemperatureToleranceModifier;                              // 0x0694(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_NPCPersonality_E_NPCPersonality>     Personality;                                               // 0x0698(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SF85[0x7];                                     // 0x0699(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_Chroma_C*                                RazerChromaSystem;                                         // 0x06A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CharacterStatsComponent.BP_CharacterStatsComponent_C");
		return ptr;
	}



	void SetPersonality();
	void Debug();
	void UpdateFX();
	void Consume(float Food, float water, float Health, float Stamina, float Poison, float Alcohol);
	void DecreaseAlcoholWithTime();
	void DecreaseAlcohol(float Alcohol);
	void IncreaseAlcohol(float Alcohol);
	void IncreaseBuilderStack();
	void IncreaseFarmerStack();
	void CheckStamina_Jump(bool* Enough);
	void SetMaxSkillByProfession(TEnumAsByte<E_Profession_E_Profession> Profession);
	void ApplySmoothTemperature();
	void IncreaseSomnolenceWithTime();
	void DecreaseSomnolence(float Somnolence);
	void IncreaseSomnolence(float Somnolence);
	void UpdateOldness();
	void OnAgeChange();
	void GetTalentsLevels(TArray<int>* ExtractionTalents, TArray<int>* HuntingTalents, TArray<int>* AnimalHusbandryTalents, TArray<int>* DiplomacyTalents, TArray<int>* SurvivalTalents, TArray<int>* CraftingTalents);
	void InitTalents(TArray<int>* ExtractionTalents, TArray<int>* HuntingTalents, TArray<int>* AnimalHusbandryTalents, TArray<int>* DiplomacyTalents, TArray<int>* SurvivalTalents, TArray<int>* CraftingTalents);
	void RandomSkills(bool Birth);
	void DecreasePoisoningWithTime();
	void DecreasePoison(float Poison);
	void IncreasePoison(float Poison);
	void DecreaseHealthWithTime();
	void UpdateSensedTemperature();
	void SetStats(float Food, float water, float Health, int DeadChance, bool IsSick, bool IsInjured, float Mood);
	void SetCharacterSkillAndTallents(bool SetTalents, const struct FST_CharacterSkillsValues& Extraction, const struct FST_CharacterSkillsValues& Hunting, const struct FST_CharacterSkillsValues& Farming, const struct FST_CharacterSkillsValues& Diplomacy, const struct FST_CharacterSkillsValues& SurvivalS, const struct FST_CharacterSkillsValues& Crafting);
	void CheckStamina(float Stamina, bool* Enough_);
	void DecreaseStamina_Jump(bool* Enough);
	void InitLifeStats(float Health, float Stamina, float Food, float water, float Somnolence, float Temperature, float Dirtiness, float Poison, bool Poisoned, float Alcohol);
	void DecreaseStamina(float Stamina, bool Ditrtness, bool* Enough);
	void IncreaseStamina(float Stamina);
	void DecreaseHealth(float Health, TEnumAsByte<E_DamageType_E_DamageType> DamageType);
	void IncreaseHealth(float Health);
	void DecreaseWaterWithTime();
	void DecreaseWater(float water);
	void IncreaseWater(float water);
	void DecreaseFoodWithTime();
	void DecreaseFood(float Food);
	void IncreaseFood(float Food);
	void GetDirtiness(float* Dirtiness);
	void SetDirtiness(float Dirtiness);
	void UpdateDirtiness(float Value);
	void ResetSkillTalentPoints(TEnumAsByte<E_Skills_E_Skills> SkillToReset);
	void IncreaseExtractionStack();
	void UpdateHIConditionMultiplier();
	void UpdateCraftingsTalent(int TalentID);
	void UpdateSurvivalsTalent(int TalentID);
	void UpdateDiplomacysTalent(int TalentID);
	void UpdateFarmingsTalent(int TalentID);
	void UpdateExtractionsTalent(int TalentID);
	void UpdateHuntersTalent(int TalentID);
	void GetSkillLevel(TEnumAsByte<E_Skills_E_Skills> SkillType, int* Level);
	void DecreaseMood(float Value);
	void IncreaseMood(float Value);
	void GetMaxSkill(TEnumAsByte<E_Skills_E_Skills>* MaxSkill);
	void GetCharacterStats(struct FText* Name, TEnumAsByte<E_Sex_E_Sex>* Sex, float* Age, float* Extraction, float* Hunting, float* Farming, float* Diplomacy, float* Survival, float* Crafting, float* Mood);
	void GetStats(struct FText* Name, TEnumAsByte<E_Sex_E_Sex>* Sex, float* Age, TEnumAsByte<E_CharacterType_E_CharacterType>* CharacterType, float* Mood);
	void AddSkills(TEnumAsByte<E_Skills_E_Skills> Skill, float Value);
	void GetSkills(float* Extraction, float* Hunting, float* AnimalHusbandry, float* Diplomacy, float* Survival, float* Crafting);
	void InitSkills(int ExtractionLevel, float ExtractionProgress, int ExtractionPointsToSpend, int HuntingLevel, float HuntingProgress, int HuntingPointsToSpend, int AnimalHusbandryLevel, float AnimalHusbandryProgress, int AnimalHusbandryPointsToSpend, int DiplomacyLevel, float DiplomacyProgress, int DiplomacyPointsToSpend, int SurvivalLevel, float SurvivalProgress, int SurvivalPointsToSpend, int CraftingLevel, float CraftingProgress, int CraftingPointsToSpend);
	void IncreaseCrafting(float Value, bool AffectedByCraftingTalent, bool AffectedBySewingTalent, bool AffectedByCookingTalent);
	void IncreaseSurvival(float Value, bool AffectedByTalent);
	void IncreaseDiplomacy(float Value, bool AffectedByTalent);
	void IncreaseFarming(float Value, bool AffectedByTalent);
	void IncreaseHunting(float Value, bool AffectedByTalent);
	void IncreaseDeadChance();
	void SetInitialStats(const struct FText& Name, TEnumAsByte<E_Sex_E_Sex> Sex, float Age, float MinDeadAge);
	void IncreaseExtraction(float Value, bool AffectedByTalent);
	void CheckDeadChance();
	void IncreaseAge();
	void StartStackCounting(TEnumAsByte<E_TalentTrance_E_TalentTrance> WoodcutterTrance_, float TranceTime);
	void UpdateMinerStacks();
	void StopStackCounting(TEnumAsByte<E_TalentTrance_E_TalentTrance> Woodcutter);
	void UpdateStats(int IteratorNumber);
	void StartTimer_Stamina();
	void StopTimer_Stamina();
	void OpenStaminaGate();
	void CloseStaminaGate();
	void UpdateStamina();
	void InitStatComponent(class ABP_BaseCharacter_C* BaseCharacter);
	void ResetStats();
	void UpdateOnSeasonChanged();
	void UpdateWoodcutterStacks();
	void UpdateFarmerStacks();
	void UpdateBuilderStacks();
	void ReceiveTick(float DeltaSeconds);
	void WaterBlink();
	void FoodBlink();
	void PoisonBlink();
	void ExecuteUbergraph_BP_CharacterStatsComponent(int EntryPoint);
	void OnAlcoholChange__DelegateSignature();
	void OnWaterChange__DelegateSignature();
	void OnFoodChange__DelegateSignature();
	void OnDead__DelegateSignature();
	void OnDirtinessChange__DelegateSignature();
	void OnTemperatureChange__DelegateSignature();
	void OnPoisonStart__DelegateSignature();
	void OnStaminaStartIncreasing__DelegateSignature();
	void OnHealthChange__DelegateSignature();
	void OnEncumbered__DelegateSignature();
	void OnStaminaChange__DelegateSignature();
	void OnPoisonChange__DelegateSignature();
	void OnSkillChange__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
