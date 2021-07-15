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

// Function UI_MenuNotification.UI_MenuNotification_C.Construct
struct UUI_MenuNotification_C_Construct_Params
{
};

// Function UI_MenuNotification.UI_MenuNotification_C.AnimateNotification
struct UUI_MenuNotification_C_AnimateNotification_Params
{
	class UWidgetAnimation*                            Animation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartAtTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumLoopsToPlay;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_MenuNotification.UI_MenuNotification_C.OnInitialized
struct UUI_MenuNotification_C_OnInitialized_Params
{
};

// Function UI_MenuNotification.UI_MenuNotification_C.ExecuteUbergraph_UI_MenuNotification
struct UUI_MenuNotification_C_ExecuteUbergraph_UI_MenuNotification_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
