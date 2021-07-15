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

// Function BP_TimeManager.BP_TimeManager_C.StopTimeManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MainMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TimeManager_C::StopTimeManager(bool MainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.StopTimeManager");

	ABP_TimeManager_C_StopTimeManager_Params params;
	params.MainMenu = MainMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TimeManager.BP_TimeManager_C.GetCurrentSeason
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Season                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_Seasons_E_Seasons> Season_Enum                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TimeManager_C::GetCurrentSeason(int* Season, TEnumAsByte<E_Seasons_E_Seasons>* Season_Enum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.GetCurrentSeason");

	ABP_TimeManager_C_GetCurrentSeason_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Season != nullptr)
		*Season = params.Season;
	if (Season_Enum != nullptr)
		*Season_Enum = params.Season_Enum;

}


// Function BP_TimeManager.BP_TimeManager_C.StartTimeManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LoadGame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           MainMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TimeManager_C::StartTimeManager(bool LoadGame, bool MainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.StartTimeManager");

	ABP_TimeManager_C_StartTimeManager_Params params;
	params.LoadGame = LoadGame;
	params.MainMenu = MainMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TimeManager.BP_TimeManager_C.SaveDataFromSystemToFile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USAVE_Game_C*            SaveReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TimeManager_C::SaveDataFromSystemToFile(class USAVE_Game_C* SaveReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.SaveDataFromSystemToFile");

	ABP_TimeManager_C_SaveDataFromSystemToFile_Params params;
	params.SaveReference = SaveReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TimeManager.BP_TimeManager_C.LoadSaveFileIntoSystem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USAVE_Game_C*            SaveReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TimeManager_C::LoadSaveFileIntoSystem(class USAVE_Game_C* SaveReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.LoadSaveFileIntoSystem");

	ABP_TimeManager_C_LoadSaveFileIntoSystem_Params params;
	params.SaveReference = SaveReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TimeManager.BP_TimeManager_C.IsItPossibleToSleep
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Hour                Hour                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TimeManager_C::IsItPossibleToSleep(bool* Success, struct FST_Hour* Hour)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.IsItPossibleToSleep");

	ABP_TimeManager_C_IsItPossibleToSleep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Hour != nullptr)
		*Hour = params.Hour;

}


// Function BP_TimeManager.BP_TimeManager_C.IsItPossibleToSkipSeason
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Hour                Hour                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TimeManager_C::IsItPossibleToSkipSeason(bool* Success, struct FST_Hour* Hour)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.IsItPossibleToSkipSeason");

	ABP_TimeManager_C_IsItPossibleToSkipSeason_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Hour != nullptr)
		*Hour = params.Hour;

}


// Function BP_TimeManager.BP_TimeManager_C.CheckHowMuchTimeIsMissing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_Time                TargetTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Passed                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Hour                Hour                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Seconds                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TimeManager_C::CheckHowMuchTimeIsMissing(const struct FST_Time& TargetTime, bool* Passed, struct FST_Hour* Hour, int* Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.CheckHowMuchTimeIsMissing");

	ABP_TimeManager_C_CheckHowMuchTimeIsMissing_Params params;
	params.TargetTime = TargetTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Passed != nullptr)
		*Passed = params.Passed;
	if (Hour != nullptr)
		*Hour = params.Hour;
	if (Seconds != nullptr)
		*Seconds = params.Seconds;

}


// Function BP_TimeManager.BP_TimeManager_C.CheckifTimeIsInHourRange
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_Hour                BeginTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Hour                EndTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TimeManager_C::CheckifTimeIsInHourRange(const struct FST_Hour& BeginTime, const struct FST_Hour& EndTime, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.CheckifTimeIsInHourRange");

	ABP_TimeManager_C_CheckifTimeIsInHourRange_Params params;
	params.BeginTime = BeginTime;
	params.EndTime = EndTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_TimeManager.BP_TimeManager_C.CheckIfTimeIsPast
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_Time                Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Passed                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TimeManager_C::CheckIfTimeIsPast(const struct FST_Time& Time, bool* Passed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.CheckIfTimeIsPast");

	ABP_TimeManager_C_CheckIfTimeIsPast_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Passed != nullptr)
		*Passed = params.Passed;

}


