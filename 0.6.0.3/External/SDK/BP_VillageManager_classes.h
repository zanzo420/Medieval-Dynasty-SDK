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

// BlueprintGeneratedClass BP_VillageManager.BP_VillageManager_C
// 0x0270 (FullSize[0x0490] - InheritedSize[0x0220])
class ABP_VillageManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UInventoryComponent_C*                       ResourceStorageInventory;                                  // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UInventoryComponent_C*                       FoodStorageInventory;                                      // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              TotalNumberOfFood;                                         // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AFBH[0x4];                                     // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               WoodItemsInOrder;                                          // 0x0248(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              TotalNumberOfWood;                                         // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Population;                                                // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnGlobalParametersChange;                                  // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              TotalFoodToConsume;                                        // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TotalWoodToConsume;                                        // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SystemsManager_C*                        SystemsManagerReference;                                   // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int                                                DynastyReputation;                                         // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TechnologyLevel_Building;                                  // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TechnologyLevel_Survival;                                  // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TechnologyLevel_Farming;                                   // 0x028C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TechnologyLevel_Crafting;                                  // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8LH1[0x4];                                     // 0x0294(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_BuildingsStructure_ForVillageManager> Technology_ListOfBuildingsPerTechnology;                   // 0x0298(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnTechnologyChange;                                        // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FST_DevelopmentStage                        CurrentVillageStage;                                       // 0x02B8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int                                                CurrentTax;                                                // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DebtTax;                                                   // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_DevelopmentStage                        UnlockedVillageStage;                                      // 0x02E0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int                                                NumberOfBuildings;                                         // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NMHF[0x4];                                     // 0x0304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FName, struct FST_Item_Crafting_ItemRecipes> Technology_CraftingRecipes_Locked;                         // 0x0308(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FName, struct FST_Furniture>           Technology_Furnitures_Locked;                              // 0x0358(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FName, struct FST_SplineStructure>     Technology_Fences_Locked;                                  // 0x03A8(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<TEnumAsByte<E_FurnitureType_E_FurnitureType>, int> NumberOfTraps;                                             // 0x03F8(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                BaseTrapLimit;                                             // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DynastyReputationLimit;                                    // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DebtTime;                                                  // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NoFood_People;                                             // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NoWood_People;                                             // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NoHome_People;                                             // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_Trade_Progress>                  TradeData_FoodStorage;                                     // 0x0460(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_Trade_Progress>                  TradeData_ResourceStorage;                                 // 0x0470(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               FoodStorage_HasWorkers;                                    // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ResourceStorage_HasWorkers;                                // 0x0481(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               WorkingTime;                                               // 0x0482(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DSV1[0x1];                                     // 0x0483(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NoFood_Animals;                                            // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NoHome_Animals;                                            // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Talent_ProductionModificator;                              // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_VillageManager.BP_VillageManager_C");
		return ptr;
	}



	void LoadSaveFileIntoSystem_OnFinish(class USAVE_Game_C* SaveReference);
	void UpdateSeasonalBuildings();
	void UpdateSeasonalAnimals();
	void UpdateSeasonalNPCs();
	void UpdateEconomy(int Selection);
	void UpdateAnimalFeeding(TArray<class ABP_MasterBuilding_C*>* Buildings, bool ForceUpdateForUI, bool OnlyOneProductionSlot, int StotID);
	void UpdateBuildingsTrading(TArray<class ABP_MasterBuilding_C*>* Buildings, bool ForceUpdateForUI, bool OnlyOneTradingSlot, int SlotID);
	void UpdateBuildingsProduction(TArray<class ABP_MasterBuilding_C*>* Buildings, bool ForceUpdateForUI, bool OnlyOneProductionSlot, int StotID);
	void SetWorkingTime();
	void UpdateStorage();
	void UpdateAnimalsNeeds();
	void UpdatePeoplesNeeds();
	void UpdateSeasonalFurnitures();
	void CheckBuildingLimit(TEnumAsByte<E_FurnitureType_E_FurnitureType> TrapType, bool* LimitExceeded, int* Current, int* Limit);
	void CheckTrapLimit(TEnumAsByte<E_FurnitureType_E_FurnitureType> TrapType, bool* LimitExceeded, int* Current, int* Limit);
	void UpdateNumberOfTraps();
	void IncreaseTax(int Value);
	void CheckTaxesOnSeasonChange();
	void UpdatePopulation();
	void UpdateNumberOfBuildings();
	void UpdateCurrentDevelopmentStage();
	void SetUnlockedDevelopmentStage(TEnumAsByte<E_DevelopmentStages_E_DevelopmentStages> NewDevelopmentStage);
	void GetTechnologies(float* TechnologyLevel_Building, float* TechnologyLevel_Survival, float* TechnologyLevel_Farming, float* TechnologyLevel_Crafting);
	void SaveDataFromSystemToFile(class USAVE_Game_C* SaveReference);
	void LoadSaveFileIntoSystem(class USAVE_Game_C* SaveReference);
	void GetTechnology(TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes> TechnologyType, float* TechnologyPoints);
	void UpdateFoodInventoryLimit();
	void UpdateResourceInventoryLimit();
	void CreateFencesTechnologyLockedArray();
	void CreateCraftingRecipesTechnologyLockedArray();
	void CreateFurnituresTechnologyLockedArray();
	void CreateBuildingsTechnologyArray();
	void Reset_Life_Stats_Multipliers();
	void CheckIfTechnologyLevelIsSufficient(TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes> TechnologyType, int ValueToCheck, bool* IsSufficient_);
	void IncreaseTechnology(TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes> TechnologyType, float Value);
	void DecreaseDynastyReputation(int Value);
	void IncreaseDynastyReputation(int Value);
	void ReceiveBeginPlay();
	void Init(bool MainMenu);
	void UpdateVillageOnSeasonChange();
	void StartVillageManager(bool MainMenu);
	void UpdateOnPopulationChange();
	void UpdateOnBuildingsChange();
	void UpdateOnTime(int IteratorNumber);
	void ExecuteUbergraph_BP_VillageManager(int EntryPoint);
	void OnTechnologyChange__DelegateSignature();
	void OnGlobalParametersChange__DelegateSignature();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
