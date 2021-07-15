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

// BlueprintGeneratedClass BP_NPCManager.BP_NPCManager_C
// 0x0128 (FullSize[0x0348] - InheritedSize[0x0220])
class ABP_NPCManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<struct FName>                               AvailableMaleNames;                                        // 0x0230(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FName>                               AvailableFemaleNames;                                      // 0x0240(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_SystemsManager_C*                        SystemsManagerReference;                                   // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<struct FText>                               NewNPCs;                                                   // 0x0258(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FText>                               NPCsThatLeft;                                              // 0x0268(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FString>                             NPCs_ID;                                                   // 0x0278(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_NPCsPresets>                     AvailableMalePresets;                                      // 0x0288(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	TArray<struct FST_NPCsPresets>                     AvailableFemalePresets;                                    // 0x0298(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	TArray<struct FST_NPCsPresets>                     AvailableBoyPresets;                                       // 0x02A8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	TArray<struct FST_NPCsPresets>                     AvailableGirlPresets;                                      // 0x02B8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	TArray<struct FST_NPCsPresets>                     AvailableToddlerPresets;                                   // 0x02C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	TMap<struct FString, class ABP_NPC_C*>             DeadNPCs;                                                  // 0x02D8(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FDataTableRowHandle>                 NewNeighboursDTHandler;                                    // 0x0328(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class ABP_MasterBuilding_C*>                NeighboursHouses;                                          // 0x0338(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_NPCManager.BP_NPCManager_C");
		return ptr;
	}



	void SetNeighoursRelations();
	void NPCsDeath();
	void UpdateNPCsOnSeasonChanged();
	void NeighboursDeath(class ABP_NPC_C* NPC_Reference);
	void SpawnGiftVendor(const struct FTransform& TransformLocation, const struct FDataTableRowHandle& VendorCategory, class ABP_NPC_C** NPC);
	void SpawnNPC_FromSpawner(const struct FST_SimpleNPC& NPC_Parameters, class ABP_NPC_C** NPC);
	void VerifyNPCHeadAndHair(class ABP_NPC_C* NPCReference);
	void UpdateVendors();
	void SortByWealth(TArray<struct FST_NPCsPresets>* ArrayToSort, TEnumAsByte<E_Wealth_E_Wealth> Wealth, TArray<struct FST_NPCsPresets>* SortedArray);
	void GetPresetByProfessionSeasonAndWealth(class ABP_NPC_C* NPCReference, TEnumAsByte<E_Profession_E_Profession> Profession, TEnumAsByte<E_Seasons_E_Seasons> Season, TEnumAsByte<E_Wealth_E_Wealth> Wealth, TEnumAsByte<E_Profession_E_Profession>* ProfessionOut, TEnumAsByte<E_Seasons_E_Seasons>* SeasonOut, TEnumAsByte<E_Wealth_E_Wealth>* WealthOut, struct FName* PresetID);
	void DestroyHerald(const struct FString& NPC_ID);
	void SpawnHerald(class ABP_NPC_C** NPC);
	void SetNPC_NightPatrol();
	void CheckIsNeighbours();
	void VerifyAvailablePresets(class UDataTable* DataTable, TArray<struct FST_NPCsPresets>* ArrayToVerify);
	void GetPresetByProfessionAndSeason(class ABP_NPC_C* NPCReference, TEnumAsByte<E_Profession_E_Profession> Profession, TEnumAsByte<E_Seasons_E_Seasons> Season, TEnumAsByte<E_Profession_E_Profession>* ProfessionOut, TEnumAsByte<E_Seasons_E_Seasons>* SeasonOut, struct FName* PresetID);
	void VerifyNPCPresets(class ABP_NPC_C* NPCReference, bool* Success);
	void SelectHeadAndHair(class ABP_NPC_C* NPCReference);
	class UDataTable* GetPresetDataTableForNPC(class ABP_BaseCharacter_C* NPCReference);
	void SortBySeason(TArray<struct FST_NPCsPresets>* ArrayToSort, TEnumAsByte<E_Seasons_E_Seasons> Season, TArray<struct FST_NPCsPresets>* SortedArray);
	void SortByProfession(TArray<struct FST_NPCsPresets>* ArrayToSort, TEnumAsByte<E_Profession_E_Profession> Profession, TArray<struct FST_NPCsPresets>* SortedArray);
	void GetNPCPresets(class UDataTable* DataTable, TArray<struct FST_NPCsPresets>* Presets);
	void GetPresetsForProfession(class ABP_NPC_C* NPCReference, TEnumAsByte<E_Profession_E_Profession> Profession, TEnumAsByte<E_Profession_E_Profession>* ProfessionOut, struct FST_NPCSeasonClothing* PresetsForProfession);
	void LoadPresetTables(TArray<struct FST_NPCsPresets>* AvailableMalePresets, TArray<struct FST_NPCsPresets>* AvailableFemalePresets, TArray<struct FST_NPCsPresets>* AvailableBoyPresets, TArray<struct FST_NPCsPresets>* AvailableGirlPresets, TArray<struct FST_NPCsPresets>* AvailableToddlerPresets);
	void SelectPresetsForNPC(class ABP_NPC_C* NPC_Reference, bool* Success);
	void InitializePresetTables();
	void NakedNPCPrevention(const struct FST_NPCMeshesGen& NPCMeshes, class ABP_NPC_C* NPCReference, TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, int>* BodyParts);
	void GetMeshesByIndexesFromNPCMeshesGen(const struct FST_NPCMeshesGen& NPCMeshes, TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, int> BodyPartsIndexes, TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, class USkeletalMesh*>* BodyPartsMeshes);
	void GetRandomIndexesFromNPCMeshesGen(const struct FST_NPCMeshesGen& NPCMeshes, TArray<struct FST_ArrayOfArraysInt>* SortedIndexes, TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, int>* BodyPartsIndexes);
	void MeshGenSorter(TArray<struct FST_NPCsGenMeshSettings>* ArrayToSort, TEnumAsByte<E_Profession_E_Profession> Profession, TEnumAsByte<E_Seasons_E_Seasons> Season, TArray<struct FST_NPCsGenMeshSettings>* SortedArray, TArray<int>* SortedIndexes);
	void SortMeshes(const struct FST_NPCMeshesGen& NPCMeshes, TEnumAsByte<E_Profession_E_Profession> Profession, TEnumAsByte<E_Seasons_E_Seasons> Season, struct FST_NPCMeshesGen* SortedNPCMeshes, TArray<struct FST_ArrayOfArraysInt>* SortedIndexes);
	void SelectMeshesForNPCGen(const struct FST_NPCMeshesGen& NPCMeshes, class ABP_NPC_C* NPC_Reference, bool KeepHead, TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, class USkeletalMesh*>* BodyPartsMeshes);
	void Spawn_Child(TEnumAsByte<E_Ownership_E_Ownership> Ownership, const struct FTransform& TransformLocation, const struct FString& MotherID, bool MustBeMale, bool Birth, bool* Succes);
	void LoadCharacterMeshes(TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, int> BodyPartsIndexes, class ABP_NPC_C* NPCReference, bool* Success);
	void SelectMeshesForNPC(const struct FST_NPCMeshes& NPCMeshes, class ABP_NPC_C* NPC_Reference, TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, class USkeletalMesh*>* BodyPartsMeshes);
	void GetMeshesByIndexesFromNPCMeshes(const struct FST_NPCMeshes& NPCMeshes, TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, int> BodyPartsIndexes, TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, class USkeletalMesh*>* BodyPartsMeshes);
	void GetRandomIndexesFromNPCMeshes(const struct FST_NPCMeshes& NPCMeshes, TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, int>* BodyPartsIndexes);
	void SetCustomCharacterMeshes(class UClass* AnimClass, TEnumAsByte<E_CharacterType_E_CharacterType> CharacterType, class ABP_NPC_C* NPC_Reference);
	void RandomizeCharacterMeshes(class UClass* AnimClass, TEnumAsByte<E_CharacterType_E_CharacterType> CharacterType, class ABP_NPC_C* NPC_Reference, bool KeepHead, bool* Success);
	void SaveDataFromSystemToFile(class USAVE_Game_C* SaveReference);
	void LoadSaveFileIntoSystem(class USAVE_Game_C* SaveReference);
	void ResetItemsInNeighborhoodBuildings();
	void AddItemsToNeighborhoodBuildings();
	void StartNPCManager(bool LoadGame, bool MainMenu);
	void SpawnRandomNPC();
	void SpawnNewNeighbours();
	void SpawnNeighbours();
	void ResetIllness(class ABP_BaseCharacter_C* BaseCharacter);
	void Init(bool MainMenu);
	void TeleportToHouse(bool PlayerIncluded);
	void SetNPCRelations(const struct FST_CustomNPC& NPC_Structure, class ABP_NPC_C* NPCReference, const struct FString& NPC_ID, TEnumAsByte<E_CharacterType_E_CharacterType> CharacterType);
	void CheckNPC_ID(const struct FString& NPC_ID, struct FString* New_NPC_ID);
	void Remove_NPC(class ABP_BaseCharacter_C* NPC, bool* Success);
	void SpawnNPC(const struct FString& ID, const struct FST_CustomNPC& NPC_Structure, bool IsCustomNPC, bool IsNewNeighbour, bool LoadGame, bool Birth, bool* Success, class ABP_NPC_C** NPC);
	void AddNameToAvailableNamesArray(const struct FString& NPC_ID, TEnumAsByte<E_Sex_E_Sex> Sex);
	void InitAvailableNames();
	void RandomSex(TEnumAsByte<E_Sex_E_Sex>* Sex);
	void RandomName(TEnumAsByte<E_Sex_E_Sex> Sex, struct FDataTableRowHandle* NameHandle);
	void ReceiveBeginPlay();
	void OnSeasonChanged();
	void OnDaySkip();
	void OnTimeOfDayChanged(TEnumAsByte<E_TimeOfDay_E_TimeOfDay> TimeOfDay);
	void ExecuteUbergraph_BP_NPCManager(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
