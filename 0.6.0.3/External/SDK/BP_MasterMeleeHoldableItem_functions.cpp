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

// Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.CalculateTracePosition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Start                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 End                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterMeleeHoldableItem_C::CalculateTracePosition(struct FVector* Start, struct FVector* End)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.CalculateTracePosition");

	ABP_MasterMeleeHoldableItem_C_CalculateTracePosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Start != nullptr)
		*Start = params.Start;
	if (End != nullptr)
		*End = params.End;

}


// Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.CheckIfIsLookingDown
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterMeleeHoldableItem_C::CheckIfIsLookingDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.CheckIfIsLookingDown");

	ABP_MasterMeleeHoldableItem_C_CheckIfIsLookingDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.On Tool Interact with Foliage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            FoliageAmount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterMeleeHoldableItem_C::On_Tool_Interact_with_Foliage(int FoliageAmount, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.On Tool Interact with Foliage");

	ABP_MasterMeleeHoldableItem_C_On_Tool_Interact_with_Foliage_Params params;
	params.FoliageAmount = FoliageAmount;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.PlayerHitTrace
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ValidHit                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterMeleeHoldableItem_C::PlayerHitTrace(bool* ValidHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.PlayerHitTrace");

	ABP_MasterMeleeHoldableItem_C_PlayerHitTrace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ValidHit != nullptr)
		*ValidHit = params.ValidHit;

}


// Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.Hitting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_MasterMeleeHoldableItem_C::Hitting(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.Hitting");

	ABP_MasterMeleeHoldableItem_C_Hitting_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterMeleeHoldableItem_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.ReceiveTick");

	ABP_MasterMeleeHoldableItem_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.LeftMouseInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           KeyDown                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterMeleeHoldableItem_C::LeftMouseInput(bool KeyDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.LeftMouseInput");

	ABP_MasterMeleeHoldableItem_C_LeftMouseInput_Params params;
	params.KeyDown = KeyDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.ResetHoldable
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_MasterMeleeHoldableItem_C::ResetHoldable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.ResetHoldable");

	ABP_MasterMeleeHoldableItem_C_ResetHoldable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.FlipRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UnFlip                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterMeleeHoldableItem_C::FlipRotation(bool UnFlip)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.FlipRotation");

	ABP_MasterMeleeHoldableItem_C_FlipRotation_Params params;
	params.UnFlip = UnFlip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.SetTickEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterMeleeHoldableItem_C::SetTickEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.SetTickEnabled");

	ABP_MasterMeleeHoldableItem_C_SetTickEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_MasterMeleeHoldableItem_C::BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_MasterMeleeHoldableItem_C_BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.Add Hit Actor
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  HitActor                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterMeleeHoldableItem_C::Add_Hit_Actor(class AActor* HitActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.Add Hit Actor");

	ABP_MasterMeleeHoldableItem_C_Add_Hit_Actor_Params params;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.SingleTrace
// (BlueprintCallable, BlueprintEvent)
void ABP_MasterMeleeHoldableItem_C::SingleTrace()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.SingleTrace");

	ABP_MasterMeleeHoldableItem_C_SingleTrace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.MultipleTraces
// (BlueprintCallable, BlueprintEvent)
void ABP_MasterMeleeHoldableItem_C::MultipleTraces()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.MultipleTraces");

	ABP_MasterMeleeHoldableItem_C_MultipleTraces_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.CheckForInteraction
// (BlueprintCallable, BlueprintEvent)
void ABP_MasterMeleeHoldableItem_C::CheckForInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.CheckForInteraction");

	ABP_MasterMeleeHoldableItem_C_CheckForInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_MasterMeleeHoldableItem_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.ReceiveBeginPlay");

	ABP_MasterMeleeHoldableItem_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.MontageComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterMeleeHoldableItem_C::MontageComplete(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.MontageComplete");

	ABP_MasterMeleeHoldableItem_C_MontageComplete_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.HitMontageComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterMeleeHoldableItem_C::HitMontageComplete(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.HitMontageComplete");

	ABP_MasterMeleeHoldableItem_C_HitMontageComplete_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.DamageToolReset
// (BlueprintCallable, BlueprintEvent)
void ABP_MasterMeleeHoldableItem_C::DamageToolReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.DamageToolReset");

	ABP_MasterMeleeHoldableItem_C_DamageToolReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.ExecuteUbergraph_BP_MasterMeleeHoldableItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterMeleeHoldableItem_C::ExecuteUbergraph_BP_MasterMeleeHoldableItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterMeleeHoldableItem.BP_MasterMeleeHoldableItem_C.ExecuteUbergraph_BP_MasterMeleeHoldableItem");

	ABP_MasterMeleeHoldableItem_C_ExecuteUbergraph_BP_MasterMeleeHoldableItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_MasterMeleeHoldableItem_C::AfterRead()
{
	ABP_MasterHoldableItem_C::AfterRead();

	READ_PTR_FULL(OverlapCapsule, UCapsuleComponent);
	READ_PTR_FULL(Mesh, UStaticMeshComponent);
	READ_PTR_FULL(Start_Trace_Point, USphereComponent);
	READ_PTR_FULL(End_Trace_Point, USphereComponent);
	READ_PTR_FULL(HitSoundDefault, USoundBase);
	READ_PTR_FULL(HitParticleDefault, UParticleSystem);
	READ_PTR_FULL(HitSoundWood, USoundBase);
	READ_PTR_FULL(HitParticleWood, UParticleSystem);
	READ_PTR_FULL(HitSoundStone, USoundBase);
	READ_PTR_FULL(HitParticleStone, UParticleSystem);
	READ_PTR_FULL(HitSoundGrass, USoundBase);
	READ_PTR_FULL(HitParticleGrass, UParticleSystem);
	READ_PTR_FULL(HitSoundIron, USoundBase);
	READ_PTR_FULL(HitParticleIron, UParticleSystem);
	READ_PTR_FULL(HitSoundGround, USoundBase);
	READ_PTR_FULL(HitParticleGround, UParticleSystem);
	READ_PTR_FULL(HitSoundWater, USoundBase);
	READ_PTR_FULL(HitParticleWater, UParticleSystem);
	READ_PTR_FULL(HitSoundMeat, USoundBase);
	READ_PTR_FULL(HitParticleMeat, UParticleSystem);
	READ_PTR_FULL(HitSoundFabric, USoundBase);
	READ_PTR_FULL(HitParticleFabric, UParticleSystem);
}

void ABP_MasterMeleeHoldableItem_C::BeforeDelete()
{
	ABP_MasterHoldableItem_C::BeforeDelete();

	DELE_PTR_FULL(OverlapCapsule);
	DELE_PTR_FULL(Mesh);
	DELE_PTR_FULL(Start_Trace_Point);
	DELE_PTR_FULL(End_Trace_Point);
	DELE_PTR_FULL(HitSoundDefault);
	DELE_PTR_FULL(HitParticleDefault);
	DELE_PTR_FULL(HitSoundWood);
	DELE_PTR_FULL(HitParticleWood);
	DELE_PTR_FULL(HitSoundStone);
	DELE_PTR_FULL(HitParticleStone);
	DELE_PTR_FULL(HitSoundGrass);
	DELE_PTR_FULL(HitParticleGrass);
	DELE_PTR_FULL(HitSoundIron);
	DELE_PTR_FULL(HitParticleIron);
	DELE_PTR_FULL(HitSoundGround);
	DELE_PTR_FULL(HitParticleGround);
	DELE_PTR_FULL(HitSoundWater);
	DELE_PTR_FULL(HitParticleWater);
	DELE_PTR_FULL(HitSoundMeat);
	DELE_PTR_FULL(HitParticleMeat);
	DELE_PTR_FULL(HitSoundFabric);
	DELE_PTR_FULL(HitParticleFabric);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
