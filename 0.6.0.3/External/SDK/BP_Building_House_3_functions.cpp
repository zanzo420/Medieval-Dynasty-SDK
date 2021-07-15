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

// Function BP_Building_House_3.BP_Building_House_2_C.FoodDemand
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Demand                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Building_House_2_C::FoodDemand(float* Demand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Building_House_3.BP_Building_House_2_C.FoodDemand");

	ABP_Building_House_2_C_FoodDemand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Demand != nullptr)
		*Demand = params.Demand;

}


// Function BP_Building_House_3.BP_Building_House_2_C.TeleportPeople
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PlayerIncluded                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Building_House_2_C::TeleportPeople(bool PlayerIncluded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Building_House_3.BP_Building_House_2_C.TeleportPeople");

	ABP_Building_House_2_C_TeleportPeople_Params params;
	params.PlayerIncluded = PlayerIncluded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Building_House_3.BP_Building_House_2_C.RemovePeople
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     Person                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Building_House_2_C::RemovePeople(class ABP_BaseCharacter_C* Person)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Building_House_3.BP_Building_House_2_C.RemovePeople");

	ABP_Building_House_2_C_RemovePeople_Params params;
	params.Person = Person;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Building_House_3.BP_Building_House_2_C.AddPeople
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     Person                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Building_House_2_C::AddPeople(class ABP_BaseCharacter_C* Person)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Building_House_3.BP_Building_House_2_C.AddPeople");

	ABP_Building_House_2_C_AddPeople_Params params;
	params.Person = Person;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Building_House_3.BP_Building_House_2_C.AutoAssigningPeople
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Building_House_2_C::AutoAssigningPeople()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Building_House_3.BP_Building_House_2_C.AutoAssigningPeople");

	ABP_Building_House_2_C_AutoAssigningPeople_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Building_House_3.BP_Building_House_2_C.GetBuildingModulesDataFromSlot
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            SocketID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FST_Module>      ModulesData                    (Parm, OutParm)
void ABP_Building_House_2_C::GetBuildingModulesDataFromSlot(int SocketID, bool* Success, TArray<struct FST_Module>* ModulesData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Building_House_3.BP_Building_House_2_C.GetBuildingModulesDataFromSlot");

	ABP_Building_House_2_C_GetBuildingModulesDataFromSlot_Params params;
	params.SocketID = SocketID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ModulesData != nullptr)
		*ModulesData = params.ModulesData;

}


// Function BP_Building_House_3.BP_Building_House_2_C.GetBuildingModuleDataFromSlot
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ModuleID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_BuildingModuleSocket SocketData                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Module              ModuleData                     (Parm, OutParm, HasGetValueTypeHash)
void ABP_Building_House_2_C::GetBuildingModuleDataFromSlot(int ModuleID, const struct FST_BuildingModuleSocket& SocketData, bool* Success, struct FST_Module* ModuleData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Building_House_3.BP_Building_House_2_C.GetBuildingModuleDataFromSlot");

	ABP_Building_House_2_C_GetBuildingModuleDataFromSlot_Params params;
	params.ModuleID = ModuleID;
	params.SocketData = SocketData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ModuleData != nullptr)
		*ModuleData = params.ModuleData;

}


// Function BP_Building_House_3.BP_Building_House_2_C.CreateFurnitures
// (BlueprintCallable, BlueprintEvent)
void ABP_Building_House_2_C::CreateFurnitures()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Building_House_3.BP_Building_House_2_C.CreateFurnitures");

	ABP_Building_House_2_C_CreateFurnitures_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Building_House_3.BP_Building_House_2_C.ExecuteUbergraph_BP_Building_House_3
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Building_House_2_C::ExecuteUbergraph_BP_Building_House_3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Building_House_3.BP_Building_House_2_C.ExecuteUbergraph_BP_Building_House_3");

	ABP_Building_House_2_C_ExecuteUbergraph_BP_Building_House_3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Building_House_2_C::AfterRead()
{
	ABP_MasterBuilding_C::AfterRead();

}

void ABP_Building_House_2_C::BeforeDelete()
{
	ABP_MasterBuilding_C::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
