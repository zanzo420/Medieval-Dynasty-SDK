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

// Function BPI_PC_Player.BPI_PC_Player_C.BPI_OnHeadbobbingChanged
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_PC_Player_C::BPI_OnHeadbobbingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PC_Player.BPI_PC_Player_C.BPI_OnHeadbobbingChanged");

	UBPI_PC_Player_C_BPI_OnHeadbobbingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_PC_Player.BPI_PC_Player_C.BPI_UpdateControlsSensitivity
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_PC_Player_C::BPI_UpdateControlsSensitivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_PC_Player.BPI_PC_Player_C.BPI_UpdateControlsSensitivity");

	UBPI_PC_Player_C_BPI_UpdateControlsSensitivity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
