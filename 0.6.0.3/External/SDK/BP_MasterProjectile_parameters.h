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

// Function BP_MasterProjectile.BP_MasterProjectile_C.ShouldSimulatePhysics
struct ABP_MasterProjectile_C_ShouldSimulatePhysics_Params
{
	TEnumAsByte<PhysicsCore_EPhysicalSurface>          SurfaceType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SimulatePhysics;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AddImpulse;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterProjectile.BP_MasterProjectile_C.PlayHitSoundAtLocation
struct ABP_MasterProjectile_C_PlayHitSoundAtLocation_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<PhysicsCore_EPhysicalSurface>          SurfaceType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterProjectile.BP_MasterProjectile_C.CalculateImpaleAmount
struct ABP_MasterProjectile_C_CalculateImpaleAmount_Params
{
	struct FVector                                     LocalLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BoneDamagePercent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterProjectile.BP_MasterProjectile_C.CheckTags
struct ABP_MasterProjectile_C_CheckTags_Params
{
	class AActor*                                      ActorToCheck;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterProjectile.BP_MasterProjectile_C.Hit Bone Detection
struct ABP_MasterProjectile_C_Hit_Bone_Detection_Params
{
	struct FName                                       HitBoneName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamagePercent;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldAttach;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterProjectile.BP_MasterProjectile_C.ApplyHitImpulse
struct ABP_MasterProjectile_C_ApplyHitImpulse_Params
{
	class UPrimitiveComponent*                         Component;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HitNormal;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       BoneName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterProjectile.BP_MasterProjectile_C.SpawnImpaledItem
struct ABP_MasterProjectile_C_SpawnImpaledItem_Params
{
	class USceneComponent*                             Component;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SocketName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Owner;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<PhysicsCore_EPhysicalSurface>          SurfaceType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Item_Row_Name;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterProjectile.BP_MasterProjectile_C.Hit
struct ABP_MasterProjectile_C_Hit_Params
{
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_MasterProjectile.BP_MasterProjectile_C.UserConstructionScript
struct ABP_MasterProjectile_C_UserConstructionScript_Params
{
};

// Function BP_MasterProjectile.BP_MasterProjectile_C.ReceiveBeginPlay
struct ABP_MasterProjectile_C_ReceiveBeginPlay_Params
{
};

// Function BP_MasterProjectile.BP_MasterProjectile_C.Trace
struct ABP_MasterProjectile_C_Trace_Params
{
};

// Function BP_MasterProjectile.BP_MasterProjectile_C.ReceiveTick
struct ABP_MasterProjectile_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterProjectile.BP_MasterProjectile_C.UpdateLastSocketPositions
struct ABP_MasterProjectile_C_UpdateLastSocketPositions_Params
{
};

// Function BP_MasterProjectile.BP_MasterProjectile_C.BreakLoop
struct ABP_MasterProjectile_C_BreakLoop_Params
{
};

// Function BP_MasterProjectile.BP_MasterProjectile_C.ExecuteUbergraph_BP_MasterProjectile
struct ABP_MasterProjectile_C_ExecuteUbergraph_BP_MasterProjectile_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
