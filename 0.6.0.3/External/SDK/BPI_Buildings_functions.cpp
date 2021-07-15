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

// Function BPI_Buildings.BPI_Buildings_C.GetBuildingReference
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterBuilding_C*    MasterBuilding                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_Buildings_C::GetBuildingReference(class ABP_MasterBuilding_C** MasterBuilding)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Buildings.BPI_Buildings_C.GetBuildingReference");

	UBPI_Buildings_C_GetBuildingReference_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MasterBuilding != nullptr)
		*MasterBuilding = params.MasterBuilding;

}


// Function BPI_Buildings.BPI_Buildings_C.GetEntrances
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         Entrances                      (Parm, OutParm)
void UBPI_Buildings_C::GetEntrances(TArray<struct FVector>* Entrances)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Buildings.BPI_Buildings_C.GetEntrances");

	UBPI_Buildings_C_GetEntrances_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Entrances != nullptr)
		*Entrances = params.Entrances;

}


// Function BPI_Buildings.BPI_Buildings_C.GetBuildingType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Buildings_E_Buildings> GetBuildingType                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_Buildings_C::GetBuildingType(TEnumAsByte<E_Buildings_E_Buildings>* GetBuildingType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Buildings.BPI_Buildings_C.GetBuildingType");

	UBPI_Buildings_C_GetBuildingType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GetBuildingType != nullptr)
		*GetBuildingType = params.GetBuildingType;

}


void UBPI_Buildings_C::AfterRead()
{
	UInterface::AfterRead();

}

void UBPI_Buildings_C::BeforeDelete()
{
	UInterface::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
