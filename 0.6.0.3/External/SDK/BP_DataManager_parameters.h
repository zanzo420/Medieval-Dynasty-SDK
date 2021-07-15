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

// Function BP_DataManager.BP_DataManager_C.FindDuplicates_StaticMesh
struct ABP_DataManager_C_FindDuplicates_StaticMesh_Params
{
};

// Function BP_DataManager.BP_DataManager_C.FindDuplicates_Item
struct ABP_DataManager_C_FindDuplicates_Item_Params
{
};

// Function BP_DataManager.BP_DataManager_C.FindDuplicates_Furniture
struct ABP_DataManager_C_FindDuplicates_Furniture_Params
{
};

// Function BP_DataManager.BP_DataManager_C.FindDuplicates_Field
struct ABP_DataManager_C_FindDuplicates_Field_Params
{
};

// Function BP_DataManager.BP_DataManager_C.FindDuplicates_Building
struct ABP_DataManager_C_FindDuplicates_Building_Params
{
};

// Function BP_DataManager.BP_DataManager_C.FindDuplicates_SplineStructure
struct ABP_DataManager_C_FindDuplicates_SplineStructure_Params
{
};

// Function BP_DataManager.BP_DataManager_C.GetRandomOwnerlessNPCsCount
struct ABP_DataManager_C_GetRandomOwnerlessNPCsCount_Params
{
	TMap<TEnumAsByte<E_Ownership_E_Ownership>, int>    OwnershipCount;                                            // (Parm, OutParm)
};

// Function BP_DataManager.BP_DataManager_C.UpdateRestrictionAreas
struct ABP_DataManager_C_UpdateRestrictionAreas_Params
{
};

// Function BP_DataManager.BP_DataManager_C.CheckItemsID
struct ABP_DataManager_C_CheckItemsID_Params
{
};

