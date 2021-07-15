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

// Function BTTask_StartSkinning.BTTask_StartSkinning_C.OnFail_33011E9C401DE1ACE0783C923D5C04FC
struct UBTTask_StartSkinning_C_OnFail_33011E9C401DE1ACE0783C923D5C04FC_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_StartSkinning.BTTask_StartSkinning_C.OnSuccess_33011E9C401DE1ACE0783C923D5C04FC
struct UBTTask_StartSkinning_C_OnSuccess_33011E9C401DE1ACE0783C923D5C04FC_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_StartSkinning.BTTask_StartSkinning_C.ReceiveExecuteAI
struct UBTTask_StartSkinning_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_StartSkinning.BTTask_StartSkinning_C.Finish
struct UBTTask_StartSkinning_C_Finish_Params
{
};

// Function BTTask_StartSkinning.BTTask_StartSkinning_C.ExecuteUbergraph_BTTask_StartSkinning
struct UBTTask_StartSkinning_C_ExecuteUbergraph_BTTask_StartSkinning_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
