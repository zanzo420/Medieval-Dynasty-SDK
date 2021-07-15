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

// Function DE_GoalTalk.DE_GoalTalk_C.Execute
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 NPCActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDE_GoalTalk_C::Execute(class UObject* NPCActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_GoalTalk.DE_GoalTalk_C.Execute");

	UDE_GoalTalk_C_Execute_Params params;
	params.NPCActor = NPCActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DE_GoalTalk.DE_GoalTalk_C.RecieveEventTriggered
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       ConsideringPlayer              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  NPCActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDE_GoalTalk_C::RecieveEventTriggered(class APlayerController* ConsideringPlayer, class AActor* NPCActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_GoalTalk.DE_GoalTalk_C.RecieveEventTriggered");

	UDE_GoalTalk_C_RecieveEventTriggered_Params params;
	params.ConsideringPlayer = ConsideringPlayer;
	params.NPCActor = NPCActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DE_GoalTalk.DE_GoalTalk_C.ExecuteUbergraph_DE_GoalTalk
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDE_GoalTalk_C::ExecuteUbergraph_DE_GoalTalk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_GoalTalk.DE_GoalTalk_C.ExecuteUbergraph_DE_GoalTalk");

	UDE_GoalTalk_C_ExecuteUbergraph_DE_GoalTalk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UDE_GoalTalk_C::AfterRead()
{
	UDialogueEvents::AfterRead();

}

void UDE_GoalTalk_C::BeforeDelete()
{
	UDialogueEvents::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
