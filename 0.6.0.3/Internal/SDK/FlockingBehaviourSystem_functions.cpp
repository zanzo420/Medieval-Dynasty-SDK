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

// Function FlockingBehaviourSystem.Boid.ShouldUpdateRotation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABoid::ShouldUpdateRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Boid.ShouldUpdateRotation");

	ABoid_ShouldUpdateRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FlockingBehaviourSystem.Boid.SetGoalSeekingForce
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ForceMultiplier                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABoid::SetGoalSeekingForce(float ForceMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Boid.SetGoalSeekingForce");

	ABoid_SetGoalSeekingForce_Params params;
	params.ForceMultiplier = ForceMultiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlockingBehaviourSystem.Boid.OnSpawnedBP
// (Event, Public, BlueprintEvent)
void ABoid::OnSpawnedBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Boid.OnSpawnedBP");

	ABoid_OnSpawnedBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlockingBehaviourSystem.Boid.OnGoalReached
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class ABoid*                   Boid                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABoid::OnGoalReached(class ABoid* Boid)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Boid.OnGoalReached");

	ABoid_OnGoalReached_Params params;
	params.Boid = Boid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlockingBehaviourSystem.Boid.OnArrivedAtGoal
// (Native, Event, Protected, BlueprintEvent)
void ABoid::OnArrivedAtGoal()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Boid.OnArrivedAtGoal");

	ABoid_OnArrivedAtGoal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlockingBehaviourSystem.Boid.GetTurnSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ABoid::GetTurnSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Boid.GetTurnSpeed");

	ABoid_GetTurnSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FlockingBehaviourSystem.Boid.GetSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ABoid::GetSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Boid.GetSpeed");

	ABoid_GetSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FlockingBehaviourSystem.Boid.GetRotationTurnSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ABoid::GetRotationTurnSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Boid.GetRotationTurnSpeed");

	ABoid_GetRotationTurnSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FlockingBehaviourSystem.Boid.GetPerceptionRadius
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ABoid::GetPerceptionRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Boid.GetPerceptionRadius");

	ABoid_GetPerceptionRadius_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FlockingBehaviourSystem.BoidSkeletal.GetSkeletalMeshComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USkeletalMeshComponent* ABoidSkeletal::GetSkeletalMeshComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.BoidSkeletal.GetSkeletalMeshComponent");

	ABoidSkeletal_GetSkeletalMeshComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FlockingBehaviourSystem.BoidStatic.GetStaticMeshComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UStaticMeshComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UStaticMeshComponent* ABoidStatic::GetStaticMeshComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.BoidStatic.GetStaticMeshComponent");

	ABoidStatic_GetStaticMeshComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FlockingBehaviourSystem.Flock.UpdateSeparationForce
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          NewSeparationForce             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AFlock::UpdateSeparationForce(float NewSeparationForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Flock.UpdateSeparationForce");

	AFlock_UpdateSeparationForce_Params params;
	params.NewSeparationForce = NewSeparationForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlockingBehaviourSystem.Flock.UpdateGoalSeekingForce
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Force                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AFlock::UpdateGoalSeekingForce(float Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Flock.UpdateGoalSeekingForce");

	AFlock_UpdateGoalSeekingForce_Params params;
	params.Force = Force;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlockingBehaviourSystem.Flock.UpdateForceWeightToAllCustomForces
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewWeightValue                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AFlock::UpdateForceWeightToAllCustomForces(float NewWeightValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Flock.UpdateForceWeightToAllCustomForces");

	AFlock_UpdateForceWeightToAllCustomForces_Params params;
	params.NewWeightValue = NewWeightValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlockingBehaviourSystem.Flock.UpdateForces
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          NewAlignmentForce              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          NewCohesionForce               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          NewSeparationForce             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AFlock::UpdateForces(float NewAlignmentForce, float NewCohesionForce, float NewSeparationForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Flock.UpdateForces");

	AFlock_UpdateForces_Params params;
	params.NewAlignmentForce = NewAlignmentForce;
	params.NewCohesionForce = NewCohesionForce;
	params.NewSeparationForce = NewSeparationForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlockingBehaviourSystem.Flock.UpdateCustomForceWeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ForceIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          NewWeightValue                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AFlock::UpdateCustomForceWeight(int ForceIndex, float NewWeightValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Flock.UpdateCustomForceWeight");

	AFlock_UpdateCustomForceWeight_Params params;
	params.ForceIndex = ForceIndex;
	params.NewWeightValue = NewWeightValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlockingBehaviourSystem.Flock.UpdateCohesionForce
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          NewCohesionForce               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AFlock::UpdateCohesionForce(float NewCohesionForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Flock.UpdateCohesionForce");

	AFlock_UpdateCohesionForce_Params params;
	params.NewCohesionForce = NewCohesionForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlockingBehaviourSystem.Flock.UpdateAlignmentForce
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          NewAlignmentForce              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AFlock::UpdateAlignmentForce(float NewAlignmentForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Flock.UpdateAlignmentForce");

	AFlock_UpdateAlignmentForce_Params params;
	params.NewAlignmentForce = NewAlignmentForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlockingBehaviourSystem.Flock.SpawnBoids
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class ABoid*>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class ABoid*> AFlock::SpawnBoids(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Flock.SpawnBoids");

	AFlock_SpawnBoids_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FlockingBehaviourSystem.Flock.SpawnBoid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ABoid*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ABoid* AFlock::SpawnBoid()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Flock.SpawnBoid");

	AFlock_SpawnBoid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FlockingBehaviourSystem.Flock.SetNewGoal
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AGoal*                   NewGoalActor                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AFlock::SetNewGoal(class AGoal* NewGoalActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Flock.SetNewGoal");

	AFlock_SetNewGoal_Params params;
	params.NewGoalActor = NewGoalActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlockingBehaviourSystem.Flock.RemoveBoids
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AFlock::RemoveBoids(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Flock.RemoveBoids");

	AFlock_RemoveBoids_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlockingBehaviourSystem.Flock.RemoveBoid_ID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            UniqueId                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AFlock::RemoveBoid_ID(int UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Flock.RemoveBoid_ID");

	AFlock_RemoveBoid_ID_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlockingBehaviourSystem.Flock.RemoveBoid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ABoid*                   BoidToRemove                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AFlock::RemoveBoid(class ABoid* BoidToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Flock.RemoveBoid");

	AFlock_RemoveBoid_Params params;
	params.BoidToRemove = BoidToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlockingBehaviourSystem.Flock.KillAllBoids
// (Final, Native, Public, BlueprintCallable)
void AFlock::KillAllBoids()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Flock.KillAllBoids");

	AFlock_KillAllBoids_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlockingBehaviourSystem.Flock.InitializeFlock
// (Final, Native, Public, BlueprintCallable)
void AFlock::InitializeFlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Flock.InitializeFlock");

	AFlock_InitializeFlock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlockingBehaviourSystem.Flock.GetSeparationForce
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AFlock::GetSeparationForce()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Flock.GetSeparationForce");

	AFlock_GetSeparationForce_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FlockingBehaviourSystem.Flock.GetFlockLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector AFlock::GetFlockLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Flock.GetFlockLocation");

	AFlock_GetFlockLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FlockingBehaviourSystem.Flock.GetCustomFlockForces
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class UFlockForce*, float> ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
TMap<class UFlockForce*, float> AFlock::GetCustomFlockForces()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Flock.GetCustomFlockForces");

	AFlock_GetCustomFlockForces_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FlockingBehaviourSystem.Flock.GetCustomFlockForce
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ForceIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFlockForce*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFlockForce* AFlock::GetCustomFlockForce(int ForceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Flock.GetCustomFlockForce");

	AFlock_GetCustomFlockForce_Params params;
	params.ForceIndex = ForceIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FlockingBehaviourSystem.Flock.GetCohesionForce
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AFlock::GetCohesionForce()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Flock.GetCohesionForce");

	AFlock_GetCohesionForce_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FlockingBehaviourSystem.Flock.GetAlignmentForce
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AFlock::GetAlignmentForce()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Flock.GetAlignmentForce");

	AFlock_GetAlignmentForce_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FlockingBehaviourSystem.Flock.EnableFlock
// (Final, Native, Public, BlueprintCallable)
void AFlock::EnableFlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Flock.EnableFlock");

	AFlock_EnableFlock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlockingBehaviourSystem.Flock.EnableCustomForce
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ForceIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AFlock::EnableCustomForce(int ForceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Flock.EnableCustomForce");

	AFlock_EnableCustomForce_Params params;
	params.ForceIndex = ForceIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlockingBehaviourSystem.Flock.EnableAllCustomForces
// (Final, Native, Public, BlueprintCallable)
void AFlock::EnableAllCustomForces()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Flock.EnableAllCustomForces");

	AFlock_EnableAllCustomForces_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlockingBehaviourSystem.Flock.DisableFlock
// (Final, Native, Public, BlueprintCallable)
void AFlock::DisableFlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Flock.DisableFlock");

	AFlock_DisableFlock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlockingBehaviourSystem.Flock.DisableCustomForce
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ForceIndex                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AFlock::DisableCustomForce(int ForceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Flock.DisableCustomForce");

	AFlock_DisableCustomForce_Params params;
	params.ForceIndex = ForceIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlockingBehaviourSystem.Flock.DisableAllCustomForces
// (Final, Native, Public, BlueprintCallable)
void AFlock::DisableAllCustomForces()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Flock.DisableAllCustomForces");

	AFlock_DisableAllCustomForces_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlockingBehaviourSystem.FlockForce.CalculateForce
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// class ABoid*                   Boid                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FOctreeElement>  NeighboringBoids               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UFlockForce::CalculateForce(class ABoid* Boid, TArray<struct FOctreeElement> NeighboringBoids)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.FlockForce.CalculateForce");

	UFlockForce_CalculateForce_Params params;
	params.Boid = Boid;
	params.NeighboringBoids = NeighboringBoids;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FlockingBehaviourSystem.FlockGoalPoint.SelectGoalOwner
// (Final, Native, Protected)
void AFlockGoalPoint::SelectGoalOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.FlockGoalPoint.SelectGoalOwner");

	AFlockGoalPoint_SelectGoalOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlockingBehaviourSystem.Goal.SetNewGoalLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 NewLocation                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGoal::SetNewGoalLocation(const struct FVector& NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Goal.SetNewGoalLocation");

	AGoal_SetNewGoalLocation_Params params;
	params.NewLocation = NewLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlockingBehaviourSystem.Goal.SetGoalLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGoal::SetGoalLocation(int Index, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Goal.SetGoalLocation");

	AGoal_SetGoalLocation_Params params;
	params.Index = Index;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlockingBehaviourSystem.Goal.SetFlock
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AFlock*                  InFlock                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGoal::SetFlock(class AFlock* InFlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Goal.SetFlock");

	AGoal_SetFlock_Params params;
	params.InFlock = InFlock;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlockingBehaviourSystem.Goal.SetAllGoalsLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGoal::SetAllGoalsLocation(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Goal.SetAllGoalsLocation");

	AGoal_SetAllGoalsLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlockingBehaviourSystem.Goal.ResetGoalLocation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGoal::ResetGoalLocation(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Goal.ResetGoalLocation");

	AGoal_ResetGoalLocation_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlockingBehaviourSystem.Goal.ResetAllGoalsLocation
// (Final, Native, Public, BlueprintCallable)
void AGoal::ResetAllGoalsLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Goal.ResetAllGoalsLocation");

	AGoal_ResetAllGoalsLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlockingBehaviourSystem.Goal.NextLocation
// (Final, Native, Public, BlueprintCallable)
void AGoal::NextLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Goal.NextLocation");

	AGoal_NextLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlockingBehaviourSystem.Goal.IsRandomlyGenerating
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AGoal::IsRandomlyGenerating()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Goal.IsRandomlyGenerating");

	AGoal_IsRandomlyGenerating_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FlockingBehaviourSystem.Goal.IncrementConfirmations
// (Final, Native, Public, BlueprintCallable)
void AGoal::IncrementConfirmations()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Goal.IncrementConfirmations");

	AGoal_IncrementConfirmations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlockingBehaviourSystem.Goal.GetTotalLocations
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AGoal::GetTotalLocations()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Goal.GetTotalLocations");

	AGoal_GetTotalLocations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FlockingBehaviourSystem.Goal.GetRequiredConfirmations
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AGoal::GetRequiredConfirmations()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Goal.GetRequiredConfirmations");

	AGoal_GetRequiredConfirmations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FlockingBehaviourSystem.Goal.GetRange
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector AGoal::GetRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Goal.GetRange");

	AGoal_GetRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FlockingBehaviourSystem.Goal.GetOriginalLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector AGoal::GetOriginalLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Goal.GetOriginalLocation");

	AGoal_GetOriginalLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FlockingBehaviourSystem.Goal.GetGoalPoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFlockGoalPoint*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AFlockGoalPoint* AGoal::GetGoalPoint(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Goal.GetGoalPoint");

	AGoal_GetGoalPoint_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FlockingBehaviourSystem.Goal.GetGoalLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector AGoal::GetGoalLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Goal.GetGoalLocation");

	AGoal_GetGoalLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FlockingBehaviourSystem.Goal.GetCurrentConfirmations
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int AGoal::GetCurrentConfirmations()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Goal.GetCurrentConfirmations");

	AGoal_GetCurrentConfirmations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FlockingBehaviourSystem.Goal.GetAllGoalPointsInWorld
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class AFlockGoalPoint*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class AFlockGoalPoint*> AGoal::STATIC_GetAllGoalPointsInWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Goal.GetAllGoalPointsInWorld");

	AGoal_GetAllGoalPointsInWorld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FlockingBehaviourSystem.Goal.GetAcceptanceRadius
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float AGoal::GetAcceptanceRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Goal.GetAcceptanceRadius");

	AGoal_GetAcceptanceRadius_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FlockingBehaviourSystem.Goal.FindNewLocation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// Engine_EPlaneConstraintAxisSetting PlaneConstraintAxis            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AGoal::FindNewLocation(Engine_EPlaneConstraintAxisSetting PlaneConstraintAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.Goal.FindNewLocation");

	AGoal_FindNewLocation_Params params;
	params.PlaneConstraintAxis = PlaneConstraintAxis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlockingBehaviourSystem.SpatialPartitioner.ShiftOctreeOriginOnZ
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InZOffset                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASpatialPartitioner::ShiftOctreeOriginOnZ(float InZOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.SpatialPartitioner.ShiftOctreeOriginOnZ");

	ASpatialPartitioner_ShiftOctreeOriginOnZ_Params params;
	params.InZOffset = InZOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlockingBehaviourSystem.SpatialPartitioner.ShiftOctreeOriginOnY
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InYOffset                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASpatialPartitioner::ShiftOctreeOriginOnY(float InYOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.SpatialPartitioner.ShiftOctreeOriginOnY");

	ASpatialPartitioner_ShiftOctreeOriginOnY_Params params;
	params.InYOffset = InYOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlockingBehaviourSystem.SpatialPartitioner.ShiftOctreeOriginOnX
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InXOffset                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASpatialPartitioner::ShiftOctreeOriginOnX(float InXOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.SpatialPartitioner.ShiftOctreeOriginOnX");

	ASpatialPartitioner_ShiftOctreeOriginOnX_Params params;
	params.InXOffset = InXOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlockingBehaviourSystem.SpatialPartitioner.ShiftOctreeOrigin
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 InOffset                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASpatialPartitioner::ShiftOctreeOrigin(const struct FVector& InOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.SpatialPartitioner.ShiftOctreeOrigin");

	ASpatialPartitioner_ShiftOctreeOrigin_Params params;
	params.InOffset = InOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlockingBehaviourSystem.SpatialPartitioner.SetNewOctreeOrigin
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 NewOctreeLocation              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASpatialPartitioner::SetNewOctreeOrigin(const struct FVector& NewOctreeLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.SpatialPartitioner.SetNewOctreeOrigin");

	ASpatialPartitioner_SetNewOctreeOrigin_Params params;
	params.NewOctreeLocation = NewOctreeLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlockingBehaviourSystem.SpatialPartitioner.Initialize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                           bDrawDebugElements             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FColor                  InDebugColor                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InDebugLineThickness           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASpatialPartitioner::Initialize(bool bDrawDebugElements, const struct FColor& InDebugColor, float InDebugLineThickness)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.SpatialPartitioner.Initialize");

	ASpatialPartitioner_Initialize_Params params;
	params.bDrawDebugElements = bDrawDebugElements;
	params.InDebugColor = InDebugColor;
	params.InDebugLineThickness = InDebugLineThickness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FlockingBehaviourSystem.SpatialPartitioner.HasBeenInitialized
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ASpatialPartitioner::HasBeenInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.SpatialPartitioner.HasBeenInitialized");

	ASpatialPartitioner_HasBeenInitialized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FlockingBehaviourSystem.SpatialPartitioner.GetElementsWithinBounds
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBoxSphereBounds        InBoundingBoxQuery             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FOctreeElement>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FOctreeElement> ASpatialPartitioner::GetElementsWithinBounds(const struct FBoxSphereBounds& InBoundingBoxQuery)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.SpatialPartitioner.GetElementsWithinBounds");

	ASpatialPartitioner_GetElementsWithinBounds_Params params;
	params.InBoundingBoxQuery = InBoundingBoxQuery;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FlockingBehaviourSystem.SpatialPartitioner.AddOctreeElement
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FOctreeElement          InNewOctreeElement             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int                            InUniqueID                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASpatialPartitioner::AddOctreeElement(const struct FOctreeElement& InNewOctreeElement, int InUniqueID)
{
	static auto fn = UObject::FindObject<UFunction>("Function FlockingBehaviourSystem.SpatialPartitioner.AddOctreeElement");

	ASpatialPartitioner_AddOctreeElement_Params params;
	params.InNewOctreeElement = InNewOctreeElement;
	params.InUniqueID = InUniqueID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
