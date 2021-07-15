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

// Function BP_KingdomManager.BP_KingdomManager_C.RerollChallenge
struct ABP_KingdomManager_C_RerollChallenge_Params
{
};

// Function BP_KingdomManager.BP_KingdomManager_C.TryToKillKing
struct ABP_KingdomManager_C_TryToKillKing_Params
{
	float                                              ChanceToKill;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_KingdomManager.BP_KingdomManager_C.LoadKingdomData
struct ABP_KingdomManager_C_LoadKingdomData_Params
{
	class USAVE_Game_C*                                SaveReference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_KingdomManager.BP_KingdomManager_C.SaveKingdomData
struct ABP_KingdomManager_C_SaveKingdomData_Params
{
	class USAVE_Game_C*                                SaveReference;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_KingdomManager.BP_KingdomManager_C.CalculateModifiers
struct ABP_KingdomManager_C_CalculateModifiers_Params
{
};

// Function BP_KingdomManager.BP_KingdomManager_C.KingdomCheat
struct ABP_KingdomManager_C_KingdomCheat_Params
{
	bool                                               NewKing;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                ChangeKingReputation;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AgeTheKing;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_KingdomManager.BP_KingdomManager_C.GetChallengeCheat
struct ABP_KingdomManager_C_GetChallengeCheat_Params
{
	struct FName                                       ChallengeName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_KingdomManager.BP_KingdomManager_C.CalculateReputation
struct ABP_KingdomManager_C_CalculateReputation_Params
{
};

// Function BP_KingdomManager.BP_KingdomManager_C.CheckChallengeCanBeAssigned
struct ABP_KingdomManager_C_CheckChallengeCanBeAssigned_Params
{
	struct FST_ChallengeRestrictions                   Restriction;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               CanStart;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_KingdomManager.BP_KingdomManager_C.ChooseAChallenge
struct ABP_KingdomManager_C_ChooseAChallenge_Params
{
	struct FName                                       ChosenChallenge;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WasChallengeChoosen;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_KingdomManager.BP_KingdomManager_C.CheckChallengeAvilable
struct ABP_KingdomManager_C_CheckChallengeAvilable_Params
{
	bool                                               CanStart;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_KingdomManager.BP_KingdomManager_C.Init
struct ABP_KingdomManager_C_Init_Params
{
	bool                                               MainMenu;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_KingdomManager.BP_KingdomManager_C.UpdateKingdom
struct ABP_KingdomManager_C_UpdateKingdom_Params
{
};

// Function BP_KingdomManager.BP_KingdomManager_C.New King
struct ABP_KingdomManager_C_New_King_Params
{
	bool                                               FirstKing;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_KingdomManager.BP_KingdomManager_C.DeathOfTheKing
struct ABP_KingdomManager_C_DeathOfTheKing_Params
{
};

// Function BP_KingdomManager.BP_KingdomManager_C.StartKingdomSystem
struct ABP_KingdomManager_C_StartKingdomSystem_Params
{
	bool                                               LoadGame;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               MainMenu;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_KingdomManager.BP_KingdomManager_C.ExecuteUbergraph_BP_KingdomManager
struct ABP_KingdomManager_C_ExecuteUbergraph_BP_KingdomManager_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
