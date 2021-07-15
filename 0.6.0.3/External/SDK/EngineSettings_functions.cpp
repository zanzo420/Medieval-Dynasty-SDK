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

void FAutoCompleteCommand::AfterRead()
{
}

void FAutoCompleteCommand::BeforeDelete()
{
}

void FGameModeName::AfterRead()
{
}

void FGameModeName::BeforeDelete()
{
}

void UConsoleSettings::AfterRead()
{
	UObject::AfterRead();

}

void UConsoleSettings::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bSkipFirstPlayer               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameMapsSettings::SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1");

	UGameMapsSettings_SetSkipAssigningGamepadToPlayer1_Params params;
	params.bSkipFirstPlayer = bSkipFirstPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameMapsSettings::GetSkipAssigningGamepadToPlayer1()
{
	static auto fn = UObject::FindObject<UFunction>("Function EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1");

	UGameMapsSettings_GetSkipAssigningGamepadToPlayer1_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EngineSettings.GameMapsSettings.GetGameMapsSettings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UGameMapsSettings*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGameMapsSettings* UGameMapsSettings::STATIC_GetGameMapsSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function EngineSettings.GameMapsSettings.GetGameMapsSettings");

	UGameMapsSettings_GetGameMapsSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UGameMapsSettings::AfterRead()
{
	UObject::AfterRead();

}

void UGameMapsSettings::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UGameNetworkManagerSettings::AfterRead()
{
	UObject::AfterRead();

}

void UGameNetworkManagerSettings::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UGameSessionSettings::AfterRead()
{
	UObject::AfterRead();

}

void UGameSessionSettings::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UGeneralEngineSettings::AfterRead()
{
	UObject::AfterRead();

}

void UGeneralEngineSettings::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UGeneralProjectSettings::AfterRead()
{
	UObject::AfterRead();

}

void UGeneralProjectSettings::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UHudSettings::AfterRead()
{
	UObject::AfterRead();

}

void UHudSettings::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
