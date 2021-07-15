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

// Function WaterCollider.WaterCollider_C.TeleportNPC
struct AWaterCollider_C_TeleportNPC_Params
{
	class ABP_NPC_C*                                   NPC;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WaterCollider.WaterCollider_C.CalculateTargetLocation
struct AWaterCollider_C_CalculateTargetLocation_Params
{
	class ABP_PlayerCharacter_C*                       PlayerCharacterReference;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     TargetPosition;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     LookAtPosition;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WaterCollider.WaterCollider_C.UserConstructionScript
struct AWaterCollider_C_UserConstructionScript_Params
{
};

// Function WaterCollider.WaterCollider_C.ReceiveActorBeginOverlap
struct AWaterCollider_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WaterCollider.WaterCollider_C.TeleportPlayer
struct AWaterCollider_C_TeleportPlayer_Params
{
};

// Function WaterCollider.WaterCollider_C.SelectBehaviour
struct AWaterCollider_C_SelectBehaviour_Params
{
	class ABP_PlayerCharacter_C*                       PlayerReference;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      MountReference;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WaterCollider.WaterCollider_C.MovePlayer
struct AWaterCollider_C_MovePlayer_Params
{
};

// Function WaterCollider.WaterCollider_C.ExecuteUbergraph_WaterCollider
struct AWaterCollider_C_ExecuteUbergraph_WaterCollider_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
