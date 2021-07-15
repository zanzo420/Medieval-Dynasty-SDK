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

// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AffectionChanges
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_CharacterRelationsComponent_C::AffectionChanges()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AffectionChanges");

	UBP_CharacterRelationsComponent_C_AffectionChanges_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.ResetDialogueParameters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UBP_CharacterRelationsComponent_C::ResetDialogueParameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.ResetDialogueParameters");

	UBP_CharacterRelationsComponent_C_ResetDialogueParameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AddDialogueLinesState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDialogue*               DialogueReference              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterRelationsComponent_C::AddDialogueLinesState(class UDialogue* DialogueReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AddDialogueLinesState");

	UBP_CharacterRelationsComponent_C_AddDialogueLinesState_Params params;
	params.DialogueReference = DialogueReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.DecreaseAffectionDialogueChance
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_CharacterRelationsComponent_C::DecreaseAffectionDialogueChance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.DecreaseAffectionDialogueChance");

	UBP_CharacterRelationsComponent_C_DecreaseAffectionDialogueChance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.ResetAffectionDialogue
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_CharacterRelationsComponent_C::ResetAffectionDialogue()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.ResetAffectionDialogue");

	UBP_CharacterRelationsComponent_C_ResetAffectionDialogue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.ClearFamilyRelations
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_CharacterRelationsComponent_C::ClearFamilyRelations()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.ClearFamilyRelations");

	UBP_CharacterRelationsComponent_C_ClearFamilyRelations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetRelationDecreaseLevel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Status                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterRelationsComponent_C::GetRelationDecreaseLevel(int* Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetRelationDecreaseLevel");

	UBP_CharacterRelationsComponent_C_GetRelationDecreaseLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Status != nullptr)
		*Status = params.Status;

}


// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.RemoveSiblings
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_CharacterRelationsComponent_C::RemoveSiblings()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.RemoveSiblings");

	UBP_CharacterRelationsComponent_C_RemoveSiblings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.SetSiblings
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABP_BaseCharacter_C*> Siblings                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FString>         SiblingsID                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_CharacterRelationsComponent_C::SetSiblings(TArray<class ABP_BaseCharacter_C*>* Siblings, TArray<struct FString>* SiblingsID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.SetSiblings");

	UBP_CharacterRelationsComponent_C_SetSiblings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Siblings != nullptr)
		*Siblings = params.Siblings;
	if (SiblingsID != nullptr)
		*SiblingsID = params.SiblingsID;

}


// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.RemoveSibling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     Sibling                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterRelationsComponent_C::RemoveSibling(class ABP_BaseCharacter_C* Sibling)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.RemoveSibling");

	UBP_CharacterRelationsComponent_C_RemoveSibling_Params params;
	params.Sibling = Sibling;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AddSibling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     Sibling                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 SiblingID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_CharacterRelationsComponent_C::AddSibling(class ABP_BaseCharacter_C* Sibling, const struct FString& SiblingID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AddSibling");

	UBP_CharacterRelationsComponent_C_AddSibling_Params params;
	params.Sibling = Sibling;
	params.SiblingID = SiblingID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetMother
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     Mother                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Mother_ID                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBP_CharacterRelationsComponent_C::GetMother(class ABP_BaseCharacter_C** Mother, struct FString* Mother_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetMother");

	UBP_CharacterRelationsComponent_C_GetMother_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Mother != nullptr)
		*Mother = params.Mother;
	if (Mother_ID != nullptr)
		*Mother_ID = params.Mother_ID;

}


// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetFather
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     Father                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Father_ID                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBP_CharacterRelationsComponent_C::GetFather(class ABP_BaseCharacter_C** Father, struct FString* Father_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetFather");

	UBP_CharacterRelationsComponent_C_GetFather_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Father != nullptr)
		*Father = params.Father;
	if (Father_ID != nullptr)
		*Father_ID = params.Father_ID;

}


// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetFamily
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     SelfCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_BaseCharacter_C*> Family                         (Parm, OutParm)
// bool                           SomebodyHasPartner             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_CharacterRelationsComponent_C::GetFamily(class ABP_BaseCharacter_C* SelfCharacter, TArray<class ABP_BaseCharacter_C*>* Family, bool* SomebodyHasPartner)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetFamily");

	UBP_CharacterRelationsComponent_C_GetFamily_Params params;
	params.SelfCharacter = SelfCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Family != nullptr)
		*Family = params.Family;
	if (SomebodyHasPartner != nullptr)
		*SomebodyHasPartner = params.SomebodyHasPartner;

}


// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.RemoveChildren
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_CharacterRelationsComponent_C::RemoveChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.RemoveChildren");

	UBP_CharacterRelationsComponent_C_RemoveChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AddChanceForBabyBirth
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     SelfNPC                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterRelationsComponent_C::AddChanceForBabyBirth(class ABP_BaseCharacter_C* SelfNPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AddChanceForBabyBirth");

	UBP_CharacterRelationsComponent_C_AddChanceForBabyBirth_Params params;
	params.SelfNPC = SelfNPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AddRelationWithPossiblePartner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     SelfNPC                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterRelationsComponent_C::AddRelationWithPossiblePartner(class ABP_BaseCharacter_C* SelfNPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AddRelationWithPossiblePartner");

	UBP_CharacterRelationsComponent_C_AddRelationWithPossiblePartner_Params params;
	params.SelfNPC = SelfNPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.SetRelationsData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 FatherID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 MotherID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 PartnerID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FString>         SiblingsID                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FString>         ChildrenID                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FString                 HouseID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 WorkPlaceID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            Liking                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Affection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsPregnant                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            TimeToBirth                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterRelationsComponent_C::SetRelationsData(const struct FString& FatherID, const struct FString& MotherID, const struct FString& PartnerID, TArray<struct FString>* SiblingsID, TArray<struct FString>* ChildrenID, const struct FString& HouseID, const struct FString& WorkPlaceID, int Liking, int Affection, bool IsPregnant, int TimeToBirth)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.SetRelationsData");

	UBP_CharacterRelationsComponent_C_SetRelationsData_Params params;
	params.FatherID = FatherID;
	params.MotherID = MotherID;
	params.PartnerID = PartnerID;
	params.HouseID = HouseID;
	params.WorkPlaceID = WorkPlaceID;
	params.Liking = Liking;
	params.Affection = Affection;
	params.IsPregnant = IsPregnant;
	params.TimeToBirth = TimeToBirth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SiblingsID != nullptr)
		*SiblingsID = params.SiblingsID;
	if (ChildrenID != nullptr)
		*ChildrenID = params.ChildrenID;

}


// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetWorkPlace
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterBuilding_C*    WorkPlace                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 WokrPlace_ID                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBP_CharacterRelationsComponent_C::GetWorkPlace(class ABP_MasterBuilding_C** WorkPlace, struct FString* WokrPlace_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetWorkPlace");

	UBP_CharacterRelationsComponent_C_GetWorkPlace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WorkPlace != nullptr)
		*WorkPlace = params.WorkPlace;
	if (WokrPlace_ID != nullptr)
		*WokrPlace_ID = params.WokrPlace_ID;

}


// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AssignWorkPlace
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterBuilding_C*    WorkPlace                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterRelationsComponent_C::AssignWorkPlace(class ABP_MasterBuilding_C* WorkPlace)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AssignWorkPlace");

	UBP_CharacterRelationsComponent_C_AssignWorkPlace_Params params;
	params.WorkPlace = WorkPlace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetHouse
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterBuilding_C*    House                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 House_ID                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBP_CharacterRelationsComponent_C::GetHouse(class ABP_MasterBuilding_C** House, struct FString* House_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetHouse");

	UBP_CharacterRelationsComponent_C_GetHouse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (House != nullptr)
		*House = params.House;
	if (House_ID != nullptr)
		*House_ID = params.House_ID;

}


// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AssignHouse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterBuilding_C*    House                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterRelationsComponent_C::AssignHouse(class ABP_MasterBuilding_C* House)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AssignHouse");

	UBP_CharacterRelationsComponent_C_AssignHouse_Params params;
	params.House = House;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.RelationsInit
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     Father                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BaseCharacter_C*     Mother                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BaseCharacter_C*     Partner                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_BaseCharacter_C*> Siblings                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class ABP_BaseCharacter_C*> Children                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            Affection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterRelationsComponent_C::RelationsInit(class ABP_BaseCharacter_C* Father, class ABP_BaseCharacter_C* Mother, class ABP_BaseCharacter_C* Partner, TArray<class ABP_BaseCharacter_C*>* Siblings, TArray<class ABP_BaseCharacter_C*>* Children, int Affection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.RelationsInit");

	UBP_CharacterRelationsComponent_C_RelationsInit_Params params;
	params.Father = Father;
	params.Mother = Mother;
	params.Partner = Partner;
	params.Affection = Affection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Siblings != nullptr)
		*Siblings = params.Siblings;
	if (Children != nullptr)
		*Children = params.Children;

}


// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.SetFather
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     Father                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 FatherID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_CharacterRelationsComponent_C::SetFather(class ABP_BaseCharacter_C* Father, const struct FString& FatherID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.SetFather");

	UBP_CharacterRelationsComponent_C_SetFather_Params params;
	params.Father = Father;
	params.FatherID = FatherID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.SetMother
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     Mother                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 MotherID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_CharacterRelationsComponent_C::SetMother(class ABP_BaseCharacter_C* Mother, const struct FString& MotherID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.SetMother");

	UBP_CharacterRelationsComponent_C_SetMother_Params params;
	params.Mother = Mother;
	params.MotherID = MotherID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.IsTimeToBirth
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsTimeToBirth                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_CharacterRelationsComponent_C::IsTimeToBirth(bool* IsTimeToBirth)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.IsTimeToBirth");

	UBP_CharacterRelationsComponent_C_IsTimeToBirth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsTimeToBirth != nullptr)
		*IsTimeToBirth = params.IsTimeToBirth;

}


// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.DecreaseTimeToBirth
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_CharacterRelationsComponent_C::DecreaseTimeToBirth()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.DecreaseTimeToBirth");

	UBP_CharacterRelationsComponent_C_DecreaseTimeToBirth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.SetChildren
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABP_BaseCharacter_C*> Children                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FString>         ID                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_CharacterRelationsComponent_C::SetChildren(TArray<class ABP_BaseCharacter_C*>* Children, TArray<struct FString>* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.SetChildren");

	UBP_CharacterRelationsComponent_C_SetChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Children != nullptr)
		*Children = params.Children;
	if (ID != nullptr)
		*ID = params.ID;

}


// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetPartner
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     Partner                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Partner_ID                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBP_CharacterRelationsComponent_C::GetPartner(class ABP_BaseCharacter_C** Partner, struct FString* Partner_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.GetPartner");

	UBP_CharacterRelationsComponent_C_GetPartner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Partner != nullptr)
		*Partner = params.Partner;
	if (Partner_ID != nullptr)
		*Partner_ID = params.Partner_ID;

}


// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.RemoveChild
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     Child                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterRelationsComponent_C::RemoveChild(class ABP_BaseCharacter_C* Child)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.RemoveChild");

	UBP_CharacterRelationsComponent_C_RemoveChild_Params params;
	params.Child = Child;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AddChild
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     Child                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 ChildID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_CharacterRelationsComponent_C::AddChild(class ABP_BaseCharacter_C* Child, const struct FString& ChildID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.AddChild");

	UBP_CharacterRelationsComponent_C_AddChild_Params params;
	params.Child = Child;
	params.ChildID = ChildID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.RemovePartner
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_CharacterRelationsComponent_C::RemovePartner()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.RemovePartner");

	UBP_CharacterRelationsComponent_C_RemovePartner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.SetPartner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     Partner                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 PartnerID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_CharacterRelationsComponent_C::SetPartner(class ABP_BaseCharacter_C* Partner, const struct FString& PartnerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.SetPartner");

	UBP_CharacterRelationsComponent_C_SetPartner_Params params;
	params.Partner = Partner;
	params.PartnerID = PartnerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.DecreaseAffection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterRelationsComponent_C::DecreaseAffection(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.DecreaseAffection");

	UBP_CharacterRelationsComponent_C_DecreaseAffection_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.IncreaseAffection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CharacterRelationsComponent_C::IncreaseAffection(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.IncreaseAffection");

	UBP_CharacterRelationsComponent_C_IncreaseAffection_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.OnChildrenChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_CharacterRelationsComponent_C::OnChildrenChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.OnChildrenChanged__DelegateSignature");

	UBP_CharacterRelationsComponent_C_OnChildrenChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.OnPartnerChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_CharacterRelationsComponent_C::OnPartnerChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CharacterRelationsComponent.BP_CharacterRelationsComponent_C.OnPartnerChanged__DelegateSignature");

	UBP_CharacterRelationsComponent_C_OnPartnerChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_CharacterRelationsComponent_C::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(HouseReference, ABP_MasterBuilding_C);
	READ_PTR_FULL(Partner, ABP_BaseCharacter_C);
	READ_PTR_FULL(Mother, ABP_BaseCharacter_C);
	READ_PTR_FULL(Father, ABP_BaseCharacter_C);
	READ_PTR_FULL(WorkPlaceReference, ABP_MasterBuilding_C);
	READ_PTR_FULL(InDialogueCharacter, ACharacter);
	READ_PTR_FULL(ActualDialogue, UDialogue);
}

void UBP_CharacterRelationsComponent_C::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(HouseReference);
	DELE_PTR_FULL(Partner);
	DELE_PTR_FULL(Mother);
	DELE_PTR_FULL(Father);
	DELE_PTR_FULL(WorkPlaceReference);
	DELE_PTR_FULL(InDialogueCharacter);
	DELE_PTR_FULL(ActualDialogue);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
