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

// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AffectionChanges
struct UBP_CharacterRelationsComponent_C_AffectionChanges_Params
{
};

// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.ResetDialogueParameters
struct UBP_CharacterRelationsComponent_C_ResetDialogueParameters_Params
{
};

// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AddDialogueLinesState
struct UBP_CharacterRelationsComponent_C_AddDialogueLinesState_Params
{
	class UDialogue*                                   DialogueReference;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.DecreaseAffectionDialogueChance
struct UBP_CharacterRelationsComponent_C_DecreaseAffectionDialogueChance_Params
{
};

// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.ResetAffectionDialogue
struct UBP_CharacterRelationsComponent_C_ResetAffectionDialogue_Params
{
};

// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.ClearFamilyRelations
struct UBP_CharacterRelationsComponent_C_ClearFamilyRelations_Params
{
};

// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetRelationDecreaseLevel
struct UBP_CharacterRelationsComponent_C_GetRelationDecreaseLevel_Params
{
	int                                                Status;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.RemoveSiblings
struct UBP_CharacterRelationsComponent_C_RemoveSiblings_Params
{
};

// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.SetSiblings
struct UBP_CharacterRelationsComponent_C_SetSiblings_Params
{
	TArray<class ABP_BaseCharacter_C*>                 Siblings;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FString>                             SiblingsID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.RemoveSibling
struct UBP_CharacterRelationsComponent_C_RemoveSibling_Params
{
	class ABP_BaseCharacter_C*                         Sibling;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AddSibling
struct UBP_CharacterRelationsComponent_C_AddSibling_Params
{
	class ABP_BaseCharacter_C*                         Sibling;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     SiblingID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetMother
struct UBP_CharacterRelationsComponent_C_GetMother_Params
{
	class ABP_BaseCharacter_C*                         Mother;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Mother_ID;                                                 // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetFather
struct UBP_CharacterRelationsComponent_C_GetFather_Params
{
	class ABP_BaseCharacter_C*                         Father;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Father_ID;                                                 // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetFamily
struct UBP_CharacterRelationsComponent_C_GetFamily_Params
{
	class ABP_BaseCharacter_C*                         SelfCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_BaseCharacter_C*>                 Family;                                                    // (Parm, OutParm)
	bool                                               SomebodyHasPartner;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.RemoveChildren
struct UBP_CharacterRelationsComponent_C_RemoveChildren_Params
{
};

// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AddChanceForBabyBirth
struct UBP_CharacterRelationsComponent_C_AddChanceForBabyBirth_Params
{
	class ABP_BaseCharacter_C*                         SelfNPC;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AddRelationWithPossiblePartner
struct UBP_CharacterRelationsComponent_C_AddRelationWithPossiblePartner_Params
{
	class ABP_BaseCharacter_C*                         SelfNPC;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.SetRelationsData
struct UBP_CharacterRelationsComponent_C_SetRelationsData_Params
{
	struct FString                                     FatherID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     MotherID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     PartnerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FString>                             SiblingsID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FString>                             ChildrenID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FString                                     HouseID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     WorkPlaceID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Liking;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Affection;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsPregnant;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                TimeToBirth;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetWorkPlace
struct UBP_CharacterRelationsComponent_C_GetWorkPlace_Params
{
	class ABP_MasterBuilding_C*                        WorkPlace;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     WokrPlace_ID;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AssignWorkPlace
struct UBP_CharacterRelationsComponent_C_AssignWorkPlace_Params
{
	class ABP_MasterBuilding_C*                        WorkPlace;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetHouse
struct UBP_CharacterRelationsComponent_C_GetHouse_Params
{
	class ABP_MasterBuilding_C*                        House;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     House_ID;                                                  // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AssignHouse
struct UBP_CharacterRelationsComponent_C_AssignHouse_Params
{
	class ABP_MasterBuilding_C*                        House;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.RelationsInit
struct UBP_CharacterRelationsComponent_C_RelationsInit_Params
{
	class ABP_BaseCharacter_C*                         Father;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BaseCharacter_C*                         Mother;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BaseCharacter_C*                         Partner;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_BaseCharacter_C*>                 Siblings;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class ABP_BaseCharacter_C*>                 Children;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                Affection;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.SetFather
struct UBP_CharacterRelationsComponent_C_SetFather_Params
{
	class ABP_BaseCharacter_C*                         Father;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     FatherID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.SetMother
struct UBP_CharacterRelationsComponent_C_SetMother_Params
{
	class ABP_BaseCharacter_C*                         Mother;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     MotherID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.IsTimeToBirth
struct UBP_CharacterRelationsComponent_C_IsTimeToBirth_Params
{
	bool                                               IsTimeToBirth;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.DecreaseTimeToBirth
struct UBP_CharacterRelationsComponent_C_DecreaseTimeToBirth_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.SetChildren
struct UBP_CharacterRelationsComponent_C_SetChildren_Params
{
	TArray<class ABP_BaseCharacter_C*>                 Children;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FString>                             ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetPartner
struct UBP_CharacterRelationsComponent_C_GetPartner_Params
{
	class ABP_BaseCharacter_C*                         Partner;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Partner_ID;                                                // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.RemoveChild
struct UBP_CharacterRelationsComponent_C_RemoveChild_Params
{
	class ABP_BaseCharacter_C*                         Child;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AddChild
struct UBP_CharacterRelationsComponent_C_AddChild_Params
{
	class ABP_BaseCharacter_C*                         Child;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ChildID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.RemovePartner
struct UBP_CharacterRelationsComponent_C_RemovePartner_Params
{
};

// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.SetPartner
struct UBP_CharacterRelationsComponent_C_SetPartner_Params
{
	class ABP_BaseCharacter_C*                         Partner;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     PartnerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.DecreaseAffection
struct UBP_CharacterRelationsComponent_C_DecreaseAffection_Params
{
	int                                                Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.IncreaseAffection
struct UBP_CharacterRelationsComponent_C_IncreaseAffection_Params
{
	int                                                Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.OnChildrenChanged__DelegateSignature
struct UBP_CharacterRelationsComponent_C_OnChildrenChanged__DelegateSignature_Params
{
};

// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.OnPartnerChanged__DelegateSignature
struct UBP_CharacterRelationsComponent_C_OnPartnerChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
