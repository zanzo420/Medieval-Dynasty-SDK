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

// Function BPI_RangeHoldable.BPI_RangeHoldable_C.PlayReloadMontage
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_RangeHoldable_C::PlayReloadMontage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_RangeHoldable.BPI_RangeHoldable_C.PlayReloadMontage");

	UBPI_RangeHoldable_C_PlayReloadMontage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_RangeHoldable.BPI_RangeHoldable_C.PlayShootMontage
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_RangeHoldable_C::PlayShootMontage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_RangeHoldable.BPI_RangeHoldable_C.PlayShootMontage");

	UBPI_RangeHoldable_C_PlayShootMontage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_RangeHoldable.BPI_RangeHoldable_C.StopReload
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_RangeHoldable_C::StopReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_RangeHoldable.BPI_RangeHoldable_C.StopReload");

	UBPI_RangeHoldable_C_StopReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_RangeHoldable.BPI_RangeHoldable_C.SetAnimBowStretch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Stretch                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_RangeHoldable_C::SetAnimBowStretch(float Stretch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_RangeHoldable.BPI_RangeHoldable_C.SetAnimBowStretch");

	UBPI_RangeHoldable_C_SetAnimBowStretch_Params params;
	params.Stretch = Stretch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
