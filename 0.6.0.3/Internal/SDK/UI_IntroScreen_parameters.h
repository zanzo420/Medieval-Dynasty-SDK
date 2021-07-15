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

// Function UI_IntroScreen.UI_IntroScreen_C.OnKeyDown
struct UUI_IntroScreen_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function UI_IntroScreen.UI_IntroScreen_C.Construct
struct UUI_IntroScreen_C_Construct_Params
{
};

// Function UI_IntroScreen.UI_IntroScreen_C.FadeAnimation
struct UUI_IntroScreen_C_FadeAnimation_Params
{
	bool                                               Reverse;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_IntroScreen.UI_IntroScreen_C.PlayTextAnimation
struct UUI_IntroScreen_C_PlayTextAnimation_Params
{
};

// Function UI_IntroScreen.UI_IntroScreen_C.ExecuteUbergraph_UI_IntroScreen
struct UUI_IntroScreen_C_ExecuteUbergraph_UI_IntroScreen_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
