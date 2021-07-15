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

// Function GM_MedievalDynasty.GM_MedievalDynasty_C.GetDefaultSaveSlotNames
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SaveDataSlotName               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 SaveGameSlotName               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void AGM_MedievalDynasty_C::GetDefaultSaveSlotNames(struct FString* SaveDataSlotName, struct FString* SaveGameSlotName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.GetDefaultSaveSlotNames");

	AGM_MedievalDynasty_C_GetDefaultSaveSlotNames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SaveDataSlotName != nullptr)
		*SaveDataSlotName = params.SaveDataSlotName;
	if (SaveGameSlotName != nullptr)
		*SaveGameSlotName = params.SaveGameSlotName;

}


// Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_FixOldSaveFiles
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGM_MedievalDynasty_C::BPI_FixOldSaveFiles(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_FixOldSaveFiles");

	AGM_MedievalDynasty_C_BPI_FixOldSaveFiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_QuickLoad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGM_MedievalDynasty_C::BPI_QuickLoad(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_QuickLoad");

	AGM_MedievalDynasty_C_BPI_QuickLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_AutoSave
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGM_MedievalDynasty_C::BPI_AutoSave(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_AutoSave");

	AGM_MedievalDynasty_C_BPI_AutoSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_QuickSave
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGM_MedievalDynasty_C::BPI_QuickSave(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_QuickSave");

	AGM_MedievalDynasty_C_BPI_QuickSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_CreateNewSaveGame
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UserSaveName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            GameSavedAtSlot                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 SaveFileName                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void AGM_MedievalDynasty_C::BPI_CreateNewSaveGame(const struct FString& UserSaveName, int* GameSavedAtSlot, struct FString* SaveFileName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_CreateNewSaveGame");

	AGM_MedievalDynasty_C_BPI_CreateNewSaveGame_Params params;
	params.UserSaveName = UserSaveName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameSavedAtSlot != nullptr)
		*GameSavedAtSlot = params.GameSavedAtSlot;
	if (SaveFileName != nullptr)
		*SaveFileName = params.SaveFileName;

}


// Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_LoadGameFromSelectedSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SlotName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGM_MedievalDynasty_C::BPI_LoadGameFromSelectedSlot(const struct FString& SlotName, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_LoadGameFromSelectedSlot");

	AGM_MedievalDynasty_C_BPI_LoadGameFromSelectedSlot_Params params;
	params.SlotName = SlotName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function GM_MedievalDynasty.GM_MedievalDynasty_C.RemoveCutscene
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGM_MedievalDynasty_C::RemoveCutscene(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.RemoveCutscene");

	AGM_MedievalDynasty_C_RemoveCutscene_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GM_MedievalDynasty.GM_MedievalDynasty_C.InitSaveSystem
// (Public, BlueprintCallable, BlueprintEvent)
void AGM_MedievalDynasty_C::InitSaveSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.InitSaveSystem");

	AGM_MedievalDynasty_C_InitSaveSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GM_MedievalDynasty.GM_MedievalDynasty_C.SaveGameModeSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USAVE_Game_C*            SaveReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGM_MedievalDynasty_C::SaveGameModeSettings(class USAVE_Game_C* SaveReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.SaveGameModeSettings");

	AGM_MedievalDynasty_C_SaveGameModeSettings_Params params;
	params.SaveReference = SaveReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GM_MedievalDynasty.GM_MedievalDynasty_C.LoadGameModeSettings
// (Public, BlueprintCallable, BlueprintEvent)
void AGM_MedievalDynasty_C::LoadGameModeSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.LoadGameModeSettings");

	AGM_MedievalDynasty_C_LoadGameModeSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GM_MedievalDynasty.GM_MedievalDynasty_C.ResetGameModeSettings
// (Public, BlueprintCallable, BlueprintEvent)
void AGM_MedievalDynasty_C::ResetGameModeSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.ResetGameModeSettings");

	AGM_MedievalDynasty_C_ResetGameModeSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GM_MedievalDynasty.GM_MedievalDynasty_C.RemoveLogos
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGM_MedievalDynasty_C::RemoveLogos(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.RemoveLogos");

	AGM_MedievalDynasty_C_RemoveLogos_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GM_MedievalDynasty.GM_MedievalDynasty_C.CreateLogos
// (Public, BlueprintCallable, BlueprintEvent)
void AGM_MedievalDynasty_C::CreateLogos()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.CreateLogos");

	AGM_MedievalDynasty_C_CreateLogos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GM_MedievalDynasty.GM_MedievalDynasty_C.Remove Loading Screen
// (Public, BlueprintCallable, BlueprintEvent)
void AGM_MedievalDynasty_C::Remove_Loading_Screen()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.Remove Loading Screen");

	AGM_MedievalDynasty_C_Remove_Loading_Screen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GM_MedievalDynasty.GM_MedievalDynasty_C.CreateLoadingScreen
// (Public, BlueprintCallable, BlueprintEvent)
void AGM_MedievalDynasty_C::CreateLoadingScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.CreateLoadingScreen");

	AGM_MedievalDynasty_C_CreateLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GM_MedievalDynasty.GM_MedievalDynasty_C.CreateDeathScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_DeathType_E_DeathType> DeathType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGM_MedievalDynasty_C::CreateDeathScreen(TEnumAsByte<E_DeathType_E_DeathType> DeathType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.CreateDeathScreen");

	AGM_MedievalDynasty_C_CreateDeathScreen_Params params;
	params.DeathType = DeathType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GM_MedievalDynasty.GM_MedievalDynasty_C.RemoveIntro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGM_MedievalDynasty_C::RemoveIntro(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.RemoveIntro");

	AGM_MedievalDynasty_C_RemoveIntro_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GM_MedievalDynasty.GM_MedievalDynasty_C.CreateIntro
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AGM_MedievalDynasty_C::CreateIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.CreateIntro");

	AGM_MedievalDynasty_C_CreateIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GM_MedievalDynasty.GM_MedievalDynasty_C.RemoveMainMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGM_MedievalDynasty_C::RemoveMainMenu(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.RemoveMainMenu");

	AGM_MedievalDynasty_C_RemoveMainMenu_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GM_MedievalDynasty.GM_MedievalDynasty_C.CreateMainMenu
// (Public, BlueprintCallable, BlueprintEvent)
void AGM_MedievalDynasty_C::CreateMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.CreateMainMenu");

	AGM_MedievalDynasty_C_CreateMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GM_MedievalDynasty.GM_MedievalDynasty_C.SetSystemsManager
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MainMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGM_MedievalDynasty_C::SetSystemsManager(bool MainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.SetSystemsManager");

	AGM_MedievalDynasty_C_SetSystemsManager_Params params;
	params.MainMenu = MainMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GM_MedievalDynasty.GM_MedievalDynasty_C.InitGameMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MainMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGM_MedievalDynasty_C::InitGameMode(bool MainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.InitGameMode");

	AGM_MedievalDynasty_C_InitGameMode_Params params;
	params.MainMenu = MainMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GM_MedievalDynasty.GM_MedievalDynasty_C.StartGame
// (BlueprintCallable, BlueprintEvent)
void AGM_MedievalDynasty_C::StartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.StartGame");

	AGM_MedievalDynasty_C_StartGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GM_MedievalDynasty.GM_MedievalDynasty_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AGM_MedievalDynasty_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.ReceiveBeginPlay");

	AGM_MedievalDynasty_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GM_MedievalDynasty.GM_MedievalDynasty_C.LoadMainMenuMaps
// (BlueprintCallable, BlueprintEvent)
void AGM_MedievalDynasty_C::LoadMainMenuMaps()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.LoadMainMenuMaps");

	AGM_MedievalDynasty_C_LoadMainMenuMaps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GM_MedievalDynasty.GM_MedievalDynasty_C.LoadNewGameMaps
// (BlueprintCallable, BlueprintEvent)
void AGM_MedievalDynasty_C::LoadNewGameMaps()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.LoadNewGameMaps");

	AGM_MedievalDynasty_C_LoadNewGameMaps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GM_MedievalDynasty.GM_MedievalDynasty_C.LoadGameMap
// (BlueprintCallable, BlueprintEvent)
void AGM_MedievalDynasty_C::LoadGameMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.LoadGameMap");

	AGM_MedievalDynasty_C_LoadGameMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GM_MedievalDynasty.GM_MedievalDynasty_C.ReturnToMainMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InMainMenu                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGM_MedievalDynasty_C::ReturnToMainMenu(bool InMainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.ReturnToMainMenu");

	AGM_MedievalDynasty_C_ReturnToMainMenu_Params params;
	params.InMainMenu = InMainMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GM_MedievalDynasty.GM_MedievalDynasty_C.SkipIntro
// (BlueprintCallable, BlueprintEvent)
void AGM_MedievalDynasty_C::SkipIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.SkipIntro");

	AGM_MedievalDynasty_C_SkipIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GM_MedievalDynasty.GM_MedievalDynasty_C.FinishIntro
// (BlueprintCallable, BlueprintEvent)
void AGM_MedievalDynasty_C::FinishIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.FinishIntro");

	AGM_MedievalDynasty_C_FinishIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GM_MedievalDynasty.GM_MedievalDynasty_C.PlayIntroSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 OpenedUrl                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AGM_MedievalDynasty_C::PlayIntroSound(const struct FString& OpenedUrl)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.PlayIntroSound");

	AGM_MedievalDynasty_C_PlayIntroSound_Params params;
	params.OpenedUrl = OpenedUrl;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_SaveGameToSelectedSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UserSaveName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 DataSlotName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 GameSlotName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AGM_MedievalDynasty_C::BPI_SaveGameToSelectedSlot(const struct FString& UserSaveName, const struct FString& DataSlotName, const struct FString& GameSlotName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_SaveGameToSelectedSlot");

	AGM_MedievalDynasty_C_BPI_SaveGameToSelectedSlot_Params params;
	params.UserSaveName = UserSaveName;
	params.DataSlotName = DataSlotName;
	params.GameSlotName = GameSlotName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_SaveData
// (Public, BlueprintCallable, BlueprintEvent)
void AGM_MedievalDynasty_C::BPI_SaveData()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_SaveData");

	AGM_MedievalDynasty_C_BPI_SaveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_ClearSaveSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SlotName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AGM_MedievalDynasty_C::BPI_ClearSaveSlot(const struct FString& SlotName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.BPI_ClearSaveSlot");

	AGM_MedievalDynasty_C_BPI_ClearSaveSlot_Params params;
	params.SlotName = SlotName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GM_MedievalDynasty.GM_MedievalDynasty_C.CreateCutscene
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMediaSource*            MediaFile                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGM_MedievalDynasty_C::CreateCutscene(class UMediaSource* MediaFile)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.CreateCutscene");

	AGM_MedievalDynasty_C_CreateCutscene_Params params;
	params.MediaFile = MediaFile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GM_MedievalDynasty.GM_MedievalDynasty_C.RemoveCutsceneOnEnd
// (BlueprintCallable, BlueprintEvent)
void AGM_MedievalDynasty_C::RemoveCutsceneOnEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.RemoveCutsceneOnEnd");

	AGM_MedievalDynasty_C_RemoveCutsceneOnEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GM_MedievalDynasty.GM_MedievalDynasty_C.PauseGameOnCutscene
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 OpenedUrl                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AGM_MedievalDynasty_C::PauseGameOnCutscene(const struct FString& OpenedUrl)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.PauseGameOnCutscene");

	AGM_MedievalDynasty_C_PauseGameOnCutscene_Params params;
	params.OpenedUrl = OpenedUrl;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GM_MedievalDynasty.GM_MedievalDynasty_C.ExecuteUbergraph_GM_MedievalDynasty
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGM_MedievalDynasty_C::ExecuteUbergraph_GM_MedievalDynasty(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GM_MedievalDynasty.GM_MedievalDynasty_C.ExecuteUbergraph_GM_MedievalDynasty");

	AGM_MedievalDynasty_C_ExecuteUbergraph_GM_MedievalDynasty_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AGM_MedievalDynasty_C::AfterRead()
{
	AGameModeBase::AfterRead();

	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
	READ_PTR_FULL(GameInstance, UGI_MedievalDynasty_C);
	READ_PTR_FULL(LoadingScreenReference, UUI_LoadingScreen_C);
	READ_PTR_FULL(SystemsManagerReference, ABP_SystemsManager_C);
	READ_PTR_FULL(MediaPlayer, UMediaPlayer);
	READ_PTR_FULL(IntroSound, UAudioComponent);
	READ_PTR_FULL(SaveGameReference, USAVE_Game_C);
}

void AGM_MedievalDynasty_C::BeforeDelete()
{
	AGameModeBase::BeforeDelete();

	DELE_PTR_FULL(DefaultSceneRoot);
	DELE_PTR_FULL(GameInstance);
	DELE_PTR_FULL(LoadingScreenReference);
	DELE_PTR_FULL(SystemsManagerReference);
	DELE_PTR_FULL(MediaPlayer);
	DELE_PTR_FULL(IntroSound);
	DELE_PTR_FULL(SaveGameReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
