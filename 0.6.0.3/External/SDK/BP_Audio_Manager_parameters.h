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

// Function BP_Audio_Manager.BP_Audio_Manager_C.RandomAmbient
struct ABP_Audio_Manager_C_RandomAmbient_Params
{
	struct FST_Audio                                   SelectedAudio;                                             // (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ValidResult;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.GetMusicComponent
struct ABP_Audio_Manager_C_GetMusicComponent_Params
{
	class UAudioComponent*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.GetAmbientComponent
struct ABP_Audio_Manager_C_GetAmbientComponent_Params
{
	class UAudioComponent*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.RandomAmbientTrace
struct ABP_Audio_Manager_C_RandomAmbientTrace_Params
{
	struct FVector                                     Location;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Condition;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.CheckRandomSounds
struct ABP_Audio_Manager_C_CheckRandomSounds_Params
{
	bool                                               FadeOutSounds;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.SetFloatParametersCombat
struct ABP_Audio_Manager_C_SetFloatParametersCombat_Params
{
	float                                              Combat;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.SetAmbientVolume
struct ABP_Audio_Manager_C_SetAmbientVolume_Params
{
	float                                              NewVolumeMultiplier;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.SetFloatParametersTimeOfDay
struct ABP_Audio_Manager_C_SetFloatParametersTimeOfDay_Params
{
	float                                              TimeOfDay;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.GetRandomAudioInteger
struct ABP_Audio_Manager_C_GetRandomAudioInteger_Params
{
	TArray<struct FST_Audio>                           TargetArray;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.SetAudioVariables
struct ABP_Audio_Manager_C_SetAudioVariables_Params
{
	class ABP_Audio_Area_C*                            AudioAreaReference;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.RandomMusic
struct ABP_Audio_Manager_C_RandomMusic_Params
{
	struct FST_Audio                                   SelectedAudio;                                             // (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Valid;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.UserConstructionScript
struct ABP_Audio_Manager_C_UserConstructionScript_Params
{
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.TimeBeforeNewSong__FinishedFunc
struct ABP_Audio_Manager_C_TimeBeforeNewSong__FinishedFunc_Params
{
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.TimeBeforeNewSong__UpdateFunc
struct ABP_Audio_Manager_C_TimeBeforeNewSong__UpdateFunc_Params
{
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.TimeBeforeNewSong__Continue__EventFunc
struct ABP_Audio_Manager_C_TimeBeforeNewSong__Continue__EventFunc_Params
{
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.ExplorationTimeOfDayBlend__FinishedFunc
struct ABP_Audio_Manager_C_ExplorationTimeOfDayBlend__FinishedFunc_Params
{
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.ExplorationTimeOfDayBlend__UpdateFunc
struct ABP_Audio_Manager_C_ExplorationTimeOfDayBlend__UpdateFunc_Params
{
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.CombatMusicBlend__FinishedFunc
struct ABP_Audio_Manager_C_CombatMusicBlend__FinishedFunc_Params
{
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.CombatMusicBlend__UpdateFunc
struct ABP_Audio_Manager_C_CombatMusicBlend__UpdateFunc_Params
{
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.CloseDelayedMusicGate
struct ABP_Audio_Manager_C_CloseDelayedMusicGate_Params
{
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.PlayDelayedMusicInstant
struct ABP_Audio_Manager_C_PlayDelayedMusicInstant_Params
{
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.PlayDelayedMusic
struct ABP_Audio_Manager_C_PlayDelayedMusic_Params
{
	bool                                               ContinueTimeline_Delay;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.PlayRandomSound
struct ABP_Audio_Manager_C_PlayRandomSound_Params
{
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.FadeOutRandomAmbient
struct ABP_Audio_Manager_C_FadeOutRandomAmbient_Params
{
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.StartCombatMusic
struct ABP_Audio_Manager_C_StartCombatMusic_Params
{
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.CombatMusicCheck
struct ABP_Audio_Manager_C_CombatMusicCheck_Params
{
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.ChangeAudio
struct ABP_Audio_Manager_C_ChangeAudio_Params
{
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.RemoveFromArray
struct ABP_Audio_Manager_C_RemoveFromArray_Params
{
	class ABP_Audio_Area_C*                            AreaToRemove;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.AddToAudioArray
struct ABP_Audio_Manager_C_AddToAudioArray_Params
{
	class ABP_Audio_Area_C*                            NewArea;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.UpdateTimeOfDay
struct ABP_Audio_Manager_C_UpdateTimeOfDay_Params
{
	float                                              Time;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_TimeOfDay_E_TimeOfDay>               Night_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.Set Time Of Day New Sound
struct ABP_Audio_Manager_C_Set_Time_Of_Day_New_Sound_Params
{
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.SetInside
struct ABP_Audio_Manager_C_SetInside_Params
{
	bool                                               bInside;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              AmbientMultiplier;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FReverbSettings                             ReverbSettings;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FName                                       ReverbAreaName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReverbPriority;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.Pause Music
struct ABP_Audio_Manager_C_Pause_Music_Params
{
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.Continue Music
struct ABP_Audio_Manager_C_Continue_Music_Params
{
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.UpdateCombatStatus
struct ABP_Audio_Manager_C_UpdateCombatStatus_Params
{
	TEnumAsByte<E_Combat_E_Combat>                     CombatStatus;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.CheckForCombatMusic
struct ABP_Audio_Manager_C_CheckForCombatMusic_Params
{
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.Set Combat or tension sound
struct ABP_Audio_Manager_C_Set_Combat_or_tension_sound_Params
{
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.Pause Ambient
struct ABP_Audio_Manager_C_Pause_Ambient_Params
{
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.Unpause Ambient
struct ABP_Audio_Manager_C_Unpause_Ambient_Params
{
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.StartAudioSystem
struct ABP_Audio_Manager_C_StartAudioSystem_Params
{
	bool                                               MainMenu;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.Init
struct ABP_Audio_Manager_C_Init_Params
{
	bool                                               MainMenu;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.UpdateAmbientParameters
struct ABP_Audio_Manager_C_UpdateAmbientParameters_Params
{
	int                                                IteratorNumber;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.StopSoundsComponents
struct ABP_Audio_Manager_C_StopSoundsComponents_Params
{
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.StopAudioManager
struct ABP_Audio_Manager_C_StopAudioManager_Params
{
	bool                                               MainMenu;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Audio_Manager.BP_Audio_Manager_C.ExecuteUbergraph_BP_Audio_Manager
struct ABP_Audio_Manager_C_ExecuteUbergraph_BP_Audio_Manager_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
