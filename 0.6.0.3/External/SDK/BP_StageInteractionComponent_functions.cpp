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

// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.GetFluidType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Fluids_E_Fluids> FluidType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_StageInteractionComponent_C::GetFluidType(TEnumAsByte<E_Fluids_E_Fluids>* FluidType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.GetFluidType");

	UBP_StageInteractionComponent_C_GetFluidType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FluidType != nullptr)
		*FluidType = params.FluidType;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.OnLoopStart
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanStart                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_StageInteractionComponent_C::OnLoopStart(bool* CanStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.OnLoopStart");

	UBP_StageInteractionComponent_C_OnLoopStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanStart != nullptr)
		*CanStart = params.CanStart;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.GetSwapItemsOnInteraction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           SwapItemsOnInteraction         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_StageInteractionComponent_C::GetSwapItemsOnInteraction(bool* SwapItemsOnInteraction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.GetSwapItemsOnInteraction");

	UBP_StageInteractionComponent_C_GetSwapItemsOnInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SwapItemsOnInteraction != nullptr)
		*SwapItemsOnInteraction = params.SwapItemsOnInteraction;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.SetSwapItemsOnInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SwapItemsOnInteraction         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_StageInteractionComponent_C::SetSwapItemsOnInteraction(bool SwapItemsOnInteraction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.SetSwapItemsOnInteraction");

	UBP_StageInteractionComponent_C_SetSwapItemsOnInteraction_Params params;
	params.SwapItemsOnInteraction = SwapItemsOnInteraction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.GetFinishedBeginningStage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           FinishedBeginningStage         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_StageInteractionComponent_C::GetFinishedBeginningStage(bool* FinishedBeginningStage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.GetFinishedBeginningStage");

	UBP_StageInteractionComponent_C_GetFinishedBeginningStage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FinishedBeginningStage != nullptr)
		*FinishedBeginningStage = params.FinishedBeginningStage;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.SetNumberOfAutomaticLoops
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumberOfAutomaticLoops         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_StageInteractionComponent_C::SetNumberOfAutomaticLoops(int NumberOfAutomaticLoops)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.SetNumberOfAutomaticLoops");

	UBP_StageInteractionComponent_C_SetNumberOfAutomaticLoops_Params params;
	params.NumberOfAutomaticLoops = NumberOfAutomaticLoops;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.GetNumberOfAutomaticLoops
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            NumberOfAutomaticLoops         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_StageInteractionComponent_C::GetNumberOfAutomaticLoops(int* NumberOfAutomaticLoops)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.GetNumberOfAutomaticLoops");

	UBP_StageInteractionComponent_C_GetNumberOfAutomaticLoops_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NumberOfAutomaticLoops != nullptr)
		*NumberOfAutomaticLoops = params.NumberOfAutomaticLoops;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.SetAutomaticPlay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AutomaticPlay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_StageInteractionComponent_C::SetAutomaticPlay(bool AutomaticPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.SetAutomaticPlay");

	UBP_StageInteractionComponent_C_SetAutomaticPlay_Params params;
	params.AutomaticPlay = AutomaticPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.GetAutomaticPlay
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           AutomaticPlay                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_StageInteractionComponent_C::GetAutomaticPlay(bool* AutomaticPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.GetAutomaticPlay");

	UBP_StageInteractionComponent_C_GetAutomaticPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AutomaticPlay != nullptr)
		*AutomaticPlay = params.AutomaticPlay;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.Get Is Performing Stage Interaction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsPerformingStageInteraction   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_StageInteractionComponent_C::Get_Is_Performing_Stage_Interaction(bool* IsPerformingStageInteraction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.Get Is Performing Stage Interaction");

	UBP_StageInteractionComponent_C_Get_Is_Performing_Stage_Interaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsPerformingStageInteraction != nullptr)
		*IsPerformingStageInteraction = params.IsPerformingStageInteraction;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.GetLoopStageSpeedMultiplier
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          LoopStageSpeedMultiplier       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_StageInteractionComponent_C::GetLoopStageSpeedMultiplier(float* LoopStageSpeedMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.GetLoopStageSpeedMultiplier");

	UBP_StageInteractionComponent_C_GetLoopStageSpeedMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LoopStageSpeedMultiplier != nullptr)
		*LoopStageSpeedMultiplier = params.LoopStageSpeedMultiplier;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.SetLoopStageSpeedMultiplier
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          LoopStageSpeedMultiplier       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_StageInteractionComponent_C::SetLoopStageSpeedMultiplier(float LoopStageSpeedMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.SetLoopStageSpeedMultiplier");

	UBP_StageInteractionComponent_C_SetLoopStageSpeedMultiplier_Params params;
	params.LoopStageSpeedMultiplier = LoopStageSpeedMultiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.GetOwningCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_BaseCharacter_C*     AsBaseCharacter                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_StageInteractionComponent_C::GetOwningCharacter(class ABP_BaseCharacter_C** AsBaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.GetOwningCharacter");

	UBP_StageInteractionComponent_C_GetOwningCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsBaseCharacter != nullptr)
		*AsBaseCharacter = params.AsBaseCharacter;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.SetFinishedEndingStage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FinishedEndingStage            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_StageInteractionComponent_C::SetFinishedEndingStage(bool FinishedEndingStage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.SetFinishedEndingStage");

	UBP_StageInteractionComponent_C_SetFinishedEndingStage_Params params;
	params.FinishedEndingStage = FinishedEndingStage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.SetFinishedLoopStage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FinishedLoopStage              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_StageInteractionComponent_C::SetFinishedLoopStage(bool FinishedLoopStage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.SetFinishedLoopStage");

	UBP_StageInteractionComponent_C_SetFinishedLoopStage_Params params;
	params.FinishedLoopStage = FinishedLoopStage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.SetFinishedBeginningStage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FinishedBeginningStage         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_StageInteractionComponent_C::SetFinishedBeginningStage(bool FinishedBeginningStage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.SetFinishedBeginningStage");

	UBP_StageInteractionComponent_C_SetFinishedBeginningStage_Params params;
	params.FinishedBeginningStage = FinishedBeginningStage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.GetOwningCharacterAnimInstance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimInstance*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAnimInstance* UBP_StageInteractionComponent_C::GetOwningCharacterAnimInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.GetOwningCharacterAnimInstance");

	UBP_StageInteractionComponent_C_GetOwningCharacterAnimInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.GetInteractedActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  InteractedActor                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_StageInteractionComponent_C::GetInteractedActor(class AActor** InteractedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.GetInteractedActor");

	UBP_StageInteractionComponent_C_GetInteractedActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InteractedActor != nullptr)
		*InteractedActor = params.InteractedActor;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.GetMontageParameters
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          PlayRate                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          StartingPosition               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_StageInteractionComponent_C::GetMontageParameters(float* PlayRate, float* StartingPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.GetMontageParameters");

	UBP_StageInteractionComponent_C_GetMontageParameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayRate != nullptr)
		*PlayRate = params.PlayRate;
	if (StartingPosition != nullptr)
		*StartingPosition = params.StartingPosition;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.GetTargetMontage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimMontage*            MontageToPlay                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_StageInteractionComponent_C::GetTargetMontage(class UAnimMontage** MontageToPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.GetTargetMontage");

	UBP_StageInteractionComponent_C_GetTargetMontage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MontageToPlay != nullptr)
		*MontageToPlay = params.MontageToPlay;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.GetSectionsName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TMap<TEnumAsByte<E_BaseInteractionStages_E_BaseInteractionStages>, struct FName> SectionsToPlay                 (Parm, OutParm)
void UBP_StageInteractionComponent_C::GetSectionsName(TMap<TEnumAsByte<E_BaseInteractionStages_E_BaseInteractionStages>, struct FName>* SectionsToPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.GetSectionsName");

	UBP_StageInteractionComponent_C_GetSectionsName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SectionsToPlay != nullptr)
		*SectionsToPlay = params.SectionsToPlay;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.SetInteractedActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InteractedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_StageInteractionComponent_C::SetInteractedActor(class AActor* InteractedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.SetInteractedActor");

	UBP_StageInteractionComponent_C_SetInteractedActor_Params params;
	params.InteractedActor = InteractedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.SetMontageParameters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          PlayRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          StartingPosition               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_StageInteractionComponent_C::SetMontageParameters(float PlayRate, float StartingPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.SetMontageParameters");

	UBP_StageInteractionComponent_C_SetMontageParameters_Params params;
	params.PlayRate = PlayRate;
	params.StartingPosition = StartingPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.SetTargetMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            MontageToPlay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_StageInteractionComponent_C::SetTargetMontage(class UAnimMontage* MontageToPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.SetTargetMontage");

	UBP_StageInteractionComponent_C_SetTargetMontage_Params params;
	params.MontageToPlay = MontageToPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.SetSectionsName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<TEnumAsByte<E_BaseInteractionStages_E_BaseInteractionStages>, struct FName> SectionsToPlay                 (BlueprintVisible, BlueprintReadOnly, Parm)
void UBP_StageInteractionComponent_C::SetSectionsName(TMap<TEnumAsByte<E_BaseInteractionStages_E_BaseInteractionStages>, struct FName> SectionsToPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.SetSectionsName");

	UBP_StageInteractionComponent_C_SetSectionsName_Params params;
	params.SectionsToPlay = SectionsToPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.RightMouseInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           KeyDown                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_StageInteractionComponent_C::RightMouseInput(bool KeyDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.RightMouseInput");

	UBP_StageInteractionComponent_C_RightMouseInput_Params params;
	params.KeyDown = KeyDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.ResetHoldable
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_StageInteractionComponent_C::ResetHoldable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.ResetHoldable");

	UBP_StageInteractionComponent_C_ResetHoldable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.FlipRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UnFlip                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_StageInteractionComponent_C::FlipRotation(bool UnFlip)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.FlipRotation");

	UBP_StageInteractionComponent_C_FlipRotation_Params params;
	params.UnFlip = UnFlip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.OnLoopFinish
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_StageInteractionComponent_C::OnLoopFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.OnLoopFinish");

	UBP_StageInteractionComponent_C_OnLoopFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.PerformInteraction
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_StageInteractionComponent_C::PerformInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.PerformInteraction");

	UBP_StageInteractionComponent_C_PerformInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.MontageComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_StageInteractionComponent_C::MontageComplete(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.MontageComplete");

	UBP_StageInteractionComponent_C_MontageComplete_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.MontageInterrupted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_StageInteractionComponent_C::MontageInterrupted(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.MontageInterrupted");

	UBP_StageInteractionComponent_C_MontageInterrupted_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.MontageBlendOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_StageInteractionComponent_C::MontageBlendOut(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.MontageBlendOut");

	UBP_StageInteractionComponent_C_MontageBlendOut_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.HitMontageComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_StageInteractionComponent_C::HitMontageComplete(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.HitMontageComplete");

	UBP_StageInteractionComponent_C_HitMontageComplete_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.HitMontageInterrupted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_StageInteractionComponent_C::HitMontageInterrupted(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.HitMontageInterrupted");

	UBP_StageInteractionComponent_C_HitMontageInterrupted_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.HitMontageBlendOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_StageInteractionComponent_C::HitMontageBlendOut(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.HitMontageBlendOut");

	UBP_StageInteractionComponent_C_HitMontageBlendOut_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.StartStageInteraction
// (BlueprintCallable, BlueprintEvent)
void UBP_StageInteractionComponent_C::StartStageInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.StartStageInteraction");

	UBP_StageInteractionComponent_C_StartStageInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.EndStageInteraction
// (BlueprintCallable, BlueprintEvent)
void UBP_StageInteractionComponent_C::EndStageInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.EndStageInteraction");

	UBP_StageInteractionComponent_C_EndStageInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.LoopStageInteraction
// (BlueprintCallable, BlueprintEvent)
void UBP_StageInteractionComponent_C::LoopStageInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.LoopStageInteraction");

	UBP_StageInteractionComponent_C_LoopStageInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.InitializeStageInteraction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InteractedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<TEnumAsByte<E_BaseInteractionStages_E_BaseInteractionStages>, struct FName> SectionsToPlay                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class UAnimMontage*            MontageToPlay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          PlayRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          StartingPosition               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           AutomaticPlay                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            NumberOfAutomaticLoops         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           SwapItemsOnInteraction         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_StageInteractionComponent_C::InitializeStageInteraction(class AActor* InteractedActor, TMap<TEnumAsByte<E_BaseInteractionStages_E_BaseInteractionStages>, struct FName> SectionsToPlay, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, bool AutomaticPlay, int NumberOfAutomaticLoops, bool SwapItemsOnInteraction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.InitializeStageInteraction");

	UBP_StageInteractionComponent_C_InitializeStageInteraction_Params params;
	params.InteractedActor = InteractedActor;
	params.SectionsToPlay = SectionsToPlay;
	params.MontageToPlay = MontageToPlay;
	params.PlayRate = PlayRate;
	params.StartingPosition = StartingPosition;
	params.AutomaticPlay = AutomaticPlay;
	params.NumberOfAutomaticLoops = NumberOfAutomaticLoops;
	params.SwapItemsOnInteraction = SwapItemsOnInteraction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.ResetParameters
// (BlueprintCallable, BlueprintEvent)
void UBP_StageInteractionComponent_C::ResetParameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.ResetParameters");

	UBP_StageInteractionComponent_C_ResetParameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.ResetBeginningDoOnce
// (BlueprintCallable, BlueprintEvent)
void UBP_StageInteractionComponent_C::ResetBeginningDoOnce()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.ResetBeginningDoOnce");

	UBP_StageInteractionComponent_C_ResetBeginningDoOnce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.ResetEndingDoOnce
// (BlueprintCallable, BlueprintEvent)
void UBP_StageInteractionComponent_C::ResetEndingDoOnce()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.ResetEndingDoOnce");

	UBP_StageInteractionComponent_C_ResetEndingDoOnce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.ResetLoopDoOnce
// (BlueprintCallable, BlueprintEvent)
void UBP_StageInteractionComponent_C::ResetLoopDoOnce()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.ResetLoopDoOnce");

	UBP_StageInteractionComponent_C_ResetLoopDoOnce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.LeftMouseInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           KeyDown                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_StageInteractionComponent_C::LeftMouseInput(bool KeyDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.LeftMouseInput");

	UBP_StageInteractionComponent_C_LeftMouseInput_Params params;
	params.KeyDown = KeyDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.ExecuteUbergraph_BP_StageInteractionComponent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_StageInteractionComponent_C::ExecuteUbergraph_BP_StageInteractionComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.ExecuteUbergraph_BP_StageInteractionComponent");

	UBP_StageInteractionComponent_C_ExecuteUbergraph_BP_StageInteractionComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.AllLoopsFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_StageInteractionComponent_C::AllLoopsFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.AllLoopsFinished__DelegateSignature");

	UBP_StageInteractionComponent_C_AllLoopsFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.OnLoopStageFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_StageInteractionComponent_C::OnLoopStageFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StageInteractionComponent.BP_StageInteractionComponent_C.OnLoopStageFinished__DelegateSignature");

	UBP_StageInteractionComponent_C_OnLoopStageFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_StageInteractionComponent_C::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(MontageToPlay, UAnimMontage);
	READ_PTR_FULL(InteractedActor, AActor);
}

void UBP_StageInteractionComponent_C::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(MontageToPlay);
	DELE_PTR_FULL(InteractedActor);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
