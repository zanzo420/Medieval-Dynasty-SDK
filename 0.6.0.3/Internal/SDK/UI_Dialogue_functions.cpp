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

// Function UI_Dialogue.UI_Dialogue_C.IsAnythingHovered
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Dialogue_C::IsAnythingHovered(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Dialogue.UI_Dialogue_C.IsAnythingHovered");

	UUI_Dialogue_C_IsAnythingHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function UI_Dialogue.UI_Dialogue_C.Get_King_Age
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 KingAge                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UUI_Dialogue_C::Get_King_Age(struct FString* KingAge)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Dialogue.UI_Dialogue_C.Get_King_Age");

	UUI_Dialogue_C_Get_King_Age_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (KingAge != nullptr)
		*KingAge = params.KingAge;

}


// Function UI_Dialogue.UI_Dialogue_C.Get_Approval_Required
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 taxAmount                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UUI_Dialogue_C::Get_Approval_Required(struct FString* taxAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Dialogue.UI_Dialogue_C.Get_Approval_Required");

	UUI_Dialogue_C_Get_Approval_Required_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (taxAmount != nullptr)
		*taxAmount = params.taxAmount;

}


// Function UI_Dialogue.UI_Dialogue_C.Get_King_Name
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 taxAmount                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UUI_Dialogue_C::Get_King_Name(struct FString* taxAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Dialogue.UI_Dialogue_C.Get_King_Name");

	UUI_Dialogue_C_Get_King_Name_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (taxAmount != nullptr)
		*taxAmount = params.taxAmount;

}


// Function UI_Dialogue.UI_Dialogue_C.Get_GENDER_FEMALE
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 taxAmount                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UUI_Dialogue_C::Get_GENDER_FEMALE(struct FString* taxAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Dialogue.UI_Dialogue_C.Get_GENDER_FEMALE");

	UUI_Dialogue_C_Get_GENDER_FEMALE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (taxAmount != nullptr)
		*taxAmount = params.taxAmount;

}


// Function UI_Dialogue.UI_Dialogue_C.Get_GENDER_MALE
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 taxAmount                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UUI_Dialogue_C::Get_GENDER_MALE(struct FString* taxAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Dialogue.UI_Dialogue_C.Get_GENDER_MALE");

	UUI_Dialogue_C_Get_GENDER_MALE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (taxAmount != nullptr)
		*taxAmount = params.taxAmount;

}


// Function UI_Dialogue.UI_Dialogue_C.Get_FEMALE_TO_FEMALE
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 taxAmount                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UUI_Dialogue_C::Get_FEMALE_TO_FEMALE(struct FString* taxAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Dialogue.UI_Dialogue_C.Get_FEMALE_TO_FEMALE");

	UUI_Dialogue_C_Get_FEMALE_TO_FEMALE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (taxAmount != nullptr)
		*taxAmount = params.taxAmount;

}


// Function UI_Dialogue.UI_Dialogue_C.Get_FEMALE_TO_MALE
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 taxAmount                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UUI_Dialogue_C::Get_FEMALE_TO_MALE(struct FString* taxAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Dialogue.UI_Dialogue_C.Get_FEMALE_TO_MALE");

	UUI_Dialogue_C_Get_FEMALE_TO_MALE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (taxAmount != nullptr)
		*taxAmount = params.taxAmount;

}


// Function UI_Dialogue.UI_Dialogue_C.Get_MALE_TO_FEMALE
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 taxAmount                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UUI_Dialogue_C::Get_MALE_TO_FEMALE(struct FString* taxAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Dialogue.UI_Dialogue_C.Get_MALE_TO_FEMALE");

	UUI_Dialogue_C_Get_MALE_TO_FEMALE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (taxAmount != nullptr)
		*taxAmount = params.taxAmount;

}


// Function UI_Dialogue.UI_Dialogue_C.Get_MALE_TO_MALE
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 taxAmount                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UUI_Dialogue_C::Get_MALE_TO_MALE(struct FString* taxAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Dialogue.UI_Dialogue_C.Get_MALE_TO_MALE");

	UUI_Dialogue_C_Get_MALE_TO_MALE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (taxAmount != nullptr)
		*taxAmount = params.taxAmount;

}


// Function UI_Dialogue.UI_Dialogue_C.Get_debtAmount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 taxAmount                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UUI_Dialogue_C::Get_debtAmount(struct FString* taxAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Dialogue.UI_Dialogue_C.Get_debtAmount");

	UUI_Dialogue_C_Get_debtAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (taxAmount != nullptr)
		*taxAmount = params.taxAmount;

}


