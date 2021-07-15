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

// Function BP_GroupManager.BP_GroupManager_C.fnPopulateBehavior
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_GroupManager_C::fnPopulateBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroupManager.BP_GroupManager_C.fnPopulateBehavior");

	ABP_GroupManager_C_fnPopulateBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroupManager.BP_GroupManager_C.OnRep_AddGroupTag
// (BlueprintCallable, BlueprintEvent)
void ABP_GroupManager_C::OnRep_AddGroupTag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroupManager.BP_GroupManager_C.OnRep_AddGroupTag");

	ABP_GroupManager_C_OnRep_AddGroupTag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroupManager.BP_GroupManager_C.fnSetNoDamageTags
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_GroupManager_C::fnSetNoDamageTags()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroupManager.BP_GroupManager_C.fnSetNoDamageTags");

	ABP_GroupManager_C_fnSetNoDamageTags_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroupManager.BP_GroupManager_C.OnRep_SetNoDamage
// (BlueprintCallable, BlueprintEvent)
void ABP_GroupManager_C::OnRep_SetNoDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroupManager.BP_GroupManager_C.OnRep_SetNoDamage");

	ABP_GroupManager_C_OnRep_SetNoDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroupManager.BP_GroupManager_C.fnSetNewLeader
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_GroupManager_C::fnSetNewLeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroupManager.BP_GroupManager_C.fnSetNewLeader");

	ABP_GroupManager_C_fnSetNewLeader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroupManager.BP_GroupManager_C.OnRep_ChooseLeader
// (BlueprintCallable, BlueprintEvent)
void ABP_GroupManager_C::OnRep_ChooseLeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroupManager.BP_GroupManager_C.OnRep_ChooseLeader");

	ABP_GroupManager_C_OnRep_ChooseLeader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroupManager.BP_GroupManager_C.fnSetGroupEngageBehavior
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  EngagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroupManager_C::fnSetGroupEngageBehavior(class AActor* EngagedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroupManager.BP_GroupManager_C.fnSetGroupEngageBehavior");

	ABP_GroupManager_C_fnSetGroupEngageBehavior_Params params;
	params.EngagedActor = EngagedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroupManager.BP_GroupManager_C.fnGetRandomMember
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_GroundAnimalBase_C*  RandomMember                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroupManager_C::fnGetRandomMember(class ABP_GroundAnimalBase_C** RandomMember)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroupManager.BP_GroupManager_C.fnGetRandomMember");

	ABP_GroupManager_C_fnGetRandomMember_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RandomMember != nullptr)
		*RandomMember = params.RandomMember;

}


// Function BP_GroupManager.BP_GroupManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_GroupManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroupManager.BP_GroupManager_C.ReceiveBeginPlay");

	ABP_GroupManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroupManager.BP_GroupManager_C.EventSetGroup
// (BlueprintCallable, BlueprintEvent)
void ABP_GroupManager_C::EventSetGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroupManager.BP_GroupManager_C.EventSetGroup");

	ABP_GroupManager_C_EventSetGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroupManager.BP_GroupManager_C.EventChooseNewLeader
// (BlueprintCallable, BlueprintEvent)
void ABP_GroupManager_C::EventChooseNewLeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroupManager.BP_GroupManager_C.EventChooseNewLeader");

	ABP_GroupManager_C_EventChooseNewLeader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroupManager.BP_GroupManager_C.EventLeaveGroup
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_GroundAnimalBase_C*  Animal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroupManager_C::EventLeaveGroup(class ABP_GroundAnimalBase_C* Animal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroupManager.BP_GroupManager_C.EventLeaveGroup");

	ABP_GroupManager_C_EventLeaveGroup_Params params;
	params.Animal = Animal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GroupManager.BP_GroupManager_C.ExecuteUbergraph_BP_GroupManager
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GroupManager_C::ExecuteUbergraph_BP_GroupManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GroupManager.BP_GroupManager_C.ExecuteUbergraph_BP_GroupManager");

	ABP_GroupManager_C_ExecuteUbergraph_BP_GroupManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_GroupManager_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(Billboard, UBillboardComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
	READ_PTR_FULL(GroupLeader, ABP_GroundAnimalBase_C);
	READ_PTR_FULL(OldGroupLeader, ABP_GroundAnimalBase_C);
}

void ABP_GroupManager_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(Billboard);
	DELE_PTR_FULL(DefaultSceneRoot);
	DELE_PTR_FULL(GroupLeader);
	DELE_PTR_FULL(OldGroupLeader);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
