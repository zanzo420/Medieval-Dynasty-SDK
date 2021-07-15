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

// Function BP_FurnitureLight_Lantern.BP_FurnitureLight_Lantern_C.OnOwnershipSwap
struct ABP_FurnitureLight_Lantern_C_OnOwnershipSwap_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               NewOwnership;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FurnitureLight_Lantern.BP_FurnitureLight_Lantern_C.CheckObstruction
struct ABP_FurnitureLight_Lantern_C_CheckObstruction_Params
{
	bool                                               CanBePlaced_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FurnitureLight_Lantern.BP_FurnitureLight_Lantern_C.DisableGhost
struct ABP_FurnitureLight_Lantern_C_DisableGhost_Params
{
};

// Function BP_FurnitureLight_Lantern.BP_FurnitureLight_Lantern_C.EnableGhost
struct ABP_FurnitureLight_Lantern_C_EnableGhost_Params
{
};

// Function BP_FurnitureLight_Lantern.BP_FurnitureLight_Lantern_C.UserConstructionScript
struct ABP_FurnitureLight_Lantern_C_UserConstructionScript_Params
{
};

// Function BP_FurnitureLight_Lantern.BP_FurnitureLight_Lantern_C.StartFire
struct ABP_FurnitureLight_Lantern_C_StartFire_Params
{
};

// Function BP_FurnitureLight_Lantern.BP_FurnitureLight_Lantern_C.PutOutFire
struct ABP_FurnitureLight_Lantern_C_PutOutFire_Params
{
};

// Function BP_FurnitureLight_Lantern.BP_FurnitureLight_Lantern_C.ExecuteUbergraph_BP_FurnitureLight_Lantern
struct ABP_FurnitureLight_Lantern_C_ExecuteUbergraph_BP_FurnitureLight_Lantern_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
