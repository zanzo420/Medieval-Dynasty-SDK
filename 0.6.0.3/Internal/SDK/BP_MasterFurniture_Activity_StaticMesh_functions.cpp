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

// Function BP_MasterFurniture_Activity_StaticMesh.BP_MasterFurniture_Activity_StaticMesh_C.OnOwnershipSwap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> NewOwnership                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Activity_StaticMesh_C::OnOwnershipSwap(TEnumAsByte<E_Ownership_E_Ownership> NewOwnership)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Activity_StaticMesh.BP_MasterFurniture_Activity_StaticMesh_C.OnOwnershipSwap");

	ABP_MasterFurniture_Activity_StaticMesh_C_OnOwnershipSwap_Params params;
	params.NewOwnership = NewOwnership;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Activity_StaticMesh.BP_MasterFurniture_Activity_StaticMesh_C.DisableGhost
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterFurniture_Activity_StaticMesh_C::DisableGhost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Activity_StaticMesh.BP_MasterFurniture_Activity_StaticMesh_C.DisableGhost");

	ABP_MasterFurniture_Activity_StaticMesh_C_DisableGhost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Activity_StaticMesh.BP_MasterFurniture_Activity_StaticMesh_C.EnableGhost
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_MasterFurniture_Activity_StaticMesh_C::EnableGhost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Activity_StaticMesh.BP_MasterFurniture_Activity_StaticMesh_C.EnableGhost");

	ABP_MasterFurniture_Activity_StaticMesh_C_EnableGhost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Activity_StaticMesh.BP_MasterFurniture_Activity_StaticMesh_C.SetMeshMobility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EComponentMobility> Mobility                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Activity_StaticMesh_C::SetMeshMobility(TEnumAsByte<Engine_EComponentMobility> Mobility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Activity_StaticMesh.BP_MasterFurniture_Activity_StaticMesh_C.SetMeshMobility");

	ABP_MasterFurniture_Activity_StaticMesh_C_SetMeshMobility_Params params;
	params.Mobility = Mobility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Activity_StaticMesh.BP_MasterFurniture_Activity_StaticMesh_C.ExecuteUbergraph_BP_MasterFurniture_Activity_StaticMesh
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Activity_StaticMesh_C::ExecuteUbergraph_BP_MasterFurniture_Activity_StaticMesh(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Activity_StaticMesh.BP_MasterFurniture_Activity_StaticMesh_C.ExecuteUbergraph_BP_MasterFurniture_Activity_StaticMesh");

	ABP_MasterFurniture_Activity_StaticMesh_C_ExecuteUbergraph_BP_MasterFurniture_Activity_StaticMesh_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
