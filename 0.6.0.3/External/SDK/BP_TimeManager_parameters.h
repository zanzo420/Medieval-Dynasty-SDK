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

// Function BP_TimeManager.BP_TimeManager_C.StopTimeManager
struct ABP_TimeManager_C_StopTimeManager_Params
{
	bool                                               MainMenu;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TimeManager.BP_TimeManager_C.GetCurrentSeason
struct ABP_TimeManager_C_GetCurrentSeason_Params
{
	int                                                Season;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Seasons_E_Seasons>                   Season_Enum;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TimeManager.BP_TimeManager_C.StartTimeManager
struct ABP_TimeManager_C_StartTimeManager_Params
{
	bool                                               LoadGame;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               MainMenu;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TimeManager.BP_TimeManager_C.SaveDataFromSystemToFile
struct ABP_TimeManager_C_SaveDataFromSystemToFile_Params
{
	class USAVE_Game_C*                                SaveReference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TimeManager.BP_TimeManager_C.LoadSaveFileIntoSystem
struct ABP_TimeManager_C_LoadSaveFileIntoSystem_Params
{
	class USAVE_Game_C*                                SaveReference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TimeManager.BP_TimeManager_C.IsItPossibleToSleep
struct ABP_TimeManager_C_IsItPossibleToSleep_Params
{
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_Hour                                    Hour;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TimeManager.BP_TimeManager_C.IsItPossibleToSkipSeason
struct ABP_TimeManager_C_IsItPossibleToSkipSeason_Params
{
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_Hour                                    Hour;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TimeManager.BP_TimeManager_C.CheckHowMuchTimeIsMissing
struct ABP_TimeManager_C_CheckHowMuchTimeIsMissing_Params
{
	struct FST_Time                                    TargetTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Passed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_Hour                                    Hour;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Seconds;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TimeManager.BP_TimeManager_C.CheckifTimeIsInHourRange
struct ABP_TimeManager_C_CheckifTimeIsInHourRange_Params
{
	struct FST_Hour                                    BeginTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_Hour                                    EndTime;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TimeManager.BP_TimeManager_C.CheckIfTimeIsPast
struct ABP_TimeManager_C_CheckIfTimeIsPast_Params
{
	struct FST_Time                                    Time;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Passed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TimeManager.BP_TimeManager_C.RandomizeTime
struct ABP_TimeManager_C_RandomizeTime_Params
{
	struct FST_Time                                    BeginTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MinTimespan;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxTimespan;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_Time                                    EndTime;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TimeManager.BP_TimeManager_C.SetGlobalTimeSpeed
struct ABP_TimeManager_C_SetGlobalTimeSpeed_Params
{
	float                                              TimeDilation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TimeManager.BP_TimeManager_C.Increase Time
struct ABP_TimeManager_C_Increase_Time_Params
{
	int                                                Timespan;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TimeManager.BP_TimeManager_C.UpdateByTimer
struct ABP_TimeManager_C_UpdateByTimer_Params
{
};

// Function BP_TimeManager.BP_TimeManager_C.SetPauseTime
struct ABP_TimeManager_C_SetPauseTime_Params
{
	struct FST_Hour                                    Hour;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TimeManager.BP_TimeManager_C.StopTimer
struct ABP_TimeManager_C_StopTimer_Params
{
};

// Function BP_TimeManager.BP_TimeManager_C.StartTimer
struct ABP_TimeManager_C_StartTimer_Params
{
};

// Function BP_TimeManager.BP_TimeManager_C.Init
struct ABP_TimeManager_C_Init_Params
{
	bool                                               MainMenu;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TimeManager.BP_TimeManager_C.CheckSeasonSkip
struct ABP_TimeManager_C_CheckSeasonSkip_Params
{
};

// Function BP_TimeManager.BP_TimeManager_C.SetDayTime
struct ABP_TimeManager_C_SetDayTime_Params
{
	int                                                Hour;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ForceCallOnTimeOfDayChanged;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               LoadFromFile;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TimeManager.BP_TimeManager_C.UserConstructionScript
struct ABP_TimeManager_C_UserConstructionScript_Params
{
};

// Function BP_TimeManager.BP_TimeManager_C.SkipDay
struct ABP_TimeManager_C_SkipDay_Params
{
	bool                                               TeleportPlayer;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TimeManager.BP_TimeManager_C.SkipSeason
struct ABP_TimeManager_C_SkipSeason_Params
{
	bool                                               ChangeTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TimeManager.BP_TimeManager_C.InstantlyUpdateTimeAndWeather
struct ABP_TimeManager_C_InstantlyUpdateTimeAndWeather_Params
{
	struct FST_Time                                    Time;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RandomWeather;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                WeatherVariant;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RandomCloudDensity;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TimeManager.BP_TimeManager_C.ReceiveBeginPlay
struct ABP_TimeManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_TimeManager.BP_TimeManager_C.StopFadeSkipDay
struct ABP_TimeManager_C_StopFadeSkipDay_Params
{
};

// Function BP_TimeManager.BP_TimeManager_C.StopFadeSkipSeason
struct ABP_TimeManager_C_StopFadeSkipSeason_Params
{
};

// Function BP_TimeManager.BP_TimeManager_C.SeasonSkipFinish
struct ABP_TimeManager_C_SeasonSkipFinish_Params
{
};

// Function BP_TimeManager.BP_TimeManager_C.SkipWhenPosible
struct ABP_TimeManager_C_SkipWhenPosible_Params
{
};

// Function BP_TimeManager.BP_TimeManager_C.StopSkipSeasonCheck
struct ABP_TimeManager_C_StopSkipSeasonCheck_Params
{
};

// Function BP_TimeManager.BP_TimeManager_C.SleepCameraUnfaded
struct ABP_TimeManager_C_SleepCameraUnfaded_Params
{
};

// Function BP_TimeManager.BP_TimeManager_C.SkipCameraUnfaded
struct ABP_TimeManager_C_SkipCameraUnfaded_Params
{
};

// Function BP_TimeManager.BP_TimeManager_C.ExecuteUbergraph_BP_TimeManager
struct ABP_TimeManager_C_ExecuteUbergraph_BP_TimeManager_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TimeManager.BP_TimeManager_C.OnSeasonChanged_End__DelegateSignature
struct ABP_TimeManager_C_OnSeasonChanged_End__DelegateSignature_Params
{
};

// Function BP_TimeManager.BP_TimeManager_C.OnSeasonChanged__DelegateSignature
struct ABP_TimeManager_C_OnSeasonChanged__DelegateSignature_Params
{
};

// Function BP_TimeManager.BP_TimeManager_C.OnTimeUpdate_Days__DelegateSignature
struct ABP_TimeManager_C_OnTimeUpdate_Days__DelegateSignature_Params
{
};

// Function BP_TimeManager.BP_TimeManager_C.OnTimeUpdate_Hours__DelegateSignature
struct ABP_TimeManager_C_OnTimeUpdate_Hours__DelegateSignature_Params
{
};

// Function BP_TimeManager.BP_TimeManager_C.OnTimeUpdate_Minutes__DelegateSignature
struct ABP_TimeManager_C_OnTimeUpdate_Minutes__DelegateSignature_Params
{
};

// Function BP_TimeManager.BP_TimeManager_C.OnTimeUpdate__DelegateSignature
struct ABP_TimeManager_C_OnTimeUpdate__DelegateSignature_Params
{
	int                                                IteratorNumber;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TimeManager.BP_TimeManager_C.OnDaySkip__DelegateSignature
struct ABP_TimeManager_C_OnDaySkip__DelegateSignature_Params
{
};

// Function BP_TimeManager.BP_TimeManager_C.OnTimeOfDayChanged__DelegateSignature
struct ABP_TimeManager_C_OnTimeOfDayChanged__DelegateSignature_Params
{
	TEnumAsByte<E_TimeOfDay_E_TimeOfDay>               TimeOfDay;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
