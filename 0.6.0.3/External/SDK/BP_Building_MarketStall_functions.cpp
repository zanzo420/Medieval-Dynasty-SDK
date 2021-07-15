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

// Function BP_Building_MarketStall.BP_Building_MarketStall_C.HasResouces
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Resources                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Building_MarketStall_C::HasResouces(bool* Resources)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Building_MarketStall.BP_Building_MarketStall_C.HasResouces");

	ABP_Building_MarketStall_C_HasResouces_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Resources != nullptr)
		*Resources = params.Resources;

}


// Function BP_Building_MarketStall.BP_Building_MarketStall_C.SetShopType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_ShopType_E_ShopType> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           InitTradingData                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Building_MarketStall_C::SetShopType(TEnumAsByte<E_ShopType_E_ShopType> Type, bool InitTradingData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Building_MarketStall.BP_Building_MarketStall_C.SetShopType");

	ABP_Building_MarketStall_C_SetShopType_Params params;
	params.Type = Type;
	params.InitTradingData = InitTradingData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Building_MarketStall.BP_Building_MarketStall_C.GetBuildingModulesDataFromSlot
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            SocketID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FST_Module>      ModulesData                    (Parm, OutParm)
void ABP_Building_MarketStall_C::GetBuildingModulesDataFromSlot(int SocketID, bool* Success, TArray<struct FST_Module>* ModulesData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Building_MarketStall.BP_Building_MarketStall_C.GetBuildingModulesDataFromSlot");

	ABP_Building_MarketStall_C_GetBuildingModulesDataFromSlot_Params params;
	params.SocketID = SocketID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (ModulesData != nullptr)
		*ModulesData = params.ModulesData;

}


// Function BP_Building_MarketStall.BP_Building_MarketStall_C.GetBuildingModuleDataFromSlot
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ModuleID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_BuildingModuleSocket SocketData                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_Module              ModuleData                     (Parm, OutParm, HasGetValueTypeHash)
void ABP_Building_MarketStall_C::GetBuildingModuleDataFromSlot(int ModuleID, const struct FST_BuildingModuleSocket& SocketData, bool* Success, struct FST_Module* ModuleData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Building_MarketStall.BP_Building_MarketStall_C.GetBuildingModuleDataFromSlot");

	ABP_Building_MarketStall_C_GetBuildingModuleDataFromSlot_Params params;
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


// Function BP_Building_MarketStall.BP_Building_MarketStall_C.SetStairs
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Building_MarketStall_C::SetStairs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Building_MarketStall.BP_Building_MarketStall_C.SetStairs");

	ABP_Building_MarketStall_C_SetStairs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Building_MarketStall.BP_Building_MarketStall_C.OnLoaded_F5F1394A4A8EDADA74AE009B2066C208
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Building_MarketStall_C::OnLoaded_F5F1394A4A8EDADA74AE009B2066C208(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Building_MarketStall.BP_Building_MarketStall_C.OnLoaded_F5F1394A4A8EDADA74AE009B2066C208");

	ABP_Building_MarketStall_C_OnLoaded_F5F1394A4A8EDADA74AE009B2066C208_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Building_MarketStall.BP_Building_MarketStall_C.CreateFurnitures
// (BlueprintCallable, BlueprintEvent)
void ABP_Building_MarketStall_C::CreateFurnitures()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Building_MarketStall.BP_Building_MarketStall_C.CreateFurnitures");

	ABP_Building_MarketStall_C_CreateFurnitures_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Building_MarketStall.BP_Building_MarketStall_C.SetInteriorMesh
// (BlueprintCallable, BlueprintEvent)
void ABP_Building_MarketStall_C::SetInteriorMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Building_MarketStall.BP_Building_MarketStall_C.SetInteriorMesh");

	ABP_Building_MarketStall_C_SetInteriorMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Building_MarketStall.BP_Building_MarketStall_C.ExecuteUbergraph_BP_Building_MarketStall
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Building_MarketStall_C::ExecuteUbergraph_BP_Building_MarketStall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Building_MarketStall.BP_Building_MarketStall_C.ExecuteUbergraph_BP_Building_MarketStall");

	ABP_Building_MarketStall_C_ExecuteUbergraph_BP_Building_MarketStall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Building_MarketStall_C::AfterRead()
{
	ABP_MasterBuilding_C::AfterRead();

	READ_PTR_FULL(InteriorMesh, UStaticMeshComponent);
	READ_PTR_FULL(S_Building_Stairs_A, UStaticMeshComponent);
}

void ABP_Building_MarketStall_C::BeforeDelete()
{
	ABP_MasterBuilding_C::BeforeDelete();

	DELE_PTR_FULL(InteriorMesh);
	DELE_PTR_FULL(S_Building_Stairs_A);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
