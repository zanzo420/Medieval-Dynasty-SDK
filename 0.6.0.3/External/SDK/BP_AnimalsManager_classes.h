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

// BlueprintGeneratedClass BP_AnimalsManager.BP_AnimalsManager_C
// 0x00D8 (FullSize[0x02F8] - InheritedSize[0x0220])
class ABP_AnimalsManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ABP_SystemsManager_C*                        SystemsManagerReference;                                   // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class ABP_AnimalBase_C*>                    WildAnimals;                                               // 0x0238(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FTimerHandle                                TimerCheckAnimals;                                         // 0x0248(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              CheckAnimalsUpdateDelay;                                   // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WJGR[0x4];                                     // 0x0254(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CheckAnimalsFunctionName;                                  // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class ABP_SpawnPointWildAnimal_C*>          SpawnPointsWildAnimal;                                     // 0x0268(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate)
	class APawn*                                       PlayerPawnReference;                                       // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistanceOfBrainActivity;                                   // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BI2Z[0x4];                                     // 0x0284(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<TEnumAsByte<E_Animals_E_Animals>, int>        HusbandryAnimalsRemovedByEvent;                            // 0x0288(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ShowDebugInfo;                                             // 0x02D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               AllowSpawnAnimals;                                         // 0x02D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0XV3[0x2];                                     // 0x02DA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AnimalsDamageMultiplier;                                   // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AnimalsHPMultiplier;                                       // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YI66[0x4];                                     // 0x02E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ABP_Flock_Fish_C*>                    SpawnPointsFishes;                                         // 0x02E8(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimalsManager.BP_AnimalsManager_C");
		return ptr;
	}



	void SeasonalUpdateSpawners();
	void CheckAvailability();
	void UpdateSpawners();
	void CheckSpawnersID();
	void UpdateListOfSpawners();
	void SpawnGroundAnimalsInSpawnerFromSave(class ABP_SpawnPointWildAnimal_C* Spawner);
	void GetAnimalDataByName(const struct FName& AnimalName, bool* Success, struct FST_Animal* AnimalData);
	void RemoveNeighborhoodRedundantAnimals(class ABP_MasterBuilding_C* Building, const struct FName& Name, int Count);
	void SpawnAnimalsToNeighborhoodBuildings();
	void SpawnAnimalsToNeighborhoodBuilding(TEnumAsByte<E_Ownership_E_Ownership> Ownership, const struct FString& ID, TEnumAsByte<E_Animals_E_Animals> Species, const struct FName& YoungFemale, int YoungFemaleCount, const struct FName& YoungMale, int YoungMaleCount, const struct FName& Female, int FemaleCount, const struct FName& Male, int MaleCount);
	void FindClosestFishesPoints(const struct FVector& Location, float Radius, TArray<class ABP_Flock_Fish_C*>* FishesPoints);
	void FindClosestWildAnimalsPoints(const struct FVector& Location, float Radius, TArray<class ABP_SpawnPointWildAnimal_C*>* WildAnimalsPoints);
	void SpawnFishInSpawner(class ABP_Flock_Fish_C* Spawner);
	void SetNumberOfFishesInSpawners();
	void SetNumberOfFishesInSpawner(class ABP_Flock_Fish_C* SpawnPoint);
	void SaveDataFromSystemToFile(class USAVE_Game_C* SaveReference);
	void LoadSaveFileIntoSystem(class USAVE_Game_C* SaveReference);
	void TeleportToLocation(class ABP_AnimalBase_C* Animal, const struct FVector& Location);
	void TeleportToHomeLocation(class ABP_AnimalBase_C* Animal);
	void TeleportToHome();
	void SpawnGroundAnimalsInSpawner(class ABP_SpawnPointWildAnimal_C* Spawner);
	void RemoveRandomCountOfHusbandryAnimalsOnEvent(int MinNumberOfAnimals, int MaxNumberOfAnimals);
	void RefreshWildAnimalsArray();
	void SpawnHusbandryAnimal(const struct FName& Name, TEnumAsByte<E_Ownership_E_Ownership> Ownership, bool Home, const struct FTransform& SpawnTransform, class ABP_MasterBuilding_C* Home2, bool RandomAge, bool RandomVariation, int Variation, bool* Success, class ABP_AnimalBase_C** Actor);
	void SpawnHusbandryAnimals(const struct FName& Name, int Count, TEnumAsByte<E_Ownership_E_Ownership> Ownership, bool Home, const struct FTransform& SpawnTransform, class ABP_MasterBuilding_C* Home2, bool RandomAge, bool RandomVariation, int Variation);
	void SetPlayerPawnReference();
	void SetNumberOfAnimalsInSpawners();
	void SetNumberOfAnimalsInSpawner(class ABP_SpawnPointWildAnimal_C* SpawnPoint);
	void Init(bool MainMenu);
	void StartAnimalsManager(bool LoadGame, bool MainMenu);
	void StopCheckAnimals();
	void CheckAnimals();
	void ReceiveBeginPlay();
	void UpdateOnSeasonChanged();
	void ExecuteUbergraph_BP_AnimalsManager(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
