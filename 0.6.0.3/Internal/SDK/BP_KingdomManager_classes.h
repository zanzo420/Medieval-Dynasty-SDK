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

// BlueprintGeneratedClass BP_KingdomManager.BP_KingdomManager_C
// 0x00D9 (FullSize[0x02F9] - InheritedSize[0x0220])
class ABP_KingdomManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<struct FST_KingDetails>                     HistoricalListOfKings;                                     // 0x0230(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FST_KingDetails                             CurrentKing;                                               // 0x0240(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UCurveFloat*                                 MortalityCurve;                                            // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SystemsManager_C*                        SystemsManagerReference;                                   // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              ChallengeHappenChance;                                     // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6ZMY[0x4];                                     // 0x02B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               LastChallenges;                                            // 0x02B8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<E_ChallengeState_E_ChallengeState>     ChallengeInProgress;                                       // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DNYD[0x7];                                     // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     HeraldID;                                                  // 0x02D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               ChangedReputation;                                         // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               LastChallengeSkipped;                                      // 0x02E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_X6BF[0x2];                                     // 0x02E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TaxModifier;                                               // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoodModifier;                                              // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_KingdomStatus_E_KingdomStatus>       KingdomStatus;                                             // 0x02EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OMGZ[0x3];                                     // 0x02ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              KingdomStatusChangeChance;                                 // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ChanceToKillKing;                                          // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ChallengeRerollOnLoad;                                     // 0x02F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_KingdomManager.BP_KingdomManager_C");
		return ptr;
	}



	void RerollChallenge();
	void TryToKillKing(float ChanceToKill);
	void LoadKingdomData(class USAVE_Game_C* SaveReference);
	void SaveKingdomData(class USAVE_Game_C* SaveReference);
	void CalculateModifiers();
	void KingdomCheat(bool NewKing, int ChangeKingReputation, float AgeTheKing);
	void GetChallengeCheat(const struct FName& ChallengeName);
	void CalculateReputation();
	void CheckChallengeCanBeAssigned(const struct FST_ChallengeRestrictions& Restriction, bool* CanStart);
	void ChooseAChallenge(struct FName* ChosenChallenge, bool* WasChallengeChoosen);
	void CheckChallengeAvilable(bool* CanStart);
	void Init(bool MainMenu);
	void UpdateKingdom();
	void New_King(bool FirstKing);
	void DeathOfTheKing();
	void StartKingdomSystem(bool LoadGame, bool MainMenu);
	void ExecuteUbergraph_BP_KingdomManager(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
