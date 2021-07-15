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

// BlueprintGeneratedClass BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C
// 0x0158 (FullSize[0x0378] - InheritedSize[0x0220])
class ABP_LandscapeResourcesManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ABP_SystemsManager_C*                        SystemsManagerReference;                                   // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AActor*                                      FoliageActor;                                              // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                             Destination;                                               // 0x0240(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               RefreshSplatmap;                                           // 0x0250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6OHO[0x3];                                     // 0x0251(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MapSize;                                                   // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                      RT_Landscape;                                              // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALandscape*                                  LandscapeReference;                                        // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    RT_SplatMapQuadrangle;                                     // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    RT_SplatMapLine;                                           // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_PlantCondition>                  FoliageQueue;                                              // 0x0278(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                FoliageQueueLimit;                                         // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2SXL[0x4];                                     // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    RT_SplatMapDot;                                            // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFoliageType*>                        ListOfFoliageTypeWitchReplacement;                         // 0x0298(0x0010) (Edit, BlueprintVisible)
	float                                              PlacementZOffset;                                          // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZHAZ[0x4];                                     // 0x02AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    RT_SplatMapCustom;                                         // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_MasterInteractiveResource_C*>     ResourceDepositData;                                       // 0x02B8(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class UBP_TimerResourceFoliage_C*>          TimerResourceComponents;                                   // 0x02C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FST_FoliageDepletedData>             FoliageDepletedData;                                       // 0x02D8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UBP_MasterFoliage_C*>                 MasterResourceComponents;                                  // 0x02E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UBP_RemovableFoliage_C*>              RemovableResourceComponents;                               // 0x02F8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<struct FString, struct FST_FoliageArray>      FoliageDataMap;                                            // 0x0308(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FString>                             IgnoreID;                                                  // 0x0358(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class ABP_BuildSocket_C*>                   Caves;                                                     // 0x0368(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LandscapeResourcesManager.BP_LandscapeResourcesManager_C");
		return ptr;
	}



	void FindDuplicates_ResourceDeposit();
	void AddFoliageDepleted(const struct FTransform& Transform, int NumberOfSeasonToReset);
	void FindFoliageDepleted(const struct FTransform& Transform, bool* Success);
	void FindFoliageCondition(const struct FTransform& InteractFoliageTransform, bool* Success, float* Condition);
	void RestoreResourceDeposit();
	void SaveDataFromSystemToFile(class USAVE_Game_C* SaveReference);
	void ClearFoliageQueue();
	void CompareByLocationInteractiveFoliageInstance(const struct FST_FoliageTarget& FoliageTarget, bool* Correct);
	void FindInteractiveFoliageInstances(const struct FVector& Location, float Radius, TArray<TEnumAsByte<E_Resources_E_Resources>>* ResourceType, TArray<struct FST_FoliageTargetsData>* FoliageTargets);
	void MoveTreesInBox(bool UpOrDown, bool RemoveForever, bool AtBeginning, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation);
	void MoveFoliagesInSphere(bool UpOrDown, const struct FVector& Center, float Radius, bool RemoveForever, bool AtBeginning);
	void MoveFoliageInstance(class UFoliageType_InstancedStaticMesh* FoliageType, class UBP_MasterFoliage_C* InstancedStaticMesh, int InstanceIndex, bool UpOrDown, int NumberOfSeasonToReset, bool RemoveForever, bool AtBeginning);
	void CreateAdditionalInstances();
	void LoadSaveFileIntoSystem(class USAVE_Game_C* SaveReference);
	void CheckForAvailableSpace(const struct FVector& Location, float Radius, TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel, bool* ObstacleDetected);
	void Init(bool MainMenu);
	void RestoreFoliageInstances();
	void InteractFoliageInstanceDetection(const struct FVector& Location, float Radius, class ABP_BaseCharacter_C* BaseCharacter, bool* Success, class UBP_TimerResourceFoliage_C** HitComponent, int* ID);
	void DrawDotLandscapeRT(const struct FVector& V, const struct FLinearColor& Color, float Size);
	void UpdateFoliageQueue(const struct FTransform& InteractFoliageTransform, float BaseCondition, float Extraction, bool DoImmediately, bool AddToFoliageDepleted, int SeasonsToReset, bool* Success);
	void DrawLineLandscapeRT(const struct FVector& V0, const struct FVector& v1, const struct FLinearColor& Color, float Thickness);
	void AddFoliageInstance(class UFoliageType_InstancedStaticMesh* FoliageType, const struct FTransform& InstanceTransform, int* InstanceIndex, class UFoliageInstancedStaticMeshComponent** InstanceComponent);
	void ClearLandscapeRT();
	void DrawQuadrangleLandscapeRT(const struct FVector& V0, const struct FVector& v1, const struct FVector& v2, const struct FVector& V3, const struct FLinearColor& Color);
	void RemoveFoliagesOccupied(const struct FVector& Destination);
	void AddFoliagesOccupied(const struct FVector& Destination);
	void CheckFoliagesOccupied(const struct FVector& Destination, bool* IsFree);
	void ReplaceFoliageInstanceToEmptyInstance(class UFoliageType_InstancedStaticMesh* FoliageType, class UFoliageType_InstancedStaticMesh* TargetFoliageType, class UBP_MasterFoliage_C* InstancedStaticMesh, int InstanceIndex, int NumberOfSeasonToReset);
	void ReplaceFoliageInstanceToAdditionalStage(class UBP_MasterFoliage_C* InstancedStaticMesh, int InstanceIndex, class UFoliageType_InstancedStaticMesh* FoliageType, class UFoliageType_InstancedStaticMesh* TargetFoliageType, class UClass* StageClass, class ABP_BaseCharacter_C* BaseCharacter, int NumberOfSeasonToReset);
	void ReplaceFoliageInstanceToEmptyInstanceWithDropItem(class UInstancedStaticMeshComponent* InstancedStaticMesh, int InstaceIndex, class UFoliageType* FoliageType, TArray<struct FST_ItemResource>* Items, class ABP_BaseCharacter_C* BaseCharacter);
	void CheckFoliageActors(class AActor* FoliageActor, bool* Return);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void InitFoliage();
	void ExecuteUbergraph_BP_LandscapeResourcesManager(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
