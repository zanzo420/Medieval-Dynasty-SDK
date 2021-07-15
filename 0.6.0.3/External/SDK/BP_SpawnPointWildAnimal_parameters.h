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

// Function BP_SpawnPointWildAnimal.BP_SpawnPointWildAnimal_C.SubstractNumberOfAnimalsToSpawn
struct ABP_SpawnPointWildAnimal_C_SubstractNumberOfAnimalsToSpawn_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function BP_SpawnPointWildAnimal.BP_SpawnPointWildAnimal_C.FindAnimalTypeInSpawner
struct ABP_SpawnPointWildAnimal_C_FindAnimalTypeInSpawner_Params
{
	struct FDataTableRowHandle                         DataTableRowHandle;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	int                                                Index;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SpawnPointWildAnimal.BP_SpawnPointWildAnimal_C.InitAfterLoad
struct ABP_SpawnPointWildAnimal_C_InitAfterLoad_Params
{
	struct FST_SAVE_AnimalSpawners                     Data;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_SpawnPointWildAnimal.BP_SpawnPointWildAnimal_C.GetDataToSave
struct ABP_SpawnPointWildAnimal_C_GetDataToSave_Params
{
	struct FST_SAVE_AnimalSpawners                     Data;                                                      // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_SpawnPointWildAnimal.BP_SpawnPointWildAnimal_C.CheckAvailability
struct ABP_SpawnPointWildAnimal_C_CheckAvailability_Params
{
	bool                                               Debug;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Available;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_SpawnPointWildAnimal.BP_SpawnPointWildAnimal_C.RemoveAnimal
struct ABP_SpawnPointWildAnimal_C_RemoveAnimal_Params
{
	class ABP_GroundAnimalBase_C*                      Animal;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SpawnPointWildAnimal.BP_SpawnPointWildAnimal_C.GetDistance
struct ABP_SpawnPointWildAnimal_C_GetDistance_Params
{
	float                                              Distance;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SpawnPointWildAnimal.BP_SpawnPointWildAnimal_C.UserConstructionScript
struct ABP_SpawnPointWildAnimal_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
