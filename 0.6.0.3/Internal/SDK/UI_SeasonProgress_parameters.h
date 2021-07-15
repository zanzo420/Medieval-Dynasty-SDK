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

// Function UI_SeasonProgress.UI_SeasonProgress_C.UpdateSeasonProgress
struct UUI_SeasonProgress_C_UpdateSeasonProgress_Params
{
	int                                                Seconds;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TotalSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SeasonProgress.UI_SeasonProgress_C.UpdateSeasonsData
struct UUI_SeasonProgress_C_UpdateSeasonsData_Params
{
	int                                                Season;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SeasonProgress.UI_SeasonProgress_C.ExecuteUbergraph_UI_SeasonProgress
struct UUI_SeasonProgress_C_ExecuteUbergraph_UI_SeasonProgress_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
