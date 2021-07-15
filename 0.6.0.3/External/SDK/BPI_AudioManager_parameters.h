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

// Function BPI_AudioManager.BPI_AudioManager_C.UpdateCombatStatus
struct UBPI_AudioManager_C_UpdateCombatStatus_Params
{
	TEnumAsByte<E_Combat_E_Combat>                     CombatStatus;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_AudioManager.BPI_AudioManager_C.SetInside
struct UBPI_AudioManager_C_SetInside_Params
{
	bool                                               bInside;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              AmbientMultiplier;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FReverbSettings                             ReverbSettings;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FName                                       ReverbAreaName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReverbPriority;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_AudioManager.BPI_AudioManager_C.UpdateTimeOfDay
struct UBPI_AudioManager_C_UpdateTimeOfDay_Params
{
	float                                              Time;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_TimeOfDay_E_TimeOfDay>               Night_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
