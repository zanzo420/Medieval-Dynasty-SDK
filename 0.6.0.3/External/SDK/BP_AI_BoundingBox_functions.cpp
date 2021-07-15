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

// Function BP_AI_BoundingBox.BP_AI_BoundingBox_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_AI_BoundingBox_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_BoundingBox.BP_AI_BoundingBox_C.UserConstructionScript");

	ABP_AI_BoundingBox_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_BoundingBox.BP_AI_BoundingBox_C.ExecuteUbergraph_BP_AI_BoundingBox
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AI_BoundingBox_C::ExecuteUbergraph_BP_AI_BoundingBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_BoundingBox.BP_AI_BoundingBox_C.ExecuteUbergraph_BP_AI_BoundingBox");

	ABP_AI_BoundingBox_C_ExecuteUbergraph_BP_AI_BoundingBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_AI_BoundingBox_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(Marker, UStaticMeshComponent);
	READ_PTR_FULL(Billboard, UBillboardComponent);
	READ_PTR_FULL(Scene, USceneComponent);
	READ_PTR_FULL(TextRender, UTextRenderComponent);
	READ_PTR_FULL(Bounds, UBoxComponent);
}

void ABP_AI_BoundingBox_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(Marker);
	DELE_PTR_FULL(Billboard);
	DELE_PTR_FULL(Scene);
	DELE_PTR_FULL(TextRender);
	DELE_PTR_FULL(Bounds);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
