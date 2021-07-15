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

// Function BP_Audio_Manager.BP_Audio_Manager_C.RandomAmbient
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_Audio               SelectedAudio                  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ValidResult                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Audio_Manager_C::RandomAmbient(struct FST_Audio* SelectedAudio, bool* ValidResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.RandomAmbient");

	ABP_Audio_Manager_C_RandomAmbient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SelectedAudio != nullptr)
		*SelectedAudio = params.SelectedAudio;
	if (ValidResult != nullptr)
		*ValidResult = params.ValidResult;

}


// Function BP_Audio_Manager.BP_Audio_Manager_C.GetMusicComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAudioComponent*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAudioComponent* ABP_Audio_Manager_C::GetMusicComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.GetMusicComponent");

	ABP_Audio_Manager_C_GetMusicComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Audio_Manager.BP_Audio_Manager_C.GetAmbientComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAudioComponent*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAudioComponent* ABP_Audio_Manager_C::GetAmbientComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.GetAmbientComponent");

	ABP_Audio_Manager_C_GetAmbientComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Audio_Manager.BP_Audio_Manager_C.RandomAmbientTrace
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Condition                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Audio_Manager_C::RandomAmbientTrace(struct FVector* Location, bool* Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.RandomAmbientTrace");

	ABP_Audio_Manager_C_RandomAmbientTrace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Condition != nullptr)
		*Condition = params.Condition;

}


// Function BP_Audio_Manager.BP_Audio_Manager_C.CheckRandomSounds
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FadeOutSounds                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Audio_Manager_C::CheckRandomSounds(bool* FadeOutSounds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.CheckRandomSounds");

	ABP_Audio_Manager_C_CheckRandomSounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FadeOutSounds != nullptr)
		*FadeOutSounds = params.FadeOutSounds;

}


