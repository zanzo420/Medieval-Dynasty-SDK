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

// BlueprintGeneratedClass BP_POI_Spawner.BP_POI_Spawner_C
// 0x0148 (FullSize[0x0368] - InheritedSize[0x0220])
class ABP_POI_Spawner_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBillboardComponent*                         DebugIcon;                                                 // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UTextRenderComponent*                        TextRender;                                                // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBillboardComponent*                         SpawnPointsDummy;                                          // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USphereComponent*                            SpawnerSphere;                                             // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TMap<class AActor*, struct FST_Helper_Spawner_Indices> SpawnedActors;                                             // 0x0250(0x0050) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               bPreview;                                                  // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Available;                                                 // 0x02A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ST07[0x6];                                     // 0x02A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UChildActorComponent*>                PreviewActors;                                             // 0x02A8(0x0010) (Edit, BlueprintVisible, ContainsInstancedReference)
	TEnumAsByte<E_POI_Type_E_POI_Type>                 SpawnerType;                                               // 0x02B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_A8IV[0x3];                                     // 0x02B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Radius;                                                    // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_Spawner_NPC>                     NPCs;                                                      // 0x02C0(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_Spawner_Animal>                  Animals;                                                   // 0x02D0(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_Spawner_Item>                    Items;                                                     // 0x02E0(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_Spawner_ItemContainer>           ChestItems;                                                // 0x02F0(0x0010) (Edit, BlueprintVisible)
	struct FGuid                                       ID;                                                        // 0x0300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumberOfSeasonsMin;                                        // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumberOfSeasonsMax;                                        // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bRefreshBP;                                                // 0x0318(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Active;                                                    // 0x0319(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_340A[0x6];                                     // 0x031A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_Spawner_Furniture>               Furnitures;                                                // 0x0320(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_Spawner_Mesh>                    Meshes;                                                    // 0x0330(0x0010) (Edit, BlueprintVisible)
	TArray<class AActor*>                              Custom;                                                    // 0x0340(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate)
	bool                                               bPreviewInGame;                                            // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_M57N[0x3];                                     // 0x0351(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumberOfSeasonsInGame;                                     // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     CustomDescription;                                         // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_POI_Spawner.BP_POI_Spawner_C");
		return ptr;
	}



	void RollNumberOfSeasons();
	void SpawnCustom(class AActor* Actor, int Index);
	void SpawnFromSave(class ABP_SystemsManager_C** SystemsManagerReference, TArray<struct FST_Helper_Spawner_Indices>* Spawns, TMap<int, struct FST_InventoryItemsArray> Container, TArray<struct FST_SAVE_Spawner_Animal>* Animal, TArray<struct FST_SAVE_Spawner_Item>* Item);
	void Init();
	void SpawnChestWithItems(const struct FTransform& Place, TArray<struct FST_ItemResource>* V_ChestItems, class UClass* TypeOfContainer, class ABP_SystemsManager_C** SystemsManagerReference, int Index);
	void CheckForBuildings(bool Debug, bool* Available);
	void SpawnMeshes();
	void AddMesh();
	void AddFurniture();
	void AddContainer();
	void DisplayPreview();
	void DisplayArrows();
	void AddItem();
	void AddAnimal();
	void AddNPC();
	void Spawn(class ABP_SystemsManager_C** SystemsManagerReference);
	void SpawnMesh(class UStaticMesh* Mesh, const struct FTransform& Place, int Index);
	void SpawnFurniture(class UClass* Furniture, TEnumAsByte<E_Ownership_E_Ownership> Ownership, const struct FTransform& Place, class ABP_SystemsManager_C** SystemsManagerReference, int Index);
	void SpawnItem(const struct FDataTableRowHandle& What, int HowMuch, const struct FTransform& Place, int Index, float Condition, bool Physics);
	void SpawnNPC(const struct FST_SimpleNPC& Who, int HowMany, const struct FTransform& Place, class ABP_SystemsManager_C** SystemsManagerReference, int Index);
	void SpawnAnimal(const struct FDataTableRowHandle& What, int HowMany, const struct FTransform& Place, class ABP_SystemsManager_C** SystemsManagerReference, int Index, float HP);
	void ClearSpawns();
	void UserConstructionScript();
	void ClearSpawnerSettings();
	void Preview();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_POI_Spawner(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
