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

// Function BPI_BuildingSocket.BPI_BuildingSocket_C.CheckSocketCompatibility
struct UBPI_BuildingSocket_C_CheckSocketCompatibility_Params
{
	struct FDataTableRowHandle                         BuildingHandler;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_BuildingSocket.BPI_BuildingSocket_C.GetBuildingHandlers
struct UBPI_BuildingSocket_C_GetBuildingHandlers_Params
{
	struct FDataTableRowHandle                         HandlerToCompare;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	TArray<struct FDataTableRowHandle>                 BuildingHandlers;                                          // (Parm, OutParm)
	bool                                               Compatibility;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_BuildingSocket.BPI_BuildingSocket_C.GetSocketLocation
struct UBPI_BuildingSocket_C_GetSocketLocation_Params
{
	struct FTransform                                  Transform;                                                 // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
