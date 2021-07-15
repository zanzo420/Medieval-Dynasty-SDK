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

// Function BP_AnimalRelationsComponent.BP_AnimalRelationsComponent_C.UnassignHouse
struct UBP_AnimalRelationsComponent_C_UnassignHouse_Params
{
};

// Function BP_AnimalRelationsComponent.BP_AnimalRelationsComponent_C.CheckChanceForBabyBirth
struct UBP_AnimalRelationsComponent_C_CheckChanceForBabyBirth_Params
{
	class ABP_AnimalBase_C*                            SelfAnimal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalRelationsComponent.BP_AnimalRelationsComponent_C.SetRelationsData
struct UBP_AnimalRelationsComponent_C_SetRelationsData_Params
{
	struct FString                                     HouseID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_AnimalRelationsComponent.BP_AnimalRelationsComponent_C.GetHouse
struct UBP_AnimalRelationsComponent_C_GetHouse_Params
{
	class ABP_MasterBuilding_C*                        House;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     House_ID;                                                  // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_AnimalRelationsComponent.BP_AnimalRelationsComponent_C.AssignHouse
struct UBP_AnimalRelationsComponent_C_AssignHouse_Params
{
	class ABP_MasterBuilding_C*                        House;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AnimalRelationsComponent.BP_AnimalRelationsComponent_C.RelationsInit
struct UBP_AnimalRelationsComponent_C_RelationsInit_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
