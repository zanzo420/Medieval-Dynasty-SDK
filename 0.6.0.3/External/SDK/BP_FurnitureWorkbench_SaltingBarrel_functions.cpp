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

// Function BP_FurnitureWorkbench_SaltingBarrel.BP_FurnitureWorkbench_SaltingBarrel_C.FinishFurniture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Load                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FurnitureWorkbench_SaltingBarrel_C::FinishFurniture(bool Load)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SaltingBarrel.BP_FurnitureWorkbench_SaltingBarrel_C.FinishFurniture");

	ABP_FurnitureWorkbench_SaltingBarrel_C_FinishFurniture_Params params;
	params.Load = Load;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureWorkbench_SaltingBarrel.BP_FurnitureWorkbench_SaltingBarrel_C.ExecuteUbergraph_BP_FurnitureWorkbench_SaltingBarrel
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureWorkbench_SaltingBarrel_C::ExecuteUbergraph_BP_FurnitureWorkbench_SaltingBarrel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureWorkbench_SaltingBarrel.BP_FurnitureWorkbench_SaltingBarrel_C.ExecuteUbergraph_BP_FurnitureWorkbench_SaltingBarrel");

	ABP_FurnitureWorkbench_SaltingBarrel_C_ExecuteUbergraph_BP_FurnitureWorkbench_SaltingBarrel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_FurnitureWorkbench_SaltingBarrel_C::AfterRead()
{
	ABP_MasterFurniture_Workbench_C::AfterRead();

	READ_PTR_FULL(Mesh2, UStaticMeshComponent);
	READ_PTR_FULL(Mesh, UStaticMeshComponent);
}

void ABP_FurnitureWorkbench_SaltingBarrel_C::BeforeDelete()
{
	ABP_MasterFurniture_Workbench_C::BeforeDelete();

	DELE_PTR_FULL(Mesh2);
	DELE_PTR_FULL(Mesh);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
