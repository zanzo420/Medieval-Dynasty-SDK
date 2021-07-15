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

// Function BPI_CombatInterface.BPI_CombatInterface_C.EndCombat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  CombatCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_CombatInterface_C::EndCombat(class AActor* CombatCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_CombatInterface.BPI_CombatInterface_C.EndCombat");

	UBPI_CombatInterface_C_EndCombat_Params params;
	params.CombatCauser = CombatCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_CombatInterface.BPI_CombatInterface_C.StartCombat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  CombatCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_CombatInterface_C::StartCombat(class AActor* CombatCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_CombatInterface.BPI_CombatInterface_C.StartCombat");

	UBPI_CombatInterface_C_StartCombat_Params params;
	params.CombatCauser = CombatCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBPI_CombatInterface_C::AfterRead()
{
	UInterface::AfterRead();

}

void UBPI_CombatInterface_C::BeforeDelete()
{
	UInterface::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
