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

// Function BP_AIPath.BP_AIPath_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_AIPath_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIPath.BP_AIPath_C.UserConstructionScript");

	ABP_AIPath_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AIPath.BP_AIPath_C.1_PlaceWayPoints
// (BlueprintCallable, BlueprintEvent)
void ABP_AIPath_C::_1_PlaceWayPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIPath.BP_AIPath_C.1_PlaceWayPoints");

	ABP_AIPath_C__1_PlaceWayPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AIPath.BP_AIPath_C.2_DeleteWayPoints
// (BlueprintCallable, BlueprintEvent)
void ABP_AIPath_C::_2_DeleteWayPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIPath.BP_AIPath_C.2_DeleteWayPoints");

	ABP_AIPath_C__2_DeleteWayPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AIPath.BP_AIPath_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_AIPath_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIPath.BP_AIPath_C.ReceiveBeginPlay");

	ABP_AIPath_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AIPath.BP_AIPath_C.EventDestroyCurrentWayPoints
// (BlueprintCallable, BlueprintEvent)
void ABP_AIPath_C::EventDestroyCurrentWayPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIPath.BP_AIPath_C.EventDestroyCurrentWayPoints");

	ABP_AIPath_C_EventDestroyCurrentWayPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AIPath.BP_AIPath_C.EventSpawnWayPoints
// (BlueprintCallable, BlueprintEvent)
void ABP_AIPath_C::EventSpawnWayPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIPath.BP_AIPath_C.EventSpawnWayPoints");

	ABP_AIPath_C_EventSpawnWayPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AIPath.BP_AIPath_C.ExecuteUbergraph_BP_AIPath
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AIPath_C::ExecuteUbergraph_BP_AIPath(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AIPath.BP_AIPath_C.ExecuteUbergraph_BP_AIPath");

	ABP_AIPath_C_ExecuteUbergraph_BP_AIPath_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
