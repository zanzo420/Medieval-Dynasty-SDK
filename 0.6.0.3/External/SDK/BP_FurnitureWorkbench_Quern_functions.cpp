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

// Function BP_FurnitureWorkbench_Quern.BP_FurnitureWorkbench_Quern_C.DisableGhost
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_FurnitureWorkbench_Quern_C::DisableGhost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Quern.BP_FurnitureWorkbench_Quern_C.DisableGhost");

	ABP_FurnitureWorkbench_Quern_C_DisableGhost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_Quern.BP_FurnitureWorkbench_Quern_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_FurnitureWorkbench_Quern_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Quern.BP_FurnitureWorkbench_Quern_C.ReceiveBeginPlay");

	ABP_FurnitureWorkbench_Quern_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_Quern.BP_FurnitureWorkbench_Quern_C.FinishFurniture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Load                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FurnitureWorkbench_Quern_C::FinishFurniture(bool Load)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Quern.BP_FurnitureWorkbench_Quern_C.FinishFurniture");

	ABP_FurnitureWorkbench_Quern_C_FinishFurniture_Params params;
	params.Load = Load;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_Quern.BP_FurnitureWorkbench_Quern_C.ExecuteUbergraph_BP_FurnitureWorkbench_Quern
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_Quern_C::ExecuteUbergraph_BP_FurnitureWorkbench_Quern(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_Quern.BP_FurnitureWorkbench_Quern_C.ExecuteUbergraph_BP_FurnitureWorkbench_Quern");

	ABP_FurnitureWorkbench_Quern_C_ExecuteUbergraph_BP_FurnitureWorkbench_Quern_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_FurnitureWorkbench_Quern_C::AfterRead()
{
	ABP_MasterFurniture_Workbench_C::AfterRead();

	READ_PTR_FULL(SkeletalMesh, USkeletalMeshComponent);
}

void ABP_FurnitureWorkbench_Quern_C::BeforeDelete()
{
	ABP_MasterFurniture_Workbench_C::BeforeDelete();

	DELE_PTR_FULL(SkeletalMesh);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
