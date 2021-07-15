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

// Function BPI_AudioManager.BPI_AudioManager_C.UpdateCombatStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Combat_E_Combat> CombatStatus                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_AudioManager_C::UpdateCombatStatus(TEnumAsByte<E_Combat_E_Combat> CombatStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AudioManager.BPI_AudioManager_C.UpdateCombatStatus");

	UBPI_AudioManager_C_UpdateCombatStatus_Params params;
	params.CombatStatus = CombatStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_AudioManager.BPI_AudioManager_C.SetInside
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bInside                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          AmbientMultiplier              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FReverbSettings         ReverbSettings                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FName                   ReverbAreaName                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReverbPriority                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_AudioManager_C::SetInside(bool bInside, float AmbientMultiplier, const struct FReverbSettings& ReverbSettings, const struct FName& ReverbAreaName, float ReverbPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AudioManager.BPI_AudioManager_C.SetInside");

	UBPI_AudioManager_C_SetInside_Params params;
	params.bInside = bInside;
	params.AmbientMultiplier = AmbientMultiplier;
	params.ReverbSettings = ReverbSettings;
	params.ReverbAreaName = ReverbAreaName;
	params.ReverbPriority = ReverbPriority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_AudioManager.BPI_AudioManager_C.UpdateTimeOfDay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_TimeOfDay_E_TimeOfDay> Night_                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_AudioManager_C::UpdateTimeOfDay(float Time, TEnumAsByte<E_TimeOfDay_E_TimeOfDay> Night_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AudioManager.BPI_AudioManager_C.UpdateTimeOfDay");

	UBPI_AudioManager_C_UpdateTimeOfDay_Params params;
	params.Time = Time;
	params.Night_ = Night_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBPI_AudioManager_C::AfterRead()
{
	UInterface::AfterRead();

}

void UBPI_AudioManager_C::BeforeDelete()
{
	UInterface::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
