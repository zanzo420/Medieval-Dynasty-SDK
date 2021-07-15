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

// Function BP_AI_WayPoint.BP_AI_WayPoint_C.fnSetWayPointInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_AI_WayPoint_C::fnSetWayPointInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_WayPoint.BP_AI_WayPoint_C.fnSetWayPointInfo");

	ABP_AI_WayPoint_C_fnSetWayPointInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_WayPoint.BP_AI_WayPoint_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_AI_WayPoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_WayPoint.BP_AI_WayPoint_C.UserConstructionScript");

	ABP_AI_WayPoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_WayPoint.BP_AI_WayPoint_C.ExecuteUbergraph_BP_AI_WayPoint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AI_WayPoint_C::ExecuteUbergraph_BP_AI_WayPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_WayPoint.BP_AI_WayPoint_C.ExecuteUbergraph_BP_AI_WayPoint");

	ABP_AI_WayPoint_C_ExecuteUbergraph_BP_AI_WayPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_AI_WayPoint_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(ID, UTextRenderComponent);
	READ_PTR_FULL(PathName, UTextRenderComponent);
	READ_PTR_FULL(Billboard, UBillboardComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_AI_WayPoint_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(ID);
	DELE_PTR_FULL(PathName);
	DELE_PTR_FULL(Billboard);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
