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

// Function BP_DayNightSystem.BP_DayNightSystem_C.SaveDataFromSystemToFile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USAVE_Game_C*            SaveReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DayNightSystem_C::SaveDataFromSystemToFile(class USAVE_Game_C* SaveReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DayNightSystem.BP_DayNightSystem_C.SaveDataFromSystemToFile");

	ABP_DayNightSystem_C_SaveDataFromSystemToFile_Params params;
	params.SaveReference = SaveReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DayNightSystem.BP_DayNightSystem_C.LoadSaveFileIntoSystem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USAVE_Game_C*            SaveReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DayNightSystem_C::LoadSaveFileIntoSystem(class USAVE_Game_C* SaveReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DayNightSystem.BP_DayNightSystem_C.LoadSaveFileIntoSystem");

	ABP_DayNightSystem_C_LoadSaveFileIntoSystem_Params params;
	params.SaveReference = SaveReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DayNightSystem.BP_DayNightSystem_C.SetSunlightIntensity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Sun_Light_Intensity            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DayNightSystem_C::SetSunlightIntensity(float Sun_Light_Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DayNightSystem.BP_DayNightSystem_C.SetSunlightIntensity");

	ABP_DayNightSystem_C_SetSunlightIntensity_Params params;
	params.Sun_Light_Intensity = Sun_Light_Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DayNightSystem.BP_DayNightSystem_C.SetSunAngle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Sun_Angle                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DayNightSystem_C::SetSunAngle(float Sun_Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DayNightSystem.BP_DayNightSystem_C.SetSunAngle");

	ABP_DayNightSystem_C_SetSunAngle_Params params;
	params.Sun_Angle = Sun_Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DayNightSystem.BP_DayNightSystem_C.UpdateMaterialCollection
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_DayNightSystem_C::UpdateMaterialCollection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DayNightSystem.BP_DayNightSystem_C.UpdateMaterialCollection");

	ABP_DayNightSystem_C_UpdateMaterialCollection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DayNightSystem.BP_DayNightSystem_C.InitMainWeatherParameters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           RandomCloudDensity             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DayNightSystem_C::InitMainWeatherParameters(bool RandomCloudDensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DayNightSystem.BP_DayNightSystem_C.InitMainWeatherParameters");

	ABP_DayNightSystem_C_InitMainWeatherParameters_Params params;
	params.RandomCloudDensity = RandomCloudDensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DayNightSystem.BP_DayNightSystem_C.RandomWeather
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_DayNightSystem_C::RandomWeather()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DayNightSystem.BP_DayNightSystem_C.RandomWeather");

	ABP_DayNightSystem_C_RandomWeather_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DayNightSystem.BP_DayNightSystem_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeUpdateDelay                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           MainMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DayNightSystem_C::Init(float TimeUpdateDelay, bool MainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DayNightSystem.BP_DayNightSystem_C.Init");

	ABP_DayNightSystem_C_Init_Params params;
	params.TimeUpdateDelay = TimeUpdateDelay;
	params.MainMenu = MainMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DayNightSystem.BP_DayNightSystem_C.UpdateTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_Time                Time                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DayNightSystem_C::UpdateTime(const struct FST_Time& Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DayNightSystem.BP_DayNightSystem_C.UpdateTime");

	ABP_DayNightSystem_C_UpdateTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DayNightSystem.BP_DayNightSystem_C.UpdateWorldTemperature
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_DayNightSystem_C::UpdateWorldTemperature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DayNightSystem.BP_DayNightSystem_C.UpdateWorldTemperature");

	ABP_DayNightSystem_C_UpdateWorldTemperature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DayNightSystem.BP_DayNightSystem_C.UpdateMaterialVariables
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_DayNightSystem_C::UpdateMaterialVariables()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DayNightSystem.BP_DayNightSystem_C.UpdateMaterialVariables");

	ABP_DayNightSystem_C_UpdateMaterialVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DayNightSystem.BP_DayNightSystem_C.Set Solar Angle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_DayNightSystem_C::Set_Solar_Angle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DayNightSystem.BP_DayNightSystem_C.Set Solar Angle");

	ABP_DayNightSystem_C_Set_Solar_Angle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DayNightSystem.BP_DayNightSystem_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_DayNightSystem_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DayNightSystem.BP_DayNightSystem_C.UserConstructionScript");

	ABP_DayNightSystem_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DayNightSystem.BP_DayNightSystem_C.InstantlyUpdateCloudAndWeather
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_Time                Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           RandomWeather                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            DayVariation                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           RandomCloudDensity             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DayNightSystem_C::InstantlyUpdateCloudAndWeather(const struct FST_Time& Time, bool RandomWeather, int DayVariation, bool RandomCloudDensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DayNightSystem.BP_DayNightSystem_C.InstantlyUpdateCloudAndWeather");

	ABP_DayNightSystem_C_InstantlyUpdateCloudAndWeather_Params params;
	params.Time = Time;
	params.RandomWeather = RandomWeather;
	params.DayVariation = DayVariation;
	params.RandomCloudDensity = RandomCloudDensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DayNightSystem.BP_DayNightSystem_C.UpdateDayAndNightSystem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_Time                Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DayNightSystem_C::UpdateDayAndNightSystem(const struct FST_Time& Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DayNightSystem.BP_DayNightSystem_C.UpdateDayAndNightSystem");

	ABP_DayNightSystem_C_UpdateDayAndNightSystem_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DayNightSystem.BP_DayNightSystem_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_DayNightSystem_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DayNightSystem.BP_DayNightSystem_C.ReceiveBeginPlay");

	ABP_DayNightSystem_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DayNightSystem.BP_DayNightSystem_C.UpdateGraphicsSettings
// (BlueprintCallable, BlueprintEvent)
void ABP_DayNightSystem_C::UpdateGraphicsSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DayNightSystem.BP_DayNightSystem_C.UpdateGraphicsSettings");

	ABP_DayNightSystem_C_UpdateGraphicsSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DayNightSystem.BP_DayNightSystem_C.ExecuteUbergraph_BP_DayNightSystem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DayNightSystem_C::ExecuteUbergraph_BP_DayNightSystem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DayNightSystem.BP_DayNightSystem_C.ExecuteUbergraph_BP_DayNightSystem");

	ABP_DayNightSystem_C_ExecuteUbergraph_BP_DayNightSystem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DayNightSystem.BP_DayNightSystem_C.StopPrecipitation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_DayNightSystem_C::StopPrecipitation__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DayNightSystem.BP_DayNightSystem_C.StopPrecipitation__DelegateSignature");

	ABP_DayNightSystem_C_StopPrecipitation__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_DayNightSystem.BP_DayNightSystem_C.StartPrecipitation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Season                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DayNightSystem_C::StartPrecipitation__DelegateSignature(int Season, float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DayNightSystem.BP_DayNightSystem_C.StartPrecipitation__DelegateSignature");

	ABP_DayNightSystem_C_StartPrecipitation__DelegateSignature_Params params;
	params.Season = Season;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
