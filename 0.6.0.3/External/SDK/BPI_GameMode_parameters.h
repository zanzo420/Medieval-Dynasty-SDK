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

// Function BPI_GameMode.BPI_GameMode_C.GetDefaultSaveSlotNames
struct UBPI_GameMode_C_GetDefaultSaveSlotNames_Params
{
	struct FString                                     SaveDataSlotName;                                          // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     SaveGameSlotName;                                          // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BPI_GameMode.BPI_GameMode_C.BPI_FixOldSaveFiles
struct UBPI_GameMode_C_BPI_FixOldSaveFiles_Params
{
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_GameMode.BPI_GameMode_C.BPI_QuickLoad
struct UBPI_GameMode_C_BPI_QuickLoad_Params
{
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_GameMode.BPI_GameMode_C.BPI_AutoSave
struct UBPI_GameMode_C_BPI_AutoSave_Params
{
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_GameMode.BPI_GameMode_C.BPI_QuickSave
struct UBPI_GameMode_C_BPI_QuickSave_Params
{
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_GameMode.BPI_GameMode_C.BPI_CreateNewSaveGame
struct UBPI_GameMode_C_BPI_CreateNewSaveGame_Params
{
	struct FString                                     UserSaveName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                GameSavedAtSlot;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     SaveFileName;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BPI_GameMode.BPI_GameMode_C.BPI_SaveData
struct UBPI_GameMode_C_BPI_SaveData_Params
{
};

// Function BPI_GameMode.BPI_GameMode_C.BPI_ClearSaveSlot
struct UBPI_GameMode_C_BPI_ClearSaveSlot_Params
{
	struct FString                                     SlotName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BPI_GameMode.BPI_GameMode_C.BPI_SaveGameToSelectedSlot
struct UBPI_GameMode_C_BPI_SaveGameToSelectedSlot_Params
{
	struct FString                                     UserSaveName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     DataSlotName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     GameSlotName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BPI_GameMode.BPI_GameMode_C.BPI_LoadGameFromSelectedSlot
struct UBPI_GameMode_C_BPI_LoadGameFromSelectedSlot_Params
{
	struct FString                                     SlotName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
