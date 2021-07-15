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

// Function BP_NPCManager.BP_NPCManager_C.SetNeighoursRelations
struct ABP_NPCManager_C_SetNeighoursRelations_Params
{
};

// Function BP_NPCManager.BP_NPCManager_C.NPCsDeath
struct ABP_NPCManager_C_NPCsDeath_Params
{
};

// Function BP_NPCManager.BP_NPCManager_C.UpdateNPCsOnSeasonChanged
struct ABP_NPCManager_C_UpdateNPCsOnSeasonChanged_Params
{
};

// Function BP_NPCManager.BP_NPCManager_C.NeighboursDeath
struct ABP_NPCManager_C_NeighboursDeath_Params
{
	class ABP_NPC_C*                                   NPC_Reference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPCManager.BP_NPCManager_C.SpawnGiftVendor
struct ABP_NPCManager_C_SpawnGiftVendor_Params
{
	struct FTransform                                  TransformLocation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FDataTableRowHandle                         VendorCategory;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class ABP_NPC_C*                                   NPC;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPCManager.BP_NPCManager_C.SpawnNPC_FromSpawner
struct ABP_NPCManager_C_SpawnNPC_FromSpawner_Params
{
	struct FST_SimpleNPC                               NPC_Parameters;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class ABP_NPC_C*                                   NPC;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPCManager.BP_NPCManager_C.VerifyNPCHeadAndHair
struct ABP_NPCManager_C_VerifyNPCHeadAndHair_Params
{
	class ABP_NPC_C*                                   NPCReference;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPCManager.BP_NPCManager_C.UpdateVendors
struct ABP_NPCManager_C_UpdateVendors_Params
{
};

// Function BP_NPCManager.BP_NPCManager_C.SortByWealth
struct ABP_NPCManager_C_SortByWealth_Params
{
	TArray<struct FST_NPCsPresets>                     ArrayToSort;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<E_Wealth_E_Wealth>                     Wealth;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_NPCsPresets>                     SortedArray;                                               // (Parm, OutParm)
};

// Function BP_NPCManager.BP_NPCManager_C.GetPresetByProfessionSeasonAndWealth
struct ABP_NPCManager_C_GetPresetByProfessionSeasonAndWealth_Params
{
	class ABP_NPC_C*                                   NPCReference;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Seasons_E_Seasons>                   Season;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Wealth_E_Wealth>                     Wealth;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Profession_E_Profession>             ProfessionOut;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Seasons_E_Seasons>                   SeasonOut;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Wealth_E_Wealth>                     WealthOut;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       PresetID;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPCManager.BP_NPCManager_C.DestroyHerald
struct ABP_NPCManager_C_DestroyHerald_Params
{
	struct FString                                     NPC_ID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_NPCManager.BP_NPCManager_C.SpawnHerald
struct ABP_NPCManager_C_SpawnHerald_Params
{
	class ABP_NPC_C*                                   NPC;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPCManager.BP_NPCManager_C.SetNPC_NightPatrol
struct ABP_NPCManager_C_SetNPC_NightPatrol_Params
{
};

// Function BP_NPCManager.BP_NPCManager_C.CheckIsNeighbours
struct ABP_NPCManager_C_CheckIsNeighbours_Params
{
};

// Function BP_NPCManager.BP_NPCManager_C.VerifyAvailablePresets
struct ABP_NPCManager_C_VerifyAvailablePresets_Params
{
	class UDataTable*                                  DataTable;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_NPCsPresets>                     ArrayToVerify;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_NPCManager.BP_NPCManager_C.GetPresetByProfessionAndSeason
struct ABP_NPCManager_C_GetPresetByProfessionAndSeason_Params
{
	class ABP_NPC_C*                                   NPCReference;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Seasons_E_Seasons>                   Season;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Profession_E_Profession>             ProfessionOut;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Seasons_E_Seasons>                   SeasonOut;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       PresetID;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPCManager.BP_NPCManager_C.VerifyNPCPresets
struct ABP_NPCManager_C_VerifyNPCPresets_Params
{
	class ABP_NPC_C*                                   NPCReference;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPCManager.BP_NPCManager_C.SelectHeadAndHair
struct ABP_NPCManager_C_SelectHeadAndHair_Params
{
	class ABP_NPC_C*                                   NPCReference;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPCManager.BP_NPCManager_C.GetPresetDataTableForNPC
struct ABP_NPCManager_C_GetPresetDataTableForNPC_Params
{
	class ABP_BaseCharacter_C*                         NPCReference;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPCManager.BP_NPCManager_C.SortBySeason
struct ABP_NPCManager_C_SortBySeason_Params
{
	TArray<struct FST_NPCsPresets>                     ArrayToSort;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<E_Seasons_E_Seasons>                   Season;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_NPCsPresets>                     SortedArray;                                               // (Parm, OutParm)
};

// Function BP_NPCManager.BP_NPCManager_C.SortByProfession
struct ABP_NPCManager_C_SortByProfession_Params
{
	TArray<struct FST_NPCsPresets>                     ArrayToSort;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_NPCsPresets>                     SortedArray;                                               // (Parm, OutParm)
};

// Function BP_NPCManager.BP_NPCManager_C.GetNPCPresets
struct ABP_NPCManager_C_GetNPCPresets_Params
{
	class UDataTable*                                  DataTable;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_NPCsPresets>                     Presets;                                                   // (Parm, OutParm)
};

// Function BP_NPCManager.BP_NPCManager_C.GetPresetsForProfession
struct ABP_NPCManager_C_GetPresetsForProfession_Params
{
	class ABP_NPC_C*                                   NPCReference;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Profession_E_Profession>             ProfessionOut;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_NPCSeasonClothing                       PresetsForProfession;                                      // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_NPCManager.BP_NPCManager_C.LoadPresetTables
struct ABP_NPCManager_C_LoadPresetTables_Params
{
	TArray<struct FST_NPCsPresets>                     AvailableMalePresets;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FST_NPCsPresets>                     AvailableFemalePresets;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FST_NPCsPresets>                     AvailableBoyPresets;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FST_NPCsPresets>                     AvailableGirlPresets;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FST_NPCsPresets>                     AvailableToddlerPresets;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_NPCManager.BP_NPCManager_C.SelectPresetsForNPC
struct ABP_NPCManager_C_SelectPresetsForNPC_Params
{
	class ABP_NPC_C*                                   NPC_Reference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPCManager.BP_NPCManager_C.InitializePresetTables
struct ABP_NPCManager_C_InitializePresetTables_Params
{
};

// Function BP_NPCManager.BP_NPCManager_C.NakedNPCPrevention
struct ABP_NPCManager_C_NakedNPCPrevention_Params
{
	struct FST_NPCMeshesGen                            NPCMeshes;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class ABP_NPC_C*                                   NPCReference;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, int>    BodyParts;                                                 // (Parm, OutParm)
};

// Function BP_NPCManager.BP_NPCManager_C.GetMeshesByIndexesFromNPCMeshesGen
struct ABP_NPCManager_C_GetMeshesByIndexesFromNPCMeshesGen_Params
{
	struct FST_NPCMeshesGen                            NPCMeshes;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, int>    BodyPartsIndexes;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, class USkeletalMesh*> BodyPartsMeshes;                                           // (Parm, OutParm)
};

// Function BP_NPCManager.BP_NPCManager_C.GetRandomIndexesFromNPCMeshesGen
struct ABP_NPCManager_C_GetRandomIndexesFromNPCMeshesGen_Params
{
	struct FST_NPCMeshesGen                            NPCMeshes;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TArray<struct FST_ArrayOfArraysInt>                SortedIndexes;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, int>    BodyPartsIndexes;                                          // (Parm, OutParm)
};

// Function BP_NPCManager.BP_NPCManager_C.MeshGenSorter
struct ABP_NPCManager_C_MeshGenSorter_Params
{
	TArray<struct FST_NPCsGenMeshSettings>             ArrayToSort;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Seasons_E_Seasons>                   Season;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_NPCsGenMeshSettings>             SortedArray;                                               // (Parm, OutParm)
	TArray<int>                                        SortedIndexes;                                             // (Parm, OutParm)
};

// Function BP_NPCManager.BP_NPCManager_C.SortMeshes
struct ABP_NPCManager_C_SortMeshes_Params
{
	struct FST_NPCMeshesGen                            NPCMeshes;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Seasons_E_Seasons>                   Season;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_NPCMeshesGen                            SortedNPCMeshes;                                           // (Parm, OutParm, HasGetValueTypeHash)
	TArray<struct FST_ArrayOfArraysInt>                SortedIndexes;                                             // (Parm, OutParm)
};

// Function BP_NPCManager.BP_NPCManager_C.SelectMeshesForNPCGen
struct ABP_NPCManager_C_SelectMeshesForNPCGen_Params
{
	struct FST_NPCMeshesGen                            NPCMeshes;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class ABP_NPC_C*                                   NPC_Reference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               KeepHead;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, class USkeletalMesh*> BodyPartsMeshes;                                           // (Parm, OutParm)
};

// Function BP_NPCManager.BP_NPCManager_C.Spawn Child
struct ABP_NPCManager_C_Spawn_Child_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  TransformLocation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FString                                     MotherID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               MustBeMale;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Birth;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Succes;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPCManager.BP_NPCManager_C.LoadCharacterMeshes
struct ABP_NPCManager_C_LoadCharacterMeshes_Params
{
	TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, int>    BodyPartsIndexes;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	class ABP_NPC_C*                                   NPCReference;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPCManager.BP_NPCManager_C.SelectMeshesForNPC
struct ABP_NPCManager_C_SelectMeshesForNPC_Params
{
	struct FST_NPCMeshes                               NPCMeshes;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class ABP_NPC_C*                                   NPC_Reference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, class USkeletalMesh*> BodyPartsMeshes;                                           // (Parm, OutParm)
};

// Function BP_NPCManager.BP_NPCManager_C.GetMeshesByIndexesFromNPCMeshes
struct ABP_NPCManager_C_GetMeshesByIndexesFromNPCMeshes_Params
{
	struct FST_NPCMeshes                               NPCMeshes;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, int>    BodyPartsIndexes;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, class USkeletalMesh*> BodyPartsMeshes;                                           // (Parm, OutParm)
};

// Function BP_NPCManager.BP_NPCManager_C.GetRandomIndexesFromNPCMeshes
struct ABP_NPCManager_C_GetRandomIndexesFromNPCMeshes_Params
{
	struct FST_NPCMeshes                               NPCMeshes;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, int>    BodyPartsIndexes;                                          // (Parm, OutParm)
};

// Function BP_NPCManager.BP_NPCManager_C.SetCustomCharacterMeshes
struct ABP_NPCManager_C_SetCustomCharacterMeshes_Params
{
	class UClass*                                      AnimClass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_CharacterType_E_CharacterType>       CharacterType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_NPC_C*                                   NPC_Reference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPCManager.BP_NPCManager_C.RandomizeCharacterMeshes
struct ABP_NPCManager_C_RandomizeCharacterMeshes_Params
{
	class UClass*                                      AnimClass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_CharacterType_E_CharacterType>       CharacterType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_NPC_C*                                   NPC_Reference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               KeepHead;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPCManager.BP_NPCManager_C.SaveDataFromSystemToFile
struct ABP_NPCManager_C_SaveDataFromSystemToFile_Params
{
	class USAVE_Game_C*                                SaveReference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPCManager.BP_NPCManager_C.LoadSaveFileIntoSystem
struct ABP_NPCManager_C_LoadSaveFileIntoSystem_Params
{
	class USAVE_Game_C*                                SaveReference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPCManager.BP_NPCManager_C.ResetItemsInNeighborhoodBuildings
struct ABP_NPCManager_C_ResetItemsInNeighborhoodBuildings_Params
{
};

// Function BP_NPCManager.BP_NPCManager_C.AddItemsToNeighborhoodBuildings
struct ABP_NPCManager_C_AddItemsToNeighborhoodBuildings_Params
{
};

// Function BP_NPCManager.BP_NPCManager_C.StartNPCManager
struct ABP_NPCManager_C_StartNPCManager_Params
{
	bool                                               LoadGame;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               MainMenu;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPCManager.BP_NPCManager_C.SpawnRandomNPC
struct ABP_NPCManager_C_SpawnRandomNPC_Params
{
};

// Function BP_NPCManager.BP_NPCManager_C.SpawnNewNeighbours
struct ABP_NPCManager_C_SpawnNewNeighbours_Params
{
};

// Function BP_NPCManager.BP_NPCManager_C.SpawnNeighbours
struct ABP_NPCManager_C_SpawnNeighbours_Params
{
};

// Function BP_NPCManager.BP_NPCManager_C.ResetIllness
struct ABP_NPCManager_C_ResetIllness_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPCManager.BP_NPCManager_C.Init
struct ABP_NPCManager_C_Init_Params
{
	bool                                               MainMenu;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPCManager.BP_NPCManager_C.TeleportToHouse
struct ABP_NPCManager_C_TeleportToHouse_Params
{
	bool                                               PlayerIncluded;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPCManager.BP_NPCManager_C.SetNPCRelations
struct ABP_NPCManager_C_SetNPCRelations_Params
{
	struct FST_CustomNPC                               NPC_Structure;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class ABP_NPC_C*                                   NPCReference;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     NPC_ID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<E_CharacterType_E_CharacterType>       CharacterType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPCManager.BP_NPCManager_C.CheckNPC_ID
struct ABP_NPCManager_C_CheckNPC_ID_Params
{
	struct FString                                     NPC_ID;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	struct FString                                     New_NPC_ID;                                                // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_NPCManager.BP_NPCManager_C.Remove NPC
struct ABP_NPCManager_C_Remove_NPC_Params
{
	class ABP_BaseCharacter_C*                         NPC;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_NPCManager.BP_NPCManager_C.SpawnNPC
struct ABP_NPCManager_C_SpawnNPC_Params
{
	struct FString                                     ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FST_CustomNPC                               NPC_Structure;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               IsCustomNPC;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsNewNeighbour;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               LoadGame;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Birth;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ABP_NPC_C*                                   NPC;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPCManager.BP_NPCManager_C.AddNameToAvailableNamesArray
struct ABP_NPCManager_C_AddNameToAvailableNamesArray_Params
{
	struct FString                                     NPC_ID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<E_Sex_E_Sex>                           Sex;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPCManager.BP_NPCManager_C.InitAvailableNames
struct ABP_NPCManager_C_InitAvailableNames_Params
{
};

// Function BP_NPCManager.BP_NPCManager_C.RandomSex
struct ABP_NPCManager_C_RandomSex_Params
{
	TEnumAsByte<E_Sex_E_Sex>                           Sex;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPCManager.BP_NPCManager_C.RandomName
struct ABP_NPCManager_C_RandomName_Params
{
	TEnumAsByte<E_Sex_E_Sex>                           Sex;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                         NameHandle;                                                // (Parm, OutParm, NoDestructor)
};

// Function BP_NPCManager.BP_NPCManager_C.ReceiveBeginPlay
struct ABP_NPCManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_NPCManager.BP_NPCManager_C.OnSeasonChanged
struct ABP_NPCManager_C_OnSeasonChanged_Params
{
};

// Function BP_NPCManager.BP_NPCManager_C.OnDaySkip
struct ABP_NPCManager_C_OnDaySkip_Params
{
};

// Function BP_NPCManager.BP_NPCManager_C.OnTimeOfDayChanged
struct ABP_NPCManager_C_OnTimeOfDayChanged_Params
{
	TEnumAsByte<E_TimeOfDay_E_TimeOfDay>               TimeOfDay;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_NPCManager.BP_NPCManager_C.ExecuteUbergraph_BP_NPCManager
struct ABP_NPCManager_C_ExecuteUbergraph_BP_NPCManager_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
