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

// BlueprintGeneratedClass BP_AnimalStatsComponent.BP_AnimalStatsComponent_C
// 0x0150 (FullSize[0x0200] - InheritedSize[0x00B0])
class UBP_AnimalStatsComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FText                                       Name;                                                      // 0x00B8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<E_Sex_E_Sex>                           Sex;                                                       // 0x00D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6IMI[0x3];                                     // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Age;                                                       // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MatureAge;                                                 // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AnimalAgeStage_E_AnimalAgeStage>     AgeStage;                                                  // 0x00DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NUJR[0x3];                                     // 0x00DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CurrentMood;                                               // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSick;                                                    // 0x00E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HP5M[0x3];                                     // 0x00E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Dirtiness;                                                 // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Food;                                                      // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FoodDecreaseRate;                                          // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Health;                                                    // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HealthDecreaseRate;                                        // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              water;                                                     // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WaterDecreaseRate;                                         // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_I95I[0x4];                                     // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnHealthChange;                                            // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ABP_AnimalBase_C*                            BaseAnimalReference;                                       // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Hungry;                                                    // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Thirsty;                                                   // 0x0121(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsInjured;                                                 // 0x0122(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3AT0[0x1];                                     // 0x0123(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TargetMood;                                                // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnDirtinessChange;                                         // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnDead;                                                    // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               NoFood;                                                    // 0x0148(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3D48[0x3];                                     // 0x0149(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_Event_AnimalMultipliers                 EventMultipliers;                                          // 0x014C(0x0014) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MoodChangeSpeed;                                           // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Directions_E_Directions>             MoodDirection;                                             // 0x0164(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_E05G[0x3];                                     // 0x0165(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnFoodChange;                                              // 0x0168(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnWaterChange;                                             // 0x0178(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              MaxHealth;                                                 // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinDeadAge;                                                // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Stamina;                                                   // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxStamina;                                                // 0x0194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StaminaUpdateDelay;                                        // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StaminaIncreaseRate;                                       // 0x019C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SprintStaminaDecreaseRate;                                 // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              JumpStaminaDecreaseRate;                                   // 0x01A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SprintStaminaMin;                                          // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               StaminaRegeneration;                                       // 0x01AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_G729[0x3];                                     // 0x01AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StaminaRegenerationDelay;                                  // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StaminaRegeneratioCurrentTime;                             // 0x01B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseStamina;                                                // 0x01B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_G42D[0x7];                                     // 0x01B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnStaminaChange;                                           // 0x01C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnStaminaStartIncreasing;                                  // 0x01D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnEncumbered;                                              // 0x01E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              MovementStaminaConsumptionModificator;                     // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HealthRegenerationRate;                                    // 0x01F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                TimerReference;                                            // 0x01F8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimalStatsComponent.BP_AnimalStatsComponent_C");
		return ptr;
	}



	void RemoveAnimalFromSystems();
	void CheckStamina_Jump(bool* Enough_);
	void CheckStamina(float Value, bool* Enough_);
	void DecreaseStamina_Jump(bool* Enough);
	void DecreaseStamina(float Value, bool* Enough);
	void IncreaseStamina(float Value);
	void OnAnimalAgeStageChange();
	void OnAgeChange();
	void SetStats(float Food, float water, float Health, int DeadChance, bool IsSick, bool IsInjured, float Mood);
	void InitLifeStats(float Health, float Stamina, float Food, float water, float Dirtiness);
	void DecreaseHealth(float Health);
	void IncreaseHealth(float Health);
	void DecreaseWater(float water);
	void IncreaseWater(float water);
	void DecreaseFood(float Food);
	void IncreaseFood(float Food);
	void GetDirtiness(float* Dirtiness);
	void SetDirtiness(float Dirtiness);
	void UpdateDirtiness(float Value);
	void DecreaseMood(float Value);
	void IncreaseMood(float Value);
	void GetAnimalStats(TEnumAsByte<E_Sex_E_Sex>* Sex, float* Age, float* Mood);
	void GetStats(TEnumAsByte<E_Sex_E_Sex>* Sex, float* Age, TEnumAsByte<E_AnimalAgeStage_E_AnimalAgeStage>* AgeStage, float* Mood);
	void SetInitialStats(TEnumAsByte<E_Sex_E_Sex> Sex, float Age, float MatureAge, float MinDeadAge, TEnumAsByte<E_AnimalAgeStage_E_AnimalAgeStage> AgeStage);
	void CheckDeadChance();
	void IncreaseAge();
	void InitStatComponent(class ABP_AnimalBase_C* BaseAnimal);
	void ResetStats();
	void UpdateOnSeasonChanged();
	void StartTimer_StaminaAndHealth();
	void StopTimer_StaminaAndHealth();
	void OpenStaminaGate();
	void CloseStaminaGate();
	void UpdateStaminaAndHealth();
	void ExecuteUbergraph_BP_AnimalStatsComponent(int EntryPoint);
	void OnEncumbered__DelegateSignature();
	void OnStaminaStartIncreasing__DelegateSignature();
	void OnStaminaChange__DelegateSignature();
	void OnWaterChange__DelegateSignature();
	void OnFoodChange__DelegateSignature();
	void OnDead__DelegateSignature();
	void OnDirtinessChange__DelegateSignature();
	void OnHealthChange__DelegateSignature();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