// Function UI_Dialogue.UI_Dialogue_C.Get_Reputation_To_Join
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Reputation_To_Join             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UUI_Dialogue_C::Get_Reputation_To_Join(struct FString* Reputation_To_Join)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Dialogue.UI_Dialogue_C.Get_Reputation_To_Join");

	UUI_Dialogue_C_Get_Reputation_To_Join_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reputation_To_Join != nullptr)
		*Reputation_To_Join = params.Reputation_To_Join;

}


// Function UI_Dialogue.UI_Dialogue_C.Get_Proposal_Chance
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 Proposal_Chance                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UUI_Dialogue_C::Get_Proposal_Chance(struct FString* Proposal_Chance)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Dialogue.UI_Dialogue_C.Get_Proposal_Chance");

	UUI_Dialogue_C_Get_Proposal_Chance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Proposal_Chance != nullptr)
		*Proposal_Chance = params.Proposal_Chance;

}


// Function UI_Dialogue.UI_Dialogue_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UUI_Dialogue_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Dialogue.UI_Dialogue_C.OnKeyUp");

	UUI_Dialogue_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UI_Dialogue.UI_Dialogue_C.Get_CHARACTER_NAME
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 taxAmount                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UUI_Dialogue_C::Get_CHARACTER_NAME(struct FString* taxAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Dialogue.UI_Dialogue_C.Get_CHARACTER_NAME");

	UUI_Dialogue_C_Get_CHARACTER_NAME_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (taxAmount != nullptr)
		*taxAmount = params.taxAmount;

}


// Function UI_Dialogue.UI_Dialogue_C.Get_taxAmount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 taxAmount                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UUI_Dialogue_C::Get_taxAmount(struct FString* taxAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Dialogue.UI_Dialogue_C.Get_taxAmount");

	UUI_Dialogue_C_Get_taxAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (taxAmount != nullptr)
		*taxAmount = params.taxAmount;

}


