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

// Function BPI_GameMode.BPI_GameMode_C.GetDefaultSaveSlotNames
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SaveDataSlotName               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 SaveGameSlotName               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_GameMode_C::GetDefaultSaveSlotNames(struct FString* SaveDataSlotName, struct FString* SaveGameSlotName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GameMode.BPI_GameMode_C.GetDefaultSaveSlotNames");

	UBPI_GameMode_C_GetDefaultSaveSlotNames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SaveDataSlotName != nullptr)
		*SaveDataSlotName = params.SaveDataSlotName;
	if (SaveGameSlotName != nullptr)
		*SaveGameSlotName = params.SaveGameSlotName;

}


// Function BPI_GameMode.BPI_GameMode_C.BPI_FixOldSaveFiles
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_GameMode_C::BPI_FixOldSaveFiles(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GameMode.BPI_GameMode_C.BPI_FixOldSaveFiles");

	UBPI_GameMode_C_BPI_FixOldSaveFiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BPI_GameMode.BPI_GameMode_C.BPI_QuickLoad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_GameMode_C::BPI_QuickLoad(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GameMode.BPI_GameMode_C.BPI_QuickLoad");

	UBPI_GameMode_C_BPI_QuickLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BPI_GameMode.BPI_GameMode_C.BPI_AutoSave
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_GameMode_C::BPI_AutoSave(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GameMode.BPI_GameMode_C.BPI_AutoSave");

	UBPI_GameMode_C_BPI_AutoSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BPI_GameMode.BPI_GameMode_C.BPI_QuickSave
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_GameMode_C::BPI_QuickSave(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GameMode.BPI_GameMode_C.BPI_QuickSave");

	UBPI_GameMode_C_BPI_QuickSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BPI_GameMode.BPI_GameMode_C.BPI_CreateNewSaveGame
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UserSaveName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            GameSavedAtSlot                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 SaveFileName                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_GameMode_C::BPI_CreateNewSaveGame(const struct FString& UserSaveName, int* GameSavedAtSlot, struct FString* SaveFileName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GameMode.BPI_GameMode_C.BPI_CreateNewSaveGame");

	UBPI_GameMode_C_BPI_CreateNewSaveGame_Params params;
	params.UserSaveName = UserSaveName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameSavedAtSlot != nullptr)
		*GameSavedAtSlot = params.GameSavedAtSlot;
	if (SaveFileName != nullptr)
		*SaveFileName = params.SaveFileName;

}


// Function BPI_GameMode.BPI_GameMode_C.BPI_SaveData
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_GameMode_C::BPI_SaveData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GameMode.BPI_GameMode_C.BPI_SaveData");

	UBPI_GameMode_C_BPI_SaveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_GameMode.BPI_GameMode_C.BPI_ClearSaveSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SlotName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_GameMode_C::BPI_ClearSaveSlot(const struct FString& SlotName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GameMode.BPI_GameMode_C.BPI_ClearSaveSlot");

	UBPI_GameMode_C_BPI_ClearSaveSlot_Params params;
	params.SlotName = SlotName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_GameMode.BPI_GameMode_C.BPI_SaveGameToSelectedSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UserSaveName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 DataSlotName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 GameSlotName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_GameMode_C::BPI_SaveGameToSelectedSlot(const struct FString& UserSaveName, const struct FString& DataSlotName, const struct FString& GameSlotName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GameMode.BPI_GameMode_C.BPI_SaveGameToSelectedSlot");

	UBPI_GameMode_C_BPI_SaveGameToSelectedSlot_Params params;
	params.UserSaveName = UserSaveName;
	params.DataSlotName = DataSlotName;
	params.GameSlotName = GameSlotName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_GameMode.BPI_GameMode_C.BPI_LoadGameFromSelectedSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SlotName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_GameMode_C::BPI_LoadGameFromSelectedSlot(const struct FString& SlotName, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GameMode.BPI_GameMode_C.BPI_LoadGameFromSelectedSlot");

	UBPI_GameMode_C_BPI_LoadGameFromSelectedSlot_Params params;
	params.SlotName = SlotName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
