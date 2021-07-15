﻿// Name: Medieval Dynasty, Version: 0.6.0.3

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

// Function BP_MasterAnimHoldable_Skeletal.BP_MasterAnimHoldable_Skeletal_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_MasterAnimHoldable_Skeletal_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterAnimHoldable_Skeletal.BP_MasterAnimHoldable_Skeletal_C.ReceiveBeginPlay");

	ABP_MasterAnimHoldable_Skeletal_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterAnimHoldable_Skeletal.BP_MasterAnimHoldable_Skeletal_C.ExecuteUbergraph_BP_MasterAnimHoldable_Skeletal
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterAnimHoldable_Skeletal_C::ExecuteUbergraph_BP_MasterAnimHoldable_Skeletal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterAnimHoldable_Skeletal.BP_MasterAnimHoldable_Skeletal_C.ExecuteUbergraph_BP_MasterAnimHoldable_Skeletal");

	ABP_MasterAnimHoldable_Skeletal_C_ExecuteUbergraph_BP_MasterAnimHoldable_Skeletal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_MasterAnimHoldable_Skeletal_C::AfterRead()
{
	ABP_MasterAnimHoldable_C::AfterRead();

	READ_PTR_FULL(SkeletalMesh, USkeletalMeshComponent);
}

void ABP_MasterAnimHoldable_Skeletal_C::BeforeDelete()
{
	ABP_MasterAnimHoldable_C::BeforeDelete();

	DELE_PTR_FULL(SkeletalMesh);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
