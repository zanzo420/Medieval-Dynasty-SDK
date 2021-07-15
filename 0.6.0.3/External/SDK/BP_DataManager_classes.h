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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DataManager.BP_DataManager_C
// 0x00E0 (FullSize[0x0300] - InheritedSize[0x0220])
class ABP_DataManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<struct FST_BuildingList>                    ListOfBuildings;                                           // 0x0230(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_SystemsManager_C*                        SystemsManagerReference;                                   // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               ShowLogs;                                                  // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RDE9[0x7];                                     // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_FurnitureList>                   ListOfFurniture;                                           // 0x0250(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_FieldList>                       ListOfFields;                                              // 0x0260(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_CharacterList>                   ListOfNPC;                                                 // 0x0270(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_AnimalList>                      ListOfAnimal;                                              // 0x0280(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_SplineStructureList>             ListOfSplineStructures;                                    // 0x0290(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnPlayerPopulationChange;                                  // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnPlayerBuildingsChange;                                   // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnPlayerAnimalsChange;                                     // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FGuid>                               ChangedItems;                                              // 0x02D0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_RoadList>                        ListOfRoads;                                               // 0x02E0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class ABP_BuildingRestrictionArea_C*>       RestrictionAreas;                                          // 0x02F0(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DataManager.BP_DataManager_C");
		return ptr;
	}



	void FindDuplicates_StaticMesh();
	void FindDuplicates_Item();
	void FindDuplicates_Furniture();
	void FindDuplicates_Field();
	void FindDuplicates_Building();
	void FindDuplicates_SplineStructure();
	void GetRandomOwnerlessNPCsCount(TMap<TEnumAsByte<E_Ownership_E_Ownership>, int>* OwnershipCount);
	void UpdateRestrictionAreas();
	void CheckItemsID();
	void VendorCategorySettings(const struct FString& ID, const struct FName& VendorCategoryName, bool IsVendor, TEnumAsByte<E_Profession_E_Profession> Profession, TEnumAsByte<E_Ownership_E_Ownership> Ownership, TEnumAsByte<E_OutsideNPCTypes_E_OutsideNPCTypes> OutsideNPCType, const struct FDataTableRowHandle& NPC_RowName, const struct FDataTableRowHandle& NPC_DT_Handler, bool* CorrectVendor, struct FDataTableRowHandle* VendorCategory, bool* ResetEQ, TEnumAsByte<E_Profession_E_Profession>* CorrectProfession);
	void RefreshRoads(const struct FVector& Location, float CheckDistance, TEnumAsByte<E_Ownership_E_Ownership> Ownership, bool IgnoreLocationType);
	void RemoveRoad(class ABP_MasterRoadSpline_C* Road);
	void AddRoad(TEnumAsByte<E_Ownership_E_Ownership> Ownership, class ABP_MasterRoadSpline_C* Road);
	void SaveDataFromSystemToFile(class USAVE_Game_C* SaveReference);
	void LoadSaveFileIntoSystem_Others(class USAVE_Game_C* SaveReference);
	void LoadSaveFileIntoSystem_Animals(class USAVE_Game_C* SaveReference);
	void LoadSaveFileIntoSystem_NPC(class USAVE_Game_C* SaveReference);
	void LoadSaveFileIntoSystem_Furniture(class USAVE_Game_C* SaveReference);
	void LoadSaveFileIntoSystem_Roads(class USAVE_Game_C* SaveReference);
	void LoadSaveFileIntoSystem_SplineStructure(class USAVE_Game_C* SaveReference);
	void LoadSaveFileIntoSystem_Fields(class USAVE_Game_C* SaveReference);
	void LoadSaveFileIntoSystem_NPCBuildings(class USAVE_Game_C* SaveReference);
	void CheckHeirsAreMale();
	void FixPlayerFamily();
	void CheckPlayerFamiliesHouse();
	void ChangeItem(const struct FGuid& Guid);
	void GetRandomFurniture(TEnumAsByte<E_Ownership_E_Ownership> Ownership, TEnumAsByte<E_FurnitureCategories_E_FurnitureCategories> FurnitureCategory, bool IgnoreOwnership, bool CheckOccupy, const struct FVector& StartLocation, float Range, class ABP_MasterFurniture_C* FurnitureToIgnore, bool* Success, class ABP_MasterFurniture_C** Furniture);
	void GetFurnitureByDistance(TEnumAsByte<E_Ownership_E_Ownership> Ownership, TEnumAsByte<E_FurnitureCategories_E_FurnitureCategories> FurnitureCategory, bool IgnoreOwnership, bool OnlyNonPlayerVillages, const struct FVector& StartLocation, bool CheckOccupy, class ABP_MasterFurniture_C* FurnitureToIgnore, bool* Success, class ABP_MasterFurniture_C** Furniture);
	void FindBuildingWithAvailableSpace(TEnumAsByte<E_Ownership_E_Ownership> Ownership, TEnumAsByte<E_Buildings_E_Buildings> BuildingCategory, TEnumAsByte<E_BuildingStatus_E_BuildingStatus> BuildingStatus, bool FullyEmpty, bool NoFamilyInside, TEnumAsByte<E_Sex_E_Sex> Sex, bool* IsAvailable, class ABP_MasterBuilding_C** Building);
	void LoadSaveFileIntoSystem_Buildings(class USAVE_Game_C* SaveReference);
	void UpdateSeasonalItems();
	void CheckForAnimal(class ABP_AnimalBase_C* Animal, bool* Success);
	void Init(bool MainMenu);
	void GetSplineStructure(TEnumAsByte<E_Ownership_E_Ownership> Ownership, bool* Success, TArray<class ABP_MasterSplineStructure_C*>* SplineStructures);
	void SwapSplineStructure(TEnumAsByte<E_Ownership_E_Ownership> to, class ABP_MasterSplineStructure_C* SplineStructure);
	void RemoveSplineStructure(class ABP_MasterSplineStructure_C* SplineStructure);
	void AddSplineStructure(TEnumAsByte<E_Ownership_E_Ownership> Ownership, class ABP_MasterSplineStructure_C* SplineStructure);
	void GetAnimals(TEnumAsByte<E_Ownership_E_Ownership> Ownership, bool IgnoreCategory, TEnumAsByte<E_Animals_E_Animals> AnimalCategory, bool* Success, TArray<class ABP_AnimalBase_C*>* Animals);
	void SwapAnimal(TEnumAsByte<E_Ownership_E_Ownership> to, class ABP_AnimalBase_C* Animal);
	void RemoveAnimal(class ABP_AnimalBase_C* Animal);
	void AddAnimal(TEnumAsByte<E_Ownership_E_Ownership> Ownership, class ABP_AnimalBase_C* Animal);
	void GetNPCByID(TEnumAsByte<E_Ownership_E_Ownership> Ownership, const struct FString& ID, bool IgnoreOwnership, bool* Success, class ABP_NPC_C** NPCs);
	void GetBuildingByID(TEnumAsByte<E_Ownership_E_Ownership> Ownership, const struct FString& ID, bool IgnoreOwnership, bool* Success, class ABP_MasterBuilding_C** Building);
	void GetNPCs(TEnumAsByte<E_Ownership_E_Ownership> Ownership, bool* Success, TArray<class ABP_NPC_C*>* NPCs);
	void SwapNPC(TEnumAsByte<E_Ownership_E_Ownership> to, class ABP_NPC_C* NPC);
	void RemoveNPC(class ABP_NPC_C* NPC);
	void AddNPC(class ABP_NPC_C* NPC);
	void FindField(const struct FVector& Location, bool OnlyCheck, float CheckDistance, TEnumAsByte<E_Ownership_E_Ownership> Ownership, bool IgnoreLocationType, bool* Success, class ABP_MasterField_C** Field, struct FST_Chunks* Chunk);
	void GetFields(TEnumAsByte<E_Ownership_E_Ownership> Ownership, TEnumAsByte<E_FieldCategories_E_FieldCategories> FieldCategory, bool* Success, TArray<class ABP_MasterField_C*>* Fields);
	void GetFurniture(TEnumAsByte<E_Ownership_E_Ownership> Ownership, TEnumAsByte<E_FurnitureCategories_E_FurnitureCategories> FurnitureCategory, bool* Success, TArray<class ABP_MasterFurniture_C*>* Furniture);
	void GetBuildings(TEnumAsByte<E_Ownership_E_Ownership> Ownership, TEnumAsByte<E_Buildings_E_Buildings> BuildingCategory, TEnumAsByte<E_BuildingStatus_E_BuildingStatus> BuildingStatus, bool* Success, TArray<class ABP_MasterBuilding_C*>* ListOfBuildings);
	void SwapFurniture(TEnumAsByte<E_Ownership_E_Ownership> to, class ABP_MasterFurniture_C* Furniture);
	void RemoveFurniture(class ABP_MasterFurniture_C* Furniture);
	void AddFurniture(TEnumAsByte<E_Ownership_E_Ownership> Ownership, class ABP_MasterFurniture_C* Furniture);
	void SortDependentFields(class ABP_MasterBuilding_C* Building, TArray<float>* Distance);
	void UpdateBuildingsRelations(TEnumAsByte<E_Ownership_E_Ownership> Ownership);
	void DamageFields(TEnumAsByte<E_Ownership_E_Ownership> Ownership, int NumberOfFieldsToDamage, float Intensity, TArray<class ABP_MasterField_C*>* DamagedFields);
	void SeasonalUpdateFields();
	void SwapField(TEnumAsByte<E_Ownership_E_Ownership> to, class ABP_MasterField_C* NPC);
	void RemoveField(class ABP_MasterField_C* Field);
	void AddField(TEnumAsByte<E_Ownership_E_Ownership> Ownership, class ABP_MasterField_C* Field);
	void DamageBuildings(TEnumAsByte<E_Ownership_E_Ownership> Ownership, int NumberOfBuildings, float DestructionIntensity, TArray<class ABP_MasterBuilding_C*>* Buildings);
	void SwapBuilding(TEnumAsByte<E_Ownership_E_Ownership> to, class ABP_MasterBuilding_C* Building);
	void RemoveBuilding(class ABP_MasterBuilding_C* Building);
	void AddBuilding(TEnumAsByte<E_Ownership_E_Ownership> Ownership, class ABP_MasterBuilding_C* Building);
	void ClearHomeOccupied();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_DataManager(int EntryPoint);
	void OnPlayerAnimalsChange__DelegateSignature();
	void OnPlayerBuildingsChange__DelegateSignature();
	void OnPlayerPopulationChange__DelegateSignature();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
