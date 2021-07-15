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

// Function BP_CameraManager.BP_CameraManager_C.OnPhotographySessionStart
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void ABP_CameraManager_C::OnPhotographySessionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraManager.BP_CameraManager_C.OnPhotographySessionStart");

	ABP_CameraManager_C_OnPhotographySessionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CameraManager.BP_CameraManager_C.OnPhotographySessionEnd
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void ABP_CameraManager_C::OnPhotographySessionEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraManager.BP_CameraManager_C.OnPhotographySessionEnd");

	ABP_CameraManager_C_OnPhotographySessionEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CameraManager.BP_CameraManager_C.ExecuteUbergraph_BP_CameraManager
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CameraManager_C::ExecuteUbergraph_BP_CameraManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CameraManager.BP_CameraManager_C.ExecuteUbergraph_BP_CameraManager");

	ABP_CameraManager_C_ExecuteUbergraph_BP_CameraManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
