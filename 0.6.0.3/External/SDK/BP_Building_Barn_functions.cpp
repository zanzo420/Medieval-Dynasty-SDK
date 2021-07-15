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

// Function BP_Building_Barn.BP_Building_Barn_C.HasResouces
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Resources                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Building_Barn_C::HasResouces(bool* Resources)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Building_Barn.BP_Building_Barn_C.HasResouces");

	ABP_Building_Barn_C_HasResouces_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Resources != nullptr)
		*Resources = params.Resources;

}


// Function BP_Building_Barn.BP_Building_Barn_C.HasTools
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Tools                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Building_Barn_C::HasTools(bool* Tools)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Building_Barn.BP_Building_Barn_C.HasTools");

	ABP_Building_Barn_C_HasTools_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Tools != nullptr)
		*Tools = params.Tools;

}


// Function BP_Building_Barn.BP_Building_Barn_C.CheckItemInChest
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           RemoveItem                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FName                   Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsItem                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Building_Barn_C::CheckItemInChest(bool RemoveItem, const struct FName& Item, bool* IsItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Building_Barn.BP_Building_Barn_C.CheckItemInChest");

	ABP_Building_Barn_C_CheckItemInChest_Params params;
	params.RemoveItem = RemoveItem;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsItem != nullptr)
		*IsItem = params.IsItem;

}


// Function BP_Building_Barn.BP_Building_Barn_C.RemovePeople
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     Person                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Building_Barn_C::RemovePeople(class ABP_BaseCharacter_C* Person)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Building_Barn.BP_Building_Barn_C.RemovePeople");

	ABP_Building_Barn_C_RemovePeople_Params params;
	params.Person = Person;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Building_Barn.BP_Building_Barn_C.GetFieldTask
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_FieldTasksLists     Task                           (Parm, OutParm, HasGetValueTypeHash)
// bool                           IsTask                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsItem                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<E_Tools_Activity_E_Tools_Activity> NeedToolActivity               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   NeedItem                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Building_Barn_C::GetFieldTask(struct FST_FieldTasksLists* Task, bool* IsTask, bool* IsItem, TEnumAsByte<E_Tools_Activity_E_Tools_Activity>* NeedToolActivity, struct FName* NeedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Building_Barn.BP_Building_Barn_C.GetFieldTask");

	ABP_Building_Barn_C_GetFieldTask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Task != nullptr)
		*Task = params.Task;
	if (IsTask != nullptr)
		*IsTask = params.IsTask;
	if (IsItem != nullptr)
		*IsItem = params.IsItem;
	if (NeedToolActivity != nullptr)
		*NeedToolActivity = params.NeedToolActivity;
	if (NeedItem != nullptr)
		*NeedItem = params.NeedItem;

}


// Function BP_Building_Barn.BP_Building_Barn_C.GetBuildingModuleDataFromSlot
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ModuleID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_BuildingModuleSocket SocketData                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Module              ModuleData                     (Parm, OutParm, HasGetValueTypeHash)
void ABP_Building_Barn_C::GetBuildingModuleDataFromSlot(int ModuleID, const struct FST_BuildingModuleSocket& SocketData, bool* Success, struct FST_Module* ModuleData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Building_Barn.BP_Building_Barn_C.GetBuildingModuleDataFromSlot");

	ABP_Building_Barn_C_GetBuildingModuleDataFromSlot_Params params;
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


// Function BP_Building_Barn.BP_Building_Barn_C.GetBuildingModulesDataFromSlot
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            SocketID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FST_Module>      ModulesData                    (Parm, OutParm)
void ABP_Building_Barn_C::GetBuildingModulesDataFromSlot(int SocketID, bool* Success, TArray<struct FST_Module>* ModulesData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Building_Barn.BP_Building_Barn_C.GetBuildingModulesDataFromSlot");

	ABP_Building_Barn_C_GetBuildingModulesDataFromSlot_Params params;
	params.SocketID = SocketID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ModulesData != nullptr)
		*ModulesData = params.ModulesData;

}


// Function BP_Building_Barn.BP_Building_Barn_C.SetStairs
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Building_Barn_C::SetStairs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Building_Barn.BP_Building_Barn_C.SetStairs");

	ABP_Building_Barn_C_SetStairs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Building_Barn.BP_Building_Barn_C.CreateFurnitures
// (BlueprintCallable, BlueprintEvent)
void ABP_Building_Barn_C::CreateFurnitures()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Building_Barn.BP_Building_Barn_C.CreateFurnitures");

	ABP_Building_Barn_C_CreateFurnitures_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Building_Barn.BP_Building_Barn_C.ExecuteUbergraph_BP_Building_Barn
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Building_Barn_C::ExecuteUbergraph_BP_Building_Barn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Building_Barn.BP_Building_Barn_C.ExecuteUbergraph_BP_Building_Barn");

	ABP_Building_Barn_C_ExecuteUbergraph_BP_Building_Barn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Building_Barn_C::AfterRead()
{
	ABP_MasterBuilding_C::AfterRead();

	READ_PTR_FULL(S_Building_Stairs_C1, UStaticMeshComponent);
	READ_PTR_FULL(S_Building_Stairs_C, UStaticMeshComponent);
	READ_PTR_FULL(ThreshingFloorSocket, UArrowComponent);
	READ_PTR_FULL(ChestSocket, UArrowComponent);
	READ_PTR_FULL(WorkbenchSocket, UArrowComponent);
}

void ABP_Building_Barn_C::BeforeDelete()
{
	ABP_MasterBuilding_C::BeforeDelete();

	DELE_PTR_FULL(S_Building_Stairs_C1);
	DELE_PTR_FULL(S_Building_Stairs_C);
	DELE_PTR_FULL(ThreshingFloorSocket);
	DELE_PTR_FULL(ChestSocket);
	DELE_PTR_FULL(WorkbenchSocket);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
