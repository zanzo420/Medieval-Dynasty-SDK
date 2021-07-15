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

// Function BP_BuildSocket.BP_BuildSocket_C.CheckSocketCompatibility
struct ABP_BuildSocket_C_CheckSocketCompatibility_Params
{
	struct FDataTableRowHandle                         BuildingHandler;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BuildSocket.BP_BuildSocket_C.GetBuildingHandlers
struct ABP_BuildSocket_C_GetBuildingHandlers_Params
{
	struct FDataTableRowHandle                         HandlerToCompare;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	TArray<struct FDataTableRowHandle>                 BuildingHandlers;                                          // (Parm, OutParm)
	bool                                               Compatibility;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BuildSocket.BP_BuildSocket_C.GetSocketLocation
struct ABP_BuildSocket_C_GetSocketLocation_Params
{
	struct FTransform                                  Transform;                                                 // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function BP_BuildSocket.BP_BuildSocket_C.GetBuildingType
struct ABP_BuildSocket_C_GetBuildingType_Params
{
	TEnumAsByte<E_Buildings_E_Buildings>               GetBuildingType;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BuildSocket.BP_BuildSocket_C.GetEntrances
struct ABP_BuildSocket_C_GetEntrances_Params
{
	TArray<struct FVector>                             Entrances;                                                 // (Parm, OutParm)
};

// Function BP_BuildSocket.BP_BuildSocket_C.UserConstructionScript
struct ABP_BuildSocket_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
