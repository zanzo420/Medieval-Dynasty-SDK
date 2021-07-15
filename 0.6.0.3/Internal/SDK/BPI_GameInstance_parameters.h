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

// Function BPI_GameInstance.BPI_GameInstance_C.RandomizeBackgroundIndex
struct UBPI_GameInstance_C_RandomizeBackgroundIndex_Params
{
	int                                                BackgroundIndex;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_GameInstance.BPI_GameInstance_C.GetBackgroundIndex
struct UBPI_GameInstance_C_GetBackgroundIndex_Params
{
	int                                                BackgroundIndex;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_GameInstance.BPI_GameInstance_C.SetSkipIntro
struct UBPI_GameInstance_C_SetSkipIntro_Params
{
	bool                                               SetSkipIntro;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_GameInstance.BPI_GameInstance_C.SetSkipMainMenu
struct UBPI_GameInstance_C_SetSkipMainMenu_Params
{
	bool                                               SkipMainMenu;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
