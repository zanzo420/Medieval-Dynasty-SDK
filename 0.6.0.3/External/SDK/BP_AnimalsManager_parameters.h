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

// Function BP_AnimalsManager.BP_AnimalsManager_C.SeasonalUpdateSpawners
struct ABP_AnimalsManager_C_SeasonalUpdateSpawners_Params
{
};

// Function BP_AnimalsManager.BP_AnimalsManager_C.CheckAvailability
struct ABP_AnimalsManager_C_CheckAvailability_Params
{
};

// Function BP_AnimalsManager.BP_AnimalsManager_C.UpdateSpawners
struct ABP_AnimalsManager_C_UpdateSpawners_Params
{
};

// Function BP_AnimalsManager.BP_AnimalsManager_C.CheckSpawnersID
struct ABP_AnimalsManager_C_CheckSpawnersID_Params
{
};

// Function BP_AnimalsManager.BP_AnimalsManager_C.UpdateListOfSpawners
struct ABP_AnimalsManager_C_UpdateListOfSpawners_Params
{
};

// Function BP_AnimalsManager.BP_AnimalsManager_C.SpawnGroundAnimalsInSpawnerFromSave
struct ABP_AnimalsManager_C_SpawnGroundAnimalsInSpawnerFromSave_Params
{
	class ABP_SpawnPointWildAnimal_C*                  Spawner;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalsManager.BP_AnimalsManager_C.GetAnimalDataByName
struct ABP_AnimalsManager_C_GetAnimalDataByName_Params
{
	struct FName                                       AnimalName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_Animal                                  AnimalData;                                                // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_AnimalsManager.BP_AnimalsManager_C.RemoveNeighborhoodRedundantAnimals
struct ABP_AnimalsManager_C_RemoveNeighborhoodRedundantAnimals_Params
{
	class ABP_MasterBuilding_C*                        Building;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Count;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalsManager.BP_AnimalsManager_C.SpawnAnimalsToNeighborhoodBuildings
struct ABP_AnimalsManager_C_SpawnAnimalsToNeighborhoodBuildings_Params
{
};

// Function BP_AnimalsManager.BP_AnimalsManager_C.SpawnAnimalsToNeighborhoodBuilding
struct ABP_AnimalsManager_C_SpawnAnimalsToNeighborhoodBuilding_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<E_Animals_E_Animals>                   Species;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       YoungFemale;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                YoungFemaleCount;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       YoungMale;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                YoungMaleCount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Female;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FemaleCount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Male;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaleCount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalsManager.BP_AnimalsManager_C.FindClosestFishesPoints
struct ABP_AnimalsManager_C_FindClosestFishesPoints_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Radius;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_Flock_Fish_C*>                    FishesPoints;                                              // (Parm, OutParm)
};

// Function BP_AnimalsManager.BP_AnimalsManager_C.FindClosestWildAnimalsPoints
struct ABP_AnimalsManager_C_FindClosestWildAnimalsPoints_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Radius;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_SpawnPointWildAnimal_C*>          WildAnimalsPoints;                                         // (Parm, OutParm)
};

// Function BP_AnimalsManager.BP_AnimalsManager_C.SpawnFishInSpawner
struct ABP_AnimalsManager_C_SpawnFishInSpawner_Params
{
	class ABP_Flock_Fish_C*                            Spawner;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalsManager.BP_AnimalsManager_C.SetNumberOfFishesInSpawners
struct ABP_AnimalsManager_C_SetNumberOfFishesInSpawners_Params
{
};

// Function BP_AnimalsManager.BP_AnimalsManager_C.SetNumberOfFishesInSpawner
struct ABP_AnimalsManager_C_SetNumberOfFishesInSpawner_Params
{
	class ABP_Flock_Fish_C*                            SpawnPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalsManager.BP_AnimalsManager_C.SaveDataFromSystemToFile
struct ABP_AnimalsManager_C_SaveDataFromSystemToFile_Params
{
	class USAVE_Game_C*                                SaveReference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalsManager.BP_AnimalsManager_C.LoadSaveFileIntoSystem
struct ABP_AnimalsManager_C_LoadSaveFileIntoSystem_Params
{
	class USAVE_Game_C*                                SaveReference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalsManager.BP_AnimalsManager_C.TeleportToLocation
struct ABP_AnimalsManager_C_TeleportToLocation_Params
{
	class ABP_AnimalBase_C*                            Animal;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalsManager.BP_AnimalsManager_C.TeleportToHomeLocation
struct ABP_AnimalsManager_C_TeleportToHomeLocation_Params
{
	class ABP_AnimalBase_C*                            Animal;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalsManager.BP_AnimalsManager_C.TeleportToHome
struct ABP_AnimalsManager_C_TeleportToHome_Params
{
};

// Function BP_AnimalsManager.BP_AnimalsManager_C.SpawnGroundAnimalsInSpawner
struct ABP_AnimalsManager_C_SpawnGroundAnimalsInSpawner_Params
{
	class ABP_SpawnPointWildAnimal_C*                  Spawner;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalsManager.BP_AnimalsManager_C.RemoveRandomCountOfHusbandryAnimalsOnEvent
struct ABP_AnimalsManager_C_RemoveRandomCountOfHusbandryAnimalsOnEvent_Params
{
	int                                                MinNumberOfAnimals;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxNumberOfAnimals;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalsManager.BP_AnimalsManager_C.RefreshWildAnimalsArray
struct ABP_AnimalsManager_C_RefreshWildAnimalsArray_Params
{
};

// Function BP_AnimalsManager.BP_AnimalsManager_C.SpawnHusbandryAnimal
struct ABP_AnimalsManager_C_SpawnHusbandryAnimal_Params
{
	struct FName                                       Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Home;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  SpawnTransform;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	class ABP_MasterBuilding_C*                        Home2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RandomAge;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               RandomVariation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Variation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ABP_AnimalBase_C*                            Actor;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalsManager.BP_AnimalsManager_C.SpawnHusbandryAnimals
struct ABP_AnimalsManager_C_SpawnHusbandryAnimals_Params
{
	struct FName                                       Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Count;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Home;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  SpawnTransform;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	class ABP_MasterBuilding_C*                        Home2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RandomAge;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               RandomVariation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Variation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalsManager.BP_AnimalsManager_C.SetPlayerPawnReference
struct ABP_AnimalsManager_C_SetPlayerPawnReference_Params
{
};

// Function BP_AnimalsManager.BP_AnimalsManager_C.SetNumberOfAnimalsInSpawners
struct ABP_AnimalsManager_C_SetNumberOfAnimalsInSpawners_Params
{
};

// Function BP_AnimalsManager.BP_AnimalsManager_C.SetNumberOfAnimalsInSpawner
struct ABP_AnimalsManager_C_SetNumberOfAnimalsInSpawner_Params
{
	class ABP_SpawnPointWildAnimal_C*                  SpawnPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalsManager.BP_AnimalsManager_C.Init
struct ABP_AnimalsManager_C_Init_Params
{
	bool                                               MainMenu;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalsManager.BP_AnimalsManager_C.StartAnimalsManager
struct ABP_AnimalsManager_C_StartAnimalsManager_Params
{
	bool                                               LoadGame;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               MainMenu;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AnimalsManager.BP_AnimalsManager_C.StopCheckAnimals
struct ABP_AnimalsManager_C_StopCheckAnimals_Params
{
};

// Function BP_AnimalsManager.BP_AnimalsManager_C.CheckAnimals
struct ABP_AnimalsManager_C_CheckAnimals_Params
{
};

// Function BP_AnimalsManager.BP_AnimalsManager_C.ReceiveBeginPlay
struct ABP_AnimalsManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_AnimalsManager.BP_AnimalsManager_C.UpdateOnSeasonChanged
struct ABP_AnimalsManager_C_UpdateOnSeasonChanged_Params
{
};

// Function BP_AnimalsManager.BP_AnimalsManager_C.ExecuteUbergraph_BP_AnimalsManager
struct ABP_AnimalsManager_C_ExecuteUbergraph_BP_AnimalsManager_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
