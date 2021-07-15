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

// Function BP_AI_Water.BP_AI_Water_C.fnGenerateTriangles
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         Vertices                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void ABP_AI_Water_C::fnGenerateTriangles(TArray<struct FVector>* Vertices)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_Water.BP_AI_Water_C.fnGenerateTriangles");

	ABP_AI_Water_C_fnGenerateTriangles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Vertices != nullptr)
		*Vertices = params.Vertices;

}


// Function BP_AI_Water.BP_AI_Water_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_AI_Water_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_Water.BP_AI_Water_C.UserConstructionScript");

	ABP_AI_Water_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_Water.BP_AI_Water_C.3_GroundSplinePoints
// (BlueprintCallable, BlueprintEvent)
void ABP_AI_Water_C::_3_GroundSplinePoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_Water.BP_AI_Water_C.3_GroundSplinePoints");

	ABP_AI_Water_C__3_GroundSplinePoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_Water.BP_AI_Water_C.4_SpawnNavBlockers
// (BlueprintCallable, BlueprintEvent)
void ABP_AI_Water_C::_4_SpawnNavBlockers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_Water.BP_AI_Water_C.4_SpawnNavBlockers");

	ABP_AI_Water_C__4_SpawnNavBlockers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_Water.BP_AI_Water_C.1_ShowFloorGuide
// (BlueprintCallable, BlueprintEvent)
void ABP_AI_Water_C::_1_ShowFloorGuide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_Water.BP_AI_Water_C.1_ShowFloorGuide");

	ABP_AI_Water_C__1_ShowFloorGuide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_Water.BP_AI_Water_C.2_HideFloorGuide
// (BlueprintCallable, BlueprintEvent)
void ABP_AI_Water_C::_2_HideFloorGuide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_Water.BP_AI_Water_C.2_HideFloorGuide");

	ABP_AI_Water_C__2_HideFloorGuide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_Water.BP_AI_Water_C.ExecuteUbergraph_BP_AI_Water
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AI_Water_C::ExecuteUbergraph_BP_AI_Water(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_Water.BP_AI_Water_C.ExecuteUbergraph_BP_AI_Water");

	ABP_AI_Water_C_ExecuteUbergraph_BP_AI_Water_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_AI_Water_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(Spline, USplineComponent);
	READ_PTR_FULL(Billboard, UBillboardComponent);
	READ_PTR_FULL(Scene, USceneComponent);
	READ_PTR_FULL(TextRender, UTextRenderComponent);
}

void ABP_AI_Water_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(Spline);
	DELE_PTR_FULL(Billboard);
	DELE_PTR_FULL(Scene);
	DELE_PTR_FULL(TextRender);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
