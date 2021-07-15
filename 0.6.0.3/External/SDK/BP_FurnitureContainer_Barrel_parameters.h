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

// Function BP_FurnitureContainer_Barrel.BP_FurnitureContainer_Barrel_C.GetInventoryComponent
struct ABP_FurnitureContainer_Barrel_C_GetInventoryComponent_Params
{
	class UInventoryComponent_C*                       Inventory;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureContainer_Barrel.BP_FurnitureContainer_Barrel_C.OnOwnershipSwap
struct ABP_FurnitureContainer_Barrel_C_OnOwnershipSwap_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               NewOwnership;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureContainer_Barrel.BP_FurnitureContainer_Barrel_C.DisableGhost
struct ABP_FurnitureContainer_Barrel_C_DisableGhost_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
