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

// Function BP_POI_Spawner.BP_POI_Spawner_C.RollNumberOfSeasons
struct ABP_POI_Spawner_C_RollNumberOfSeasons_Params
{
};

// Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnCustom
struct ABP_POI_Spawner_C_SpawnCustom_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnFromSave
struct ABP_POI_Spawner_C_SpawnFromSave_Params
{
	class ABP_SystemsManager_C*                        SystemsManagerReference;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_Helper_Spawner_Indices>          Spawns;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TMap<int, struct FST_InventoryItemsArray>          Container;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FST_SAVE_Spawner_Animal>             Animal;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FST_SAVE_Spawner_Item>               Item;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_POI_Spawner.BP_POI_Spawner_C.Init
struct ABP_POI_Spawner_C_Init_Params
{
};

// Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnChestWithItems
struct ABP_POI_Spawner_C_SpawnChestWithItems_Params
{
	struct FTransform                                  Place;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	TArray<struct FST_ItemResource>                    V_ChestItems;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UClass*                                      TypeOfContainer;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SystemsManager_C*                        SystemsManagerReference;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_POI_Spawner.BP_POI_Spawner_C.CheckForBuildings
struct ABP_POI_Spawner_C_CheckForBuildings_Params
{
	bool                                               Debug;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Available;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnMeshes
struct ABP_POI_Spawner_C_SpawnMeshes_Params
{
};

// Function BP_POI_Spawner.BP_POI_Spawner_C.AddMesh
struct ABP_POI_Spawner_C_AddMesh_Params
{
};

// Function BP_POI_Spawner.BP_POI_Spawner_C.AddFurniture
struct ABP_POI_Spawner_C_AddFurniture_Params
{
};

// Function BP_POI_Spawner.BP_POI_Spawner_C.AddContainer
struct ABP_POI_Spawner_C_AddContainer_Params
{
};

// Function BP_POI_Spawner.BP_POI_Spawner_C.DisplayPreview
struct ABP_POI_Spawner_C_DisplayPreview_Params
{
};

// Function BP_POI_Spawner.BP_POI_Spawner_C.DisplayArrows
struct ABP_POI_Spawner_C_DisplayArrows_Params
{
};

// Function BP_POI_Spawner.BP_POI_Spawner_C.AddItem
struct ABP_POI_Spawner_C_AddItem_Params
{
};

// Function BP_POI_Spawner.BP_POI_Spawner_C.AddAnimal
struct ABP_POI_Spawner_C_AddAnimal_Params
{
};

// Function BP_POI_Spawner.BP_POI_Spawner_C.AddNPC
struct ABP_POI_Spawner_C_AddNPC_Params
{
};

// Function BP_POI_Spawner.BP_POI_Spawner_C.Spawn
struct ABP_POI_Spawner_C_Spawn_Params
{
	class ABP_SystemsManager_C*                        SystemsManagerReference;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnMesh
struct ABP_POI_Spawner_C_SpawnMesh_Params
{
	class UStaticMesh*                                 Mesh;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  Place;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnFurniture
struct ABP_POI_Spawner_C_SpawnFurniture_Params
{
	class UClass*                                      Furniture;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  Place;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	class ABP_SystemsManager_C*                        SystemsManagerReference;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnItem
struct ABP_POI_Spawner_C_SpawnItem_Params
{
	struct FDataTableRowHandle                         What;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	int                                                HowMuch;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  Place;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Condition;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Physics;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnNPC
struct ABP_POI_Spawner_C_SpawnNPC_Params
{
	struct FST_SimpleNPC                               Who;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int                                                HowMany;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  Place;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	class ABP_SystemsManager_C*                        SystemsManagerReference;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_POI_Spawner.BP_POI_Spawner_C.SpawnAnimal
struct ABP_POI_Spawner_C_SpawnAnimal_Params
{
	struct FDataTableRowHandle                         What;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	int                                                HowMany;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  Place;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	class ABP_SystemsManager_C*                        SystemsManagerReference;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HP;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_POI_Spawner.BP_POI_Spawner_C.ClearSpawns
struct ABP_POI_Spawner_C_ClearSpawns_Params
{
};

// Function BP_POI_Spawner.BP_POI_Spawner_C.UserConstructionScript
struct ABP_POI_Spawner_C_UserConstructionScript_Params
{
};

// Function BP_POI_Spawner.BP_POI_Spawner_C.ClearSpawnerSettings
struct ABP_POI_Spawner_C_ClearSpawnerSettings_Params
{
};

// Function BP_POI_Spawner.BP_POI_Spawner_C.Preview
struct ABP_POI_Spawner_C_Preview_Params
{
};

// Function BP_POI_Spawner.BP_POI_Spawner_C.ReceiveBeginPlay
struct ABP_POI_Spawner_C_ReceiveBeginPlay_Params
{
};

// Function BP_POI_Spawner.BP_POI_Spawner_C.ExecuteUbergraph_BP_POI_Spawner
struct ABP_POI_Spawner_C_ExecuteUbergraph_BP_POI_Spawner_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
