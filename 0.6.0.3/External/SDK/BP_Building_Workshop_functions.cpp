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

// Function BP_Building_Workshop.BP_Building_Workshop_C.GetBuildingModulesDataFromSlot
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            SocketID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FST_Module>      ModulesData                    (Parm, OutParm)
void ABP_Building_Workshop_C::GetBuildingModulesDataFromSlot(int SocketID, bool* Success, TArray<struct FST_Module>* ModulesData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Building_Workshop.BP_Building_Workshop_C.GetBuildingModulesDataFromSlot");

	ABP_Building_Workshop_C_GetBuildingModulesDataFromSlot_Params params;
	params.SocketID = SocketID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ModulesData != nullptr)
		*ModulesData = params.ModulesData;

}


// Function BP_Building_Workshop.BP_Building_Workshop_C.GetBuildingModuleDataFromSlot
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ModuleID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_BuildingModuleSocket SocketData                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Module              ModuleData                     (Parm, OutParm, HasGetValueTypeHash)
void ABP_Building_Workshop_C::GetBuildingModuleDataFromSlot(int ModuleID, const struct FST_BuildingModuleSocket& SocketData, bool* Success, struct FST_Module* ModuleData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Building_Workshop.BP_Building_Workshop_C.GetBuildingModuleDataFromSlot");

	ABP_Building_Workshop_C_GetBuildingModuleDataFromSlot_Params params;
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


// Function BP_Building_Workshop.BP_Building_Workshop_C.SetStairs
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Building_Workshop_C::SetStairs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Building_Workshop.BP_Building_Workshop_C.SetStairs");

	ABP_Building_Workshop_C_SetStairs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Building_Workshop.BP_Building_Workshop_C.CreateFurnitures
// (BlueprintCallable, BlueprintEvent)
void ABP_Building_Workshop_C::CreateFurnitures()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Building_Workshop.BP_Building_Workshop_C.CreateFurnitures");

	ABP_Building_Workshop_C_CreateFurnitures_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Building_Workshop.BP_Building_Workshop_C.ExecuteUbergraph_BP_Building_Workshop
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Building_Workshop_C::ExecuteUbergraph_BP_Building_Workshop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Building_Workshop.BP_Building_Workshop_C.ExecuteUbergraph_BP_Building_Workshop");

	ABP_Building_Workshop_C_ExecuteUbergraph_BP_Building_Workshop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Building_Workshop_C::AfterRead()
{
	ABP_MasterBuilding_C::AfterRead();

	READ_PTR_FULL(ChestSocket, UArrowComponent);
	READ_PTR_FULL(WorkbenchSocket, UArrowComponent);
	READ_PTR_FULL(ForgeSocket, UArrowComponent);
	READ_PTR_FULL(S_Building_Stairs_B, UStaticMeshComponent);
}

void ABP_Building_Workshop_C::BeforeDelete()
{
	ABP_MasterBuilding_C::BeforeDelete();

	DELE_PTR_FULL(ChestSocket);
	DELE_PTR_FULL(WorkbenchSocket);
	DELE_PTR_FULL(ForgeSocket);
	DELE_PTR_FULL(S_Building_Stairs_B);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
