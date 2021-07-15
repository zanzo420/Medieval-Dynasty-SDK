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

// BlueprintGeneratedClass BP_SpawnPointWildAnimal.BP_SpawnPointWildAnimal_C
// 0x0160 (FullSize[0x0380] - InheritedSize[0x0220])
class ABP_SpawnPointWildAnimal_C : public AActor
{
public:
	class UBoxComponent*                               SpawnVolume;                                               // 0x0220(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBillboardComponent*                         SpawnerIcon;                                               // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USphereComponent*                            Sphere;                                                    // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UTextRenderComponent*                        TextRender;                                                // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FGuid                                       ID;                                                        // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  Icon;                                                      // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpawnDistance;                                             // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Distance;                                                  // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_AnimalGroup                             AnimalGroupDay;                                            // 0x0260(0x0060) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_AnimalBase_C*>                    GroundAnimals;                                             // 0x02C0(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               Active;                                                    // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Available;                                                 // 0x02D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1OBM[0x2];                                     // 0x02D2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumberOfAnimals1;                                          // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumberOfAnimals2;                                          // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumberOfAnimals3;                                          // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumberOfAnimals4;                                          // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_O5NI[0x4];                                     // 0x02E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_AnimalGroup                             AnimalGroupNight;                                          // 0x02E8(0x0060) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	int                                                NightSpawnStartHour;                                       // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NightSpawnEndHour;                                         // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumberOfAnimalsNight1;                                     // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumberOfAnimalsNight2;                                     // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumberOfAnimalsNight3;                                     // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumberOfAnimalsNight4;                                     // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_SAVE_Spawner_Animal>             SavedAnimals;                                              // 0x0360(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class ABP_AnimalBase_C*>                    DeadAnimals;                                               // 0x0370(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpawnPointWildAnimal.BP_SpawnPointWildAnimal_C");
		return ptr;
	}



	void SubstractNumberOfAnimalsToSpawn(int Index);
	void FindAnimalTypeInSpawner(const struct FDataTableRowHandle& DataTableRowHandle, int* Index);
	void InitAfterLoad(const struct FST_SAVE_AnimalSpawners& Data);
	void GetDataToSave(struct FST_SAVE_AnimalSpawners* Data);
	void CheckAvailability(bool Debug, bool* Available);
	void RemoveAnimal(class ABP_GroundAnimalBase_C* Animal);
	void GetDistance(float* Distance);
	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
