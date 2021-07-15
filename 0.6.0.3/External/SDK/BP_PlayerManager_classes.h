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

// BlueprintGeneratedClass BP_PlayerManager.BP_PlayerManager_C
// 0x00F0 (FullSize[0x0310] - InheritedSize[0x0220])
class ABP_PlayerManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              InspectorIntensity_Intensity_D689BBCC4BEEBAE40941DC9CA2BB73D1; // 0x0230(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             InspectorIntensity__Direction_D689BBCC4BEEBAE40941DC9CA2BB73D1; // 0x0234(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RB73[0x3];                                     // 0x0235(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          InspectorIntensity;                                        // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ABP_SystemsManager_C*                        SystemsManagerReference;                                   // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class APC_Player_C*                                PlayerControllerReference;                                 // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  PlayerStartTransform;                                      // 0x0250(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	bool                                               BuildingVisibility;                                        // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               InspectorMode;                                             // 0x0281(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	UMG_ESlateVisibility                               InspectorModeVisibility;                                   // 0x0282(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VIVM[0x1];                                     // 0x0283(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InspectorModeDistance;                                     // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AnimalVisionTalent;                                        // 0x0288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4UI2[0x7];                                     // 0x0289(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USphereComponent*                            FearSphere;                                                // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_BookTutorialShown                       TutorialShownStructure;                                    // 0x0298(0x0007) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DQQI[0x1];                                     // 0x029F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<TEnumAsByte<E_Tutorials_E_Tutorials>, bool>   ShownTutorials;                                            // 0x02A0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_AnimalBase_C*                            PlayerMountReference;                                      // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Is_Move;                                                   // 0x02F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_P934[0x3];                                     // 0x02F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CurrentForestIntensity;                                    // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentVillageIntensity;                                   // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TargetForestIntensity;                                     // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TargetVillageIntensity;                                    // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AmbientBlendSpeed;                                         // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerManager.BP_PlayerManager_C");
		return ptr;
	}



	void IsMove();
	void UpdateVillageIntensity();
	void UpdateForestIntensity();
	void FindRandomPointForMount(struct FVector* RandomLocation);
	bool CanMoveMountToPlayer(struct FVector* TargetLocation, struct FRotator* TargetRotation);
	void CheckIsHeir(bool* Success, class ABP_BaseCharacter_C** Heir);
	void TryToCreateHUDTutorial(TEnumAsByte<E_Tutorials_E_Tutorials> Tutorial, bool FullscreenMessage);
	void TeleportPlayer();
	void InspectorDetection();
	void Switch_to_Heir(class ABP_BaseCharacter_C* Heir, bool* Success);
	void LoadSaveFileIntoSystemFinishing(class USAVE_Game_C* SaveReference);
	void LoadSaveFileIntoSystem(class USAVE_Game_C* SaveReference);
	void SaveDataFromSystemToFile(class USAVE_Game_C* SaveReference);
	void SwitchCharacters();
	void Spawn_Player(class AController* PlayerController);
	void InitPlayerHUD();
	void CreatePlayer();
	void Init(bool MainMenu);
	void InspectorIntensity__FinishedFunc();
	void InspectorIntensity__UpdateFunc();
	void StartInspectorMode();
	void StopInspectorMode();
	void ReceiveBeginPlay();
	void SetBuildingMode(TEnumAsByte<E_BuildingModifications_E_BuildingModifications> BuildingMode);
	void StartInspectorTimer();
	void StopInspectorTimer();
	void UpdateInspector();
	void PlayAnimation_InspectorMode();
	void StopAnimation_InspectorMode();
	void StartPlayerManager(bool LoadGame, bool MainMenu);
	void UpdateOnSeasonChanged();
	void SummonMount();
	void StartTimer_PlayerMove();
	void UpdateAmbientParameters();
	void StopTimer_PlayerStay();
	void StartTimer_CheckIsMove();
	void CheckIsMove();
	void StopTimer_CheckIsMove();
	void UpdateOnTimeChanged(int IteratorNumber);
	void ResetAmbientParameters();
	void ExecuteUbergraph_BP_PlayerManager(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
