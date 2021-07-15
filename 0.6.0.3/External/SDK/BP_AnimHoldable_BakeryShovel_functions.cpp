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

// Function BP_AnimHoldable_BakeryShovel.BP_AnimHoldable_BakeryShovel_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_AnimHoldable_BakeryShovel_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimHoldable_BakeryShovel.BP_AnimHoldable_BakeryShovel_C.ReceiveBeginPlay");

	ABP_AnimHoldable_BakeryShovel_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimHoldable_BakeryShovel.BP_AnimHoldable_BakeryShovel_C.HoldableNotify
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimHoldable_BakeryShovel_C::HoldableNotify(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimHoldable_BakeryShovel.BP_AnimHoldable_BakeryShovel_C.HoldableNotify");

	ABP_AnimHoldable_BakeryShovel_C_HoldableNotify_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimHoldable_BakeryShovel.BP_AnimHoldable_BakeryShovel_C.ExecuteUbergraph_BP_AnimHoldable_BakeryShovel
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AnimHoldable_BakeryShovel_C::ExecuteUbergraph_BP_AnimHoldable_BakeryShovel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimHoldable_BakeryShovel.BP_AnimHoldable_BakeryShovel_C.ExecuteUbergraph_BP_AnimHoldable_BakeryShovel");

	ABP_AnimHoldable_BakeryShovel_C_ExecuteUbergraph_BP_AnimHoldable_BakeryShovel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_AnimHoldable_BakeryShovel_C::AfterRead()
{
	ABP_MasterAnimHoldable_Static_C::AfterRead();

	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
	READ_PTR_FULL(FoodMesh, UStaticMesh);
}

void ABP_AnimHoldable_BakeryShovel_C::BeforeDelete()
{
	ABP_MasterAnimHoldable_Static_C::BeforeDelete();

	DELE_PTR_FULL(StaticMesh);
	DELE_PTR_FULL(FoodMesh);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
