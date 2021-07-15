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

// BlueprintGeneratedClass SAVE_Game.SAVE_Game_C
// 0x0608 (FullSize[0x0630] - InheritedSize[0x0028])
class USAVE_Game_C : public USaveGame
{
public:
	struct FST_Time                                    Time;                                                      // 0x0028(0x0018) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<struct FString, struct FST_SAVE_FoliageArray> LandscapeResources;                                        // 0x0040(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FST_SAVE_FoliageData>                FoliageData;                                               // 0x0090(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FST_FoliageData>                     LandscapeFoliageData;                                      // 0x00A0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int                                                WeatherVariation;                                          // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoonPhase;                                                 // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_FoliageDepletedData>             LandscapeFoliageDepletedData;                              // 0x00B8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FST_PlantCondition>                  LandscapeFoliageQueue;                                     // 0x00C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FST_SAVE_Player                             PlayerData;                                                // 0x00D8(0x01E8) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FST_SAVE_Technology                         TechnologyPoints;                                          // 0x02C0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FST_SAVE_SpawnedFoliage>             SpawnedFoliageData;                                        // 0x02E0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_SAVE_Items>                      Items;                                                     // 0x02F0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDateTime                                   SaveTime;                                                  // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Version;                                                   // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FST_SAVE_SpawnedItemFoliage>         SpawnedFoliageItemData;                                    // 0x0318(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_SAVE_ResourceDeposits>           ResourceDepositData;                                       // 0x0328(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_SAVE_Items>                      DroppedItems;                                              // 0x0338(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGuid>                               StartItems;                                                // 0x0348(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_SAVE_Buildings>                  Buildings;                                                 // 0x0358(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_SAVE_NPC_Building>               NPCBuildings;                                              // 0x0368(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FST_SAVE_SplineStructures>           SplineStructures;                                          // 0x0378(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_SAVE_Roads>                      Roads;                                                     // 0x0388(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_SAVE_Fields>                     Fields;                                                    // 0x0398(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       MainQuestID;                                               // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_SAVE_NPC>                        NPCs;                                                      // 0x03B0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FST_SAVE_HusbandryAnimals>           Animals;                                                   // 0x03C0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_SAVE_Furnitures>                 Furnitures;                                                // 0x03D0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_SAVE_Traps>                      Traps;                                                     // 0x03E0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_SAVE_Containers>                 Containers;                                                // 0x03F0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_SAVE_Campfires>                  Campfires;                                                 // 0x0400(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_SAVE_RefillableContainers>       RefillableContainers;                                      // 0x0410(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FST_BookTutorialShown                       Tutorial;                                                  // 0x0420(0x0007) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_16QY[0x1];                                     // 0x0427(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_SAVE_ActivityFurnitures>         ActivityFurnitures;                                        // 0x0428(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                DynastyReputation;                                         // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NC9T[0x4];                                     // 0x043C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_SAVE_SimpleInventory>            ResourceStorage;                                           // 0x0440(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_SAVE_SimpleInventory>            FoodStorage;                                               // 0x0450(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_QuestInfo_Save>                  SavedQuests;                                               // 0x0460(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int                                                TrackedQuestID;                                            // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JPQE[0x4];                                     // 0x0474(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_SAVE_AnimalSpawners>             AnimalsSpawners;                                           // 0x0478(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                CurrentTax;                                                // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OverdueTax;                                                // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_DevelopmentStages_E_DevelopmentStages> DevelopmentStage;                                          // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8OT9[0x7];                                     // 0x0491(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_NPCsPresets>                     AvailableMalePresets;                                      // 0x0498(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_NPCsPresets>                     AvailableFemalePresets;                                    // 0x04A8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_NPCsPresets>                     AvailableBoyPresets;                                       // 0x04B8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_NPCsPresets>                     AvailableGirlPresets;                                      // 0x04C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_NPCsPresets>                     AvailableToddlerPresets;                                   // 0x04D8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                DebtTime;                                                  // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DaysPerSeason;                                             // 0x04EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TaxMultiplier;                                             // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BuildingsLimitMultiplier;                                  // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Events;                                                    // 0x04F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UnlimitedHP;                                               // 0x04F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UnlimitedStamina;                                          // 0x04FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UnlimitedFood;                                             // 0x04FB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UnlimitedWater;                                            // 0x04FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_65X6[0x3];                                     // 0x04FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NPCNeeds_FoodMultiplier;                                   // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NPCNeeds_WoodMultiplier;                                   // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FoodSpoiling;                                              // 0x0508(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EJ1F[0x3];                                     // 0x0509(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AnimalsHPMultiplier;                                       // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AnimalsDamageMultiplier;                                   // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UnlimitedWeight;                                           // 0x0514(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Poisoning;                                                 // 0x0515(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Temperature;                                               // 0x0516(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OTHZ[0x1];                                     // 0x0517(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_SAVE_Events                             EventsData;                                                // 0x0518(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FST_SAVE_FishSpawners>               FishSpawners;                                              // 0x0550(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FST_SAVE_Kingdom                            KingdomData;                                               // 0x0560(0x00A0) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               WasWaypointSet;                                            // 0x0600(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_M46R[0x3];                                     // 0x0601(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   WaypointCoordinates;                                       // 0x0604(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8Q4A[0x4];                                     // 0x060C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_SAVE_POI>                        POI_Data;                                                  // 0x0610(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FST_SAVE_POI_History>                POI_History;                                               // 0x0620(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SAVE_Game.SAVE_Game_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
