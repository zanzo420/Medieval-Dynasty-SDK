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

// Function GI_MedievalDynasty.GI_MedievalDynasty_C.RandomizeBackgroundIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BackgroundIndex                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI_MedievalDynasty_C::RandomizeBackgroundIndex(int* BackgroundIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.RandomizeBackgroundIndex");

	UGI_MedievalDynasty_C_RandomizeBackgroundIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BackgroundIndex != nullptr)
		*BackgroundIndex = params.BackgroundIndex;

}


// Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetBackgroundIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BackgroundIndex                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI_MedievalDynasty_C::GetBackgroundIndex(int* BackgroundIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetBackgroundIndex");

	UGI_MedievalDynasty_C_GetBackgroundIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BackgroundIndex != nullptr)
		*BackgroundIndex = params.BackgroundIndex;

}


// Function GI_MedievalDynasty.GI_MedievalDynasty_C.InitSaveGameData
// (Public, BlueprintCallable, BlueprintEvent)
void UGI_MedievalDynasty_C::InitSaveGameData()
{
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.InitSaveGameData");

	UGI_MedievalDynasty_C_InitSaveGameData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GI_MedievalDynasty.GI_MedievalDynasty_C.FixForMissingKeybinds
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UGI_MedievalDynasty_C::FixForMissingKeybinds()
{
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.FixForMissingKeybinds");

	UGI_MedievalDynasty_C_FixForMissingKeybinds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GI_MedievalDynasty.GI_MedievalDynasty_C.RestoreDefaultKeybinds
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UGI_MedievalDynasty_C::RestoreDefaultKeybinds()
{
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.RestoreDefaultKeybinds");

	UGI_MedievalDynasty_C_RestoreDefaultKeybinds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GI_MedievalDynasty.GI_MedievalDynasty_C.SetDefaultResolutionAndAspectRatioIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UGI_MedievalDynasty_C::SetDefaultResolutionAndAspectRatioIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.SetDefaultResolutionAndAspectRatioIndex");

	UGI_MedievalDynasty_C_SetDefaultResolutionAndAspectRatioIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_D41BB5524E76F93D50046596B7260058
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI_MedievalDynasty_C::OnFailure_D41BB5524E76F93D50046596B7260058(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnFailure_D41BB5524E76F93D50046596B7260058");

	UGI_MedievalDynasty_C_OnFailure_D41BB5524E76F93D50046596B7260058_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_D41BB5524E76F93D50046596B7260058
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI_MedievalDynasty_C::OnSuccess_D41BB5524E76F93D50046596B7260058(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnSuccess_D41BB5524E76F93D50046596B7260058");

	UGI_MedievalDynasty_C_OnSuccess_D41BB5524E76F93D50046596B7260058_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GI_MedievalDynasty.GI_MedievalDynasty_C.SetSkipIntro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetSkipIntro                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGI_MedievalDynasty_C::SetSkipIntro(bool SetSkipIntro)
{
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.SetSkipIntro");

	UGI_MedievalDynasty_C_SetSkipIntro_Params params;
	params.SetSkipIntro = SetSkipIntro;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GI_MedievalDynasty.GI_MedievalDynasty_C.SetSkipMainMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SkipMainMenu                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGI_MedievalDynasty_C::SetSkipMainMenu(bool SkipMainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.SetSkipMainMenu");

	UGI_MedievalDynasty_C_SetSkipMainMenu_Params params;
	params.SkipMainMenu = SkipMainMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OSSInit
// (BlueprintCallable, BlueprintEvent)
void UGI_MedievalDynasty_C::OSSInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OSSInit");

	UGI_MedievalDynasty_C_OSSInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GI_MedievalDynasty.GI_MedievalDynasty_C.ReceiveInit
// (Event, Public, BlueprintEvent)
void UGI_MedievalDynasty_C::ReceiveInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.ReceiveInit");

	UGI_MedievalDynasty_C_ReceiveInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GI_MedievalDynasty.GI_MedievalDynasty_C.SetSettings
// (BlueprintCallable, BlueprintEvent)
void UGI_MedievalDynasty_C::SetSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.SetSettings");

	UGI_MedievalDynasty_C_SetSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetDefaultSettings
// (BlueprintCallable, BlueprintEvent)
void UGI_MedievalDynasty_C::GetDefaultSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetDefaultSettings");

	UGI_MedievalDynasty_C_GetDefaultSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetSettingsFromFile
// (BlueprintCallable, BlueprintEvent)
void UGI_MedievalDynasty_C::GetSettingsFromFile()
{
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetSettingsFromFile");

	UGI_MedievalDynasty_C_GetSettingsFromFile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GI_MedievalDynasty.GI_MedievalDynasty_C.CreateDefaultSave
// (BlueprintCallable, BlueprintEvent)
void UGI_MedievalDynasty_C::CreateDefaultSave()
{
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.CreateDefaultSave");

	UGI_MedievalDynasty_C_CreateDefaultSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GI_MedievalDynasty.GI_MedievalDynasty_C.UpdateSoundsVolumes
// (BlueprintCallable, BlueprintEvent)
void UGI_MedievalDynasty_C::UpdateSoundsVolumes()
{
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.UpdateSoundsVolumes");

	UGI_MedievalDynasty_C_UpdateSoundsVolumes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetSoundSettingsFromFile
// (BlueprintCallable, BlueprintEvent)
void UGI_MedievalDynasty_C::GetSoundSettingsFromFile()
{
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetSoundSettingsFromFile");

	UGI_MedievalDynasty_C_GetSoundSettingsFromFile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetGraphicsSettingsFromFile
// (BlueprintCallable, BlueprintEvent)
void UGI_MedievalDynasty_C::GetGraphicsSettingsFromFile()
{
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetGraphicsSettingsFromFile");

	UGI_MedievalDynasty_C_GetGraphicsSettingsFromFile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GI_MedievalDynasty.GI_MedievalDynasty_C.SetSoundSettings
// (BlueprintCallable, BlueprintEvent)
void UGI_MedievalDynasty_C::SetSoundSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.SetSoundSettings");

	UGI_MedievalDynasty_C_SetSoundSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GI_MedievalDynasty.GI_MedievalDynasty_C.SetGraphicsSettings
// (BlueprintCallable, BlueprintEvent)
void UGI_MedievalDynasty_C::SetGraphicsSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.SetGraphicsSettings");

	UGI_MedievalDynasty_C_SetGraphicsSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetGameSettingsFromFile
// (BlueprintCallable, BlueprintEvent)
void UGI_MedievalDynasty_C::GetGameSettingsFromFile()
{
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.GetGameSettingsFromFile");

	UGI_MedievalDynasty_C_GetGameSettingsFromFile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GI_MedievalDynasty.GI_MedievalDynasty_C.SetGameSettings
// (BlueprintCallable, BlueprintEvent)
void UGI_MedievalDynasty_C::SetGameSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.SetGameSettings");

	UGI_MedievalDynasty_C_SetGameSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GI_MedievalDynasty.GI_MedievalDynasty_C.ChangeToQwerty
// (BlueprintCallable, BlueprintEvent)
void UGI_MedievalDynasty_C::ChangeToQwerty()
{
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.ChangeToQwerty");

	UGI_MedievalDynasty_C_ChangeToQwerty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GI_MedievalDynasty.GI_MedievalDynasty_C.ChangeToAzerty_FR
// (BlueprintCallable, BlueprintEvent)
void UGI_MedievalDynasty_C::ChangeToAzerty_FR()
{
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.ChangeToAzerty_FR");

	UGI_MedievalDynasty_C_ChangeToAzerty_FR_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GI_MedievalDynasty.GI_MedievalDynasty_C.ChangeToAzerty_BEFR
// (BlueprintCallable, BlueprintEvent)
void UGI_MedievalDynasty_C::ChangeToAzerty_BEFR()
{
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.ChangeToAzerty_BEFR");

	UGI_MedievalDynasty_C_ChangeToAzerty_BEFR_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GI_MedievalDynasty.GI_MedievalDynasty_C.ChangeToQwertz_CZ
// (BlueprintCallable, BlueprintEvent)
void UGI_MedievalDynasty_C::ChangeToQwertz_CZ()
{
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.ChangeToQwertz_CZ");

	UGI_MedievalDynasty_C_ChangeToQwertz_CZ_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GI_MedievalDynasty.GI_MedievalDynasty_C.ReceiveShutdown
// (Event, Public, BlueprintEvent)
void UGI_MedievalDynasty_C::ReceiveShutdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.ReceiveShutdown");

	UGI_MedievalDynasty_C_ReceiveShutdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GI_MedievalDynasty.GI_MedievalDynasty_C.ExecuteUbergraph_GI_MedievalDynasty
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGI_MedievalDynasty_C::ExecuteUbergraph_GI_MedievalDynasty(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.ExecuteUbergraph_GI_MedievalDynasty");

	UGI_MedievalDynasty_C_ExecuteUbergraph_GI_MedievalDynasty_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnGraphicsSettingsChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UGI_MedievalDynasty_C::OnGraphicsSettingsChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GI_MedievalDynasty.GI_MedievalDynasty_C.OnGraphicsSettingsChanged__DelegateSignature");

	UGI_MedievalDynasty_C_OnGraphicsSettingsChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UGI_MedievalDynasty_C::AfterRead()
{
	UGI_MedievalDynastyBase::AfterRead();

	READ_PTR_FULL(DebugWidget, UUI_ShippingDebug_C);
	READ_PTR_FULL(Settings, USAVE_Settings_C);
	READ_PTR_FULL(SaveGameDataReference, USAVE_Data_C);
}

void UGI_MedievalDynasty_C::BeforeDelete()
{
	UGI_MedievalDynastyBase::BeforeDelete();

	DELE_PTR_FULL(DebugWidget);
	DELE_PTR_FULL(Settings);
	DELE_PTR_FULL(SaveGameDataReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
