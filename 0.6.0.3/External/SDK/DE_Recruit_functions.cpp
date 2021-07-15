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

// Function DE_Recruit.DE_Recruit_C.SetBehavior
// (BlueprintCallable, BlueprintEvent)
void UDE_Recruit_C::SetBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_Recruit.DE_Recruit_C.SetBehavior");

	UDE_Recruit_C_SetBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DE_Recruit.DE_Recruit_C.RecieveEventTriggered
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       ConsideringPlayer              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  NPCActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDE_Recruit_C::RecieveEventTriggered(class APlayerController* ConsideringPlayer, class AActor* NPCActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_Recruit.DE_Recruit_C.RecieveEventTriggered");

	UDE_Recruit_C_RecieveEventTriggered_Params params;
	params.ConsideringPlayer = ConsideringPlayer;
	params.NPCActor = NPCActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DE_Recruit.DE_Recruit_C.ExecuteUbergraph_DE_Recruit
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDE_Recruit_C::ExecuteUbergraph_DE_Recruit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_Recruit.DE_Recruit_C.ExecuteUbergraph_DE_Recruit");

	UDE_Recruit_C_ExecuteUbergraph_DE_Recruit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UDE_Recruit_C::AfterRead()
{
	UDialogueEvents::AfterRead();

	READ_PTR_FULL(AIControllerReference, AAIC_NPC_C);
	READ_PTR_FULL(NPCReference, ABP_NPC_C);
	READ_PTR_FULL(PCPlayerReference, APC_Player_C);
}

void UDE_Recruit_C::BeforeDelete()
{
	UDialogueEvents::BeforeDelete();

	DELE_PTR_FULL(AIControllerReference);
	DELE_PTR_FULL(NPCReference);
	DELE_PTR_FULL(PCPlayerReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
