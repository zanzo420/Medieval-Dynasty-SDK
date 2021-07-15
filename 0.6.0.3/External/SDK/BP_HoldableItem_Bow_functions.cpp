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

// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.GetAnimInstance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimInstance*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAnimInstance* ABP_HoldableItem_Bow_C::GetAnimInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.GetAnimInstance");

	ABP_HoldableItem_Bow_C_GetAnimInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.Set Bow Stretch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Stretch                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HoldableItem_Bow_C::Set_Bow_Stretch(float Stretch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.Set Bow Stretch");

	ABP_HoldableItem_Bow_C_Set_Bow_Stretch_Params params;
	params.Stretch = Stretch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.Shooting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Start                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 End                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HoldableItem_Bow_C::Shooting(const struct FVector& Start, const struct FVector& End)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.Shooting");

	ABP_HoldableItem_Bow_C_Shooting_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.InteractionRange
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Range                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Start                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 End                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HoldableItem_Bow_C::InteractionRange(float Range, struct FVector* Start, struct FVector* End)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.InteractionRange");

	ABP_HoldableItem_Bow_C_InteractionRange_Params params;
	params.Range = Range;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Start != nullptr)
		*Start = params.Start;
	if (End != nullptr)
		*End = params.End;

}


// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.BowStretch__FinishedFunc
// (BlueprintEvent)
void ABP_HoldableItem_Bow_C::BowStretch__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.BowStretch__FinishedFunc");

	ABP_HoldableItem_Bow_C_BowStretch__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.BowStretch__UpdateFunc
// (BlueprintEvent)
void ABP_HoldableItem_Bow_C::BowStretch__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.BowStretch__UpdateFunc");

	ABP_HoldableItem_Bow_C_BowStretch__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.RightMouseInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           KeyDown                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_HoldableItem_Bow_C::RightMouseInput(bool KeyDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.RightMouseInput");

	ABP_HoldableItem_Bow_C_RightMouseInput_Params params;
	params.KeyDown = KeyDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.LeftMouseInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           KeyDown                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_HoldableItem_Bow_C::LeftMouseInput(bool KeyDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.LeftMouseInput");

	ABP_HoldableItem_Bow_C_LeftMouseInput_Params params;
	params.KeyDown = KeyDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.Reload
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PlayAnimation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_HoldableItem_Bow_C::Reload(bool PlayAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.Reload");

	ABP_HoldableItem_Bow_C_Reload_Params params;
	params.PlayAnimation = PlayAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.StartAiming
// (BlueprintCallable, BlueprintEvent)
void ABP_HoldableItem_Bow_C::StartAiming()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.StartAiming");

	ABP_HoldableItem_Bow_C_StartAiming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.StopAiming
// (BlueprintCallable, BlueprintEvent)
void ABP_HoldableItem_Bow_C::StopAiming()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.StopAiming");

	ABP_HoldableItem_Bow_C_StopAiming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.Stamina Update
// (BlueprintCallable, BlueprintEvent)
void ABP_HoldableItem_Bow_C::Stamina_Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.Stamina Update");

	ABP_HoldableItem_Bow_C_Stamina_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.Shoot
// (BlueprintCallable, BlueprintEvent)
void ABP_HoldableItem_Bow_C::Shoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.Shoot");

	ABP_HoldableItem_Bow_C_Shoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.UpdateStance
// (BlueprintCallable, BlueprintEvent)
void ABP_HoldableItem_Bow_C::UpdateStance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.UpdateStance");

	ABP_HoldableItem_Bow_C_UpdateStance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.HitMontageComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HoldableItem_Bow_C::HitMontageComplete(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.HitMontageComplete");

	ABP_HoldableItem_Bow_C_HitMontageComplete_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.OnLoopFinish
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_HoldableItem_Bow_C::OnLoopFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.OnLoopFinish");

	ABP_HoldableItem_Bow_C_OnLoopFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.StartBowStretch
// (BlueprintCallable, BlueprintEvent)
void ABP_HoldableItem_Bow_C::StartBowStretch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.StartBowStretch");

	ABP_HoldableItem_Bow_C_StartBowStretch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.ReverseBowStretch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewRate                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HoldableItem_Bow_C::ReverseBowStretch(float NewRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.ReverseBowStretch");

	ABP_HoldableItem_Bow_C_ReverseBowStretch_Params params;
	params.NewRate = NewRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.MontageBlendOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HoldableItem_Bow_C::MontageBlendOut(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.MontageBlendOut");

	ABP_HoldableItem_Bow_C_MontageBlendOut_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.HitMontageBlendOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HoldableItem_Bow_C::HitMontageBlendOut(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.HitMontageBlendOut");

	ABP_HoldableItem_Bow_C_HitMontageBlendOut_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.MontageInterrupted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HoldableItem_Bow_C::MontageInterrupted(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.MontageInterrupted");

	ABP_HoldableItem_Bow_C_MontageInterrupted_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.HitMontageInterrupted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HoldableItem_Bow_C::HitMontageInterrupted(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.HitMontageInterrupted");

	ABP_HoldableItem_Bow_C_HitMontageInterrupted_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_HoldableItem_Bow_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.ReceiveBeginPlay");

	ABP_HoldableItem_Bow_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
void ABP_HoldableItem_Bow_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.ReceiveDestroyed");

	ABP_HoldableItem_Bow_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.LeftInputAction
// (BlueprintCallable, BlueprintEvent)
void ABP_HoldableItem_Bow_C::LeftInputAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.LeftInputAction");

	ABP_HoldableItem_Bow_C_LeftInputAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.ExecuteUbergraph_BP_HoldableItem_Bow
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HoldableItem_Bow_C::ExecuteUbergraph_BP_HoldableItem_Bow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldableItem_Bow.BP_HoldableItem_Bow_C.ExecuteUbergraph_BP_HoldableItem_Bow");

	ABP_HoldableItem_Bow_C_ExecuteUbergraph_BP_HoldableItem_Bow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_HoldableItem_Bow_C::AfterRead()
{
	ABP_MasterRangeHoldableItem_Skeletal_C::AfterRead();

	READ_PTR_FULL(ArrowPivot, UStaticMeshComponent);
	READ_PTR_FULL(SC_Draw, UAudioComponent);
	READ_PTR_FULL(Arrow, UStaticMeshComponent);
	READ_PTR_FULL(BowStretch, UTimelineComponent);
	READ_PTR_FULL(AimOffsetCompRef, UBP_AimOffsetComponent_C);
	READ_PTR_FULL(SC_Shoot, USoundBase);
}

void ABP_HoldableItem_Bow_C::BeforeDelete()
{
	ABP_MasterRangeHoldableItem_Skeletal_C::BeforeDelete();

	DELE_PTR_FULL(ArrowPivot);
	DELE_PTR_FULL(SC_Draw);
	DELE_PTR_FULL(Arrow);
	DELE_PTR_FULL(BowStretch);
	DELE_PTR_FULL(AimOffsetCompRef);
	DELE_PTR_FULL(SC_Shoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
