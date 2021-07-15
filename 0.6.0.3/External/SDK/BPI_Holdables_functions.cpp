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

// Function BPI_Holdables.BPI_Holdables_C.GetFluidType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Fluids_E_Fluids> FluidType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_Holdables_C::GetFluidType(TEnumAsByte<E_Fluids_E_Fluids>* FluidType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Holdables.BPI_Holdables_C.GetFluidType");

	UBPI_Holdables_C_GetFluidType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FluidType != nullptr)
		*FluidType = params.FluidType;

}


// Function BPI_Holdables.BPI_Holdables_C.HitMontageBlendOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_Holdables_C::HitMontageBlendOut(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Holdables.BPI_Holdables_C.HitMontageBlendOut");

	UBPI_Holdables_C_HitMontageBlendOut_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Holdables.BPI_Holdables_C.HitMontageInterrupted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_Holdables_C::HitMontageInterrupted(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Holdables.BPI_Holdables_C.HitMontageInterrupted");

	UBPI_Holdables_C_HitMontageInterrupted_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Holdables.BPI_Holdables_C.HitMontageComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_Holdables_C::HitMontageComplete(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Holdables.BPI_Holdables_C.HitMontageComplete");

	UBPI_Holdables_C_HitMontageComplete_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Holdables.BPI_Holdables_C.MontageBlendOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_Holdables_C::MontageBlendOut(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Holdables.BPI_Holdables_C.MontageBlendOut");

	UBPI_Holdables_C_MontageBlendOut_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Holdables.BPI_Holdables_C.MontageInterrupted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_Holdables_C::MontageInterrupted(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Holdables.BPI_Holdables_C.MontageInterrupted");

	UBPI_Holdables_C_MontageInterrupted_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Holdables.BPI_Holdables_C.MontageComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_Holdables_C::MontageComplete(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Holdables.BPI_Holdables_C.MontageComplete");

	UBPI_Holdables_C_MontageComplete_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Holdables.BPI_Holdables_C.OnLoopStart
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanStart                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_Holdables_C::OnLoopStart(bool* CanStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Holdables.BPI_Holdables_C.OnLoopStart");

	UBPI_Holdables_C_OnLoopStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanStart != nullptr)
		*CanStart = params.CanStart;

}


// Function BPI_Holdables.BPI_Holdables_C.PerformInteraction
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Holdables_C::PerformInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Holdables.BPI_Holdables_C.PerformInteraction");

	UBPI_Holdables_C_PerformInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Holdables.BPI_Holdables_C.OnLoopFinish
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Holdables_C::OnLoopFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Holdables.BPI_Holdables_C.OnLoopFinish");

	UBPI_Holdables_C_OnLoopFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Holdables.BPI_Holdables_C.FlipRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UnFlip                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_Holdables_C::FlipRotation(bool UnFlip)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Holdables.BPI_Holdables_C.FlipRotation");

	UBPI_Holdables_C_FlipRotation_Params params;
	params.UnFlip = UnFlip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Holdables.BPI_Holdables_C.ResetHoldable
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Holdables_C::ResetHoldable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Holdables.BPI_Holdables_C.ResetHoldable");

	UBPI_Holdables_C_ResetHoldable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Holdables.BPI_Holdables_C.RightMouseInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           KeyDown                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_Holdables_C::RightMouseInput(bool KeyDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Holdables.BPI_Holdables_C.RightMouseInput");

	UBPI_Holdables_C_RightMouseInput_Params params;
	params.KeyDown = KeyDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Holdables.BPI_Holdables_C.LeftMouseInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           KeyDown                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_Holdables_C::LeftMouseInput(bool KeyDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Holdables.BPI_Holdables_C.LeftMouseInput");

	UBPI_Holdables_C_LeftMouseInput_Params params;
	params.KeyDown = KeyDown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBPI_Holdables_C::AfterRead()
{
	UInterface::AfterRead();

}

void UBPI_Holdables_C::BeforeDelete()
{
	UInterface::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
