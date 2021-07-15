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
// Parameters
//---------------------------------------------------------------------------

// Function BP_QuestManager.BP_QuestManager_C.FixChapters0_5_1_1
struct ABP_QuestManager_C_FixChapters0_5_1_1_Params
{
	struct FString                                     SaveGameVersion;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.FixAlwinOnVersion0_5_0_8
struct ABP_QuestManager_C_FixAlwinOnVersion0_5_0_8_Params
{
	struct FString                                     SaveGameVersion;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.SetNPCsObjectivesAndGoals
struct ABP_QuestManager_C_SetNPCsObjectivesAndGoals_Params
{
	struct FST_QuestInfo                               ST_QuestInfo;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.GenerateQuestObjectives_GoalsAndReward
struct ABP_QuestManager_C_GenerateQuestObjectives_GoalsAndReward_Params
{
	struct FST_QuestInfo_Generators                    L_GeneratedQuest1;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.GenerateQuestReward
struct ABP_QuestManager_C_GenerateQuestReward_Params
{
	struct FST_QuestReward_Generator                   RewardForGenerate;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.CheckAndFixDialogueOnLoad
struct ABP_QuestManager_C_CheckAndFixDialogueOnLoad_Params
{
	struct FName                                       QuestID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ObjectiveID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                GoalID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_Goal_Talks                              Goal;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               Fixed;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_Goal_Talks                              FixedGoal;                                                 // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.SelectQuestObjectivesAndReward_NEW
struct ABP_QuestManager_C_SelectQuestObjectivesAndReward_NEW_Params
{
	TArray<struct FST_GenerateObjectivesForQuest_Generator> GeneratorQuestObjectives;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<struct FST_QuestObjective_Generator>        GeneratedObjectives;                                       // (Parm, OutParm, ContainsInstancedReference)
	struct FST_QuestReward_Generator                   QuestReward;                                               // (Parm, OutParm, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_QuestManager.BP_QuestManager_C.CheckNPCForQuestRestrictions_NEW
struct ABP_QuestManager_C_CheckNPCForQuestRestrictions_NEW_Params
{
	struct FST_GeneratedQuestRestrictions              QuestRestriction;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class ABP_NPC_C*                                   NPCReference;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               NPCValidForQuest;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_QuestManager.BP_QuestManager_C.SeasonalGenerateAndAssignQuests_New
struct ABP_QuestManager_C_SeasonalGenerateAndAssignQuests_New_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.FixQuestEmptyObjective
struct ABP_QuestManager_C_FixQuestEmptyObjective_Params
{
	struct FName                                       QuestID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ObjectiveID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_QuestObjective                          Objective;                                                 // (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.FixQuestEmptyGoal
struct ABP_QuestManager_C_FixQuestEmptyGoal_Params
{
	struct FName                                       QuestID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ObjectiveID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                GoalID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_MasterGoals                             Goal;                                                      // (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.CancelQuest
struct ABP_QuestManager_C_CancelQuest_Params
{
	int                                                QuestID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.CheckQuestsOnNPCRemove
struct ABP_QuestManager_C_CheckQuestsOnNPCRemove_Params
{
	class ABP_NPC_C*                                   RemovedNPCReference;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.AssignFirstQuest
struct ABP_QuestManager_C_AssignFirstQuest_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.OnFlirtWithNPC_Function
struct ABP_QuestManager_C_OnFlirtWithNPC_Function_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.OnQuestCompleted_Function
struct ABP_QuestManager_C_OnQuestCompleted_Function_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.OnFoliageRemoved_Function
struct ABP_QuestManager_C_OnFoliageRemoved_Function_Params
{
	TEnumAsByte<E_Resources_E_Resources>               FoliageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.OnArcheryContestUpdate_Function
struct ABP_QuestManager_C_OnArcheryContestUpdate_Function_Params
{
	float                                              AchievedPoints;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FName>                               TargetsTags;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_QuestManager.BP_QuestManager_C.OnGoalsTimePass_Function
struct ABP_QuestManager_C_OnGoalsTimePass_Function_Params
{
	struct FST_Time                                    PassedTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.OnDaySeasonChange_Function
struct ABP_QuestManager_C_OnDaySeasonChange_Function_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.OnPlayerAnimalsChange_Function
struct ABP_QuestManager_C_OnPlayerAnimalsChange_Function_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.OnPlayersPopulationChange_Function
struct ABP_QuestManager_C_OnPlayersPopulationChange_Function_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.CheckPledgedProfessions_Function
struct ABP_QuestManager_C_CheckPledgedProfessions_Function_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.CheckForChildren_Function
struct ABP_QuestManager_C_CheckForChildren_Function_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.CheckForPatner_Function
struct ABP_QuestManager_C_CheckForPatner_Function_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.CheckTalentPoints_Function
struct ABP_QuestManager_C_CheckTalentPoints_Function_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.UpdateVillageParametersQuests_Function
struct ABP_QuestManager_C_UpdateVillageParametersQuests_Function_Params
{
	TEnumAsByte<E_Goal_VillageParametersTypes_E_Goal_VillageParametersTypes> VillageGoalType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.IncreaseHuntedAnimals_Function
struct ABP_QuestManager_C_IncreaseHuntedAnimals_Function_Params
{
	TEnumAsByte<E_Animals_E_Animals>                   AnimalType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.CheckForNeededItems_Function
struct ABP_QuestManager_C_CheckForNeededItems_Function_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.CompleteQuest
struct ABP_QuestManager_C_CompleteQuest_Params
{
	int                                                QuestID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.ProgressPeopleSentToKing
struct ABP_QuestManager_C_ProgressPeopleSentToKing_Params
{
	struct FString                                     SentPersonID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.ProgressPeopleConvinced
struct ABP_QuestManager_C_ProgressPeopleConvinced_Params
{
	struct FString                                     ConvincedPersonID;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.AssignGeneratedChallenge
struct ABP_QuestManager_C_AssignGeneratedChallenge_Params
{
	class ABP_NPC_C*                                   TmpNPCReference;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       RowName;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.CheckAlwin'sTargetAtGostovia
struct ABP_QuestManager_C_CheckAlwinsTargetAtGostovia_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.RerollTaxQuestOnUniegostDeath
struct ABP_QuestManager_C_RerollTaxQuestOnUniegostDeath_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.ClearOldSideQuests
struct ABP_QuestManager_C_ClearOldSideQuests_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.SeasonalGenerateAndAssignQuest_Cheat
struct ABP_QuestManager_C_SeasonalGenerateAndAssignQuest_Cheat_Params
{
	struct FName                                       QuestName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.FixCompletedBOYQuestOnLoad
struct ABP_QuestManager_C_FixCompletedBOYQuestOnLoad_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.FixAlwinQuestlineOnLoad
struct ABP_QuestManager_C_FixAlwinQuestlineOnLoad_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.FixUniegostPartIIOnLoad
struct ABP_QuestManager_C_FixUniegostPartIIOnLoad_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.CheckDevelopmentStageOnChaptersLoad
struct ABP_QuestManager_C_CheckDevelopmentStageOnChaptersLoad_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.CheckPalisadeInOrangeVillage
struct ABP_QuestManager_C_CheckPalisadeInOrangeVillage_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.GenerateTaxQuest
struct ABP_QuestManager_C_GenerateTaxQuest_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.GenerateQuestObjectives
struct ABP_QuestManager_C_GenerateQuestObjectives_Params
{
	TArray<struct FST_GenerateObjectivesForQuest>      GeneratorQuestObjectives;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<struct FST_QuestObjective>                  GeneratedObjectives;                                       // (Parm, OutParm, ContainsInstancedReference)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_QuestManager.BP_QuestManager_C.GenerateQuestRewards
struct ABP_QuestManager_C_GenerateQuestRewards_Params
{
	TArray<struct FST_GenerateQuestReward>             GeneratorQuestsRewards;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FST_QuestReward                             GeneratedReward;                                           // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.CheckTechnologyRestriction
struct ABP_QuestManager_C_CheckTechnologyRestriction_Params
{
	struct FST_GeneratedQuestRestrictions_Technology   TechnologyRestriction;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               Value;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_QuestManager.BP_QuestManager_C.FailObjective
struct ABP_QuestManager_C_FailObjective_Params
{
	int                                                QuestID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ObjectiveID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.CheckNPCForTalk
struct ABP_QuestManager_C_CheckNPCForTalk_Params
{
	struct FST_GeneratedQuest_TalkGoalNPCRestrictions  TalkRestriction;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class ABP_NPC_C*                                   NPCReference;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               NPCValidForQuest;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_QuestManager.BP_QuestManager_C.GiveQuestReward
struct ABP_QuestManager_C_GiveQuestReward_Params
{
	int                                                InputPin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.AssignStoryQuests
struct ABP_QuestManager_C_AssignStoryQuests_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.SaveDataFromSystemToFile
struct ABP_QuestManager_C_SaveDataFromSystemToFile_Params
{
	class USAVE_Game_C*                                SaveReference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.LoadSaveFileIntoSystem
struct ABP_QuestManager_C_LoadSaveFileIntoSystem_Params
{
	class USAVE_Game_C*                                SaveReference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.SetMainQuest
struct ABP_QuestManager_C_SetMainQuest_Params
{
	struct FName                                       MainQuestID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.SeasonalGenerateAndAssignQuests
struct ABP_QuestManager_C_SeasonalGenerateAndAssignQuests_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.CheckNPCForQuestRestrictions
struct ABP_QuestManager_C_CheckNPCForQuestRestrictions_Params
{
	struct FST_QuestInfo                               QuestReference;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	class ABP_NPC_C*                                   NPCReference;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               NPCValidForQuest;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_QuestManager.BP_QuestManager_C.CompleteObjective
struct ABP_QuestManager_C_CompleteObjective_Params
{
	int                                                QuestID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ObjectiveID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                GoalID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.StartObjective
struct ABP_QuestManager_C_StartObjective_Params
{
	int                                                QuestID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ObjectiveID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.FindNPCsForTalkGoalAndHideNPCsHeldItem
struct ABP_QuestManager_C_FindNPCsForTalkGoalAndHideNPCsHeldItem_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.CompleteGoal
struct ABP_QuestManager_C_CompleteGoal_Params
{
	int                                                QuestID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ObjectiveID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                GoalID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.StartQuest
struct ABP_QuestManager_C_StartQuest_Params
{
	struct FST_QuestInfo                               Quest;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                               ThroughDialogue_;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                QuestID;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.GenerateChallengeValues
struct ABP_QuestManager_C_GenerateChallengeValues_Params
{
	struct FST_Challange                               InputChallenge;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	struct FST_Challange                               OutputChallenge;                                           // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.UpdateNPCQuestsOnSeasonChange
struct ABP_QuestManager_C_UpdateNPCQuestsOnSeasonChange_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.Init
struct ABP_QuestManager_C_Init_Params
{
	bool                                               MainMenu;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_QuestManager.BP_QuestManager_C.FailQuest
struct ABP_QuestManager_C_FailQuest_Params
{
	int                                                QuestID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.FailChallange
struct ABP_QuestManager_C_FailChallange_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.CompleteChallange
struct ABP_QuestManager_C_CompleteChallange_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.SetActiveChallangeBeforeSeasonSkip
struct ABP_QuestManager_C_SetActiveChallangeBeforeSeasonSkip_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.UpdateBuildingQuests
struct ABP_QuestManager_C_UpdateBuildingQuests_Params
{
	TEnumAsByte<E_Goal_BuildTypes_E_Goal_BuildTypes>   Type;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Constructed_;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UClass*                                      Class;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     BuildingLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.AssignQuestToNPC
struct ABP_QuestManager_C_AssignQuestToNPC_Params
{
	struct FST_QuestInfo                               InputPin;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	struct FString                                     NPCID;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.ReceiveBeginPlay
struct ABP_QuestManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.AfterSeasonSkip
struct ABP_QuestManager_C_AfterSeasonSkip_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.StartQuestSystem
struct ABP_QuestManager_C_StartQuestSystem_Params
{
	bool                                               LoadGame;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               MainMenu;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_QuestManager.BP_QuestManager_C.TryToGenerateTaxesQuest
struct ABP_QuestManager_C_TryToGenerateTaxesQuest_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.FixStartingQuestOnLoad
struct ABP_QuestManager_C_FixStartingQuestOnLoad_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.CheckForNeededItems
struct ABP_QuestManager_C_CheckForNeededItems_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.IncreaseHuntedAnimals
struct ABP_QuestManager_C_IncreaseHuntedAnimals_Params
{
	TEnumAsByte<E_Animals_E_Animals>                   AnimalType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.UpdateVillageParametersQuests
struct ABP_QuestManager_C_UpdateVillageParametersQuests_Params
{
	TEnumAsByte<E_Goal_VillageParametersTypes_E_Goal_VillageParametersTypes> VillageGoalType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.CheckTalentPoints
struct ABP_QuestManager_C_CheckTalentPoints_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.CheckForPatner
struct ABP_QuestManager_C_CheckForPatner_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.CheckForChildren
struct ABP_QuestManager_C_CheckForChildren_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.CheckPledgedProfessions
struct ABP_QuestManager_C_CheckPledgedProfessions_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.OnPlayersPopulationChange_Event_1
struct ABP_QuestManager_C_OnPlayersPopulationChange_Event_1_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.OnDaySeasonChange_Event
struct ABP_QuestManager_C_OnDaySeasonChange_Event_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.OnGoalsTimePass_Event
struct ABP_QuestManager_C_OnGoalsTimePass_Event_Params
{
	struct FST_Time                                    PassedTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.OnArcheryContestUpdate_Event
struct ABP_QuestManager_C_OnArcheryContestUpdate_Event_Params
{
	float                                              AchievedPoints;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FName>                               TargetsTags;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_QuestManager.BP_QuestManager_C.OnFoliageRemoved_Event
struct ABP_QuestManager_C_OnFoliageRemoved_Event_Params
{
	TEnumAsByte<E_Resources_E_Resources>               NewParam;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.OnQuestCompleted_Event
struct ABP_QuestManager_C_OnQuestCompleted_Event_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.OnFlirtWithNPC_Event
struct ABP_QuestManager_C_OnFlirtWithNPC_Event_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.OnPlayerAnimalsChange_Event_1
struct ABP_QuestManager_C_OnPlayerAnimalsChange_Event_1_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.ExecuteUbergraph_BP_QuestManager
struct ABP_QuestManager_C_ExecuteUbergraph_BP_QuestManager_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.OnFlirtWithNPC__DelegateSignature
struct ABP_QuestManager_C_OnFlirtWithNPC__DelegateSignature_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.OnQuestCompleted__DelegateSignature
struct ABP_QuestManager_C_OnQuestCompleted__DelegateSignature_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.OnFoliageRemoved__DelegateSignature
struct ABP_QuestManager_C_OnFoliageRemoved__DelegateSignature_Params
{
	TEnumAsByte<E_Resources_E_Resources>               ResourceType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.OnArcheryContestUpdate__DelegateSignature
struct ABP_QuestManager_C_OnArcheryContestUpdate__DelegateSignature_Params
{
	float                                              AchievedPoints;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FName>                               TargetsTags;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_QuestManager.BP_QuestManager_C.OnGoalsTimePass__DelegateSignature
struct ABP_QuestManager_C_OnGoalsTimePass__DelegateSignature_Params
{
	struct FST_Time                                    PassedTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.OnDaySeasonChange__DelegateSignature
struct ABP_QuestManager_C_OnDaySeasonChange__DelegateSignature_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.OnVillagersProfessionsChange__DelegateSignature
struct ABP_QuestManager_C_OnVillagersProfessionsChange__DelegateSignature_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.OnTalentsChange__DelegateSignature
struct ABP_QuestManager_C_OnTalentsChange__DelegateSignature_Params
{
};

// Function BP_QuestManager.BP_QuestManager_C.OnVillageParametersChange__DelegateSignature
struct ABP_QuestManager_C_OnVillageParametersChange__DelegateSignature_Params
{
	TEnumAsByte<E_Goal_VillageParametersTypes_E_Goal_VillageParametersTypes> VillageGoalType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_QuestManager.BP_QuestManager_C.IncreaseHuntedByPlayer__DelegateSignature
struct ABP_QuestManager_C_IncreaseHuntedByPlayer__DelegateSignature_Params
{
	TEnumAsByte<E_Animals_E_Animals>                   AnimalType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
