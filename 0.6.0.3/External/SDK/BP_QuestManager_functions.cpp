// Name: Medieval Dynasty, Version: 0.6.0.3

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_QuestManager.BP_QuestManager_C.FixChapters0_5_1_1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SaveGameVersion                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ABP_QuestManager_C::FixChapters0_5_1_1(const struct FString& SaveGameVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.FixChapters0_5_1_1");

	ABP_QuestManager_C_FixChapters0_5_1_1_Params params;
	params.SaveGameVersion = SaveGameVersion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.FixAlwinOnVersion0_5_0_8
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SaveGameVersion                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ABP_QuestManager_C::FixAlwinOnVersion0_5_0_8(const struct FString& SaveGameVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.FixAlwinOnVersion0_5_0_8");

	ABP_QuestManager_C_FixAlwinOnVersion0_5_0_8_Params params;
	params.SaveGameVersion = SaveGameVersion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.SetNPCsObjectivesAndGoals
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_QuestInfo           ST_QuestInfo                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
void ABP_QuestManager_C::SetNPCsObjectivesAndGoals(const struct FST_QuestInfo& ST_QuestInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.SetNPCsObjectivesAndGoals");

	ABP_QuestManager_C_SetNPCsObjectivesAndGoals_Params params;
	params.ST_QuestInfo = ST_QuestInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.GenerateQuestObjectives_GoalsAndReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_QuestInfo_Generators L_GeneratedQuest1              (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
void ABP_QuestManager_C::GenerateQuestObjectives_GoalsAndReward(const struct FST_QuestInfo_Generators& L_GeneratedQuest1)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.GenerateQuestObjectives_GoalsAndReward");

	ABP_QuestManager_C_GenerateQuestObjectives_GoalsAndReward_Params params;
	params.L_GeneratedQuest1 = L_GeneratedQuest1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.GenerateQuestReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_QuestReward_Generator RewardForGenerate              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_QuestManager_C::GenerateQuestReward(const struct FST_QuestReward_Generator& RewardForGenerate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.GenerateQuestReward");

	ABP_QuestManager_C_GenerateQuestReward_Params params;
	params.RewardForGenerate = RewardForGenerate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.CheckAndFixDialogueOnLoad
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ObjectiveID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            GoalID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_Goal_Talks          Goal                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           Fixed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Goal_Talks          FixedGoal                      (Parm, OutParm, HasGetValueTypeHash)
void ABP_QuestManager_C::CheckAndFixDialogueOnLoad(const struct FName& QuestID, int ObjectiveID, int GoalID, const struct FST_Goal_Talks& Goal, bool* Fixed, struct FST_Goal_Talks* FixedGoal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CheckAndFixDialogueOnLoad");

	ABP_QuestManager_C_CheckAndFixDialogueOnLoad_Params params;
	params.QuestID = QuestID;
	params.ObjectiveID = ObjectiveID;
	params.GoalID = GoalID;
	params.Goal = Goal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Fixed != nullptr)
		*Fixed = params.Fixed;
	if (FixedGoal != nullptr)
		*FixedGoal = params.FixedGoal;

}


// Function BP_QuestManager.BP_QuestManager_C.SelectQuestObjectivesAndReward_NEW
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_GenerateObjectivesForQuest_Generator> GeneratorQuestObjectives       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<struct FST_QuestObjective_Generator> GeneratedObjectives            (Parm, OutParm, ContainsInstancedReference)
// struct FST_QuestReward_Generator QuestReward                    (Parm, OutParm, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_QuestManager_C::SelectQuestObjectivesAndReward_NEW(TArray<struct FST_GenerateObjectivesForQuest_Generator>* GeneratorQuestObjectives, TArray<struct FST_QuestObjective_Generator>* GeneratedObjectives, struct FST_QuestReward_Generator* QuestReward, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.SelectQuestObjectivesAndReward_NEW");

	ABP_QuestManager_C_SelectQuestObjectivesAndReward_NEW_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GeneratorQuestObjectives != nullptr)
		*GeneratorQuestObjectives = params.GeneratorQuestObjectives;
	if (GeneratedObjectives != nullptr)
		*GeneratedObjectives = params.GeneratedObjectives;
	if (QuestReward != nullptr)
		*QuestReward = params.QuestReward;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_QuestManager.BP_QuestManager_C.CheckNPCForQuestRestrictions_NEW
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_GeneratedQuestRestrictions QuestRestriction               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class ABP_NPC_C*               NPCReference                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           NPCValidForQuest               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_QuestManager_C::CheckNPCForQuestRestrictions_NEW(const struct FST_GeneratedQuestRestrictions& QuestRestriction, class ABP_NPC_C* NPCReference, bool* NPCValidForQuest)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CheckNPCForQuestRestrictions_NEW");

	ABP_QuestManager_C_CheckNPCForQuestRestrictions_NEW_Params params;
	params.QuestRestriction = QuestRestriction;
	params.NPCReference = NPCReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NPCValidForQuest != nullptr)
		*NPCValidForQuest = params.NPCValidForQuest;

}


// Function BP_QuestManager.BP_QuestManager_C.SeasonalGenerateAndAssignQuests_New
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::SeasonalGenerateAndAssignQuests_New()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.SeasonalGenerateAndAssignQuests_New");

	ABP_QuestManager_C_SeasonalGenerateAndAssignQuests_New_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.FixQuestEmptyObjective
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ObjectiveID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_QuestObjective      Objective                      (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void ABP_QuestManager_C::FixQuestEmptyObjective(const struct FName& QuestID, int ObjectiveID, bool* Success, struct FST_QuestObjective* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.FixQuestEmptyObjective");

	ABP_QuestManager_C_FixQuestEmptyObjective_Params params;
	params.QuestID = QuestID;
	params.ObjectiveID = ObjectiveID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Objective != nullptr)
		*Objective = params.Objective;

}


// Function BP_QuestManager.BP_QuestManager_C.FixQuestEmptyGoal
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ObjectiveID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            GoalID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_MasterGoals         Goal                           (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
void ABP_QuestManager_C::FixQuestEmptyGoal(const struct FName& QuestID, int ObjectiveID, int GoalID, bool* Success, struct FST_MasterGoals* Goal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.FixQuestEmptyGoal");

	ABP_QuestManager_C_FixQuestEmptyGoal_Params params;
	params.QuestID = QuestID;
	params.ObjectiveID = ObjectiveID;
	params.GoalID = GoalID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Goal != nullptr)
		*Goal = params.Goal;

}


// Function BP_QuestManager.BP_QuestManager_C.CancelQuest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_QuestManager_C::CancelQuest(int QuestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CancelQuest");

	ABP_QuestManager_C_CancelQuest_Params params;
	params.QuestID = QuestID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.CheckQuestsOnNPCRemove
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_NPC_C*               RemovedNPCReference            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_QuestManager_C::CheckQuestsOnNPCRemove(class ABP_NPC_C* RemovedNPCReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CheckQuestsOnNPCRemove");

	ABP_QuestManager_C_CheckQuestsOnNPCRemove_Params params;
	params.RemovedNPCReference = RemovedNPCReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.AssignFirstQuest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::AssignFirstQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.AssignFirstQuest");

	ABP_QuestManager_C_AssignFirstQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.OnFlirtWithNPC_Function
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::OnFlirtWithNPC_Function()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnFlirtWithNPC_Function");

	ABP_QuestManager_C_OnFlirtWithNPC_Function_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.OnQuestCompleted_Function
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::OnQuestCompleted_Function()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnQuestCompleted_Function");

	ABP_QuestManager_C_OnQuestCompleted_Function_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.OnFoliageRemoved_Function
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Resources_E_Resources> FoliageType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_QuestManager_C::OnFoliageRemoved_Function(TEnumAsByte<E_Resources_E_Resources> FoliageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnFoliageRemoved_Function");

	ABP_QuestManager_C_OnFoliageRemoved_Function_Params params;
	params.FoliageType = FoliageType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.OnArcheryContestUpdate_Function
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AchievedPoints                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FName>           TargetsTags                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void ABP_QuestManager_C::OnArcheryContestUpdate_Function(float AchievedPoints, TArray<struct FName>* TargetsTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnArcheryContestUpdate_Function");

	ABP_QuestManager_C_OnArcheryContestUpdate_Function_Params params;
	params.AchievedPoints = AchievedPoints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TargetsTags != nullptr)
		*TargetsTags = params.TargetsTags;

}


// Function BP_QuestManager.BP_QuestManager_C.OnGoalsTimePass_Function
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_Time                PassedTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_QuestManager_C::OnGoalsTimePass_Function(const struct FST_Time& PassedTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnGoalsTimePass_Function");

	ABP_QuestManager_C_OnGoalsTimePass_Function_Params params;
	params.PassedTime = PassedTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.OnDaySeasonChange_Function
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::OnDaySeasonChange_Function()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnDaySeasonChange_Function");

	ABP_QuestManager_C_OnDaySeasonChange_Function_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.OnPlayerAnimalsChange_Function
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::OnPlayerAnimalsChange_Function()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnPlayerAnimalsChange_Function");

	ABP_QuestManager_C_OnPlayerAnimalsChange_Function_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.OnPlayersPopulationChange_Function
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::OnPlayersPopulationChange_Function()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnPlayersPopulationChange_Function");

	ABP_QuestManager_C_OnPlayersPopulationChange_Function_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.CheckPledgedProfessions_Function
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::CheckPledgedProfessions_Function()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CheckPledgedProfessions_Function");

	ABP_QuestManager_C_CheckPledgedProfessions_Function_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.CheckForChildren_Function
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::CheckForChildren_Function()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CheckForChildren_Function");

	ABP_QuestManager_C_CheckForChildren_Function_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.CheckForPatner_Function
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::CheckForPatner_Function()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CheckForPatner_Function");

	ABP_QuestManager_C_CheckForPatner_Function_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.CheckTalentPoints_Function
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::CheckTalentPoints_Function()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CheckTalentPoints_Function");

	ABP_QuestManager_C_CheckTalentPoints_Function_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.UpdateVillageParametersQuests_Function
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Goal_VillageParametersTypes_E_Goal_VillageParametersTypes> VillageGoalType                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_QuestManager_C::UpdateVillageParametersQuests_Function(TEnumAsByte<E_Goal_VillageParametersTypes_E_Goal_VillageParametersTypes> VillageGoalType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.UpdateVillageParametersQuests_Function");

	ABP_QuestManager_C_UpdateVillageParametersQuests_Function_Params params;
	params.VillageGoalType = VillageGoalType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.IncreaseHuntedAnimals_Function
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Animals_E_Animals> AnimalType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_QuestManager_C::IncreaseHuntedAnimals_Function(TEnumAsByte<E_Animals_E_Animals> AnimalType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.IncreaseHuntedAnimals_Function");

	ABP_QuestManager_C_IncreaseHuntedAnimals_Function_Params params;
	params.AnimalType = AnimalType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.CheckForNeededItems_Function
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::CheckForNeededItems_Function()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CheckForNeededItems_Function");

	ABP_QuestManager_C_CheckForNeededItems_Function_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.CompleteQuest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_QuestManager_C::CompleteQuest(int QuestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CompleteQuest");

	ABP_QuestManager_C_CompleteQuest_Params params;
	params.QuestID = QuestID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.ProgressPeopleSentToKing
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SentPersonID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ABP_QuestManager_C::ProgressPeopleSentToKing(const struct FString& SentPersonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.ProgressPeopleSentToKing");

	ABP_QuestManager_C_ProgressPeopleSentToKing_Params params;
	params.SentPersonID = SentPersonID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.ProgressPeopleConvinced
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ConvincedPersonID              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ABP_QuestManager_C::ProgressPeopleConvinced(const struct FString& ConvincedPersonID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.ProgressPeopleConvinced");

	ABP_QuestManager_C_ProgressPeopleConvinced_Params params;
	params.ConvincedPersonID = ConvincedPersonID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.AssignGeneratedChallenge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_NPC_C*               TmpNPCReference                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_QuestManager_C::AssignGeneratedChallenge(class ABP_NPC_C* TmpNPCReference, const struct FName& RowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.AssignGeneratedChallenge");

	ABP_QuestManager_C_AssignGeneratedChallenge_Params params;
	params.TmpNPCReference = TmpNPCReference;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.CheckAlwin'sTargetAtGostovia
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::CheckAlwinsTargetAtGostovia()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CheckAlwin'sTargetAtGostovia");

	ABP_QuestManager_C_CheckAlwinsTargetAtGostovia_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.RerollTaxQuestOnUniegostDeath
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::RerollTaxQuestOnUniegostDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.RerollTaxQuestOnUniegostDeath");

	ABP_QuestManager_C_RerollTaxQuestOnUniegostDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.ClearOldSideQuests
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::ClearOldSideQuests()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.ClearOldSideQuests");

	ABP_QuestManager_C_ClearOldSideQuests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.SeasonalGenerateAndAssignQuest_Cheat
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   QuestName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_QuestManager_C::SeasonalGenerateAndAssignQuest_Cheat(const struct FName& QuestName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.SeasonalGenerateAndAssignQuest_Cheat");

	ABP_QuestManager_C_SeasonalGenerateAndAssignQuest_Cheat_Params params;
	params.QuestName = QuestName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.FixCompletedBOYQuestOnLoad
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::FixCompletedBOYQuestOnLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.FixCompletedBOYQuestOnLoad");

	ABP_QuestManager_C_FixCompletedBOYQuestOnLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.FixAlwinQuestlineOnLoad
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::FixAlwinQuestlineOnLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.FixAlwinQuestlineOnLoad");

	ABP_QuestManager_C_FixAlwinQuestlineOnLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.FixUniegostPartIIOnLoad
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::FixUniegostPartIIOnLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.FixUniegostPartIIOnLoad");

	ABP_QuestManager_C_FixUniegostPartIIOnLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.CheckDevelopmentStageOnChaptersLoad
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::CheckDevelopmentStageOnChaptersLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CheckDevelopmentStageOnChaptersLoad");

	ABP_QuestManager_C_CheckDevelopmentStageOnChaptersLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.CheckPalisadeInOrangeVillage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::CheckPalisadeInOrangeVillage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CheckPalisadeInOrangeVillage");

	ABP_QuestManager_C_CheckPalisadeInOrangeVillage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.GenerateTaxQuest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::GenerateTaxQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.GenerateTaxQuest");

	ABP_QuestManager_C_GenerateTaxQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.GenerateQuestObjectives
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_GenerateObjectivesForQuest> GeneratorQuestObjectives       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<struct FST_QuestObjective> GeneratedObjectives            (Parm, OutParm, ContainsInstancedReference)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_QuestManager_C::GenerateQuestObjectives(TArray<struct FST_GenerateObjectivesForQuest>* GeneratorQuestObjectives, TArray<struct FST_QuestObjective>* GeneratedObjectives, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.GenerateQuestObjectives");

	ABP_QuestManager_C_GenerateQuestObjectives_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GeneratorQuestObjectives != nullptr)
		*GeneratorQuestObjectives = params.GeneratorQuestObjectives;
	if (GeneratedObjectives != nullptr)
		*GeneratedObjectives = params.GeneratedObjectives;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_QuestManager.BP_QuestManager_C.GenerateQuestRewards
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FST_GenerateQuestReward> GeneratorQuestsRewards         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FST_QuestReward         GeneratedReward                (Parm, OutParm, HasGetValueTypeHash)
void ABP_QuestManager_C::GenerateQuestRewards(TArray<struct FST_GenerateQuestReward>* GeneratorQuestsRewards, struct FST_QuestReward* GeneratedReward)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.GenerateQuestRewards");

	ABP_QuestManager_C_GenerateQuestRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GeneratorQuestsRewards != nullptr)
		*GeneratorQuestsRewards = params.GeneratorQuestsRewards;
	if (GeneratedReward != nullptr)
		*GeneratedReward = params.GeneratedReward;

}


// Function BP_QuestManager.BP_QuestManager_C.CheckTechnologyRestriction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_GeneratedQuestRestrictions_Technology TechnologyRestriction          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_QuestManager_C::CheckTechnologyRestriction(const struct FST_GeneratedQuestRestrictions_Technology& TechnologyRestriction, bool* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CheckTechnologyRestriction");

	ABP_QuestManager_C_CheckTechnologyRestriction_Params params;
	params.TechnologyRestriction = TechnologyRestriction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

}


// Function BP_QuestManager.BP_QuestManager_C.FailObjective
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ObjectiveID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_QuestManager_C::FailObjective(int QuestID, int ObjectiveID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.FailObjective");

	ABP_QuestManager_C_FailObjective_Params params;
	params.QuestID = QuestID;
	params.ObjectiveID = ObjectiveID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.CheckNPCForTalk
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_GeneratedQuest_TalkGoalNPCRestrictions TalkRestriction                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class ABP_NPC_C*               NPCReference                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           NPCValidForQuest               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_QuestManager_C::CheckNPCForTalk(const struct FST_GeneratedQuest_TalkGoalNPCRestrictions& TalkRestriction, class ABP_NPC_C* NPCReference, bool* NPCValidForQuest)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CheckNPCForTalk");

	ABP_QuestManager_C_CheckNPCForTalk_Params params;
	params.TalkRestriction = TalkRestriction;
	params.NPCReference = NPCReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NPCValidForQuest != nullptr)
		*NPCValidForQuest = params.NPCValidForQuest;

}


// Function BP_QuestManager.BP_QuestManager_C.GiveQuestReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_QuestManager_C::GiveQuestReward(int InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.GiveQuestReward");

	ABP_QuestManager_C_GiveQuestReward_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.AssignStoryQuests
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::AssignStoryQuests()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.AssignStoryQuests");

	ABP_QuestManager_C_AssignStoryQuests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.SaveDataFromSystemToFile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USAVE_Game_C*            SaveReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_QuestManager_C::SaveDataFromSystemToFile(class USAVE_Game_C* SaveReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.SaveDataFromSystemToFile");

	ABP_QuestManager_C_SaveDataFromSystemToFile_Params params;
	params.SaveReference = SaveReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.LoadSaveFileIntoSystem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USAVE_Game_C*            SaveReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_QuestManager_C::LoadSaveFileIntoSystem(class USAVE_Game_C* SaveReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.LoadSaveFileIntoSystem");

	ABP_QuestManager_C_LoadSaveFileIntoSystem_Params params;
	params.SaveReference = SaveReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.SetMainQuest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   MainQuestID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_QuestManager_C::SetMainQuest(const struct FName& MainQuestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.SetMainQuest");

	ABP_QuestManager_C_SetMainQuest_Params params;
	params.MainQuestID = MainQuestID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.SeasonalGenerateAndAssignQuests
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::SeasonalGenerateAndAssignQuests()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.SeasonalGenerateAndAssignQuests");

	ABP_QuestManager_C_SeasonalGenerateAndAssignQuests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.CheckNPCForQuestRestrictions
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_QuestInfo           QuestReference                 (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// class ABP_NPC_C*               NPCReference                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           NPCValidForQuest               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_QuestManager_C::CheckNPCForQuestRestrictions(const struct FST_QuestInfo& QuestReference, class ABP_NPC_C* NPCReference, bool* NPCValidForQuest)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CheckNPCForQuestRestrictions");

	ABP_QuestManager_C_CheckNPCForQuestRestrictions_Params params;
	params.QuestReference = QuestReference;
	params.NPCReference = NPCReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NPCValidForQuest != nullptr)
		*NPCValidForQuest = params.NPCValidForQuest;

}


// Function BP_QuestManager.BP_QuestManager_C.CompleteObjective
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ObjectiveID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            GoalID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_QuestManager_C::CompleteObjective(int QuestID, int ObjectiveID, int GoalID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CompleteObjective");

	ABP_QuestManager_C_CompleteObjective_Params params;
	params.QuestID = QuestID;
	params.ObjectiveID = ObjectiveID;
	params.GoalID = GoalID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.StartObjective
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ObjectiveID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_QuestManager_C::StartObjective(int QuestID, int ObjectiveID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.StartObjective");

	ABP_QuestManager_C_StartObjective_Params params;
	params.QuestID = QuestID;
	params.ObjectiveID = ObjectiveID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.FindNPCsForTalkGoalAndHideNPCsHeldItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::FindNPCsForTalkGoalAndHideNPCsHeldItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.FindNPCsForTalkGoalAndHideNPCsHeldItem");

	ABP_QuestManager_C_FindNPCsForTalkGoalAndHideNPCsHeldItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.CompleteGoal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ObjectiveID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            GoalID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_QuestManager_C::CompleteGoal(int QuestID, int ObjectiveID, int GoalID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CompleteGoal");

	ABP_QuestManager_C_CompleteGoal_Params params;
	params.QuestID = QuestID;
	params.ObjectiveID = ObjectiveID;
	params.GoalID = GoalID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.StartQuest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_QuestInfo           Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                           ThroughDialogue_               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            QuestID                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_QuestManager_C::StartQuest(const struct FST_QuestInfo& Quest, bool ThroughDialogue_, int* QuestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.StartQuest");

	ABP_QuestManager_C_StartQuest_Params params;
	params.Quest = Quest;
	params.ThroughDialogue_ = ThroughDialogue_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (QuestID != nullptr)
		*QuestID = params.QuestID;

}


// Function BP_QuestManager.BP_QuestManager_C.GenerateChallengeValues
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_Challange           InputChallenge                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// struct FST_Challange           OutputChallenge                (Parm, OutParm, HasGetValueTypeHash)
void ABP_QuestManager_C::GenerateChallengeValues(const struct FST_Challange& InputChallenge, struct FST_Challange* OutputChallenge)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.GenerateChallengeValues");

	ABP_QuestManager_C_GenerateChallengeValues_Params params;
	params.InputChallenge = InputChallenge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutputChallenge != nullptr)
		*OutputChallenge = params.OutputChallenge;

}


// Function BP_QuestManager.BP_QuestManager_C.UpdateNPCQuestsOnSeasonChange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::UpdateNPCQuestsOnSeasonChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.UpdateNPCQuestsOnSeasonChange");

	ABP_QuestManager_C_UpdateNPCQuestsOnSeasonChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MainMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_QuestManager_C::Init(bool MainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.Init");

	ABP_QuestManager_C_Init_Params params;
	params.MainMenu = MainMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.FailQuest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_QuestManager_C::FailQuest(int QuestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.FailQuest");

	ABP_QuestManager_C_FailQuest_Params params;
	params.QuestID = QuestID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.FailChallange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_QuestManager_C::FailChallange(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.FailChallange");

	ABP_QuestManager_C_FailChallange_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.CompleteChallange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_QuestManager_C::CompleteChallange(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CompleteChallange");

	ABP_QuestManager_C_CompleteChallange_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.SetActiveChallangeBeforeSeasonSkip
// (BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::SetActiveChallangeBeforeSeasonSkip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.SetActiveChallangeBeforeSeasonSkip");

	ABP_QuestManager_C_SetActiveChallangeBeforeSeasonSkip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.UpdateBuildingQuests
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Goal_BuildTypes_E_Goal_BuildTypes> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Constructed_                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 BuildingLocation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_QuestManager_C::UpdateBuildingQuests(TEnumAsByte<E_Goal_BuildTypes_E_Goal_BuildTypes> Type, bool Constructed_, class UClass* Class, const struct FVector& BuildingLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.UpdateBuildingQuests");

	ABP_QuestManager_C_UpdateBuildingQuests_Params params;
	params.Type = Type;
	params.Constructed_ = Constructed_;
	params.Class = Class;
	params.BuildingLocation = BuildingLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.AssignQuestToNPC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_QuestInfo           InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FString                 NPCID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ABP_QuestManager_C::AssignQuestToNPC(const struct FST_QuestInfo& InputPin, const struct FString& NPCID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.AssignQuestToNPC");

	ABP_QuestManager_C_AssignQuestToNPC_Params params;
	params.InputPin = InputPin;
	params.NPCID = NPCID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_QuestManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.ReceiveBeginPlay");

	ABP_QuestManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.AfterSeasonSkip
// (BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::AfterSeasonSkip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.AfterSeasonSkip");

	ABP_QuestManager_C_AfterSeasonSkip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.StartQuestSystem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LoadGame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           MainMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_QuestManager_C::StartQuestSystem(bool LoadGame, bool MainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.StartQuestSystem");

	ABP_QuestManager_C_StartQuestSystem_Params params;
	params.LoadGame = LoadGame;
	params.MainMenu = MainMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.TryToGenerateTaxesQuest
// (BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::TryToGenerateTaxesQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.TryToGenerateTaxesQuest");

	ABP_QuestManager_C_TryToGenerateTaxesQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.FixStartingQuestOnLoad
// (BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::FixStartingQuestOnLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.FixStartingQuestOnLoad");

	ABP_QuestManager_C_FixStartingQuestOnLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.CheckForNeededItems
// (BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::CheckForNeededItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CheckForNeededItems");

	ABP_QuestManager_C_CheckForNeededItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.IncreaseHuntedAnimals
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Animals_E_Animals> AnimalType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_QuestManager_C::IncreaseHuntedAnimals(TEnumAsByte<E_Animals_E_Animals> AnimalType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.IncreaseHuntedAnimals");

	ABP_QuestManager_C_IncreaseHuntedAnimals_Params params;
	params.AnimalType = AnimalType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.UpdateVillageParametersQuests
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Goal_VillageParametersTypes_E_Goal_VillageParametersTypes> VillageGoalType                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_QuestManager_C::UpdateVillageParametersQuests(TEnumAsByte<E_Goal_VillageParametersTypes_E_Goal_VillageParametersTypes> VillageGoalType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.UpdateVillageParametersQuests");

	ABP_QuestManager_C_UpdateVillageParametersQuests_Params params;
	params.VillageGoalType = VillageGoalType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.CheckTalentPoints
// (BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::CheckTalentPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CheckTalentPoints");

	ABP_QuestManager_C_CheckTalentPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.CheckForPatner
// (BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::CheckForPatner()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CheckForPatner");

	ABP_QuestManager_C_CheckForPatner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.CheckForChildren
// (BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::CheckForChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CheckForChildren");

	ABP_QuestManager_C_CheckForChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.CheckPledgedProfessions
// (BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::CheckPledgedProfessions()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.CheckPledgedProfessions");

	ABP_QuestManager_C_CheckPledgedProfessions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.OnPlayersPopulationChange_Event_1
// (BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::OnPlayersPopulationChange_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnPlayersPopulationChange_Event_1");

	ABP_QuestManager_C_OnPlayersPopulationChange_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.OnDaySeasonChange_Event
// (BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::OnDaySeasonChange_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnDaySeasonChange_Event");

	ABP_QuestManager_C_OnDaySeasonChange_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.OnGoalsTimePass_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_Time                PassedTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_QuestManager_C::OnGoalsTimePass_Event(const struct FST_Time& PassedTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnGoalsTimePass_Event");

	ABP_QuestManager_C_OnGoalsTimePass_Event_Params params;
	params.PassedTime = PassedTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.OnArcheryContestUpdate_Event
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AchievedPoints                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FName>           TargetsTags                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void ABP_QuestManager_C::OnArcheryContestUpdate_Event(float AchievedPoints, TArray<struct FName>* TargetsTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnArcheryContestUpdate_Event");

	ABP_QuestManager_C_OnArcheryContestUpdate_Event_Params params;
	params.AchievedPoints = AchievedPoints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TargetsTags != nullptr)
		*TargetsTags = params.TargetsTags;

}


// Function BP_QuestManager.BP_QuestManager_C.OnFoliageRemoved_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Resources_E_Resources> NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_QuestManager_C::OnFoliageRemoved_Event(TEnumAsByte<E_Resources_E_Resources> NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnFoliageRemoved_Event");

	ABP_QuestManager_C_OnFoliageRemoved_Event_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.OnQuestCompleted_Event
// (BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::OnQuestCompleted_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnQuestCompleted_Event");

	ABP_QuestManager_C_OnQuestCompleted_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.OnFlirtWithNPC_Event
// (BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::OnFlirtWithNPC_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnFlirtWithNPC_Event");

	ABP_QuestManager_C_OnFlirtWithNPC_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.OnPlayerAnimalsChange_Event_1
// (BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::OnPlayerAnimalsChange_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnPlayerAnimalsChange_Event_1");

	ABP_QuestManager_C_OnPlayerAnimalsChange_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.ExecuteUbergraph_BP_QuestManager
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_QuestManager_C::ExecuteUbergraph_BP_QuestManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.ExecuteUbergraph_BP_QuestManager");

	ABP_QuestManager_C_ExecuteUbergraph_BP_QuestManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.OnFlirtWithNPC__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::OnFlirtWithNPC__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnFlirtWithNPC__DelegateSignature");

	ABP_QuestManager_C_OnFlirtWithNPC__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.OnQuestCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::OnQuestCompleted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnQuestCompleted__DelegateSignature");

	ABP_QuestManager_C_OnQuestCompleted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.OnFoliageRemoved__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Resources_E_Resources> ResourceType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_QuestManager_C::OnFoliageRemoved__DelegateSignature(TEnumAsByte<E_Resources_E_Resources> ResourceType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnFoliageRemoved__DelegateSignature");

	ABP_QuestManager_C_OnFoliageRemoved__DelegateSignature_Params params;
	params.ResourceType = ResourceType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.OnArcheryContestUpdate__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AchievedPoints                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FName>           TargetsTags                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void ABP_QuestManager_C::OnArcheryContestUpdate__DelegateSignature(float AchievedPoints, TArray<struct FName>* TargetsTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnArcheryContestUpdate__DelegateSignature");

	ABP_QuestManager_C_OnArcheryContestUpdate__DelegateSignature_Params params;
	params.AchievedPoints = AchievedPoints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TargetsTags != nullptr)
		*TargetsTags = params.TargetsTags;

}


// Function BP_QuestManager.BP_QuestManager_C.OnGoalsTimePass__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_Time                PassedTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_QuestManager_C::OnGoalsTimePass__DelegateSignature(const struct FST_Time& PassedTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnGoalsTimePass__DelegateSignature");

	ABP_QuestManager_C_OnGoalsTimePass__DelegateSignature_Params params;
	params.PassedTime = PassedTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.OnDaySeasonChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::OnDaySeasonChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnDaySeasonChange__DelegateSignature");

	ABP_QuestManager_C_OnDaySeasonChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.OnVillagersProfessionsChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::OnVillagersProfessionsChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnVillagersProfessionsChange__DelegateSignature");

	ABP_QuestManager_C_OnVillagersProfessionsChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.OnTalentsChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_QuestManager_C::OnTalentsChange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnTalentsChange__DelegateSignature");

	ABP_QuestManager_C_OnTalentsChange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.OnVillageParametersChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Goal_VillageParametersTypes_E_Goal_VillageParametersTypes> VillageGoalType                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_QuestManager_C::OnVillageParametersChange__DelegateSignature(TEnumAsByte<E_Goal_VillageParametersTypes_E_Goal_VillageParametersTypes> VillageGoalType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.OnVillageParametersChange__DelegateSignature");

	ABP_QuestManager_C_OnVillageParametersChange__DelegateSignature_Params params;
	params.VillageGoalType = VillageGoalType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_QuestManager.BP_QuestManager_C.IncreaseHuntedByPlayer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Animals_E_Animals> AnimalType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_QuestManager_C::IncreaseHuntedByPlayer__DelegateSignature(TEnumAsByte<E_Animals_E_Animals> AnimalType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_QuestManager.BP_QuestManager_C.IncreaseHuntedByPlayer__DelegateSignature");

	ABP_QuestManager_C_IncreaseHuntedByPlayer__DelegateSignature_Params params;
	params.AnimalType = AnimalType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_QuestManager_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
	READ_PTR_FULL(SystemsManagerReference, ABP_SystemsManager_C);
	READ_PTR_FULL(TmpNPCReference, ABP_NPC_C);
	READ_PTR_FULL(TmpNPCToTalkReference, ABP_NPC_C);
}

void ABP_QuestManager_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(DefaultSceneRoot);
	DELE_PTR_FULL(SystemsManagerReference);
	DELE_PTR_FULL(TmpNPCReference);
	DELE_PTR_FULL(TmpNPCToTalkReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
