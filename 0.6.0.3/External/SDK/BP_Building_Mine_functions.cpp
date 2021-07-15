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

// Function BP_Building_Mine.BP_Building_Mine_C.RemovePeople
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     Person                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Building_Mine_C::RemovePeople(class ABP_BaseCharacter_C* Person)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Building_Mine.BP_Building_Mine_C.RemovePeople");

	ABP_Building_Mine_C_RemovePeople_Params params;
	params.Person = Person;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Building_Mine.BP_Building_Mine_C.GetBuildingModulesDataFromSlot
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            SocketID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FST_Module>      ModulesData                    (Parm, OutParm)
void ABP_Building_Mine_C::GetBuildingModulesDataFromSlot(int SocketID, bool* Success, TArray<struct FST_Module>* ModulesData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Building_Mine.BP_Building_Mine_C.GetBuildingModulesDataFromSlot");

	ABP_Building_Mine_C_GetBuildingModulesDataFromSlot_Params params;
	params.SocketID = SocketID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ModulesData != nullptr)
		*ModulesData = params.ModulesData;

}


// Function BP_Building_Mine.BP_Building_Mine_C.GetBuildingModuleDataFromSlot
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ModuleID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_BuildingModuleSocket SocketData                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Module              ModuleData                     (Parm, OutParm, HasGetValueTypeHash)
void ABP_Building_Mine_C::GetBuildingModuleDataFromSlot(int ModuleID, const struct FST_BuildingModuleSocket& SocketData, bool* Success, struct FST_Module* ModuleData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Building_Mine.BP_Building_Mine_C.GetBuildingModuleDataFromSlot");

	ABP_Building_Mine_C_GetBuildingModuleDataFromSlot_Params params;
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


// Function BP_Building_Mine.BP_Building_Mine_C.CreateFurnitures
// (BlueprintCallable, BlueprintEvent)
void ABP_Building_Mine_C::CreateFurnitures()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Building_Mine.BP_Building_Mine_C.CreateFurnitures");

	ABP_Building_Mine_C_CreateFurnitures_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Building_Mine.BP_Building_Mine_C.DestroyBuilding
// (BlueprintCallable, BlueprintEvent)
void ABP_Building_Mine_C::DestroyBuilding()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Building_Mine.BP_Building_Mine_C.DestroyBuilding");

	ABP_Building_Mine_C_DestroyBuilding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Building_Mine.BP_Building_Mine_C.ExecuteFinishLogic
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Load                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Building_Mine_C::ExecuteFinishLogic(bool Load)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Building_Mine.BP_Building_Mine_C.ExecuteFinishLogic");

	ABP_Building_Mine_C_ExecuteFinishLogic_Params params;
	params.Load = Load;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Building_Mine.BP_Building_Mine_C.ExecuteUbergraph_BP_Building_Mine
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Building_Mine_C::ExecuteUbergraph_BP_Building_Mine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Building_Mine.BP_Building_Mine_C.ExecuteUbergraph_BP_Building_Mine");

	ABP_Building_Mine_C_ExecuteUbergraph_BP_Building_Mine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Building_Mine_C::AfterRead()
{
	ABP_MasterBuilding_C::AfterRead();

	READ_PTR_FULL(ChestSocket, UArrowComponent);
}

void ABP_Building_Mine_C::BeforeDelete()
{
	ABP_MasterBuilding_C::BeforeDelete();

	DELE_PTR_FULL(ChestSocket);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
