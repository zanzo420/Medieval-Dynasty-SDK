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

// Function DialoguePlugin.DialogueEvents.RecieveEventTriggered
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       ConsideringPlayer              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  NPCActor                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDialogueEvents::RecieveEventTriggered(class APlayerController* ConsideringPlayer, class AActor* NPCActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DialoguePlugin.DialogueEvents.RecieveEventTriggered");

	UDialogueEvents_RecieveEventTriggered_Params params;
	params.ConsideringPlayer = ConsideringPlayer;
	params.NPCActor = NPCActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DialoguePlugin.DialogueConditions.IsConditionMet_Internal
// (Native, Public)
// Parameters:
// class APlayerController*       ConsideringPlayer              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  NPCActor                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDialogueConditions::IsConditionMet_Internal(class APlayerController* ConsideringPlayer, class AActor* NPCActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DialoguePlugin.DialogueConditions.IsConditionMet_Internal");

	UDialogueConditions_IsConditionMet_Internal_Params params;
	params.ConsideringPlayer = ConsideringPlayer;
	params.NPCActor = NPCActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DialoguePlugin.DialogueConditions.IsConditionMet
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       ConsideringPlayer              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  NPCActor                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDialogueConditions::IsConditionMet(class APlayerController* ConsideringPlayer, class AActor* NPCActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DialoguePlugin.DialogueConditions.IsConditionMet");

	UDialogueConditions_IsConditionMet_Params params;
	params.ConsideringPlayer = ConsideringPlayer;
	params.NPCActor = NPCActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DialoguePlugin.Dialogue.GetNextNodes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDialogueNode           Node                           (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// TArray<struct FDialogueNode>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
TArray<struct FDialogueNode> UDialogue::GetNextNodes(const struct FDialogueNode& Node)
{
	static auto fn = UObject::FindObject<UFunction>("Function DialoguePlugin.Dialogue.GetNextNodes");

	UDialogue_GetNextNodes_Params params;
	params.Node = Node;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DialoguePlugin.Dialogue.GetFirstNode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDialogueNode           ReturnValue                    (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
struct FDialogueNode UDialogue::GetFirstNode()
{
	static auto fn = UObject::FindObject<UFunction>("Function DialoguePlugin.Dialogue.GetFirstNode");

	UDialogue_GetFirstNode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DialoguePlugin.Dialogue.CleanOuter
// (Final, Native, Public, BlueprintCallable)
void UDialogue::CleanOuter()
{
	static auto fn = UObject::FindObject<UFunction>("Function DialoguePlugin.Dialogue.CleanOuter");

	UDialogue_CleanOuter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DialoguePlugin.Dialogue.CallFunctionByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 FunctionName                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDialogue::STATIC_CallFunctionByName(class UObject* Object, const struct FString& FunctionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DialoguePlugin.Dialogue.CallFunctionByName");

	UDialogue_CallFunctionByName_Params params;
	params.Object = Object;
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DialoguePlugin.Dialogue.AssignPersistentOuter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGameInstance*           inGameInstance                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDialogue::AssignPersistentOuter(class UGameInstance* inGameInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function DialoguePlugin.Dialogue.AssignPersistentOuter");

	UDialogue_AssignPersistentOuter_Params params;
	params.inGameInstance = inGameInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DialoguePlugin.DialogueUserWidget.RunStringReplacer
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 originalString                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 resultString                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDialogueUserWidget::RunStringReplacer(const struct FString& originalString, struct FString* resultString)
{
	static auto fn = UObject::FindObject<UFunction>("Function DialoguePlugin.DialogueUserWidget.RunStringReplacer");

	UDialogueUserWidget_RunStringReplacer_Params params;
	params.originalString = originalString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (resultString != nullptr)
		*resultString = params.resultString;


	return params.ReturnValue;
}


// Function DialoguePlugin.DialogueUserWidget.RunEventsForNode
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDialogueNode           Node                           (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UDialogueUserWidget::RunEventsForNode(const struct FDialogueNode& Node)
{
	static auto fn = UObject::FindObject<UFunction>("Function DialoguePlugin.DialogueUserWidget.RunEventsForNode");

	UDialogueUserWidget_RunEventsForNode_Params params;
	params.Node = Node;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DialoguePlugin.DialogueUserWidget.ReplaceVarStrings
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   InText                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UDialogueUserWidget::ReplaceVarStrings(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function DialoguePlugin.DialogueUserWidget.ReplaceVarStrings");

	UDialogueUserWidget_ReplaceVarStrings_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DialoguePlugin.DialogueUserWidget.IsConditionsMetForNode
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDialogueNode           Node                           (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDialogueUserWidget::IsConditionsMetForNode(const struct FDialogueNode& Node)
{
	static auto fn = UObject::FindObject<UFunction>("Function DialoguePlugin.DialogueUserWidget.IsConditionsMetForNode");

	UDialogueUserWidget_IsConditionsMetForNode_Params params;
	params.Node = Node;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DialoguePlugin.DialogueUserWidget.FindVarStrings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   InText                         (Parm, NativeAccessSpecifierPublic)
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> UDialogueUserWidget::FindVarStrings(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function DialoguePlugin.DialogueUserWidget.FindVarStrings");

	UDialogueUserWidget_FindVarStrings_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
