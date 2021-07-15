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

// Function BP_MasterTrap_StaticMesh.BP_MasterTrap_StaticMesh_C.OnOwnershipSwap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> NewOwnership                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterTrap_StaticMesh_C::OnOwnershipSwap(TEnumAsByte<E_Ownership_E_Ownership> NewOwnership)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterTrap_StaticMesh.BP_MasterTrap_StaticMesh_C.OnOwnershipSwap");

	ABP_MasterTrap_StaticMesh_C_OnOwnershipSwap_Params params;
	params.NewOwnership = NewOwnership;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterTrap_StaticMesh.BP_MasterTrap_StaticMesh_C.CheckObstruction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanBePlaced_                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterTrap_StaticMesh_C::CheckObstruction(bool* CanBePlaced_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterTrap_StaticMesh.BP_MasterTrap_StaticMesh_C.CheckObstruction");

	ABP_MasterTrap_StaticMesh_C_CheckObstruction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanBePlaced_ != nullptr)
		*CanBePlaced_ = params.CanBePlaced_;

}


// Function BP_MasterTrap_StaticMesh.BP_MasterTrap_StaticMesh_C.DisableGhost
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterTrap_StaticMesh_C::DisableGhost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterTrap_StaticMesh.BP_MasterTrap_StaticMesh_C.DisableGhost");

	ABP_MasterTrap_StaticMesh_C_DisableGhost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterTrap_StaticMesh.BP_MasterTrap_StaticMesh_C.EnableGhost
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_MasterTrap_StaticMesh_C::EnableGhost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterTrap_StaticMesh.BP_MasterTrap_StaticMesh_C.EnableGhost");

	ABP_MasterTrap_StaticMesh_C_EnableGhost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_MasterTrap_StaticMesh_C::AfterRead()
{
	ABP_MasterTrap_C::AfterRead();

	READ_PTR_FULL(ObstructionMesh, UBoxComponent);
	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
}

void ABP_MasterTrap_StaticMesh_C::BeforeDelete()
{
	ABP_MasterTrap_C::BeforeDelete();

	DELE_PTR_FULL(ObstructionMesh);
	DELE_PTR_FULL(StaticMesh);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
