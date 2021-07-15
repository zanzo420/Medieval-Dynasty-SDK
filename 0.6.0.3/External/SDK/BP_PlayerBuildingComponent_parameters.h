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

// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.UpdateBuildingLocation
struct UBP_PlayerBuildingComponent_C_UpdateBuildingLocation_Params
{
	struct FVector                                     NewBuildingLocation;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ReceiveBeginPlay
struct UBP_PlayerBuildingComponent_C_ReceiveBeginPlay_Params
{
};

// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnBuildingGhost
struct UBP_PlayerBuildingComponent_C_SpawnBuildingGhost_Params
{
	struct FDataTableRowHandle                         BuildingType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnMasterFieldGhost
struct UBP_PlayerBuildingComponent_C_SpawnMasterFieldGhost_Params
{
	TEnumAsByte<E_FieldCategories_E_FieldCategories>   FieldType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnSplineGhost
struct UBP_PlayerBuildingComponent_C_SpawnSplineGhost_Params
{
	struct FDataTableRowHandle                         FenceType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnFurnitureGhost
struct UBP_PlayerBuildingComponent_C_SpawnFurnitureGhost_Params
{
	struct FDataTableRowHandle                         FurnitureType;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnRoadGhost
struct UBP_PlayerBuildingComponent_C_SpawnRoadGhost_Params
{
	struct FDataTableRowHandle                         RoadType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ExecuteUbergraph_BP_PlayerBuildingComponent
struct UBP_PlayerBuildingComponent_C_ExecuteUbergraph_BP_PlayerBuildingComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
