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

// Function BP_GroupManager.BP_GroupManager_C.fnPopulateBehavior
struct ABP_GroupManager_C_fnPopulateBehavior_Params
{
};

// Function BP_GroupManager.BP_GroupManager_C.OnRep_AddGroupTag
struct ABP_GroupManager_C_OnRep_AddGroupTag_Params
{
};

// Function BP_GroupManager.BP_GroupManager_C.fnSetNoDamageTags
struct ABP_GroupManager_C_fnSetNoDamageTags_Params
{
};

// Function BP_GroupManager.BP_GroupManager_C.OnRep_SetNoDamage
struct ABP_GroupManager_C_OnRep_SetNoDamage_Params
{
};

// Function BP_GroupManager.BP_GroupManager_C.fnSetNewLeader
struct ABP_GroupManager_C_fnSetNewLeader_Params
{
};

// Function BP_GroupManager.BP_GroupManager_C.OnRep_ChooseLeader
struct ABP_GroupManager_C_OnRep_ChooseLeader_Params
{
};

// Function BP_GroupManager.BP_GroupManager_C.fnSetGroupEngageBehavior
struct ABP_GroupManager_C_fnSetGroupEngageBehavior_Params
{
	class AActor*                                      EngagedActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroupManager.BP_GroupManager_C.fnGetRandomMember
struct ABP_GroupManager_C_fnGetRandomMember_Params
{
	class ABP_GroundAnimalBase_C*                      RandomMember;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroupManager.BP_GroupManager_C.ReceiveBeginPlay
struct ABP_GroupManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_GroupManager.BP_GroupManager_C.EventSetGroup
struct ABP_GroupManager_C_EventSetGroup_Params
{
};

// Function BP_GroupManager.BP_GroupManager_C.EventChooseNewLeader
struct ABP_GroupManager_C_EventChooseNewLeader_Params
{
};

// Function BP_GroupManager.BP_GroupManager_C.EventLeaveGroup
struct ABP_GroupManager_C_EventLeaveGroup_Params
{
	class ABP_GroundAnimalBase_C*                      Animal;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GroupManager.BP_GroupManager_C.ExecuteUbergraph_BP_GroupManager
struct ABP_GroupManager_C_ExecuteUbergraph_BP_GroupManager_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
