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

// Function UI_LoadingScreen.UI_LoadingScreen_C.SetLoadingScreen
struct UUI_LoadingScreen_C_SetLoadingScreen_Params
{
	float                                              ProgressValue;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_LoadingScreen.UI_LoadingScreen_C.Construct
struct UUI_LoadingScreen_C_Construct_Params
{
};

// Function UI_LoadingScreen.UI_LoadingScreen_C.FadeAnimation
struct UUI_LoadingScreen_C_FadeAnimation_Params
{
	bool                                               Reverse;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_LoadingScreen.UI_LoadingScreen_C.ExecuteUbergraph_UI_LoadingScreen
struct UUI_LoadingScreen_C_ExecuteUbergraph_UI_LoadingScreen_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
