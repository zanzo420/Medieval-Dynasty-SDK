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

// Function BPI_GameInstance.BPI_GameInstance_C.RandomizeBackgroundIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BackgroundIndex                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_GameInstance_C::RandomizeBackgroundIndex(int* BackgroundIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GameInstance.BPI_GameInstance_C.RandomizeBackgroundIndex");

	UBPI_GameInstance_C_RandomizeBackgroundIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BackgroundIndex != nullptr)
		*BackgroundIndex = params.BackgroundIndex;

}


// Function BPI_GameInstance.BPI_GameInstance_C.GetBackgroundIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BackgroundIndex                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_GameInstance_C::GetBackgroundIndex(int* BackgroundIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GameInstance.BPI_GameInstance_C.GetBackgroundIndex");

	UBPI_GameInstance_C_GetBackgroundIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BackgroundIndex != nullptr)
		*BackgroundIndex = params.BackgroundIndex;

}


// Function BPI_GameInstance.BPI_GameInstance_C.SetSkipIntro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetSkipIntro                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_GameInstance_C::SetSkipIntro(bool SetSkipIntro)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GameInstance.BPI_GameInstance_C.SetSkipIntro");

	UBPI_GameInstance_C_SetSkipIntro_Params params;
	params.SetSkipIntro = SetSkipIntro;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_GameInstance.BPI_GameInstance_C.SetSkipMainMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SkipMainMenu                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_GameInstance_C::SetSkipMainMenu(bool SkipMainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_GameInstance.BPI_GameInstance_C.SetSkipMainMenu");

	UBPI_GameInstance_C_SetSkipMainMenu_Params params;
	params.SkipMainMenu = SkipMainMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