// Function BP_TimeManager.BP_TimeManager_C.RandomizeTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_Time                BeginTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            MinTimespan                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            MaxTimespan                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Time                EndTime                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TimeManager_C::RandomizeTime(const struct FST_Time& BeginTime, int MinTimespan, int MaxTimespan, struct FST_Time* EndTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.RandomizeTime");

	ABP_TimeManager_C_RandomizeTime_Params params;
	params.BeginTime = BeginTime;
	params.MinTimespan = MinTimespan;
	params.MaxTimespan = MaxTimespan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EndTime != nullptr)
		*EndTime = params.EndTime;

}


// Function BP_TimeManager.BP_TimeManager_C.SetGlobalTimeSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeDilation                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TimeManager_C::SetGlobalTimeSpeed(float TimeDilation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.SetGlobalTimeSpeed");

	ABP_TimeManager_C_SetGlobalTimeSpeed_Params params;
	params.TimeDilation = TimeDilation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TimeManager.BP_TimeManager_C.Increase Time
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Timespan                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TimeManager_C::Increase_Time(int Timespan)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.Increase Time");

	ABP_TimeManager_C_Increase_Time_Params params;
	params.Timespan = Timespan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TimeManager.BP_TimeManager_C.UpdateByTimer
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_TimeManager_C::UpdateByTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.UpdateByTimer");

	ABP_TimeManager_C_UpdateByTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TimeManager.BP_TimeManager_C.SetPauseTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_Hour                Hour                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TimeManager_C::SetPauseTime(const struct FST_Hour& Hour)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.SetPauseTime");

	ABP_TimeManager_C_SetPauseTime_Params params;
	params.Hour = Hour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TimeManager.BP_TimeManager_C.StopTimer
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_TimeManager_C::StopTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.StopTimer");

	ABP_TimeManager_C_StopTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TimeManager.BP_TimeManager_C.StartTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_TimeManager_C::StartTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.StartTimer");

	ABP_TimeManager_C_StartTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TimeManager.BP_TimeManager_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MainMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TimeManager_C::Init(bool MainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.Init");

	ABP_TimeManager_C_Init_Params params;
	params.MainMenu = MainMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TimeManager.BP_TimeManager_C.CheckSeasonSkip
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_TimeManager_C::CheckSeasonSkip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.CheckSeasonSkip");

	ABP_TimeManager_C_CheckSeasonSkip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TimeManager.BP_TimeManager_C.SetDayTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Hour                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ForceCallOnTimeOfDayChanged    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           LoadFromFile                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TimeManager_C::SetDayTime(int Hour, bool ForceCallOnTimeOfDayChanged, bool LoadFromFile)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.SetDayTime");

	ABP_TimeManager_C_SetDayTime_Params params;
	params.Hour = Hour;
	params.ForceCallOnTimeOfDayChanged = ForceCallOnTimeOfDayChanged;
	params.LoadFromFile = LoadFromFile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TimeManager.BP_TimeManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TimeManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.UserConstructionScript");

	ABP_TimeManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TimeManager.BP_TimeManager_C.SkipDay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TeleportPlayer                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TimeManager_C::SkipDay(bool TeleportPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.SkipDay");

	ABP_TimeManager_C_SkipDay_Params params;
	params.TeleportPlayer = TeleportPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TimeManager.BP_TimeManager_C.SkipSeason
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ChangeTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TimeManager_C::SkipSeason(bool ChangeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.SkipSeason");

	ABP_TimeManager_C_SkipSeason_Params params;
	params.ChangeTime = ChangeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TimeManager.BP_TimeManager_C.InstantlyUpdateTimeAndWeather
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_Time                Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           RandomWeather                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            WeatherVariant                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           RandomCloudDensity             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TimeManager_C::InstantlyUpdateTimeAndWeather(const struct FST_Time& Time, bool RandomWeather, int WeatherVariant, bool RandomCloudDensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.InstantlyUpdateTimeAndWeather");

	ABP_TimeManager_C_InstantlyUpdateTimeAndWeather_Params params;
	params.Time = Time;
	params.RandomWeather = RandomWeather;
	params.WeatherVariant = WeatherVariant;
	params.RandomCloudDensity = RandomCloudDensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TimeManager.BP_TimeManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_TimeManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.ReceiveBeginPlay");

	ABP_TimeManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TimeManager.BP_TimeManager_C.StopFadeSkipDay
// (BlueprintCallable, BlueprintEvent)
void ABP_TimeManager_C::StopFadeSkipDay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.StopFadeSkipDay");

	ABP_TimeManager_C_StopFadeSkipDay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TimeManager.BP_TimeManager_C.StopFadeSkipSeason
// (BlueprintCallable, BlueprintEvent)
void ABP_TimeManager_C::StopFadeSkipSeason()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.StopFadeSkipSeason");

	ABP_TimeManager_C_StopFadeSkipSeason_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TimeManager.BP_TimeManager_C.SeasonSkipFinish
// (BlueprintCallable, BlueprintEvent)
void ABP_TimeManager_C::SeasonSkipFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.SeasonSkipFinish");

	ABP_TimeManager_C_SeasonSkipFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TimeManager.BP_TimeManager_C.SkipWhenPosible
// (BlueprintCallable, BlueprintEvent)
void ABP_TimeManager_C::SkipWhenPosible()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.SkipWhenPosible");

	ABP_TimeManager_C_SkipWhenPosible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TimeManager.BP_TimeManager_C.StopSkipSeasonCheck
// (BlueprintCallable, BlueprintEvent)
void ABP_TimeManager_C::StopSkipSeasonCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.StopSkipSeasonCheck");

	ABP_TimeManager_C_StopSkipSeasonCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TimeManager.BP_TimeManager_C.SleepCameraUnfaded
// (BlueprintCallable, BlueprintEvent)
void ABP_TimeManager_C::SleepCameraUnfaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.SleepCameraUnfaded");

	ABP_TimeManager_C_SleepCameraUnfaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TimeManager.BP_TimeManager_C.SkipCameraUnfaded
// (BlueprintCallable, BlueprintEvent)
void ABP_TimeManager_C::SkipCameraUnfaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.SkipCameraUnfaded");

	ABP_TimeManager_C_SkipCameraUnfaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TimeManager.BP_TimeManager_C.ExecuteUbergraph_BP_TimeManager
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TimeManager_C::ExecuteUbergraph_BP_TimeManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.ExecuteUbergraph_BP_TimeManager");

	ABP_TimeManager_C_ExecuteUbergraph_BP_TimeManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TimeManager.BP_TimeManager_C.OnSeasonChanged_End__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_TimeManager_C::OnSeasonChanged_End__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.OnSeasonChanged_End__DelegateSignature");

	ABP_TimeManager_C_OnSeasonChanged_End__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TimeManager.BP_TimeManager_C.OnSeasonChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_TimeManager_C::OnSeasonChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.OnSeasonChanged__DelegateSignature");

	ABP_TimeManager_C_OnSeasonChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TimeManager.BP_TimeManager_C.OnTimeUpdate_Days__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_TimeManager_C::OnTimeUpdate_Days__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.OnTimeUpdate_Days__DelegateSignature");

	ABP_TimeManager_C_OnTimeUpdate_Days__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TimeManager.BP_TimeManager_C.OnTimeUpdate_Hours__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_TimeManager_C::OnTimeUpdate_Hours__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.OnTimeUpdate_Hours__DelegateSignature");

	ABP_TimeManager_C_OnTimeUpdate_Hours__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TimeManager.BP_TimeManager_C.OnTimeUpdate_Minutes__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_TimeManager_C::OnTimeUpdate_Minutes__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.OnTimeUpdate_Minutes__DelegateSignature");

	ABP_TimeManager_C_OnTimeUpdate_Minutes__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TimeManager.BP_TimeManager_C.OnTimeUpdate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IteratorNumber                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TimeManager_C::OnTimeUpdate__DelegateSignature(int IteratorNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.OnTimeUpdate__DelegateSignature");

	ABP_TimeManager_C_OnTimeUpdate__DelegateSignature_Params params;
	params.IteratorNumber = IteratorNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TimeManager.BP_TimeManager_C.OnDaySkip__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_TimeManager_C::OnDaySkip__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.OnDaySkip__DelegateSignature");

	ABP_TimeManager_C_OnDaySkip__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TimeManager.BP_TimeManager_C.OnTimeOfDayChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_TimeOfDay_E_TimeOfDay> TimeOfDay                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TimeManager_C::OnTimeOfDayChanged__DelegateSignature(TEnumAsByte<E_TimeOfDay_E_TimeOfDay> TimeOfDay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeManager.BP_TimeManager_C.OnTimeOfDayChanged__DelegateSignature");

	ABP_TimeManager_C_OnTimeOfDayChanged__DelegateSignature_Params params;
	params.TimeOfDay = TimeOfDay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