// Function UI_Dialogue.UI_Dialogue_C.ReplaceVarStrings
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   InText                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UUI_Dialogue_C::ReplaceVarStrings(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Dialogue.UI_Dialogue_C.ReplaceVarStrings");

	UUI_Dialogue_C_ReplaceVarStrings_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UI_Dialogue.UI_Dialogue_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UUI_Dialogue_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Dialogue.UI_Dialogue_C.OnKeyDown");

	UUI_Dialogue_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UI_Dialogue.UI_Dialogue_C.ToNpcReply
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDialogueNode           PlayerReply                    (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                           FireEvents                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Dialogue_C::ToNpcReply(const struct FDialogueNode& PlayerReply, bool FireEvents)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Dialogue.UI_Dialogue_C.ToNpcReply");

	UUI_Dialogue_C_ToNpcReply_Params params;
	params.PlayerReply = PlayerReply;
	params.FireEvents = FireEvents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Dialogue.UI_Dialogue_C.DoEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDialogueNode           Node                           (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
void UUI_Dialogue_C::DoEvents(const struct FDialogueNode& Node)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Dialogue.UI_Dialogue_C.DoEvents");

	UUI_Dialogue_C_DoEvents_Params params;
	params.Node = Node;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Dialogue.UI_Dialogue_C.CheckConditions
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDialogueNode           Node                           (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                           Ok                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Dialogue_C::CheckConditions(const struct FDialogueNode& Node, bool* Ok)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Dialogue.UI_Dialogue_C.CheckConditions");

	UUI_Dialogue_C_CheckConditions_Params params;
	params.Node = Node;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Ok != nullptr)
		*Ok = params.Ok;

}


// Function UI_Dialogue.UI_Dialogue_C.GetContinueColorAndOpacity
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateColor UUI_Dialogue_C::GetContinueColorAndOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Dialogue.UI_Dialogue_C.GetContinueColorAndOpacity");

	UUI_Dialogue_C_GetContinueColorAndOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UI_Dialogue.UI_Dialogue_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Dialogue_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Dialogue.UI_Dialogue_C.Construct");

	UUI_Dialogue_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Dialogue.UI_Dialogue_C.DisplayNpcNode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDialogueNode           NpcNode                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
void UUI_Dialogue_C::DisplayNpcNode(const struct FDialogueNode& NpcNode)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Dialogue.UI_Dialogue_C.DisplayNpcNode");

	UUI_Dialogue_C_DisplayNpcNode_Params params;
	params.NpcNode = NpcNode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Dialogue.UI_Dialogue_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUI_Dialogue_C::BndEvt__NextButton_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Dialogue.UI_Dialogue_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature");

	UUI_Dialogue_C_BndEvt__NextButton_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Dialogue.UI_Dialogue_C.DisplayReplies
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDialogueNode>   Replies                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UUI_Dialogue_C::DisplayReplies(TArray<struct FDialogueNode> Replies)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Dialogue.UI_Dialogue_C.DisplayReplies");

	UUI_Dialogue_C_DisplayReplies_Params params;
	params.Replies = Replies;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Dialogue.UI_Dialogue_C.GamepadReply
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Click                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Dialogue_C::GamepadReply(int Index, bool Click)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Dialogue.UI_Dialogue_C.GamepadReply");

	UUI_Dialogue_C_GamepadReply_Params params;
	params.Index = Index;
	params.Click = Click;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Dialogue.UI_Dialogue_C.SimulateNextClicked
// (BlueprintCallable, BlueprintEvent)
void UUI_Dialogue_C::SimulateNextClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Dialogue.UI_Dialogue_C.SimulateNextClicked");

	UUI_Dialogue_C_SimulateNextClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Dialogue.UI_Dialogue_C.SimulateNextHovered
// (BlueprintCallable, BlueprintEvent)
void UUI_Dialogue_C::SimulateNextHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Dialogue.UI_Dialogue_C.SimulateNextHovered");

	UUI_Dialogue_C_SimulateNextHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Dialogue.UI_Dialogue_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Dialogue_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Dialogue.UI_Dialogue_C.Destruct");

	UUI_Dialogue_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Dialogue.UI_Dialogue_C.PlayPlayerReply
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDialogueNode           PlayerNode                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
void UUI_Dialogue_C::PlayPlayerReply(const struct FDialogueNode& PlayerNode)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Dialogue.UI_Dialogue_C.PlayPlayerReply");

	UUI_Dialogue_C_PlayPlayerReply_Params params;
	params.PlayerNode = PlayerNode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Dialogue.UI_Dialogue_C.GoToNpcReplyTimer
// (BlueprintCallable, BlueprintEvent)
void UUI_Dialogue_C::GoToNpcReplyTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Dialogue.UI_Dialogue_C.GoToNpcReplyTimer");

	UUI_Dialogue_C_GoToNpcReplyTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Dialogue.UI_Dialogue_C.HighlightSelectedReply
// (BlueprintCallable, BlueprintEvent)
void UUI_Dialogue_C::HighlightSelectedReply()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Dialogue.UI_Dialogue_C.HighlightSelectedReply");

	UUI_Dialogue_C_HighlightSelectedReply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Dialogue.UI_Dialogue_C.MouseSelectReply
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Reply_C*             WidgetThatWantsSelection       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Dialogue_C::MouseSelectReply(class UUI_Reply_C* WidgetThatWantsSelection)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Dialogue.UI_Dialogue_C.MouseSelectReply");

	UUI_Dialogue_C_MouseSelectReply_Params params;
	params.WidgetThatWantsSelection = WidgetThatWantsSelection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Dialogue.UI_Dialogue_C.PlayDialogueSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Dialogue_C::PlayDialogueSound(class USoundBase* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Dialogue.UI_Dialogue_C.PlayDialogueSound");

	UUI_Dialogue_C_PlayDialogueSound_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Dialogue.UI_Dialogue_C.StopDialogueSound
// (BlueprintCallable, BlueprintEvent)
void UUI_Dialogue_C::StopDialogueSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Dialogue.UI_Dialogue_C.StopDialogueSound");

	UUI_Dialogue_C_StopDialogueSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Dialogue.UI_Dialogue_C.UpdateNPCParameters
// (BlueprintCallable, BlueprintEvent)
void UUI_Dialogue_C::UpdateNPCParameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Dialogue.UI_Dialogue_C.UpdateNPCParameters");

	UUI_Dialogue_C_UpdateNPCParameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Dialogue.UI_Dialogue_C.Reconstruct
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDialogue*               InDialogue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Dialogue_C::Reconstruct(class UDialogue* InDialogue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Dialogue.UI_Dialogue_C.Reconstruct");

	UUI_Dialogue_C_Reconstruct_Params params;
	params.InDialogue = InDialogue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Dialogue.UI_Dialogue_C.ExecuteUbergraph_UI_Dialogue
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Dialogue_C::ExecuteUbergraph_UI_Dialogue(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Dialogue.UI_Dialogue_C.ExecuteUbergraph_UI_Dialogue");

	UUI_Dialogue_C_ExecuteUbergraph_UI_Dialogue_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
