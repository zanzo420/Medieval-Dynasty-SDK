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

// Function BP_WeatherComponent.BP_WeatherComponent_C.Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Season                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_WeatherComponent_C::Start(int Season, float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherComponent.BP_WeatherComponent_C.Start");

	UBP_WeatherComponent_C_Start_Params params;
	params.Season = Season;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WeatherComponent.BP_WeatherComponent_C.Stop
// (BlueprintCallable, BlueprintEvent)
void UBP_WeatherComponent_C::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherComponent.BP_WeatherComponent_C.Stop");

	UBP_WeatherComponent_C_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WeatherComponent.BP_WeatherComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UBP_WeatherComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherComponent.BP_WeatherComponent_C.ReceiveBeginPlay");

	UBP_WeatherComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WeatherComponent.BP_WeatherComponent_C.ExecuteUbergraph_BP_WeatherComponent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_WeatherComponent_C::ExecuteUbergraph_BP_WeatherComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherComponent.BP_WeatherComponent_C.ExecuteUbergraph_BP_WeatherComponent");

	UBP_WeatherComponent_C_ExecuteUbergraph_BP_WeatherComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
