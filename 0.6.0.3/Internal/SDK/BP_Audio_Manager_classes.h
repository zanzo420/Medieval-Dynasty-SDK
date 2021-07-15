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

// BlueprintGeneratedClass BP_Audio_Manager.BP_Audio_Manager_C
// 0x01D1 (FullSize[0x03F1] - InheritedSize[0x0220])
class ABP_Audio_Manager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UAudioComponent*                             Ambient_3;                                                 // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Ambient_2;                                                 // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                         Billboard;                                                 // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             TimeBeforeNewSong__Direction_365E0CD44604E667EF7ED4AEBA9ED0E6; // 0x0240(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DPDI[0x7];                                     // 0x0241(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          TimeBeforeNewSong;                                         // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ExplorationTimeOfDayBlend_Blend_F8AE2C0B4ECCED7F40FEC48A11649C81; // 0x0250(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             ExplorationTimeOfDayBlend__Direction_F8AE2C0B4ECCED7F40FEC48A11649C81; // 0x0254(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_A6JO[0x3];                                     // 0x0255(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          ExplorationTimeOfDayBlend;                                 // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CombatMusicBlend_Blend_839A7D494AD054EEDFF65DAB7182882A;   // 0x0260(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             CombatMusicBlend__Direction_839A7D494AD054EEDFF65DAB7182882A; // 0x0264(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8X4Y[0x3];                                     // 0x0265(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          CombatMusicBlend;                                          // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxConcurrentAmbientSounds;                                // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bRandomSoundsUseTimeOfDay;                                 // 0x0274(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               PauseRandom;                                               // 0x0275(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CW34[0x2];                                     // 0x0276(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RandomSoundMinDelay;                                       // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RandomSoundMaxDelay;                                       // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAudioComponent*>                     RandomSoundsPlaying;                                       // 0x0280(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FName                                       AreaName;                                                  // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Audio_Area_C*                            AudioAreaReference;                                        // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_Audio_Area_C*>                    OverlappingAudioAreas;                                     // 0x02A0(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class ABP_Audio_Area_C*                            MostRelevantAudioArea;                                     // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_Audio                                   SelectedCombat;                                            // 0x02B8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_Audio                                   SelectedAmbient;                                           // 0x02C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_Audio                                   SelectedSoundtrack;                                        // 0x02D8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_Audio>                           AmbientSounds;                                             // 0x02E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_Audio>                           RandomAmbientCue;                                          // 0x02F8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_Audio>                           CombatMusics;                                              // 0x0308(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_Audio>                           SuspenseMusics;                                            // 0x0318(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_Audio>                           CalmMusics;                                                // 0x0328(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               CombatMusic;                                               // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Inside;                                                    // 0x0339(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_D9NJ[0x2];                                     // 0x033A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DesiredAmbientVolume;                                      // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IndoorAmbientMultiplier;                                   // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               MusicPaused;                                               // 0x0344(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               AmbientPaused;                                             // 0x0345(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               StartCompleted;                                            // 0x0346(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ChangingMusic;                                             // 0x0347(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ChangingAmbient;                                           // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CanCheckAgain;                                             // 0x0349(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Active_Music_component_1;                                  // 0x034A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_S2SC[0x5];                                     // 0x034B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAudioComponent*                             Music_Sound_2;                                             // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Music_Sound_3;                                             // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AmbientCrossFadeDuration;                                  // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_TimeOfDay_E_TimeOfDay>               TimeOfDay;                                                 // 0x0364(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Switch_Method_E_Switch_Method>       Combat_AudioSwitchMethod;                                  // 0x0365(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_G7HQ[0x2];                                     // 0x0366(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Combat_SwitchDelay;                                        // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Combat_SwitchFadeDelay;                                    // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                                   CombatSwitchStinger;                                       // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Switch_Method_E_Switch_Method>       Exploration_AudioSwitchMethod;                             // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AST5[0x3];                                     // 0x0379(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Exploration_SwitchDelay;                                   // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Exploration_SwitchFadeDelay;                               // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4YW9[0x4];                                     // 0x0384(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundCue*                                   MusicSwitchStinger;                                        // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Combat_E_Combat>                     CombatStatus;                                              // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7GFC[0x3];                                     // 0x0391(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CurrentTimeOfDayBlend;                                     // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DesiredTimeOfDayBlend;                                     // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentCombatBlend;                                        // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DesiredCombatBlend;                                        // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bShowAudioVisualizers;                                     // 0x03A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SAV7[0x3];                                     // 0x03A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundAttenuation*                           RandomAmbientAttenuation;                                  // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RandomSoundMultiplier;                                     // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Active_Ambient_component_1;                                // 0x03B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DelayBeforeStart;                                          // 0x03B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UseDelayedMusic;                                           // 0x03B6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KZHL[0x1];                                     // 0x03B7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DelayedFadeDuration;                                       // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DelayBetweenMusicMin;                                      // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DelayBetweenMusicMax;                                      // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DesiredLoopsMax;                                           // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PlayMusicOnGameStart;                                      // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RTXR[0x3];                                     // 0x03C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AmbientSavedSoundVolume;                                   // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SystemsManager_C*                        SystemsManagerReference;                                   // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               MainMenu;                                                  // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PBVG[0x7];                                     // 0x03D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_Audio>                           MainMenuMusics;                                            // 0x03E0(0x0010) (Edit, BlueprintVisible)
	bool                                               StopSystem;                                                // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Audio_Manager.BP_Audio_Manager_C");
		return ptr;
	}



	void RandomAmbient(struct FST_Audio* SelectedAudio, bool* ValidResult);
	class UAudioComponent* GetMusicComponent();
	class UAudioComponent* GetAmbientComponent();
	void RandomAmbientTrace(struct FVector* Location, bool* Condition);
	void CheckRandomSounds(bool* FadeOutSounds);
	void SetFloatParametersCombat(float Combat);
	void SetAmbientVolume(float NewVolumeMultiplier);
	void SetFloatParametersTimeOfDay(float TimeOfDay);
	int GetRandomAudioInteger(TArray<struct FST_Audio> TargetArray);
	void SetAudioVariables(class ABP_Audio_Area_C* AudioAreaReference);
	void RandomMusic(struct FST_Audio* SelectedAudio, bool* Valid);
	void UserConstructionScript();
	void TimeBeforeNewSong__FinishedFunc();
	void TimeBeforeNewSong__UpdateFunc();
	void TimeBeforeNewSong__Continue__EventFunc();
	void ExplorationTimeOfDayBlend__FinishedFunc();
	void ExplorationTimeOfDayBlend__UpdateFunc();
	void CombatMusicBlend__FinishedFunc();
	void CombatMusicBlend__UpdateFunc();
	void CloseDelayedMusicGate();
	void PlayDelayedMusicInstant();
	void PlayDelayedMusic(bool ContinueTimeline_Delay);
	void PlayRandomSound();
	void FadeOutRandomAmbient();
	void StartCombatMusic();
	void CombatMusicCheck();
	void ChangeAudio();
	void RemoveFromArray(class ABP_Audio_Area_C* AreaToRemove);
	void AddToAudioArray(class ABP_Audio_Area_C* NewArea);
	void UpdateTimeOfDay(float Time, TEnumAsByte<E_TimeOfDay_E_TimeOfDay> Night_);
	void Set_Time_Of_Day_New_Sound();
	void SetInside(bool bInside, float AmbientMultiplier, const struct FReverbSettings& ReverbSettings, const struct FName& ReverbAreaName, float ReverbPriority);
	void Pause_Music();
	void Continue_Music();
	void UpdateCombatStatus(TEnumAsByte<E_Combat_E_Combat> CombatStatus);
	void CheckForCombatMusic();
	void Set_Combat_or_tension_sound();
	void Pause_Ambient();
	void Unpause_Ambient();
	void StartAudioSystem(bool MainMenu);
	void Init(bool MainMenu);
	void UpdateAmbientParameters(int IteratorNumber);
	void StopSoundsComponents();
	void StopAudioManager(bool MainMenu);
	void ExecuteUbergraph_BP_Audio_Manager(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
