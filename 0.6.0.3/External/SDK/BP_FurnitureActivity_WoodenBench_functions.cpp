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

// Function BP_FurnitureActivity_WoodenBench.BP_FurnitureActivity_WoodenBench_C.DisableGhost
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_FurnitureActivity_WoodenBench_C::DisableGhost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureActivity_WoodenBench.BP_FurnitureActivity_WoodenBench_C.DisableGhost");

	ABP_FurnitureActivity_WoodenBench_C_DisableGhost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureActivity_WoodenBench.BP_FurnitureActivity_WoodenBench_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_FurnitureActivity_WoodenBench_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureActivity_WoodenBench.BP_FurnitureActivity_WoodenBench_C.UserConstructionScript");

	ABP_FurnitureActivity_WoodenBench_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureActivity_WoodenBench.BP_FurnitureActivity_WoodenBench_C.SetHidden
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hidden                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FurnitureActivity_WoodenBench_C::SetHidden(bool Hidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureActivity_WoodenBench.BP_FurnitureActivity_WoodenBench_C.SetHidden");

	ABP_FurnitureActivity_WoodenBench_C_SetHidden_Params params;
	params.Hidden = Hidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureActivity_WoodenBench.BP_FurnitureActivity_WoodenBench_C.UpdatePlaceable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Placeable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FurnitureActivity_WoodenBench_C::UpdatePlaceable(bool Placeable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureActivity_WoodenBench.BP_FurnitureActivity_WoodenBench_C.UpdatePlaceable");

	ABP_FurnitureActivity_WoodenBench_C_UpdatePlaceable_Params params;
	params.Placeable = Placeable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureActivity_WoodenBench.BP_FurnitureActivity_WoodenBench_C.ExecuteUbergraph_BP_FurnitureActivity_WoodenBench
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureActivity_WoodenBench_C::ExecuteUbergraph_BP_FurnitureActivity_WoodenBench(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureActivity_WoodenBench.BP_FurnitureActivity_WoodenBench_C.ExecuteUbergraph_BP_FurnitureActivity_WoodenBench");

	ABP_FurnitureActivity_WoodenBench_C_ExecuteUbergraph_BP_FurnitureActivity_WoodenBench_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_FurnitureActivity_WoodenBench_C::AfterRead()
{
	ABP_MasterFurniture_Activity_StaticMesh_C::AfterRead();

	READ_PTR_FULL(Character2, USkeletalMeshComponent);
	READ_PTR_FULL(Character1, USkeletalMeshComponent);
	READ_PTR_FULL(CharacterMaterialReference, UMaterialInstanceDynamic);
}

void ABP_FurnitureActivity_WoodenBench_C::BeforeDelete()
{
	ABP_MasterFurniture_Activity_StaticMesh_C::BeforeDelete();

	DELE_PTR_FULL(Character2);
	DELE_PTR_FULL(Character1);
	DELE_PTR_FULL(CharacterMaterialReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
