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

// Function BP_Flock.BP_Flock_C.CheckBoxRegionAngles
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ActorLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 DirectionVector_2              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 DirectionVector_3              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Extent_2                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Extent_3                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Flock_C::CheckBoxRegionAngles(const struct FVector& ActorLocation, const struct FVector& DirectionVector_2, const struct FVector& DirectionVector_3, float Extent_2, float Extent_3, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Flock.BP_Flock_C.CheckBoxRegionAngles");

	ABP_Flock_C_CheckBoxRegionAngles_Params params;
	params.ActorLocation = ActorLocation;
	params.DirectionVector_2 = DirectionVector_2;
	params.DirectionVector_3 = DirectionVector_3;
	params.Extent_2 = Extent_2;
	params.Extent_3 = Extent_3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;

}


// Function BP_Flock.BP_Flock_C.CalculateBoxRegionFleeDistance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ActorLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 ActorVector                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ExtentParam                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          VectorLength                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Flock_C::CalculateBoxRegionFleeDistance(const struct FVector& ActorLocation, const struct FVector& ActorVector, float ExtentParam, bool* Success, float* VectorLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Flock.BP_Flock_C.CalculateBoxRegionFleeDistance");

	ABP_Flock_C_CalculateBoxRegionFleeDistance_Params params;
	params.ActorLocation = ActorLocation;
	params.ActorVector = ActorVector;
	params.ExtentParam = ExtentParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (VectorLength != nullptr)
		*VectorLength = params.VectorLength;

}


// Function BP_Flock.BP_Flock_C.ClosestActorDistanceToBoids
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ClosestActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ShouldFlee                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Flock_C::ClosestActorDistanceToBoids(class AActor* ClosestActor, const struct FVector& Location, bool* ShouldFlee)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Flock.BP_Flock_C.ClosestActorDistanceToBoids");

	ABP_Flock_C_ClosestActorDistanceToBoids_Params params;
	params.ClosestActor = ClosestActor;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShouldFlee != nullptr)
		*ShouldFlee = params.ShouldFlee;

}


// Function BP_Flock.BP_Flock_C.CalculateFleeLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  ActorToFleeFrom                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 LocationToFleeFrom             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector ABP_Flock_C::CalculateFleeLocation(class AActor* ActorToFleeFrom, const struct FVector& LocationToFleeFrom)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Flock.BP_Flock_C.CalculateFleeLocation");

	ABP_Flock_C_CalculateFleeLocation_Params params;
	params.ActorToFleeFrom = ActorToFleeFrom;
	params.LocationToFleeFrom = LocationToFleeFrom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Flock.BP_Flock_C.CheckIfAnyEntityIsMoving
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FHitResult>      HitResults                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>          MovingEntities                 (Parm, OutParm)
void ABP_Flock_C::CheckIfAnyEntityIsMoving(TArray<struct FHitResult>* HitResults, bool* Found, TArray<class AActor*>* MovingEntities)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Flock.BP_Flock_C.CheckIfAnyEntityIsMoving");

	ABP_Flock_C_CheckIfAnyEntityIsMoving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HitResults != nullptr)
		*HitResults = params.HitResults;
	if (Found != nullptr)
		*Found = params.Found;
	if (MovingEntities != nullptr)
		*MovingEntities = params.MovingEntities;

}


