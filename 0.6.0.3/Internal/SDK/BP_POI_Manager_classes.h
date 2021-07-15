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

// BlueprintGeneratedClass BP_POI_Manager.BP_POI_Manager_C
// 0x0181 (FullSize[0x03A1] - InheritedSize[0x0220])
class ABP_POI_Manager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               Preview;                                                   // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YUS5[0x7];                                     // 0x0231(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_SystemsManager_C*                        SystemsManagerReference;                                   // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_POI_Spawner_C*>                   POI_Spawners;                                              // 0x0240(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate)
	TMap<TEnumAsByte<E_POI_Type_E_POI_Type>, struct FST_DrawingSpawnersArray> DrawRestrictions;                                          // 0x0250(0x0050) (Edit, BlueprintVisible)
	int                                                MaxNumberOfActiveSpawners;                                 // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxTries;                                                  // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class ABP_POI_Spawner_C*, TEnumAsByte<E_POI_Type_E_POI_Type>> SpawnersCategorized;                                       // 0x02A8(0x0050) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<int>                                        Separator;                                                 // 0x02F8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_SAVE_POI>                        TestSave;                                                  // 0x0308(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<TEnumAsByte<E_POI_Type_E_POI_Type>, struct FST_SpawnersArray> CategorizedSpawners;                                       // 0x0318(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class ABP_POI_Spawner_C*>                   ActiveSpawners;                                            // 0x0368(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_POI_Spawner_C*>                   ActiveSpawnersHistory;                                     // 0x0378(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                LengthOfDeactivation;                                      // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_C9AU[0x4];                                     // 0x038C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_SAVE_POI_History>                TestSaveOnlyActive;                                        // 0x0390(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               RestartPOI;                                                // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_POI_Manager.BP_POI_Manager_C");
		return ptr;
	}



	void CheckPOI_ID();
	void POI_CheckAvailability();
	void POI_DisablePreviewAll();
	void POI_EnablePreviewAll();
	void UpdatePOI_Array();
	void DespawnAll();
	void Despawn(class ABP_POI_Spawner_C* Spawner, bool* Despawned);
	void SpawnCategory(TArray<TEnumAsByte<E_POI_Type_E_POI_Type>>* SpawnerCategory, TArray<class ABP_POI_Spawner_C*>* L_Spawners, TMap<TEnumAsByte<E_POI_Type_E_POI_Type>, int> DrawMap, int RestrictionNumber);
	void InitCategory(TArray<class ABP_POI_Spawner_C*>* Spawners, TArray<TEnumAsByte<E_POI_Type_E_POI_Type>>* Type, int TypeIndex);
	void Init(bool MainMenu);
	void CheckRestrictions(TArray<struct FST_DrawingSpawners>* Restrictions, TEnumAsByte<E_POI_Type_E_POI_Type> SpawnerType, TEnumAsByte<E_POI_Type_E_POI_Type> Type, int* NumberOfSpawners);
	void SpawnCategoryRestricted();
	void SpawnRandom();
	void LoadSpawners(class USAVE_Game_C* SaveReference);
	void SaveSpawners(class USAVE_Game_C* SaveGame);
	void SpawnAllActiveSpawners();
	void StartPOISystem(bool LoadGame, bool MainMenu);
	void ExecuteUbergraph_BP_POI_Manager(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
