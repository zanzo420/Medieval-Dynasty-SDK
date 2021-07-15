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

// Function BP_AnimalRelationsComponent.BP_AnimalRelationsComponent_C.UnassignHouse
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_AnimalRelationsComponent_C::UnassignHouse()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRelationsComponent.BP_AnimalRelationsComponent_C.UnassignHouse");

	UBP_AnimalRelationsComponent_C_UnassignHouse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalRelationsComponent.BP_AnimalRelationsComponent_C.CheckChanceForBabyBirth
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AnimalBase_C*        SelfAnimal                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_AnimalRelationsComponent_C::CheckChanceForBabyBirth(class ABP_AnimalBase_C* SelfAnimal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRelationsComponent.BP_AnimalRelationsComponent_C.CheckChanceForBabyBirth");

	UBP_AnimalRelationsComponent_C_CheckChanceForBabyBirth_Params params;
	params.SelfAnimal = SelfAnimal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalRelationsComponent.BP_AnimalRelationsComponent_C.SetRelationsData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 HouseID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_AnimalRelationsComponent_C::SetRelationsData(const struct FString& HouseID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRelationsComponent.BP_AnimalRelationsComponent_C.SetRelationsData");

	UBP_AnimalRelationsComponent_C_SetRelationsData_Params params;
	params.HouseID = HouseID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalRelationsComponent.BP_AnimalRelationsComponent_C.GetHouse
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterBuilding_C*    House                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 House_ID                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBP_AnimalRelationsComponent_C::GetHouse(class ABP_MasterBuilding_C** House, struct FString* House_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRelationsComponent.BP_AnimalRelationsComponent_C.GetHouse");

	UBP_AnimalRelationsComponent_C_GetHouse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (House != nullptr)
		*House = params.House;
	if (House_ID != nullptr)
		*House_ID = params.House_ID;

}


// Function BP_AnimalRelationsComponent.BP_AnimalRelationsComponent_C.AssignHouse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterBuilding_C*    House                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_AnimalRelationsComponent_C::AssignHouse(class ABP_MasterBuilding_C* House)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRelationsComponent.BP_AnimalRelationsComponent_C.AssignHouse");

	UBP_AnimalRelationsComponent_C_AssignHouse_Params params;
	params.House = House;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AnimalRelationsComponent.BP_AnimalRelationsComponent_C.RelationsInit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UBP_AnimalRelationsComponent_C::RelationsInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AnimalRelationsComponent.BP_AnimalRelationsComponent_C.RelationsInit");

	UBP_AnimalRelationsComponent_C_RelationsInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
