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

// Function DC_Flirt.DC_Flirt_C.Change NPCReply
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_AffectionDialogue   Dialogue                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// TArray<class UDialogueConditions*> Conditions                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UDialogueEvents*> Events                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ABP_NPC_C*               NPC                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDC_Flirt_C::Change_NPCReply(const struct FST_AffectionDialogue& Dialogue, TArray<class UDialogueConditions*>* Conditions, TArray<class UDialogueEvents*>* Events, class ABP_NPC_C* NPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function DC_Flirt.DC_Flirt_C.Change NPCReply");

	UDC_Flirt_C_Change_NPCReply_Params params;
	params.Dialogue = Dialogue;
	params.NPC = NPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Conditions != nullptr)
		*Conditions = params.Conditions;
	if (Events != nullptr)
		*Events = params.Events;

}


// Function DC_Flirt.DC_Flirt_C.ChangePlayerDialogue
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UDialogueConditions*> Conditions                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FST_AffectionDialogue   Diaogue                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UDC_Flirt_C::ChangePlayerDialogue(TArray<class UDialogueConditions*>* Conditions, const struct FST_AffectionDialogue& Diaogue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DC_Flirt.DC_Flirt_C.ChangePlayerDialogue");

	UDC_Flirt_C_ChangePlayerDialogue_Params params;
	params.Diaogue = Diaogue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Conditions != nullptr)
		*Conditions = params.Conditions;

}


// Function DC_Flirt.DC_Flirt_C.RareDialogues
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           Dialogues                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UDC_Flirt_C::RareDialogues(TArray<struct FName>* Dialogues)
{
	static auto fn = UObject::FindObject<UFunction>("Function DC_Flirt.DC_Flirt_C.RareDialogues");

	UDC_Flirt_C_RareDialogues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Dialogues != nullptr)
		*Dialogues = params.Dialogues;

}


// Function DC_Flirt.DC_Flirt_C.Remove Unavilable Dialogues
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           DialogueHandlers               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ABP_NPC_C*               NPC                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDC_Flirt_C::Remove_Unavilable_Dialogues(TArray<struct FName>* DialogueHandlers, class ABP_NPC_C* NPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function DC_Flirt.DC_Flirt_C.Remove Unavilable Dialogues");

	UDC_Flirt_C_Remove_Unavilable_Dialogues_Params params;
	params.NPC = NPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DialogueHandlers != nullptr)
		*DialogueHandlers = params.DialogueHandlers;

}


// Function DC_Flirt.DC_Flirt_C.DrawPlayerDialogue
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_NPC_C*               NPC                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_AffectionDialogue   D1                             (Parm, OutParm, HasGetValueTypeHash)
// struct FST_AffectionDialogue   D2                             (Parm, OutParm, HasGetValueTypeHash)
// struct FST_AffectionDialogue   D3                             (Parm, OutParm, HasGetValueTypeHash)
void UDC_Flirt_C::DrawPlayerDialogue(class ABP_NPC_C* NPC, struct FST_AffectionDialogue* D1, struct FST_AffectionDialogue* D2, struct FST_AffectionDialogue* D3)
{
	static auto fn = UObject::FindObject<UFunction>("Function DC_Flirt.DC_Flirt_C.DrawPlayerDialogue");

	UDC_Flirt_C_DrawPlayerDialogue_Params params;
	params.NPC = NPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (D1 != nullptr)
		*D1 = params.D1;
	if (D2 != nullptr)
		*D2 = params.D2;
	if (D3 != nullptr)
		*D3 = params.D3;

}


// Function DC_Flirt.DC_Flirt_C.IsConditionMet
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       ConsideringPlayer              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  NPCActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UDC_Flirt_C::IsConditionMet(class APlayerController* ConsideringPlayer, class AActor* NPCActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DC_Flirt.DC_Flirt_C.IsConditionMet");

	UDC_Flirt_C_IsConditionMet_Params params;
	params.ConsideringPlayer = ConsideringPlayer;
	params.NPCActor = NPCActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UDC_Flirt_C::AfterRead()
{
	UDialogueConditions::AfterRead();

}

void UDC_Flirt_C::BeforeDelete()
{
	UDialogueConditions::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
