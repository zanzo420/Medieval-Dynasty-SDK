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

// BlueprintGeneratedClass GM_MedievalDynasty.GM_MedievalDynasty_C
// 0x00C8 (FullSize[0x0388] - InheritedSize[0x02C0])
class AGM_MedievalDynasty_C : public AGameModeBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x02C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGI_MedievalDynasty_C*                       GameInstance;                                              // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_LoadingScreen_C*                         LoadingScreenReference;                                    // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SystemsManager_C*                        SystemsManagerReference;                                   // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMediaPlayer*                                MediaPlayer;                                               // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             IntroSound;                                                // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               GameLoading;                                               // 0x02F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QPYW[0x3];                                     // 0x02F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                DaysPerSeason;                                             // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TaxMultiplier;                                             // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BuildingsLimitMultiplier;                                  // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Events;                                                    // 0x0308(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UnlimitedHP;                                               // 0x0309(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UnlimitedStamina;                                          // 0x030A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UnlimitedFood;                                             // 0x030B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UnlimitedWater;                                            // 0x030C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_K3OG[0x3];                                     // 0x030D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NPCNeeds_FoodMultiplier;                                   // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NPCNeeds_WoodMultiplier;                                   // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FoodSpoiling;                                              // 0x0318(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CTOA[0x3];                                     // 0x0319(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AnimalsHPMultiplier;                                       // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AnimalsDamageMultiplier;                                   // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UnlimitedWeight;                                           // 0x0324(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Poisoning;                                                 // 0x0325(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Temperature;                                               // 0x0326(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_58EJ[0x1];                                     // 0x0327(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Default_DaysPerSeason;                                     // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Default_TaxMultiplier;                                     // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Default_BuildingsLimitMultiplier;                          // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Default_Events;                                            // 0x0334(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Default_UnlimitedHP;                                       // 0x0335(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Default_UnlimitedStamina;                                  // 0x0336(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Default_UnlimitedFood;                                     // 0x0337(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Default_UnlimitedWater;                                    // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_64CV[0x3];                                     // 0x0339(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Default_NPCNeeds_FoodMultiplier;                           // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Default_NPCNeeds_WoodMultiplier;                           // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Default_FoodSpoiling;                                      // 0x0344(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FU2C[0x3];                                     // 0x0345(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Default_AnimalsHPMultiplier;                               // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Default_AnimalsDamageMultiplier;                           // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Default_UnlimitedWeight;                                   // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Default_Poisoning;                                         // 0x0351(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Default_Temperature;                                       // 0x0352(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0XJ2[0x5];                                     // 0x0353(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   DebugTime;                                                 // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USAVE_Game_C*                                SaveGameReference;                                         // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     SaveDataSlotName;                                          // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     SaveGameSlotName;                                          // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GM_MedievalDynasty.GM_MedievalDynasty_C");
		return ptr;
	}



	void GetDefaultSaveSlotNames(struct FString* SaveDataSlotName, struct FString* SaveGameSlotName);
	void BPI_FixOldSaveFiles(bool* Success);
	void BPI_QuickLoad(bool* Success);
	void BPI_AutoSave(bool* Success);
	void BPI_QuickSave(bool* Success);
	void BPI_CreateNewSaveGame(const struct FString& UserSaveName, int* GameSavedAtSlot, struct FString* SaveFileName);
	void BPI_LoadGameFromSelectedSlot(const struct FString& SlotName, bool* Success);
	void RemoveCutscene(float Delay);
	void InitSaveSystem();
	void SaveGameModeSettings(class USAVE_Game_C* SaveReference);
	void LoadGameModeSettings();
	void ResetGameModeSettings();
	void RemoveLogos(float Delay);
	void CreateLogos();
	void Remove_Loading_Screen();
	void CreateLoadingScreen();
	void CreateDeathScreen(TEnumAsByte<E_DeathType_E_DeathType> DeathType);
	void RemoveIntro(float Delay);
	bool CreateIntro();
	void RemoveMainMenu(float Delay);
	void CreateMainMenu();
	void SetSystemsManager(bool MainMenu);
	void InitGameMode(bool MainMenu);
	void StartGame();
	void ReceiveBeginPlay();
	void LoadMainMenuMaps();
	void LoadNewGameMaps();
	void LoadGameMap();
	void ReturnToMainMenu(bool InMainMenu);
	void SkipIntro();
	void FinishIntro();
	void PlayIntroSound(const struct FString& OpenedUrl);
	void BPI_SaveGameToSelectedSlot(const struct FString& UserSaveName, const struct FString& DataSlotName, const struct FString& GameSlotName);
	void BPI_SaveData();
	void BPI_ClearSaveSlot(const struct FString& SlotName);
	void CreateCutscene(class UMediaSource* MediaFile);
	void RemoveCutsceneOnEnd();
	void PauseGameOnCutscene(const struct FString& OpenedUrl);
	void ExecuteUbergraph_GM_MedievalDynasty(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
