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

// BlueprintGeneratedClass BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C
// 0x0160 (FullSize[0x0210] - InheritedSize[0x00B0])
class UBP_CharacterRelationsComponent_C : public UActorComponent
{
public:
	struct FString                                     HouseID;                                                   // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class ABP_MasterBuilding_C*                        HouseReference;                                            // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     PartnerID;                                                 // 0x00C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class ABP_BaseCharacter_C*                         Partner;                                                   // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     MotherID;                                                  // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class ABP_BaseCharacter_C*                         Mother;                                                    // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     FatherID;                                                  // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class ABP_BaseCharacter_C*                         Father;                                                    // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FString>                             ChildrenID;                                                // 0x0110(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class ABP_BaseCharacter_C*>                 Children;                                                  // 0x0120(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<struct FString>                             SiblingsID;                                                // 0x0130(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class ABP_BaseCharacter_C*>                 Siblings;                                                  // 0x0140(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate)
	struct FString                                     WorkPlaceID;                                               // 0x0150(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class ABP_MasterBuilding_C*                        WorkPlaceReference;                                        // 0x0160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TimeToBirth;                                               // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Affection;                                                 // 0x016C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnPartnerChanged;                                          // 0x0170(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnChildrenChanged;                                         // 0x0180(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               IsPregnant;                                                // 0x0190(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_56NC[0x7];                                     // 0x0191(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_MatchingNPC>                     PossibleHusbands;                                          // 0x0198(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ChanceForBabyBirth;                                        // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_K6N2[0x4];                                     // 0x01AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ACharacter*                                  InDialogueCharacter;                                       // 0x01B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDialogue*                                   ActualDialogue;                                            // 0x01B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_DialoguesUsedDialogueLines>      DialoguesLinesStates;                                      // 0x01C0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FName>                               DialogueAffection;                                         // 0x01D0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FString                                     TalkingCharacter_ID;                                       // 0x01E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	float                                              TalkChanceAffection;                                       // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SeasonsSinceInteraction;                                   // 0x01F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BlockTalking;                                              // 0x01F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UsedAffection;                                             // 0x01F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               WasSpokenTo;                                               // 0x01FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               TalkWithNPC;                                               // 0x01FB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               GiftGiven;                                                 // 0x01FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Smalltalk;                                                 // 0x01FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               WifeDayText;                                               // 0x01FE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZZTC[0x1];                                     // 0x01FF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        DialogueRumors;                                            // 0x0200(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C");
		return ptr;
	}



	void AffectionChanges();
	void ResetDialogueParameters();
	void AddDialogueLinesState(class UDialogue* DialogueReference);
	void DecreaseAffectionDialogueChance();
	void ResetAffectionDialogue();
	void ClearFamilyRelations();
	void GetRelationDecreaseLevel(int* Status);
	void RemoveSiblings();
	void SetSiblings(TArray<class ABP_BaseCharacter_C*>* Siblings, TArray<struct FString>* SiblingsID);
	void RemoveSibling(class ABP_BaseCharacter_C* Sibling);
	void AddSibling(class ABP_BaseCharacter_C* Sibling, const struct FString& SiblingID);
	void GetMother(class ABP_BaseCharacter_C** Mother, struct FString* Mother_ID);
	void GetFather(class ABP_BaseCharacter_C** Father, struct FString* Father_ID);
	void GetFamily(class ABP_BaseCharacter_C* SelfCharacter, TArray<class ABP_BaseCharacter_C*>* Family, bool* SomebodyHasPartner);
	void RemoveChildren();
	void AddChanceForBabyBirth(class ABP_BaseCharacter_C* SelfNPC);
	void AddRelationWithPossiblePartner(class ABP_BaseCharacter_C* SelfNPC);
	void SetRelationsData(const struct FString& FatherID, const struct FString& MotherID, const struct FString& PartnerID, TArray<struct FString>* SiblingsID, TArray<struct FString>* ChildrenID, const struct FString& HouseID, const struct FString& WorkPlaceID, int Liking, int Affection, bool IsPregnant, int TimeToBirth);
	void GetWorkPlace(class ABP_MasterBuilding_C** WorkPlace, struct FString* WokrPlace_ID);
	void AssignWorkPlace(class ABP_MasterBuilding_C* WorkPlace);
	void GetHouse(class ABP_MasterBuilding_C** House, struct FString* House_ID);
	void AssignHouse(class ABP_MasterBuilding_C* House);
	void RelationsInit(class ABP_BaseCharacter_C* Father, class ABP_BaseCharacter_C* Mother, class ABP_BaseCharacter_C* Partner, TArray<class ABP_BaseCharacter_C*>* Siblings, TArray<class ABP_BaseCharacter_C*>* Children, int Affection);
	void SetFather(class ABP_BaseCharacter_C* Father, const struct FString& FatherID);
	void SetMother(class ABP_BaseCharacter_C* Mother, const struct FString& MotherID);
	void IsTimeToBirth(bool* IsTimeToBirth);
	bool DecreaseTimeToBirth();
	void SetChildren(TArray<class ABP_BaseCharacter_C*>* Children, TArray<struct FString>* ID);
	void GetPartner(class ABP_BaseCharacter_C** Partner, struct FString* Partner_ID);
	void RemoveChild(class ABP_BaseCharacter_C* Child);
	void AddChild(class ABP_BaseCharacter_C* Child, const struct FString& ChildID);
	void RemovePartner();
	void SetPartner(class ABP_BaseCharacter_C* Partner, const struct FString& PartnerID);
	void DecreaseAffection(int Value);
	void IncreaseAffection(int Value);
	void OnChildrenChanged__DelegateSignature();
	void OnPartnerChanged__DelegateSignature();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
