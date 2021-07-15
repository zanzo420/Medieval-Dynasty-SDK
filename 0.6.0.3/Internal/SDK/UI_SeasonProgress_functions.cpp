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

// Function UI_SeasonProgress.UI_SeasonProgress_C.UpdateSeasonProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            TotalSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SeasonProgress_C::UpdateSeasonProgress(int Seconds, int TotalSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SeasonProgress.UI_SeasonProgress_C.UpdateSeasonProgress");

	UUI_SeasonProgress_C_UpdateSeasonProgress_Params params;
	params.Seconds = Seconds;
	params.TotalSeconds = TotalSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SeasonProgress.UI_SeasonProgress_C.UpdateSeasonsData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Season                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SeasonProgress_C::UpdateSeasonsData(int Season)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SeasonProgress.UI_SeasonProgress_C.UpdateSeasonsData");

	UUI_SeasonProgress_C_UpdateSeasonsData_Params params;
	params.Season = Season;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_SeasonProgress.UI_SeasonProgress_C.ExecuteUbergraph_UI_SeasonProgress
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SeasonProgress_C::ExecuteUbergraph_UI_SeasonProgress(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SeasonProgress.UI_SeasonProgress_C.ExecuteUbergraph_UI_SeasonProgress");

	UUI_SeasonProgress_C_ExecuteUbergraph_UI_SeasonProgress_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