// Function BP_Audio_Manager.BP_Audio_Manager_C.SetFloatParametersCombat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Combat                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Audio_Manager_C::SetFloatParametersCombat(float Combat)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.SetFloatParametersCombat");

	ABP_Audio_Manager_C_SetFloatParametersCombat_Params params;
	params.Combat = Combat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_Manager.BP_Audio_Manager_C.SetAmbientVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewVolumeMultiplier            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Audio_Manager_C::SetAmbientVolume(float NewVolumeMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.SetAmbientVolume");

	ABP_Audio_Manager_C_SetAmbientVolume_Params params;
	params.NewVolumeMultiplier = NewVolumeMultiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_Manager.BP_Audio_Manager_C.SetFloatParametersTimeOfDay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeOfDay                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Audio_Manager_C::SetFloatParametersTimeOfDay(float TimeOfDay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.SetFloatParametersTimeOfDay");

	ABP_Audio_Manager_C_SetFloatParametersTimeOfDay_Params params;
	params.TimeOfDay = TimeOfDay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_Manager.BP_Audio_Manager_C.GetRandomAudioInteger
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FST_Audio>       TargetArray                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ABP_Audio_Manager_C::GetRandomAudioInteger(TArray<struct FST_Audio> TargetArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.GetRandomAudioInteger");

	ABP_Audio_Manager_C_GetRandomAudioInteger_Params params;
	params.TargetArray = TargetArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Audio_Manager.BP_Audio_Manager_C.SetAudioVariables
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Audio_Area_C*        AudioAreaReference             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Audio_Manager_C::SetAudioVariables(class ABP_Audio_Area_C* AudioAreaReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.SetAudioVariables");

	ABP_Audio_Manager_C_SetAudioVariables_Params params;
	params.AudioAreaReference = AudioAreaReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_Manager.BP_Audio_Manager_C.RandomMusic
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_Audio               SelectedAudio                  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Audio_Manager_C::RandomMusic(struct FST_Audio* SelectedAudio, bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.RandomMusic");

	ABP_Audio_Manager_C_RandomMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SelectedAudio != nullptr)
		*SelectedAudio = params.SelectedAudio;
	if (Valid != nullptr)
		*Valid = params.Valid;

}


// Function BP_Audio_Manager.BP_Audio_Manager_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Audio_Manager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.UserConstructionScript");

	ABP_Audio_Manager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_Manager.BP_Audio_Manager_C.TimeBeforeNewSong__FinishedFunc
// (BlueprintEvent)
void ABP_Audio_Manager_C::TimeBeforeNewSong__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.TimeBeforeNewSong__FinishedFunc");

	ABP_Audio_Manager_C_TimeBeforeNewSong__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_Manager.BP_Audio_Manager_C.TimeBeforeNewSong__UpdateFunc
// (BlueprintEvent)
void ABP_Audio_Manager_C::TimeBeforeNewSong__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.TimeBeforeNewSong__UpdateFunc");

	ABP_Audio_Manager_C_TimeBeforeNewSong__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_Manager.BP_Audio_Manager_C.TimeBeforeNewSong__Continue__EventFunc
// (BlueprintEvent)
void ABP_Audio_Manager_C::TimeBeforeNewSong__Continue__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.TimeBeforeNewSong__Continue__EventFunc");

	ABP_Audio_Manager_C_TimeBeforeNewSong__Continue__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_Manager.BP_Audio_Manager_C.ExplorationTimeOfDayBlend__FinishedFunc
// (BlueprintEvent)
void ABP_Audio_Manager_C::ExplorationTimeOfDayBlend__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.ExplorationTimeOfDayBlend__FinishedFunc");

	ABP_Audio_Manager_C_ExplorationTimeOfDayBlend__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_Manager.BP_Audio_Manager_C.ExplorationTimeOfDayBlend__UpdateFunc
// (BlueprintEvent)
void ABP_Audio_Manager_C::ExplorationTimeOfDayBlend__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.ExplorationTimeOfDayBlend__UpdateFunc");

	ABP_Audio_Manager_C_ExplorationTimeOfDayBlend__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_Manager.BP_Audio_Manager_C.CombatMusicBlend__FinishedFunc
// (BlueprintEvent)
void ABP_Audio_Manager_C::CombatMusicBlend__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.CombatMusicBlend__FinishedFunc");

	ABP_Audio_Manager_C_CombatMusicBlend__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_Manager.BP_Audio_Manager_C.CombatMusicBlend__UpdateFunc
// (BlueprintEvent)
void ABP_Audio_Manager_C::CombatMusicBlend__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.CombatMusicBlend__UpdateFunc");

	ABP_Audio_Manager_C_CombatMusicBlend__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_Manager.BP_Audio_Manager_C.CloseDelayedMusicGate
// (BlueprintCallable, BlueprintEvent)
void ABP_Audio_Manager_C::CloseDelayedMusicGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.CloseDelayedMusicGate");

	ABP_Audio_Manager_C_CloseDelayedMusicGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_Manager.BP_Audio_Manager_C.PlayDelayedMusicInstant
// (BlueprintCallable, BlueprintEvent)
void ABP_Audio_Manager_C::PlayDelayedMusicInstant()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.PlayDelayedMusicInstant");

	ABP_Audio_Manager_C_PlayDelayedMusicInstant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_Manager.BP_Audio_Manager_C.PlayDelayedMusic
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ContinueTimeline_Delay         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Audio_Manager_C::PlayDelayedMusic(bool ContinueTimeline_Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.PlayDelayedMusic");

	ABP_Audio_Manager_C_PlayDelayedMusic_Params params;
	params.ContinueTimeline_Delay = ContinueTimeline_Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_Manager.BP_Audio_Manager_C.PlayRandomSound
// (BlueprintCallable, BlueprintEvent)
void ABP_Audio_Manager_C::PlayRandomSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.PlayRandomSound");

	ABP_Audio_Manager_C_PlayRandomSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_Manager.BP_Audio_Manager_C.FadeOutRandomAmbient
// (BlueprintCallable, BlueprintEvent)
void ABP_Audio_Manager_C::FadeOutRandomAmbient()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.FadeOutRandomAmbient");

	ABP_Audio_Manager_C_FadeOutRandomAmbient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_Manager.BP_Audio_Manager_C.StartCombatMusic
// (BlueprintCallable, BlueprintEvent)
void ABP_Audio_Manager_C::StartCombatMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.StartCombatMusic");

	ABP_Audio_Manager_C_StartCombatMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_Manager.BP_Audio_Manager_C.CombatMusicCheck
// (BlueprintCallable, BlueprintEvent)
void ABP_Audio_Manager_C::CombatMusicCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.CombatMusicCheck");

	ABP_Audio_Manager_C_CombatMusicCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_Manager.BP_Audio_Manager_C.ChangeAudio
// (BlueprintCallable, BlueprintEvent)
void ABP_Audio_Manager_C::ChangeAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.ChangeAudio");

	ABP_Audio_Manager_C_ChangeAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_Manager.BP_Audio_Manager_C.RemoveFromArray
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Audio_Area_C*        AreaToRemove                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Audio_Manager_C::RemoveFromArray(class ABP_Audio_Area_C* AreaToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.RemoveFromArray");

	ABP_Audio_Manager_C_RemoveFromArray_Params params;
	params.AreaToRemove = AreaToRemove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_Manager.BP_Audio_Manager_C.AddToAudioArray
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Audio_Area_C*        NewArea                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Audio_Manager_C::AddToAudioArray(class ABP_Audio_Area_C* NewArea)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.AddToAudioArray");

	ABP_Audio_Manager_C_AddToAudioArray_Params params;
	params.NewArea = NewArea;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_Manager.BP_Audio_Manager_C.UpdateTimeOfDay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_TimeOfDay_E_TimeOfDay> Night_                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Audio_Manager_C::UpdateTimeOfDay(float Time, TEnumAsByte<E_TimeOfDay_E_TimeOfDay> Night_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.UpdateTimeOfDay");

	ABP_Audio_Manager_C_UpdateTimeOfDay_Params params;
	params.Time = Time;
	params.Night_ = Night_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_Manager.BP_Audio_Manager_C.Set Time Of Day New Sound
// (BlueprintCallable, BlueprintEvent)
void ABP_Audio_Manager_C::Set_Time_Of_Day_New_Sound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.Set Time Of Day New Sound");

	ABP_Audio_Manager_C_Set_Time_Of_Day_New_Sound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_Manager.BP_Audio_Manager_C.SetInside
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bInside                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          AmbientMultiplier              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FReverbSettings         ReverbSettings                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FName                   ReverbAreaName                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReverbPriority                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Audio_Manager_C::SetInside(bool bInside, float AmbientMultiplier, const struct FReverbSettings& ReverbSettings, const struct FName& ReverbAreaName, float ReverbPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.SetInside");

	ABP_Audio_Manager_C_SetInside_Params params;
	params.bInside = bInside;
	params.AmbientMultiplier = AmbientMultiplier;
	params.ReverbSettings = ReverbSettings;
	params.ReverbAreaName = ReverbAreaName;
	params.ReverbPriority = ReverbPriority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_Manager.BP_Audio_Manager_C.Pause Music
// (BlueprintCallable, BlueprintEvent)
void ABP_Audio_Manager_C::Pause_Music()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.Pause Music");

	ABP_Audio_Manager_C_Pause_Music_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_Manager.BP_Audio_Manager_C.Continue Music
// (BlueprintCallable, BlueprintEvent)
void ABP_Audio_Manager_C::Continue_Music()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.Continue Music");

	ABP_Audio_Manager_C_Continue_Music_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_Manager.BP_Audio_Manager_C.UpdateCombatStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Combat_E_Combat> CombatStatus                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Audio_Manager_C::UpdateCombatStatus(TEnumAsByte<E_Combat_E_Combat> CombatStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.UpdateCombatStatus");

	ABP_Audio_Manager_C_UpdateCombatStatus_Params params;
	params.CombatStatus = CombatStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_Manager.BP_Audio_Manager_C.CheckForCombatMusic
// (BlueprintCallable, BlueprintEvent)
void ABP_Audio_Manager_C::CheckForCombatMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.CheckForCombatMusic");

	ABP_Audio_Manager_C_CheckForCombatMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_Manager.BP_Audio_Manager_C.Set Combat or tension sound
// (BlueprintCallable, BlueprintEvent)
void ABP_Audio_Manager_C::Set_Combat_or_tension_sound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.Set Combat or tension sound");

	ABP_Audio_Manager_C_Set_Combat_or_tension_sound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_Manager.BP_Audio_Manager_C.Pause Ambient
// (BlueprintCallable, BlueprintEvent)
void ABP_Audio_Manager_C::Pause_Ambient()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.Pause Ambient");

	ABP_Audio_Manager_C_Pause_Ambient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_Manager.BP_Audio_Manager_C.Unpause Ambient
// (BlueprintCallable, BlueprintEvent)
void ABP_Audio_Manager_C::Unpause_Ambient()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.Unpause Ambient");

	ABP_Audio_Manager_C_Unpause_Ambient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_Manager.BP_Audio_Manager_C.StartAudioSystem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MainMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Audio_Manager_C::StartAudioSystem(bool MainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.StartAudioSystem");

	ABP_Audio_Manager_C_StartAudioSystem_Params params;
	params.MainMenu = MainMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_Manager.BP_Audio_Manager_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MainMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Audio_Manager_C::Init(bool MainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.Init");

	ABP_Audio_Manager_C_Init_Params params;
	params.MainMenu = MainMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_Manager.BP_Audio_Manager_C.UpdateAmbientParameters
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IteratorNumber                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Audio_Manager_C::UpdateAmbientParameters(int IteratorNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.UpdateAmbientParameters");

	ABP_Audio_Manager_C_UpdateAmbientParameters_Params params;
	params.IteratorNumber = IteratorNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_Manager.BP_Audio_Manager_C.StopSoundsComponents
// (BlueprintCallable, BlueprintEvent)
void ABP_Audio_Manager_C::StopSoundsComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.StopSoundsComponents");

	ABP_Audio_Manager_C_StopSoundsComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_Manager.BP_Audio_Manager_C.StopAudioManager
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MainMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Audio_Manager_C::StopAudioManager(bool MainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.StopAudioManager");

	ABP_Audio_Manager_C_StopAudioManager_Params params;
	params.MainMenu = MainMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Audio_Manager.BP_Audio_Manager_C.ExecuteUbergraph_BP_Audio_Manager
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Audio_Manager_C::ExecuteUbergraph_BP_Audio_Manager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Audio_Manager.BP_Audio_Manager_C.ExecuteUbergraph_BP_Audio_Manager");

	ABP_Audio_Manager_C_ExecuteUbergraph_BP_Audio_Manager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
