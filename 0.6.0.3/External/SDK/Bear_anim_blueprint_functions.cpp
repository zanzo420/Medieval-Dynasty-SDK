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

// Function Bear_anim_blueprint.Bear_anim_blueprint_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm, NoDestructor)
void UBear_anim_blueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bear_anim_blueprint.Bear_anim_blueprint_C.AnimGraph");

	UBear_anim_blueprint_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function Bear_anim_blueprint.Bear_anim_blueprint_C.UpdateIKState
// (Public, BlueprintCallable, BlueprintEvent)
void UBear_anim_blueprint_C::UpdateIKState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bear_anim_blueprint.Bear_anim_blueprint_C.UpdateIKState");

	UBear_anim_blueprint_C_UpdateIKState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Bear_anim_blueprint.Bear_anim_blueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBear_anim_blueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bear_anim_blueprint.Bear_anim_blueprint_C.BlueprintUpdateAnimation");

	UBear_anim_blueprint_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Bear_anim_blueprint.Bear_anim_blueprint_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)
void UBear_anim_blueprint_C::BlueprintBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bear_anim_blueprint.Bear_anim_blueprint_C.BlueprintBeginPlay");

	UBear_anim_blueprint_C_BlueprintBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Bear_anim_blueprint.Bear_anim_blueprint_C.ExecuteUbergraph_Bear_anim_blueprint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBear_anim_blueprint_C::ExecuteUbergraph_Bear_anim_blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bear_anim_blueprint.Bear_anim_blueprint_C.ExecuteUbergraph_Bear_anim_blueprint");

	UBear_anim_blueprint_C_ExecuteUbergraph_Bear_anim_blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBear_anim_blueprint_C::AfterRead()
{
	UAnimInstance::AfterRead();

	READ_PTR_FULL(Bear, ABP_Bear_Male_C);
}

void UBear_anim_blueprint_C::BeforeDelete()
{
	UAnimInstance::BeforeDelete();

	DELE_PTR_FULL(Bear);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
