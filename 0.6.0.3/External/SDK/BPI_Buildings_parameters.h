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

// Function BPI_Buildings.BPI_Buildings_C.GetBuildingReference
struct UBPI_Buildings_C_GetBuildingReference_Params
{
	class ABP_MasterBuilding_C*                        MasterBuilding;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_Buildings.BPI_Buildings_C.GetEntrances
struct UBPI_Buildings_C_GetEntrances_Params
{
	TArray<struct FVector>                             Entrances;                                                 // (Parm, OutParm)
};

// Function BPI_Buildings.BPI_Buildings_C.GetBuildingType
struct UBPI_Buildings_C_GetBuildingType_Params
{
	TEnumAsByte<E_Buildings_E_Buildings>               GetBuildingType;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
