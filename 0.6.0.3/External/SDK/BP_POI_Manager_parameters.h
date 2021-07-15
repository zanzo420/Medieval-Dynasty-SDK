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

// Function BP_POI_Manager.BP_POI_Manager_C.CheckPOI_ID
struct ABP_POI_Manager_C_CheckPOI_ID_Params
{
};

// Function BP_POI_Manager.BP_POI_Manager_C.POI_CheckAvailability
struct ABP_POI_Manager_C_POI_CheckAvailability_Params
{
};

// Function BP_POI_Manager.BP_POI_Manager_C.POI_DisablePreviewAll
struct ABP_POI_Manager_C_POI_DisablePreviewAll_Params
{
};

// Function BP_POI_Manager.BP_POI_Manager_C.POI_EnablePreviewAll
struct ABP_POI_Manager_C_POI_EnablePreviewAll_Params
{
};

// Function BP_POI_Manager.BP_POI_Manager_C.UpdatePOI_Array
struct ABP_POI_Manager_C_UpdatePOI_Array_Params
{
};

// Function BP_POI_Manager.BP_POI_Manager_C.DespawnAll
struct ABP_POI_Manager_C_DespawnAll_Params
{
};

// Function BP_POI_Manager.BP_POI_Manager_C.Despawn
struct ABP_POI_Manager_C_Despawn_Params
{
	class ABP_POI_Spawner_C*                           Spawner;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Despawned;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_POI_Manager.BP_POI_Manager_C.SpawnCategory
struct ABP_POI_Manager_C_SpawnCategory_Params
{
	TArray<TEnumAsByte<E_POI_Type_E_POI_Type>>         SpawnerCategory;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class ABP_POI_Spawner_C*>                   L_Spawners;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TMap<TEnumAsByte<E_POI_Type_E_POI_Type>, int>      DrawMap;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                RestrictionNumber;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_POI_Manager.BP_POI_Manager_C.InitCategory
struct ABP_POI_Manager_C_InitCategory_Params
{
	TArray<class ABP_POI_Spawner_C*>                   Spawners;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<TEnumAsByte<E_POI_Type_E_POI_Type>>         Type;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                TypeIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_POI_Manager.BP_POI_Manager_C.Init
struct ABP_POI_Manager_C_Init_Params
{
	bool                                               MainMenu;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_POI_Manager.BP_POI_Manager_C.CheckRestrictions
struct ABP_POI_Manager_C_CheckRestrictions_Params
{
	TArray<struct FST_DrawingSpawners>                 Restrictions;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<E_POI_Type_E_POI_Type>                 SpawnerType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_POI_Type_E_POI_Type>                 Type;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumberOfSpawners;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_POI_Manager.BP_POI_Manager_C.SpawnCategoryRestricted
struct ABP_POI_Manager_C_SpawnCategoryRestricted_Params
{
};

// Function BP_POI_Manager.BP_POI_Manager_C.SpawnRandom
struct ABP_POI_Manager_C_SpawnRandom_Params
{
};

// Function BP_POI_Manager.BP_POI_Manager_C.LoadSpawners
struct ABP_POI_Manager_C_LoadSpawners_Params
{
	class USAVE_Game_C*                                SaveReference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_POI_Manager.BP_POI_Manager_C.SaveSpawners
struct ABP_POI_Manager_C_SaveSpawners_Params
{
	class USAVE_Game_C*                                SaveGame;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_POI_Manager.BP_POI_Manager_C.SpawnAllActiveSpawners
struct ABP_POI_Manager_C_SpawnAllActiveSpawners_Params
{
};

// Function BP_POI_Manager.BP_POI_Manager_C.StartPOISystem
struct ABP_POI_Manager_C_StartPOISystem_Params
{
	bool                                               LoadGame;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               MainMenu;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_POI_Manager.BP_POI_Manager_C.ExecuteUbergraph_BP_POI_Manager
struct ABP_POI_Manager_C_ExecuteUbergraph_BP_POI_Manager_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
