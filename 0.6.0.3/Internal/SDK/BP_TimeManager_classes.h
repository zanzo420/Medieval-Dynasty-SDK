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

// BlueprintGeneratedClass BP_TimeManager.BP_TimeManager_C
// 0x013A (FullSize[0x035A] - InheritedSize[0x0220])
class ABP_TimeManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FST_Time                                    StartTime;                                                 // 0x0230(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StartWeatherVariation;                                     // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_Hour                                    HourAfterSkip;                                             // 0x024C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Timespan;                                                  // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeUpdateDelay;                                           // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LimitOfDaysPerSeason;                                      // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9EO7[0x4];                                     // 0x0264(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnTimeOfDayChanged;                                        // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TEnumAsByte<E_TimeOfDay_E_TimeOfDay>               TimeOfDay;                                                 // 0x0278(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MN5M[0x3];                                     // 0x0279(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_Time                                    Time;                                                      // 0x027C(0x0018) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_H9PT[0x4];                                     // 0x0294(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_SystemsManager_C*                        SystemsManagerReference;                                   // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FTimerHandle                                TimerReference;                                            // 0x02A0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              TimeMultiplier;                                            // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_S3T1[0x4];                                     // 0x02AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnDaySkip;                                                 // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FST_Hour                                    PauseTime;                                                 // 0x02C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CheckPauseTime;                                            // 0x02CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_68X4[0x3];                                     // 0x02CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnTimeUpdate;                                              // 0x02D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnTimeUpdate_Minutes;                                      // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnTimeUpdate_Hours;                                        // 0x02F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnTimeUpdate_Days;                                         // 0x0300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnSeasonChanged;                                           // 0x0310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FST_Hour                                    SleepTimeStart;                                            // 0x0320(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_Hour                                    SleepTimeEnd;                                              // 0x032C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TotalSecondsToSkipSeason;                                  // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ChangeTimeOnSkip;                                          // 0x033C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZKT9[0x3];                                     // 0x033D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnSeasonChanged_End;                                       // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               IsSkippingInProgress;                                      // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_A6AU[0x3];                                     // 0x0351(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                IteratorNumber;                                            // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TimeFlowStoppedByCheat;                                    // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Teleport_Player;                                           // 0x0359(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TimeManager.BP_TimeManager_C");
		return ptr;
	}



	void StopTimeManager(bool MainMenu);
	void GetCurrentSeason(int* Season, TEnumAsByte<E_Seasons_E_Seasons>* Season_Enum);
	void StartTimeManager(bool LoadGame, bool MainMenu);
	void SaveDataFromSystemToFile(class USAVE_Game_C* SaveReference);
	void LoadSaveFileIntoSystem(class USAVE_Game_C* SaveReference);
	void IsItPossibleToSleep(bool* Success, struct FST_Hour* Hour);
	void IsItPossibleToSkipSeason(bool* Success, struct FST_Hour* Hour);
	void CheckHowMuchTimeIsMissing(const struct FST_Time& TargetTime, bool* Passed, struct FST_Hour* Hour, int* Seconds);
	void CheckifTimeIsInHourRange(const struct FST_Hour& BeginTime, const struct FST_Hour& EndTime, bool* Success);
	void CheckIfTimeIsPast(const struct FST_Time& Time, bool* Passed);
	void RandomizeTime(const struct FST_Time& BeginTime, int MinTimespan, int MaxTimespan, struct FST_Time* EndTime);
	void SetGlobalTimeSpeed(float TimeDilation);
	void Increase_Time(int Timespan);
	void UpdateByTimer();
	void SetPauseTime(const struct FST_Hour& Hour);
	void StopTimer();
	void StartTimer();
	void Init(bool MainMenu);
	void CheckSeasonSkip();
	void SetDayTime(int Hour, bool ForceCallOnTimeOfDayChanged, bool LoadFromFile);
	void UserConstructionScript();
	void SkipDay(bool TeleportPlayer);
	void SkipSeason(bool ChangeTime);
	void InstantlyUpdateTimeAndWeather(const struct FST_Time& Time, bool RandomWeather, int WeatherVariant, bool RandomCloudDensity);
	void ReceiveBeginPlay();
	void StopFadeSkipDay();
	void StopFadeSkipSeason();
	void SeasonSkipFinish();
	void SkipWhenPosible();
	void StopSkipSeasonCheck();
	void SleepCameraUnfaded();
	void SkipCameraUnfaded();
	void ExecuteUbergraph_BP_TimeManager(int EntryPoint);
	void OnSeasonChanged_End__DelegateSignature();
	void OnSeasonChanged__DelegateSignature();
	void OnTimeUpdate_Days__DelegateSignature();
	void OnTimeUpdate_Hours__DelegateSignature();
	void OnTimeUpdate_Minutes__DelegateSignature();
	void OnTimeUpdate__DelegateSignature(int IteratorNumber);
	void OnDaySkip__DelegateSignature();
	void OnTimeOfDayChanged__DelegateSignature(TEnumAsByte<E_TimeOfDay_E_TimeOfDay> TimeOfDay);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
