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

// BlueprintGeneratedClass BP_EventManager.BP_EventManager_C
// 0x0068 (FullSize[0x0288] - InheritedSize[0x0220])
class ABP_EventManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ABP_SystemsManager_C*                        SystemsManagerReference;                                   // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<struct FDataTableRowHandle>                 EventQueue;                                                // 0x0238(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FName>                               LastEvents;                                                // 0x0248(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsEventForThisSeason;                                      // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2ATO[0x3];                                     // 0x0259(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                EventNumber;                                               // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EventHappenChance;                                         // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_A6CR[0x4];                                     // 0x0264(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_EventHistory_Main>               EventsHistory;                                             // 0x0268(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class ABP_NPC_C*>                           SpecyficNPCs;                                              // 0x0278(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_EventManager.BP_EventManager_C");
		return ptr;
	}



	void LoadSaveFileIntoSystem(class USAVE_Game_C* SaveReference);
	void SaveDataFromSystemToFile(class USAVE_Game_C* SaveReference);
	void CheckDifficulty(TEnumAsByte<E_EventDifficulty_E_EventDifficulty>* Difficulty);
	void GetNumberOfBuildBuildings(int* NumberOfBuildBuildings);
	void FireEventCheat(const struct FName& EventName);
	void RestrictionTime(const struct FST_EventRestrictions& Restriction, bool* CanHappen);
	void ExecuteEventEffect(int ButtonIndex, const struct FST_SeasonEvent& Event, struct FText* Description);
	void RestrictionPlayer(const struct FST_EventRestrictions& Restriction, bool* CanHappen);
	void RestrictionSeason(const struct FST_EventRestrictions& Restriction, bool* CanHappen);
	void RestrictionFields(const struct FST_EventRestrictions& Restriction, bool* CanHappen);
	void RestrictionBuildings(const struct FST_EventRestrictions& Restriction, bool* CanHappen);
	void RestrictionNPC(const struct FST_EventRestrictions& Restriction, bool* CanHappen);
	void RestrictionAnimals(const struct FST_EventRestrictions& Restriction, bool* CanHappen);
	void CheckEventCanFire(const struct FST_SeasonEvent& Event, bool* CanHappen);
	void CheckEventsAvilable(bool* CanStart);
	void AssignEventOnSeasonChange();
	void StartEventSystem(bool LoadGame, bool MainMenu);
	void OnSeasonChanged();
	void Init(bool MainMenu);
	void ExecuteUbergraph_BP_EventManager(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