// Function BP_Flock.BP_Flock_C.DisableBoid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABoid*                   Boid                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Flock_C::DisableBoid(class ABoid* Boid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Flock.BP_Flock_C.DisableBoid");

	ABP_Flock_C_DisableBoid_Params params;
	params.Boid = Boid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Flock.BP_Flock_C.EnableBoid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABoid*                   Boid                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Flock_C::EnableBoid(class ABoid* Boid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Flock.BP_Flock_C.EnableBoid");

	ABP_Flock_C_EnableBoid_Params params;
	params.Boid = Boid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Flock.BP_Flock_C.CheckForEntity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Flock_C::CheckForEntity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Flock.BP_Flock_C.CheckForEntity");

	ABP_Flock_C_CheckForEntity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Flock.BP_Flock_C.DeactivateFlock
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Flock_C::DeactivateFlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Flock.BP_Flock_C.DeactivateFlock");

	ABP_Flock_C_DeactivateFlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Flock.BP_Flock_C.Activate Flock
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Flock_C::Activate_Flock()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Flock.BP_Flock_C.Activate Flock");

	ABP_Flock_C_Activate_Flock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Flock.BP_Flock_C.SpawnFlock
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            FlockSize                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsNight                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Flock_C::SpawnFlock(int FlockSize, bool IsNight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Flock.BP_Flock_C.SpawnFlock");

	ABP_Flock_C_SpawnFlock_Params params;
	params.FlockSize = FlockSize;
	params.IsNight = IsNight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Flock.BP_Flock_C.InitAfterLoad
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_SAVE_FishSpawners   Data                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Flock_C::InitAfterLoad(const struct FST_SAVE_FishSpawners& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Flock.BP_Flock_C.InitAfterLoad");

	ABP_Flock_C_InitAfterLoad_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Flock.BP_Flock_C.GetDataToSave
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FST_SAVE_FishSpawners   Data                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Flock_C::GetDataToSave(struct FST_SAVE_FishSpawners* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Flock.BP_Flock_C.GetDataToSave");

	ABP_Flock_C_GetDataToSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;

}


// Function BP_Flock.BP_Flock_C.CheckAvailability
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Flock_C::CheckAvailability()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Flock.BP_Flock_C.CheckAvailability");

	ABP_Flock_C_CheckAvailability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Flock.BP_Flock_C.Remove Fish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABoid*                   BoidToRemove                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Flock_C::Remove_Fish(class ABoid* BoidToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Flock.BP_Flock_C.Remove Fish");

	ABP_Flock_C_Remove_Fish_Params params;
	params.BoidToRemove = BoidToRemove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Flock.BP_Flock_C.GetDistance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Flock_C::GetDistance(float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Flock.BP_Flock_C.GetDistance");

	ABP_Flock_C_GetDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;

}


// Function BP_Flock.BP_Flock_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Flock_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Flock.BP_Flock_C.UserConstructionScript");

	ABP_Flock_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Flock.BP_Flock_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Flock_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Flock.BP_Flock_C.ReceiveBeginPlay");

	ABP_Flock_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Flock.BP_Flock_C.SpawnFlockEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BoidsToSpawn                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Flock_C::SpawnFlockEvent(int BoidsToSpawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Flock.BP_Flock_C.SpawnFlockEvent");

	ABP_Flock_C_SpawnFlockEvent_Params params;
	params.BoidsToSpawn = BoidsToSpawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Flock.BP_Flock_C.RemoveFlockEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BoidsToRemove                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Flock_C::RemoveFlockEvent(int BoidsToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Flock.BP_Flock_C.RemoveFlockEvent");

	ABP_Flock_C_RemoveFlockEvent_Params params;
	params.BoidsToRemove = BoidsToRemove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Flock.BP_Flock_C.ReturnToNormalBehavior
// (BlueprintCallable, BlueprintEvent)
void ABP_Flock_C::ReturnToNormalBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Flock.BP_Flock_C.ReturnToNormalBehavior");

	ABP_Flock_C_ReturnToNormalBehavior_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Flock.BP_Flock_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAIStimulus             Stimulus                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void ABP_Flock_C::BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Flock.BP_Flock_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature");

	ABP_Flock_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature_Params params;
	params.Actor = Actor;
	params.Stimulus = Stimulus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Flock.BP_Flock_C.ExecuteUbergraph_BP_Flock
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Flock_C::ExecuteUbergraph_BP_Flock(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Flock.BP_Flock_C.ExecuteUbergraph_BP_Flock");

	ABP_Flock_C_ExecuteUbergraph_BP_Flock_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Flock_C::AfterRead()
{
	AFlock::AfterRead();

	READ_PTR_FULL(AIPerception, UAIPerceptionComponent);
	READ_PTR_FULL(TextRender, UTextRenderComponent);
	READ_PTR_FULL(SpawnerIcon, UBillboardComponent);
	READ_PTR_FULL(Sphere, USphereComponent);
	READ_PTR_FULL(Icon, UTexture2D);
}

void ABP_Flock_C::BeforeDelete()
{
	AFlock::BeforeDelete();

	DELE_PTR_FULL(AIPerception);
	DELE_PTR_FULL(TextRender);
	DELE_PTR_FULL(SpawnerIcon);
	DELE_PTR_FULL(Sphere);
	DELE_PTR_FULL(Icon);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
