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

// Function BP_VillageManager.BP_VillageManager_C.LoadSaveFileIntoSystem_OnFinish
struct ABP_VillageManager_C_LoadSaveFileIntoSystem_OnFinish_Params
{
	class USAVE_Game_C*                                SaveReference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_VillageManager.BP_VillageManager_C.UpdateSeasonalBuildings
struct ABP_VillageManager_C_UpdateSeasonalBuildings_Params
{
};

// Function BP_VillageManager.BP_VillageManager_C.UpdateSeasonalAnimals
struct ABP_VillageManager_C_UpdateSeasonalAnimals_Params
{
};

// Function BP_VillageManager.BP_VillageManager_C.UpdateSeasonalNPCs
struct ABP_VillageManager_C_UpdateSeasonalNPCs_Params
{
};

// Function BP_VillageManager.BP_VillageManager_C.UpdateEconomy
struct ABP_VillageManager_C_UpdateEconomy_Params
{
	int                                                Selection;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_VillageManager.BP_VillageManager_C.UpdateAnimalFeeding
struct ABP_VillageManager_C_UpdateAnimalFeeding_Params
{
	TArray<class ABP_MasterBuilding_C*>                Buildings;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ForceUpdateForUI;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               OnlyOneProductionSlot;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                StotID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_VillageManager.BP_VillageManager_C.UpdateBuildingsTrading
struct ABP_VillageManager_C_UpdateBuildingsTrading_Params
{
	TArray<class ABP_MasterBuilding_C*>                Buildings;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ForceUpdateForUI;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               OnlyOneTradingSlot;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                SlotID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_VillageManager.BP_VillageManager_C.UpdateBuildingsProduction
struct ABP_VillageManager_C_UpdateBuildingsProduction_Params
{
	TArray<class ABP_MasterBuilding_C*>                Buildings;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ForceUpdateForUI;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               OnlyOneProductionSlot;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                StotID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_VillageManager.BP_VillageManager_C.SetWorkingTime
struct ABP_VillageManager_C_SetWorkingTime_Params
{
};

// Function BP_VillageManager.BP_VillageManager_C.UpdateStorage
struct ABP_VillageManager_C_UpdateStorage_Params
{
};

// Function BP_VillageManager.BP_VillageManager_C.UpdateAnimalsNeeds
struct ABP_VillageManager_C_UpdateAnimalsNeeds_Params
{
};

// Function BP_VillageManager.BP_VillageManager_C.UpdatePeoplesNeeds
struct ABP_VillageManager_C_UpdatePeoplesNeeds_Params
{
};

// Function BP_VillageManager.BP_VillageManager_C.UpdateSeasonalFurnitures
struct ABP_VillageManager_C_UpdateSeasonalFurnitures_Params
{
};

// Function BP_VillageManager.BP_VillageManager_C.CheckBuildingLimit
struct ABP_VillageManager_C_CheckBuildingLimit_Params
{
	TEnumAsByte<E_FurnitureType_E_FurnitureType>       TrapType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               LimitExceeded;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Current;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Limit;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_VillageManager.BP_VillageManager_C.CheckTrapLimit
struct ABP_VillageManager_C_CheckTrapLimit_Params
{
	TEnumAsByte<E_FurnitureType_E_FurnitureType>       TrapType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               LimitExceeded;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Current;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Limit;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_VillageManager.BP_VillageManager_C.UpdateNumberOfTraps
struct ABP_VillageManager_C_UpdateNumberOfTraps_Params
{
};

// Function BP_VillageManager.BP_VillageManager_C.IncreaseTax
struct ABP_VillageManager_C_IncreaseTax_Params
{
	int                                                Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_VillageManager.BP_VillageManager_C.CheckTaxesOnSeasonChange
struct ABP_VillageManager_C_CheckTaxesOnSeasonChange_Params
{
};

// Function BP_VillageManager.BP_VillageManager_C.UpdatePopulation
struct ABP_VillageManager_C_UpdatePopulation_Params
{
};

// Function BP_VillageManager.BP_VillageManager_C.UpdateNumberOfBuildings
struct ABP_VillageManager_C_UpdateNumberOfBuildings_Params
{
};

// Function BP_VillageManager.BP_VillageManager_C.UpdateCurrentDevelopmentStage
struct ABP_VillageManager_C_UpdateCurrentDevelopmentStage_Params
{
};

// Function BP_VillageManager.BP_VillageManager_C.SetUnlockedDevelopmentStage
struct ABP_VillageManager_C_SetUnlockedDevelopmentStage_Params
{
	TEnumAsByte<E_DevelopmentStages_E_DevelopmentStages> NewDevelopmentStage;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_VillageManager.BP_VillageManager_C.GetTechnologies
struct ABP_VillageManager_C_GetTechnologies_Params
{
	float                                              TechnologyLevel_Building;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TechnologyLevel_Survival;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TechnologyLevel_Farming;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TechnologyLevel_Crafting;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_VillageManager.BP_VillageManager_C.SaveDataFromSystemToFile
struct ABP_VillageManager_C_SaveDataFromSystemToFile_Params
{
	class USAVE_Game_C*                                SaveReference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_VillageManager.BP_VillageManager_C.LoadSaveFileIntoSystem
struct ABP_VillageManager_C_LoadSaveFileIntoSystem_Params
{
	class USAVE_Game_C*                                SaveReference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_VillageManager.BP_VillageManager_C.GetTechnology
struct ABP_VillageManager_C_GetTechnology_Params
{
	TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes>   TechnologyType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TechnologyPoints;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_VillageManager.BP_VillageManager_C.UpdateFoodInventoryLimit
struct ABP_VillageManager_C_UpdateFoodInventoryLimit_Params
{
};

// Function BP_VillageManager.BP_VillageManager_C.UpdateResourceInventoryLimit
struct ABP_VillageManager_C_UpdateResourceInventoryLimit_Params
{
};

// Function BP_VillageManager.BP_VillageManager_C.CreateFencesTechnologyLockedArray
struct ABP_VillageManager_C_CreateFencesTechnologyLockedArray_Params
{
};

// Function BP_VillageManager.BP_VillageManager_C.CreateCraftingRecipesTechnologyLockedArray
struct ABP_VillageManager_C_CreateCraftingRecipesTechnologyLockedArray_Params
{
};

// Function BP_VillageManager.BP_VillageManager_C.CreateFurnituresTechnologyLockedArray
struct ABP_VillageManager_C_CreateFurnituresTechnologyLockedArray_Params
{
};

// Function BP_VillageManager.BP_VillageManager_C.CreateBuildingsTechnologyArray
struct ABP_VillageManager_C_CreateBuildingsTechnologyArray_Params
{
};

// Function BP_VillageManager.BP_VillageManager_C.Reset Life Stats Multipliers
struct ABP_VillageManager_C_Reset_Life_Stats_Multipliers_Params
{
};

// Function BP_VillageManager.BP_VillageManager_C.CheckIfTechnologyLevelIsSufficient
struct ABP_VillageManager_C_CheckIfTechnologyLevelIsSufficient_Params
{
	TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes>   TechnologyType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ValueToCheck;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSufficient_;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_VillageManager.BP_VillageManager_C.IncreaseTechnology
struct ABP_VillageManager_C_IncreaseTechnology_Params
{
	TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes>   TechnologyType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_VillageManager.BP_VillageManager_C.DecreaseDynastyReputation
struct ABP_VillageManager_C_DecreaseDynastyReputation_Params
{
	int                                                Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_VillageManager.BP_VillageManager_C.IncreaseDynastyReputation
struct ABP_VillageManager_C_IncreaseDynastyReputation_Params
{
	int                                                Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_VillageManager.BP_VillageManager_C.ReceiveBeginPlay
struct ABP_VillageManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_VillageManager.BP_VillageManager_C.Init
struct ABP_VillageManager_C_Init_Params
{
	bool                                               MainMenu;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_VillageManager.BP_VillageManager_C.UpdateVillageOnSeasonChange
struct ABP_VillageManager_C_UpdateVillageOnSeasonChange_Params
{
};

// Function BP_VillageManager.BP_VillageManager_C.StartVillageManager
struct ABP_VillageManager_C_StartVillageManager_Params
{
	bool                                               MainMenu;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_VillageManager.BP_VillageManager_C.UpdateOnPopulationChange
struct ABP_VillageManager_C_UpdateOnPopulationChange_Params
{
};

// Function BP_VillageManager.BP_VillageManager_C.UpdateOnBuildingsChange
struct ABP_VillageManager_C_UpdateOnBuildingsChange_Params
{
};

// Function BP_VillageManager.BP_VillageManager_C.UpdateOnTime
struct ABP_VillageManager_C_UpdateOnTime_Params
{
	int                                                IteratorNumber;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_VillageManager.BP_VillageManager_C.ExecuteUbergraph_BP_VillageManager
struct ABP_VillageManager_C_ExecuteUbergraph_BP_VillageManager_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_VillageManager.BP_VillageManager_C.OnTechnologyChange__DelegateSignature
struct ABP_VillageManager_C_OnTechnologyChange__DelegateSignature_Params
{
};

// Function BP_VillageManager.BP_VillageManager_C.OnGlobalParametersChange__DelegateSignature
struct ABP_VillageManager_C_OnGlobalParametersChange__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
