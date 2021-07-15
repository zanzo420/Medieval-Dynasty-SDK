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

// Function BP_KingdomManager.BP_KingdomManager_C.RerollChallenge
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_KingdomManager_C::RerollChallenge()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KingdomManager.BP_KingdomManager_C.RerollChallenge");

	ABP_KingdomManager_C_RerollChallenge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_KingdomManager.BP_KingdomManager_C.TryToKillKing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ChanceToKill                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_KingdomManager_C::TryToKillKing(float ChanceToKill)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KingdomManager.BP_KingdomManager_C.TryToKillKing");

	ABP_KingdomManager_C_TryToKillKing_Params params;
	params.ChanceToKill = ChanceToKill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_KingdomManager.BP_KingdomManager_C.LoadKingdomData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USAVE_Game_C*            SaveReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_KingdomManager_C::LoadKingdomData(class USAVE_Game_C* SaveReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KingdomManager.BP_KingdomManager_C.LoadKingdomData");

	ABP_KingdomManager_C_LoadKingdomData_Params params;
	params.SaveReference = SaveReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_KingdomManager.BP_KingdomManager_C.SaveKingdomData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USAVE_Game_C*            SaveReference                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_KingdomManager_C::SaveKingdomData(class USAVE_Game_C* SaveReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KingdomManager.BP_KingdomManager_C.SaveKingdomData");

	ABP_KingdomManager_C_SaveKingdomData_Params params;
	params.SaveReference = SaveReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_KingdomManager.BP_KingdomManager_C.CalculateModifiers
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_KingdomManager_C::CalculateModifiers()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KingdomManager.BP_KingdomManager_C.CalculateModifiers");

	ABP_KingdomManager_C_CalculateModifiers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_KingdomManager.BP_KingdomManager_C.KingdomCheat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewKing                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            ChangeKingReputation           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          AgeTheKing                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_KingdomManager_C::KingdomCheat(bool NewKing, int ChangeKingReputation, float AgeTheKing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KingdomManager.BP_KingdomManager_C.KingdomCheat");

	ABP_KingdomManager_C_KingdomCheat_Params params;
	params.NewKing = NewKing;
	params.ChangeKingReputation = ChangeKingReputation;
	params.AgeTheKing = AgeTheKing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_KingdomManager.BP_KingdomManager_C.GetChallengeCheat
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ChallengeName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_KingdomManager_C::GetChallengeCheat(const struct FName& ChallengeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KingdomManager.BP_KingdomManager_C.GetChallengeCheat");

	ABP_KingdomManager_C_GetChallengeCheat_Params params;
	params.ChallengeName = ChallengeName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_KingdomManager.BP_KingdomManager_C.CalculateReputation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_KingdomManager_C::CalculateReputation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KingdomManager.BP_KingdomManager_C.CalculateReputation");

	ABP_KingdomManager_C_CalculateReputation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_KingdomManager.BP_KingdomManager_C.CheckChallengeCanBeAssigned
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_ChallengeRestrictions Restriction                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           CanStart                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_KingdomManager_C::CheckChallengeCanBeAssigned(const struct FST_ChallengeRestrictions& Restriction, bool* CanStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KingdomManager.BP_KingdomManager_C.CheckChallengeCanBeAssigned");

	ABP_KingdomManager_C_CheckChallengeCanBeAssigned_Params params;
	params.Restriction = Restriction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanStart != nullptr)
		*CanStart = params.CanStart;

}


// Function BP_KingdomManager.BP_KingdomManager_C.ChooseAChallenge
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ChosenChallenge                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           WasChallengeChoosen            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_KingdomManager_C::ChooseAChallenge(struct FName* ChosenChallenge, bool* WasChallengeChoosen)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KingdomManager.BP_KingdomManager_C.ChooseAChallenge");

	ABP_KingdomManager_C_ChooseAChallenge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ChosenChallenge != nullptr)
		*ChosenChallenge = params.ChosenChallenge;
	if (WasChallengeChoosen != nullptr)
		*WasChallengeChoosen = params.WasChallengeChoosen;

}


// Function BP_KingdomManager.BP_KingdomManager_C.CheckChallengeAvilable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanStart                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_KingdomManager_C::CheckChallengeAvilable(bool* CanStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KingdomManager.BP_KingdomManager_C.CheckChallengeAvilable");

	ABP_KingdomManager_C_CheckChallengeAvilable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanStart != nullptr)
		*CanStart = params.CanStart;

}


// Function BP_KingdomManager.BP_KingdomManager_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MainMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_KingdomManager_C::Init(bool MainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KingdomManager.BP_KingdomManager_C.Init");

	ABP_KingdomManager_C_Init_Params params;
	params.MainMenu = MainMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_KingdomManager.BP_KingdomManager_C.UpdateKingdom
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_KingdomManager_C::UpdateKingdom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KingdomManager.BP_KingdomManager_C.UpdateKingdom");

	ABP_KingdomManager_C_UpdateKingdom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_KingdomManager.BP_KingdomManager_C.New King
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FirstKing                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_KingdomManager_C::New_King(bool FirstKing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KingdomManager.BP_KingdomManager_C.New King");

	ABP_KingdomManager_C_New_King_Params params;
	params.FirstKing = FirstKing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_KingdomManager.BP_KingdomManager_C.DeathOfTheKing
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_KingdomManager_C::DeathOfTheKing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KingdomManager.BP_KingdomManager_C.DeathOfTheKing");

	ABP_KingdomManager_C_DeathOfTheKing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_KingdomManager.BP_KingdomManager_C.StartKingdomSystem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LoadGame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           MainMenu                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_KingdomManager_C::StartKingdomSystem(bool LoadGame, bool MainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KingdomManager.BP_KingdomManager_C.StartKingdomSystem");

	ABP_KingdomManager_C_StartKingdomSystem_Params params;
	params.LoadGame = LoadGame;
	params.MainMenu = MainMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_KingdomManager.BP_KingdomManager_C.ExecuteUbergraph_BP_KingdomManager
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_KingdomManager_C::ExecuteUbergraph_BP_KingdomManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_KingdomManager.BP_KingdomManager_C.ExecuteUbergraph_BP_KingdomManager");

	ABP_KingdomManager_C_ExecuteUbergraph_BP_KingdomManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
