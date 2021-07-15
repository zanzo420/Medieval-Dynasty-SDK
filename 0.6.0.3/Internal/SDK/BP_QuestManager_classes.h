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

// BlueprintGeneratedClass BP_QuestManager.BP_QuestManager_C
// 0x0130 (FullSize[0x0350] - InheritedSize[0x0220])
class ABP_QuestManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ABP_SystemsManager_C*                        SystemsManagerReference;                                   // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int                                                AmountToHunt;                                              // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IOVQ[0x4];                                     // 0x023C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    IncreaseHuntedByPlayer;                                    // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FST_QuestInfo>                       AllAcceptedQuests;                                         // 0x0250(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class ABP_NPC_C*                                   TmpNPCReference;                                           // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_Challange>                       AllChallanges;                                             // 0x0268(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                IndexOfActiveChallangeBeforeSeasonSkip;                    // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsChallangeForThisSeason;                                  // 0x027C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_O26T[0x3];                                     // 0x027D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_NPC_C*                                   TmpNPCToTalkReference;                                     // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       tmpRowName;                                                // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                tmpDynastyReputationToAdd;                                 // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                tmpQuantityToDeliver;                                      // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                tmpQuantityDelivered;                                      // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasChallengeExpired_;                                      // 0x029C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_T4C8[0x3];                                     // 0x029D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ABP_GoalActor_C*>                     GoalActors;                                                // 0x02A0(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnVillageParametersChange;                                 // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int                                                tmpTechnologyBuildingsUnlocked;                            // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int                                                tmpBuildingsBuilt;                                         // 0x02C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnTalentsChange;                                           // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int                                                tmpTalentPointsSpent;                                      // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int                                                tmpVillagersAssignedToWork;                                // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnVillagersProfessionsChange;                              // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnDaySeasonChange;                                         // 0x02F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnGoalsTimePass;                                           // 0x0300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnArcheryContestUpdate;                                    // 0x0310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnFoliageRemoved;                                          // 0x0320(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnQuestCompleted;                                          // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnFlirtWithNPC;                                            // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_QuestManager.BP_QuestManager_C");
		return ptr;
	}



	void FixChapters0_5_1_1(const struct FString& SaveGameVersion);
	void FixAlwinOnVersion0_5_0_8(const struct FString& SaveGameVersion);
	void SetNPCsObjectivesAndGoals(const struct FST_QuestInfo& ST_QuestInfo);
	void GenerateQuestObjectives_GoalsAndReward(const struct FST_QuestInfo_Generators& L_GeneratedQuest1);
	void GenerateQuestReward(const struct FST_QuestReward_Generator& RewardForGenerate);
	void CheckAndFixDialogueOnLoad(const struct FName& QuestID, int ObjectiveID, int GoalID, const struct FST_Goal_Talks& Goal, bool* Fixed, struct FST_Goal_Talks* FixedGoal);
	void SelectQuestObjectivesAndReward_NEW(TArray<struct FST_GenerateObjectivesForQuest_Generator>* GeneratorQuestObjectives, TArray<struct FST_QuestObjective_Generator>* GeneratedObjectives, struct FST_QuestReward_Generator* QuestReward, bool* Success);
	void CheckNPCForQuestRestrictions_NEW(const struct FST_GeneratedQuestRestrictions& QuestRestriction, class ABP_NPC_C* NPCReference, bool* NPCValidForQuest);
	void SeasonalGenerateAndAssignQuests_New();
	void FixQuestEmptyObjective(const struct FName& QuestID, int ObjectiveID, bool* Success, struct FST_QuestObjective* Objective);
	void FixQuestEmptyGoal(const struct FName& QuestID, int ObjectiveID, int GoalID, bool* Success, struct FST_MasterGoals* Goal);
	void CancelQuest(int QuestID);
	void CheckQuestsOnNPCRemove(class ABP_NPC_C* RemovedNPCReference);
	void AssignFirstQuest();
	void OnFlirtWithNPC_Function();
	void OnQuestCompleted_Function();
	void OnFoliageRemoved_Function(TEnumAsByte<E_Resources_E_Resources> FoliageType);
	void OnArcheryContestUpdate_Function(float AchievedPoints, TArray<struct FName>* TargetsTags);
	void OnGoalsTimePass_Function(const struct FST_Time& PassedTime);
	void OnDaySeasonChange_Function();
	void OnPlayerAnimalsChange_Function();
	void OnPlayersPopulationChange_Function();
	void CheckPledgedProfessions_Function();
	void CheckForChildren_Function();
	void CheckForPatner_Function();
	void CheckTalentPoints_Function();
	void UpdateVillageParametersQuests_Function(TEnumAsByte<E_Goal_VillageParametersTypes_E_Goal_VillageParametersTypes> VillageGoalType);
	void IncreaseHuntedAnimals_Function(TEnumAsByte<E_Animals_E_Animals> AnimalType);
	void CheckForNeededItems_Function();
	void CompleteQuest(int QuestID);
	void ProgressPeopleSentToKing(const struct FString& SentPersonID);
	void ProgressPeopleConvinced(const struct FString& ConvincedPersonID);
	void AssignGeneratedChallenge(class ABP_NPC_C* TmpNPCReference, const struct FName& RowName);
	void CheckAlwinsTargetAtGostovia();
	void RerollTaxQuestOnUniegostDeath();
	void ClearOldSideQuests();
	void SeasonalGenerateAndAssignQuest_Cheat(const struct FName& QuestName);
	void FixCompletedBOYQuestOnLoad();
	void FixAlwinQuestlineOnLoad();
	void FixUniegostPartIIOnLoad();
	void CheckDevelopmentStageOnChaptersLoad();
	void CheckPalisadeInOrangeVillage();
	void GenerateTaxQuest();
	void GenerateQuestObjectives(TArray<struct FST_GenerateObjectivesForQuest>* GeneratorQuestObjectives, TArray<struct FST_QuestObjective>* GeneratedObjectives, bool* Success);
	void GenerateQuestRewards(TArray<struct FST_GenerateQuestReward>* GeneratorQuestsRewards, struct FST_QuestReward* GeneratedReward);
	void CheckTechnologyRestriction(const struct FST_GeneratedQuestRestrictions_Technology& TechnologyRestriction, bool* Value);
	void FailObjective(int QuestID, int ObjectiveID);
	void CheckNPCForTalk(const struct FST_GeneratedQuest_TalkGoalNPCRestrictions& TalkRestriction, class ABP_NPC_C* NPCReference, bool* NPCValidForQuest);
	void GiveQuestReward(int InputPin);
	void AssignStoryQuests();
	void SaveDataFromSystemToFile(class USAVE_Game_C* SaveReference);
	void LoadSaveFileIntoSystem(class USAVE_Game_C* SaveReference);
	void SetMainQuest(const struct FName& MainQuestID);
	void SeasonalGenerateAndAssignQuests();
	void CheckNPCForQuestRestrictions(const struct FST_QuestInfo& QuestReference, class ABP_NPC_C* NPCReference, bool* NPCValidForQuest);
	void CompleteObjective(int QuestID, int ObjectiveID, int GoalID);
	void StartObjective(int QuestID, int ObjectiveID);
	void FindNPCsForTalkGoalAndHideNPCsHeldItem();
	void CompleteGoal(int QuestID, int ObjectiveID, int GoalID);
	void StartQuest(const struct FST_QuestInfo& Quest, bool ThroughDialogue_, int* QuestID);
	void GenerateChallengeValues(const struct FST_Challange& InputChallenge, struct FST_Challange* OutputChallenge);
	void UpdateNPCQuestsOnSeasonChange();
	void Init(bool MainMenu);
	void FailQuest(int QuestID);
	void FailChallange(int Index);
	void CompleteChallange(int Index);
	void SetActiveChallangeBeforeSeasonSkip();
	void UpdateBuildingQuests(TEnumAsByte<E_Goal_BuildTypes_E_Goal_BuildTypes> Type, bool Constructed_, class UClass* Class, const struct FVector& BuildingLocation);
	void AssignQuestToNPC(const struct FST_QuestInfo& InputPin, const struct FString& NPCID);
	void ReceiveBeginPlay();
	void AfterSeasonSkip();
	void StartQuestSystem(bool LoadGame, bool MainMenu);
	void TryToGenerateTaxesQuest();
	void FixStartingQuestOnLoad();
	void CheckForNeededItems();
	void IncreaseHuntedAnimals(TEnumAsByte<E_Animals_E_Animals> AnimalType);
	void UpdateVillageParametersQuests(TEnumAsByte<E_Goal_VillageParametersTypes_E_Goal_VillageParametersTypes> VillageGoalType);
	void CheckTalentPoints();
	void CheckForPatner();
	void CheckForChildren();
	void CheckPledgedProfessions();
	void OnPlayersPopulationChange_Event_1();
	void OnDaySeasonChange_Event();
	void OnGoalsTimePass_Event(const struct FST_Time& PassedTime);
	void OnArcheryContestUpdate_Event(float AchievedPoints, TArray<struct FName>* TargetsTags);
	void OnFoliageRemoved_Event(TEnumAsByte<E_Resources_E_Resources> NewParam);
	void OnQuestCompleted_Event();
	void OnFlirtWithNPC_Event();
	void OnPlayerAnimalsChange_Event_1();
	void ExecuteUbergraph_BP_QuestManager(int EntryPoint);
	void OnFlirtWithNPC__DelegateSignature();
	void OnQuestCompleted__DelegateSignature();
	void OnFoliageRemoved__DelegateSignature(TEnumAsByte<E_Resources_E_Resources> ResourceType);
	void OnArcheryContestUpdate__DelegateSignature(float AchievedPoints, TArray<struct FName>* TargetsTags);
	void OnGoalsTimePass__DelegateSignature(const struct FST_Time& PassedTime);
	void OnDaySeasonChange__DelegateSignature();
	void OnVillagersProfessionsChange__DelegateSignature();
	void OnTalentsChange__DelegateSignature();
	void OnVillageParametersChange__DelegateSignature(TEnumAsByte<E_Goal_VillageParametersTypes_E_Goal_VillageParametersTypes> VillageGoalType);
	void IncreaseHuntedByPlayer__DelegateSignature(TEnumAsByte<E_Animals_E_Animals> AnimalType);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
