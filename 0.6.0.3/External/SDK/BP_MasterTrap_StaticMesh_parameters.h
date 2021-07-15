#pragma once

// Name: Medieval Dynasty, Version: 0.6.0.3


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_MasterTrap_StaticMesh.BP_MasterTrap_StaticMesh_C.OnOwnershipSwap
struct ABP_MasterTrap_StaticMesh_C_OnOwnershipSwap_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               NewOwnership;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterTrap_StaticMesh.BP_MasterTrap_StaticMesh_C.CheckObstruction
struct ABP_MasterTrap_StaticMesh_C_CheckObstruction_Params
{
	bool                                               CanBePlaced_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterTrap_StaticMesh.BP_MasterTrap_StaticMesh_C.DisableGhost
struct ABP_MasterTrap_StaticMesh_C_DisableGhost_Params
{
};

// Function BP_MasterTrap_StaticMesh.BP_MasterTrap_StaticMesh_C.EnableGhost
struct ABP_MasterTrap_StaticMesh_C_EnableGhost_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
