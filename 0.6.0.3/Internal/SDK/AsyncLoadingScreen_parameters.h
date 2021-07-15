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

// Function AsyncLoadingScreen.AsyncLoadingScreenLibrary.StopLoadingScreen
struct UAsyncLoadingScreenLibrary_StopLoadingScreen_Params
{
};

// Function AsyncLoadingScreen.AsyncLoadingScreenLibrary.SetDisplayTipTextIndex
struct UAsyncLoadingScreenLibrary_SetDisplayTipTextIndex_Params
{
	int                                                TipTextIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AsyncLoadingScreen.AsyncLoadingScreenLibrary.SetDisplayMovieIndex
struct UAsyncLoadingScreenLibrary_SetDisplayMovieIndex_Params
{
	int                                                MovieIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AsyncLoadingScreen.AsyncLoadingScreenLibrary.SetDisplayBackgroundIndex
struct UAsyncLoadingScreenLibrary_SetDisplayBackgroundIndex_Params
{
	int                                                BackgroundIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
