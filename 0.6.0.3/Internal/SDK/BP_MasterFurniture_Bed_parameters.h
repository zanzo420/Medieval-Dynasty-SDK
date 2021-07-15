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

// Function BP_MasterFurniture_Bed.BP_MasterFurniture_Bed_C.OnOwnershipSwap
struct ABP_MasterFurniture_Bed_C_OnOwnershipSwap_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               NewOwnership;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture_Bed.BP_MasterFurniture_Bed_C.CheckObstruction
struct ABP_MasterFurniture_Bed_C_CheckObstruction_Params
{
	bool                                               CanBePlaced_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterFurniture_Bed.BP_MasterFurniture_Bed_C.DisableGhost
struct ABP_MasterFurniture_Bed_C_DisableGhost_Params
{
};

// Function BP_MasterFurniture_Bed.BP_MasterFurniture_Bed_C.EnableGhost
struct ABP_MasterFurniture_Bed_C_EnableGhost_Params
{
};

// Function BP_MasterFurniture_Bed.BP_MasterFurniture_Bed_C.Interact
struct ABP_MasterFurniture_Bed_C_Interact_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               Timer;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterFurniture_Bed.BP_MasterFurniture_Bed_C.SetMeshMobility
struct ABP_MasterFurniture_Bed_C_SetMeshMobility_Params
{
	TEnumAsByte<Engine_EComponentMobility>             Mobility;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture_Bed.BP_MasterFurniture_Bed_C.ExecuteUbergraph_BP_MasterFurniture_Bed
struct ABP_MasterFurniture_Bed_C_ExecuteUbergraph_BP_MasterFurniture_Bed_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