// Function BP_DataManager.BP_DataManager_C.VendorCategorySettings
struct ABP_DataManager_C_VendorCategorySettings_Params
{
	struct FString                                     ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FName                                       VendorCategoryName;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsVendor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Profession_E_Profession>             Profession;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_OutsideNPCTypes_E_OutsideNPCTypes>   OutsideNPCType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                         NPC_RowName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FDataTableRowHandle                         NPC_DT_Handler;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                               CorrectVendor;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FDataTableRowHandle                         VendorCategory;                                            // (Parm, OutParm, NoDestructor)
	bool                                               ResetEQ;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Profession_E_Profession>             CorrectProfession;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DataManager.BP_DataManager_C.RefreshRoads
struct ABP_DataManager_C_RefreshRoads_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CheckDistance;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IgnoreLocationType;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_DataManager.BP_DataManager_C.RemoveRoad
struct ABP_DataManager_C_RemoveRoad_Params
{
	class ABP_MasterRoadSpline_C*                      Road;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DataManager.BP_DataManager_C.AddRoad
struct ABP_DataManager_C_AddRoad_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterRoadSpline_C*                      Road;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DataManager.BP_DataManager_C.SaveDataFromSystemToFile
struct ABP_DataManager_C_SaveDataFromSystemToFile_Params
{
	class USAVE_Game_C*                                SaveReference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_Others
struct ABP_DataManager_C_LoadSaveFileIntoSystem_Others_Params
{
	class USAVE_Game_C*                                SaveReference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_Animals
struct ABP_DataManager_C_LoadSaveFileIntoSystem_Animals_Params
{
	class USAVE_Game_C*                                SaveReference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_NPC
struct ABP_DataManager_C_LoadSaveFileIntoSystem_NPC_Params
{
	class USAVE_Game_C*                                SaveReference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_Furniture
struct ABP_DataManager_C_LoadSaveFileIntoSystem_Furniture_Params
{
	class USAVE_Game_C*                                SaveReference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_Roads
struct ABP_DataManager_C_LoadSaveFileIntoSystem_Roads_Params
{
	class USAVE_Game_C*                                SaveReference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_SplineStructure
struct ABP_DataManager_C_LoadSaveFileIntoSystem_SplineStructure_Params
{
	class USAVE_Game_C*                                SaveReference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_Fields
struct ABP_DataManager_C_LoadSaveFileIntoSystem_Fields_Params
{
	class USAVE_Game_C*                                SaveReference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_NPCBuildings
struct ABP_DataManager_C_LoadSaveFileIntoSystem_NPCBuildings_Params
{
	class USAVE_Game_C*                                SaveReference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DataManager.BP_DataManager_C.CheckHeirsAreMale
struct ABP_DataManager_C_CheckHeirsAreMale_Params
{
};

// Function BP_DataManager.BP_DataManager_C.FixPlayerFamily
struct ABP_DataManager_C_FixPlayerFamily_Params
{
};

// Function BP_DataManager.BP_DataManager_C.CheckPlayerFamiliesHouse
struct ABP_DataManager_C_CheckPlayerFamiliesHouse_Params
{
};

// Function BP_DataManager.BP_DataManager_C.ChangeItem
struct ABP_DataManager_C_ChangeItem_Params
{
	struct FGuid                                       Guid;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DataManager.BP_DataManager_C.GetRandomFurniture
struct ABP_DataManager_C_GetRandomFurniture_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_FurnitureCategories_E_FurnitureCategories> FurnitureCategory;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IgnoreOwnership;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               CheckOccupy;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     StartLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Range;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterFurniture_C*                       FurnitureToIgnore;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ABP_MasterFurniture_C*                       Furniture;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DataManager.BP_DataManager_C.GetFurnitureByDistance
struct ABP_DataManager_C_GetFurnitureByDistance_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_FurnitureCategories_E_FurnitureCategories> FurnitureCategory;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IgnoreOwnership;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               OnlyNonPlayerVillages;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     StartLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CheckOccupy;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ABP_MasterFurniture_C*                       FurnitureToIgnore;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ABP_MasterFurniture_C*                       Furniture;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DataManager.BP_DataManager_C.FindBuildingWithAvailableSpace
struct ABP_DataManager_C_FindBuildingWithAvailableSpace_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Buildings_E_Buildings>               BuildingCategory;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_BuildingStatus_E_BuildingStatus>     BuildingStatus;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FullyEmpty;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               NoFamilyInside;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Sex_E_Sex>                           Sex;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsAvailable;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ABP_MasterBuilding_C*                        Building;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DataManager.BP_DataManager_C.LoadSaveFileIntoSystem_Buildings
struct ABP_DataManager_C_LoadSaveFileIntoSystem_Buildings_Params
{
	class USAVE_Game_C*                                SaveReference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DataManager.BP_DataManager_C.UpdateSeasonalItems
struct ABP_DataManager_C_UpdateSeasonalItems_Params
{
};

// Function BP_DataManager.BP_DataManager_C.CheckForAnimal
struct ABP_DataManager_C_CheckForAnimal_Params
{
	class ABP_AnimalBase_C*                            Animal;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_DataManager.BP_DataManager_C.Init
struct ABP_DataManager_C_Init_Params
{
	bool                                               MainMenu;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_DataManager.BP_DataManager_C.GetSplineStructure
struct ABP_DataManager_C_GetSplineStructure_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class ABP_MasterSplineStructure_C*>         SplineStructures;                                          // (Parm, OutParm)
};

// Function BP_DataManager.BP_DataManager_C.SwapSplineStructure
struct ABP_DataManager_C_SwapSplineStructure_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               to;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterSplineStructure_C*                 SplineStructure;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DataManager.BP_DataManager_C.RemoveSplineStructure
struct ABP_DataManager_C_RemoveSplineStructure_Params
{
	class ABP_MasterSplineStructure_C*                 SplineStructure;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DataManager.BP_DataManager_C.AddSplineStructure
struct ABP_DataManager_C_AddSplineStructure_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterSplineStructure_C*                 SplineStructure;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DataManager.BP_DataManager_C.GetAnimals
struct ABP_DataManager_C_GetAnimals_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IgnoreCategory;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Animals_E_Animals>                   AnimalCategory;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class ABP_AnimalBase_C*>                    Animals;                                                   // (Parm, OutParm)
};

// Function BP_DataManager.BP_DataManager_C.SwapAnimal
struct ABP_DataManager_C_SwapAnimal_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               to;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AnimalBase_C*                            Animal;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DataManager.BP_DataManager_C.RemoveAnimal
struct ABP_DataManager_C_RemoveAnimal_Params
{
	class ABP_AnimalBase_C*                            Animal;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DataManager.BP_DataManager_C.AddAnimal
struct ABP_DataManager_C_AddAnimal_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AnimalBase_C*                            Animal;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DataManager.BP_DataManager_C.GetNPCByID
struct ABP_DataManager_C_GetNPCByID_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               IgnoreOwnership;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ABP_NPC_C*                                   NPCs;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DataManager.BP_DataManager_C.GetBuildingByID
struct ABP_DataManager_C_GetBuildingByID_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               IgnoreOwnership;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ABP_MasterBuilding_C*                        Building;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DataManager.BP_DataManager_C.GetNPCs
struct ABP_DataManager_C_GetNPCs_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class ABP_NPC_C*>                           NPCs;                                                      // (Parm, OutParm)
};

// Function BP_DataManager.BP_DataManager_C.SwapNPC
struct ABP_DataManager_C_SwapNPC_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               to;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_NPC_C*                                   NPC;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DataManager.BP_DataManager_C.RemoveNPC
struct ABP_DataManager_C_RemoveNPC_Params
{
	class ABP_NPC_C*                                   NPC;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DataManager.BP_DataManager_C.AddNPC
struct ABP_DataManager_C_AddNPC_Params
{
	class ABP_NPC_C*                                   NPC;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DataManager.BP_DataManager_C.FindField
struct ABP_DataManager_C_FindField_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OnlyCheck;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              CheckDistance;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IgnoreLocationType;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ABP_MasterField_C*                           Field;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_Chunks                                  Chunk;                                                     // (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function BP_DataManager.BP_DataManager_C.GetFields
struct ABP_DataManager_C_GetFields_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_FieldCategories_E_FieldCategories>   FieldCategory;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class ABP_MasterField_C*>                   Fields;                                                    // (Parm, OutParm)
};

// Function BP_DataManager.BP_DataManager_C.GetFurniture
struct ABP_DataManager_C_GetFurniture_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_FurnitureCategories_E_FurnitureCategories> FurnitureCategory;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class ABP_MasterFurniture_C*>               Furniture;                                                 // (Parm, OutParm)
};

// Function BP_DataManager.BP_DataManager_C.GetBuildings
struct ABP_DataManager_C_GetBuildings_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Buildings_E_Buildings>               BuildingCategory;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_BuildingStatus_E_BuildingStatus>     BuildingStatus;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class ABP_MasterBuilding_C*>                ListOfBuildings;                                           // (Parm, OutParm)
};

// Function BP_DataManager.BP_DataManager_C.SwapFurniture
struct ABP_DataManager_C_SwapFurniture_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               to;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterFurniture_C*                       Furniture;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DataManager.BP_DataManager_C.RemoveFurniture
struct ABP_DataManager_C_RemoveFurniture_Params
{
	class ABP_MasterFurniture_C*                       Furniture;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DataManager.BP_DataManager_C.AddFurniture
struct ABP_DataManager_C_AddFurniture_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterFurniture_C*                       Furniture;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DataManager.BP_DataManager_C.SortDependentFields
struct ABP_DataManager_C_SortDependentFields_Params
{
	class ABP_MasterBuilding_C*                        Building;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                      Distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_DataManager.BP_DataManager_C.UpdateBuildingsRelations
struct ABP_DataManager_C_UpdateBuildingsRelations_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DataManager.BP_DataManager_C.DamageFields
struct ABP_DataManager_C_DamageFields_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumberOfFieldsToDamage;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Intensity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_MasterField_C*>                   DamagedFields;                                             // (Parm, OutParm)
};

// Function BP_DataManager.BP_DataManager_C.SeasonalUpdateFields
struct ABP_DataManager_C_SeasonalUpdateFields_Params
{
};

// Function BP_DataManager.BP_DataManager_C.SwapField
struct ABP_DataManager_C_SwapField_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               to;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterField_C*                           NPC;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DataManager.BP_DataManager_C.RemoveField
struct ABP_DataManager_C_RemoveField_Params
{
	class ABP_MasterField_C*                           Field;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DataManager.BP_DataManager_C.AddField
struct ABP_DataManager_C_AddField_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterField_C*                           Field;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DataManager.BP_DataManager_C.DamageBuildings
struct ABP_DataManager_C_DamageBuildings_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumberOfBuildings;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DestructionIntensity;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_MasterBuilding_C*>                Buildings;                                                 // (Parm, OutParm)
};

// Function BP_DataManager.BP_DataManager_C.SwapBuilding
struct ABP_DataManager_C_SwapBuilding_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               to;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterBuilding_C*                        Building;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DataManager.BP_DataManager_C.RemoveBuilding
struct ABP_DataManager_C_RemoveBuilding_Params
{
	class ABP_MasterBuilding_C*                        Building;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DataManager.BP_DataManager_C.AddBuilding
struct ABP_DataManager_C_AddBuilding_Params
{
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MasterBuilding_C*                        Building;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DataManager.BP_DataManager_C.ClearHomeOccupied
struct ABP_DataManager_C_ClearHomeOccupied_Params
{
};

// Function BP_DataManager.BP_DataManager_C.ReceiveBeginPlay
struct ABP_DataManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_DataManager.BP_DataManager_C.ExecuteUbergraph_BP_DataManager
struct ABP_DataManager_C_ExecuteUbergraph_BP_DataManager_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DataManager.BP_DataManager_C.OnPlayerAnimalsChange__DelegateSignature
struct ABP_DataManager_C_OnPlayerAnimalsChange__DelegateSignature_Params
{
};

// Function BP_DataManager.BP_DataManager_C.OnPlayerBuildingsChange__DelegateSignature
struct ABP_DataManager_C_OnPlayerBuildingsChange__DelegateSignature_Params
{
};

// Function BP_DataManager.BP_DataManager_C.OnPlayerPopulationChange__DelegateSignature
struct ABP_DataManager_C_OnPlayerPopulationChange__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
