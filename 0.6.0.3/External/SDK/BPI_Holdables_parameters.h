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

// Function BPI_Holdables.BPI_Holdables_C.GetFluidType
struct UBPI_Holdables_C_GetFluidType_Params
{
	TEnumAsByte<E_Fluids_E_Fluids>                     FluidType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_Holdables.BPI_Holdables_C.HitMontageBlendOut
struct UBPI_Holdables_C_HitMontageBlendOut_Params
{
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_Holdables.BPI_Holdables_C.HitMontageInterrupted
struct UBPI_Holdables_C_HitMontageInterrupted_Params
{
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_Holdables.BPI_Holdables_C.HitMontageComplete
struct UBPI_Holdables_C_HitMontageComplete_Params
{
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_Holdables.BPI_Holdables_C.MontageBlendOut
struct UBPI_Holdables_C_MontageBlendOut_Params
{
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_Holdables.BPI_Holdables_C.MontageInterrupted
struct UBPI_Holdables_C_MontageInterrupted_Params
{
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_Holdables.BPI_Holdables_C.MontageComplete
struct UBPI_Holdables_C_MontageComplete_Params
{
	class UAnimMontage*                                Montage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_Holdables.BPI_Holdables_C.OnLoopStart
struct UBPI_Holdables_C_OnLoopStart_Params
{
	bool                                               CanStart;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_Holdables.BPI_Holdables_C.PerformInteraction
struct UBPI_Holdables_C_PerformInteraction_Params
{
};

// Function BPI_Holdables.BPI_Holdables_C.OnLoopFinish
struct UBPI_Holdables_C_OnLoopFinish_Params
{
};

// Function BPI_Holdables.BPI_Holdables_C.FlipRotation
struct UBPI_Holdables_C_FlipRotation_Params
{
	bool                                               UnFlip;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_Holdables.BPI_Holdables_C.ResetHoldable
struct UBPI_Holdables_C_ResetHoldable_Params
{
};

// Function BPI_Holdables.BPI_Holdables_C.RightMouseInput
struct UBPI_Holdables_C_RightMouseInput_Params
{
	bool                                               KeyDown;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_Holdables.BPI_Holdables_C.LeftMouseInput
struct UBPI_Holdables_C_LeftMouseInput_Params
{
	bool                                               KeyDown;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
