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

// Function BP_MasterProjectile.BP_MasterProjectile_C.ShouldSimulatePhysics
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<PhysicsCore_EPhysicalSurface> SurfaceType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           SimulatePhysics                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           AddImpulse                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterProjectile_C::ShouldSimulatePhysics(TEnumAsByte<PhysicsCore_EPhysicalSurface> SurfaceType, class AActor* Target, bool* SimulatePhysics, bool* AddImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.ShouldSimulatePhysics");

	ABP_MasterProjectile_C_ShouldSimulatePhysics_Params params;
	params.SurfaceType = SurfaceType;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SimulatePhysics != nullptr)
		*SimulatePhysics = params.SimulatePhysics;
	if (AddImpulse != nullptr)
		*AddImpulse = params.AddImpulse;

}


// Function BP_MasterProjectile.BP_MasterProjectile_C.PlayHitSoundAtLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<PhysicsCore_EPhysicalSurface> SurfaceType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterProjectile_C::PlayHitSoundAtLocation(const struct FVector& Location, TEnumAsByte<PhysicsCore_EPhysicalSurface> SurfaceType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.PlayHitSoundAtLocation");

	ABP_MasterProjectile_C_PlayHitSoundAtLocation_Params params;
	params.Location = Location;
	params.SurfaceType = SurfaceType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterProjectile.BP_MasterProjectile_C.CalculateImpaleAmount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 LocalLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          BoneDamagePercent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector ABP_MasterProjectile_C::CalculateImpaleAmount(const struct FVector& LocalLocation, float BoneDamagePercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.CalculateImpaleAmount");

	ABP_MasterProjectile_C_CalculateImpaleAmount_Params params;
	params.LocalLocation = LocalLocation;
	params.BoneDamagePercent = BoneDamagePercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_MasterProjectile.BP_MasterProjectile_C.CheckTags
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  ActorToCheck                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterProjectile_C::CheckTags(class AActor* ActorToCheck, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.CheckTags");

	ABP_MasterProjectile_C_CheckTags_Params params;
	params.ActorToCheck = ActorToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_MasterProjectile.BP_MasterProjectile_C.Hit Bone Detection
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   HitBoneName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DamagePercent                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ShouldAttach                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterProjectile_C::Hit_Bone_Detection(const struct FName& HitBoneName, float* DamagePercent, bool* ShouldAttach)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.Hit Bone Detection");

	ABP_MasterProjectile_C_Hit_Bone_Detection_Params params;
	params.HitBoneName = HitBoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DamagePercent != nullptr)
		*DamagePercent = params.DamagePercent;
	if (ShouldAttach != nullptr)
		*ShouldAttach = params.ShouldAttach;

}


// Function BP_MasterProjectile.BP_MasterProjectile_C.ApplyHitImpulse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterProjectile_C::ApplyHitImpulse(class UPrimitiveComponent* Component, const struct FVector& HitNormal, const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.ApplyHitImpulse");

	ABP_MasterProjectile_C_ApplyHitImpulse_Params params;
	params.Component = Component;
	params.HitNormal = HitNormal;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterProjectile.BP_MasterProjectile_C.SpawnImpaledItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   SocketName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<PhysicsCore_EPhysicalSurface> SurfaceType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   Item_Row_Name                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterProjectile_C::SpawnImpaledItem(class USceneComponent* Component, const struct FName& SocketName, class AActor* Owner, const struct FVector& Location, TEnumAsByte<PhysicsCore_EPhysicalSurface> SurfaceType, const struct FName& Item_Row_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.SpawnImpaledItem");

	ABP_MasterProjectile_C_SpawnImpaledItem_Params params;
	params.Component = Component;
	params.SocketName = SocketName;
	params.Owner = Owner;
	params.Location = Location;
	params.SurfaceType = SurfaceType;
	params.Item_Row_Name = Item_Row_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterProjectile.BP_MasterProjectile_C.Hit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_MasterProjectile_C::Hit(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.Hit");

	ABP_MasterProjectile_C_Hit_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterProjectile.BP_MasterProjectile_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_MasterProjectile_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.UserConstructionScript");

	ABP_MasterProjectile_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterProjectile.BP_MasterProjectile_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_MasterProjectile_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.ReceiveBeginPlay");

	ABP_MasterProjectile_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterProjectile.BP_MasterProjectile_C.Trace
// (BlueprintCallable, BlueprintEvent)
void ABP_MasterProjectile_C::Trace()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.Trace");

	ABP_MasterProjectile_C_Trace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterProjectile.BP_MasterProjectile_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterProjectile_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.ReceiveTick");

	ABP_MasterProjectile_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterProjectile.BP_MasterProjectile_C.UpdateLastSocketPositions
// (BlueprintCallable, BlueprintEvent)
void ABP_MasterProjectile_C::UpdateLastSocketPositions()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.UpdateLastSocketPositions");

	ABP_MasterProjectile_C_UpdateLastSocketPositions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterProjectile.BP_MasterProjectile_C.BreakLoop
// (BlueprintCallable, BlueprintEvent)
void ABP_MasterProjectile_C::BreakLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.BreakLoop");

	ABP_MasterProjectile_C_BreakLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterProjectile.BP_MasterProjectile_C.ExecuteUbergraph_BP_MasterProjectile
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterProjectile_C::ExecuteUbergraph_BP_MasterProjectile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterProjectile.BP_MasterProjectile_C.ExecuteUbergraph_BP_MasterProjectile");

	ABP_MasterProjectile_C_ExecuteUbergraph_BP_MasterProjectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
