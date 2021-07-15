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

// Function GM_MedievalDynasty.GM_MedievalDynasty_C.GetDefaultSaveSlotNames
struct AGM_MedievalDynasty_C_GetDefaultSaveSlotNames_Params
{
	struct FString                                     SaveDataSlotName;                                          // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     SaveGameSlotName;                                          // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_FixOldSaveFiles
struct AGM_MedievalDynasty_C_BPI_FixOldSaveFiles_Params
{
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_QuickLoad
struct AGM_MedievalDynasty_C_BPI_QuickLoad_Params
{
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_AutoSave
struct AGM_MedievalDynasty_C_BPI_AutoSave_Params
{
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_QuickSave
struct AGM_MedievalDynasty_C_BPI_QuickSave_Params
{
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_CreateNewSaveGame
struct AGM_MedievalDynasty_C_BPI_CreateNewSaveGame_Params
{
	struct FString                                     UserSaveName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                GameSavedAtSlot;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     SaveFileName;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_LoadGameFromSelectedSlot
struct AGM_MedievalDynasty_C_BPI_LoadGameFromSelectedSlot_Params
{
	struct FString                                     SlotName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GM_MedievalDynasty.GM_MedievalDynasty_C.RemoveCutscene
struct AGM_MedievalDynasty_C_RemoveCutscene_Params
{
	float                                              Delay;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GM_MedievalDynasty.GM_MedievalDynasty_C.InitSaveSystem
struct AGM_MedievalDynasty_C_InitSaveSystem_Params
{
};

// Function GM_MedievalDynasty.GM_MedievalDynasty_C.SaveGameModeSettings
struct AGM_MedievalDynasty_C_SaveGameModeSettings_Params
{
	class USAVE_Game_C*                                SaveReference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GM_MedievalDynasty.GM_MedievalDynasty_C.LoadGameModeSettings
struct AGM_MedievalDynasty_C_LoadGameModeSettings_Params
{
};

// Function GM_MedievalDynasty.GM_MedievalDynasty_C.ResetGameModeSettings
struct AGM_MedievalDynasty_C_ResetGameModeSettings_Params
{
};

// Function GM_MedievalDynasty.GM_MedievalDynasty_C.RemoveLogos
struct AGM_MedievalDynasty_C_RemoveLogos_Params
{
	float                                              Delay;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GM_MedievalDynasty.GM_MedievalDynasty_C.CreateLogos
struct AGM_MedievalDynasty_C_CreateLogos_Params
{
};

// Function GM_MedievalDynasty.GM_MedievalDynasty_C.Remove Loading Screen
struct AGM_MedievalDynasty_C_Remove_Loading_Screen_Params
{
};

// Function GM_MedievalDynasty.GM_MedievalDynasty_C.CreateLoadingScreen
struct AGM_MedievalDynasty_C_CreateLoadingScreen_Params
{
};

// Function GM_MedievalDynasty.GM_MedievalDynasty_C.CreateDeathScreen
struct AGM_MedievalDynasty_C_CreateDeathScreen_Params
{
	TEnumAsByte<E_DeathType_E_DeathType>               DeathType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GM_MedievalDynasty.GM_MedievalDynasty_C.RemoveIntro
struct AGM_MedievalDynasty_C_RemoveIntro_Params
{
	float                                              Delay;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GM_MedievalDynasty.GM_MedievalDynasty_C.CreateIntro
struct AGM_MedievalDynasty_C_CreateIntro_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GM_MedievalDynasty.GM_MedievalDynasty_C.RemoveMainMenu
struct AGM_MedievalDynasty_C_RemoveMainMenu_Params
{
	float                                              Delay;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GM_MedievalDynasty.GM_MedievalDynasty_C.CreateMainMenu
struct AGM_MedievalDynasty_C_CreateMainMenu_Params
{
};

// Function GM_MedievalDynasty.GM_MedievalDynasty_C.SetSystemsManager
struct AGM_MedievalDynasty_C_SetSystemsManager_Params
{
	bool                                               MainMenu;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GM_MedievalDynasty.GM_MedievalDynasty_C.InitGameMode
struct AGM_MedievalDynasty_C_InitGameMode_Params
{
	bool                                               MainMenu;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GM_MedievalDynasty.GM_MedievalDynasty_C.StartGame
struct AGM_MedievalDynasty_C_StartGame_Params
{
};

// Function GM_MedievalDynasty.GM_MedievalDynasty_C.ReceiveBeginPlay
struct AGM_MedievalDynasty_C_ReceiveBeginPlay_Params
{
};

// Function GM_MedievalDynasty.GM_MedievalDynasty_C.LoadMainMenuMaps
struct AGM_MedievalDynasty_C_LoadMainMenuMaps_Params
{
};

// Function GM_MedievalDynasty.GM_MedievalDynasty_C.LoadNewGameMaps
struct AGM_MedievalDynasty_C_LoadNewGameMaps_Params
{
};

// Function GM_MedievalDynasty.GM_MedievalDynasty_C.LoadGameMap
struct AGM_MedievalDynasty_C_LoadGameMap_Params
{
};

// Function GM_MedievalDynasty.GM_MedievalDynasty_C.ReturnToMainMenu
struct AGM_MedievalDynasty_C_ReturnToMainMenu_Params
{
	bool                                               InMainMenu;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GM_MedievalDynasty.GM_MedievalDynasty_C.SkipIntro
struct AGM_MedievalDynasty_C_SkipIntro_Params
{
};

// Function GM_MedievalDynasty.GM_MedievalDynasty_C.FinishIntro
struct AGM_MedievalDynasty_C_FinishIntro_Params
{
};

// Function GM_MedievalDynasty.GM_MedievalDynasty_C.PlayIntroSound
struct AGM_MedievalDynasty_C_PlayIntroSound_Params
{
	struct FString                                     OpenedUrl;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_SaveGameToSelectedSlot
struct AGM_MedievalDynasty_C_BPI_SaveGameToSelectedSlot_Params
{
	struct FString                                     UserSaveName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     DataSlotName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     GameSlotName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_SaveData
struct AGM_MedievalDynasty_C_BPI_SaveData_Params
{
};

// Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_ClearSaveSlot
struct AGM_MedievalDynasty_C_BPI_ClearSaveSlot_Params
{
	struct FString                                     SlotName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GM_MedievalDynasty.GM_MedievalDynasty_C.CreateCutscene
struct AGM_MedievalDynasty_C_CreateCutscene_Params
{
	class UMediaSource*                                MediaFile;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GM_MedievalDynasty.GM_MedievalDynasty_C.RemoveCutsceneOnEnd
struct AGM_MedievalDynasty_C_RemoveCutsceneOnEnd_Params
{
};

// Function GM_MedievalDynasty.GM_MedievalDynasty_C.PauseGameOnCutscene
struct AGM_MedievalDynasty_C_PauseGameOnCutscene_Params
{
	struct FString                                     OpenedUrl;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GM_MedievalDynasty.GM_MedievalDynasty_C.ExecuteUbergraph_GM_MedievalDynasty
struct AGM_MedievalDynasty_C_ExecuteUbergraph_GM_MedievalDynasty_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
