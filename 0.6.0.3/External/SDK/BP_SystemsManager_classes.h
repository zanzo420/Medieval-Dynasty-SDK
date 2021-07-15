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

// BlueprintGeneratedClass BP_SystemsManager.BP_SystemsManager_C
// 0x0088 (FullSize[0x02A8] - InheritedSize[0x0220])
class ABP_SystemsManager_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0220(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ABP_DayNightSystem_C*                        DayNightSystemReference;                                   // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ABP_DataManager_C*                           DataManagerReference;                                      // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ABP_AnimalsManager_C*                        AnimalsManagerReference;                                   // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ABP_LandscapeResourcesManager_C*             LandscapeResourcesManagerReference;                        // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ABP_PlayerManager_C*                         PlayerManagerReference;                                    // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ABP_QuestManager_C*                          QuestManagerReference;                                     // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ABP_Chameleon_C*                             PostProcessManagerReference;                               // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ABP_MarkerManager_C*                         MarkerManagerReference;                                    // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ABP_TimeManager_C*                           TimeManagerReference;                                      // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ABP_KingdomManager_C*                        KingdomManagerReference;                                   // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ABP_VillageManager_C*                        VillageManagerReference;                                   // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ABP_NPCManager_C*                            NPCManagerReference;                                       // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ABP_Audio_Manager_C*                         AudioManagerReference;                                     // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ABP_EventManager_C*                          EventManagerReference;                                     // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AGM_MedievalDynasty_C*                       GameModeReference;                                         // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_POI_Manager_C*                           POI_ManagerReference;                                      // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SystemsManager.BP_SystemsManager_C");
		return ptr;
	}



	void StopSystems(bool MainMenu);
	void SaveSystems(class USAVE_Game_C* SaveReference);
	void StartSystems(bool LoadGame, bool MainMenu);
	void InitSystems(bool MainMenu);
	void PreInitSystems(bool MainMenu);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
