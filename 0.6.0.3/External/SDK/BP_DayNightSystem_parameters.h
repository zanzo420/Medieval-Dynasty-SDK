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

// Function BP_DayNightSystem.BP_DayNightSystem_C.SaveDataFromSystemToFile
struct ABP_DayNightSystem_C_SaveDataFromSystemToFile_Params
{
	class USAVE_Game_C*                                SaveReference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DayNightSystem.BP_DayNightSystem_C.LoadSaveFileIntoSystem
struct ABP_DayNightSystem_C_LoadSaveFileIntoSystem_Params
{
	class USAVE_Game_C*                                SaveReference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DayNightSystem.BP_DayNightSystem_C.SetSunlightIntensity
struct ABP_DayNightSystem_C_SetSunlightIntensity_Params
{
	float                                              Sun_Light_Intensity;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DayNightSystem.BP_DayNightSystem_C.SetSunAngle
struct ABP_DayNightSystem_C_SetSunAngle_Params
{
	float                                              Sun_Angle;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DayNightSystem.BP_DayNightSystem_C.UpdateMaterialCollection
struct ABP_DayNightSystem_C_UpdateMaterialCollection_Params
{
};

// Function BP_DayNightSystem.BP_DayNightSystem_C.InitMainWeatherParameters
struct ABP_DayNightSystem_C_InitMainWeatherParameters_Params
{
	bool                                               RandomCloudDensity;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_DayNightSystem.BP_DayNightSystem_C.RandomWeather
struct ABP_DayNightSystem_C_RandomWeather_Params
{
};

// Function BP_DayNightSystem.BP_DayNightSystem_C.Init
struct ABP_DayNightSystem_C_Init_Params
{
	float                                              TimeUpdateDelay;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               MainMenu;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_DayNightSystem.BP_DayNightSystem_C.UpdateTime
struct ABP_DayNightSystem_C_UpdateTime_Params
{
	struct FST_Time                                    Time;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DayNightSystem.BP_DayNightSystem_C.UpdateWorldTemperature
struct ABP_DayNightSystem_C_UpdateWorldTemperature_Params
{
};

// Function BP_DayNightSystem.BP_DayNightSystem_C.UpdateMaterialVariables
struct ABP_DayNightSystem_C_UpdateMaterialVariables_Params
{
};

// Function BP_DayNightSystem.BP_DayNightSystem_C.Set Solar Angle
struct ABP_DayNightSystem_C_Set_Solar_Angle_Params
{
};

// Function BP_DayNightSystem.BP_DayNightSystem_C.UserConstructionScript
struct ABP_DayNightSystem_C_UserConstructionScript_Params
{
};

// Function BP_DayNightSystem.BP_DayNightSystem_C.InstantlyUpdateCloudAndWeather
struct ABP_DayNightSystem_C_InstantlyUpdateCloudAndWeather_Params
{
	struct FST_Time                                    Time;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RandomWeather;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                DayVariation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RandomCloudDensity;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_DayNightSystem.BP_DayNightSystem_C.UpdateDayAndNightSystem
struct ABP_DayNightSystem_C_UpdateDayAndNightSystem_Params
{
	struct FST_Time                                    Time;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DayNightSystem.BP_DayNightSystem_C.ReceiveBeginPlay
struct ABP_DayNightSystem_C_ReceiveBeginPlay_Params
{
};

// Function BP_DayNightSystem.BP_DayNightSystem_C.UpdateGraphicsSettings
struct ABP_DayNightSystem_C_UpdateGraphicsSettings_Params
{
};

// Function BP_DayNightSystem.BP_DayNightSystem_C.ExecuteUbergraph_BP_DayNightSystem
struct ABP_DayNightSystem_C_ExecuteUbergraph_BP_DayNightSystem_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DayNightSystem.BP_DayNightSystem_C.StopPrecipitation__DelegateSignature
struct ABP_DayNightSystem_C_StopPrecipitation__DelegateSignature_Params
{
};

// Function BP_DayNightSystem.BP_DayNightSystem_C.StartPrecipitation__DelegateSignature
struct ABP_DayNightSystem_C_StartPrecipitation__DelegateSignature_Params
{
	int                                                Season;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Intensity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
