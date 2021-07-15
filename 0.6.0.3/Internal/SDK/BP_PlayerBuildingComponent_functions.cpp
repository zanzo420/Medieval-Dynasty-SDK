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

// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.UpdateBuildingLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 NewBuildingLocation            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PlayerBuildingComponent_C::UpdateBuildingLocation(const struct FVector& NewBuildingLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.UpdateBuildingLocation");

	UBP_PlayerBuildingComponent_C_UpdateBuildingLocation_Params params;
	params.NewBuildingLocation = NewBuildingLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UBP_PlayerBuildingComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ReceiveBeginPlay");

	UBP_PlayerBuildingComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnBuildingGhost
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     BuildingType                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UBP_PlayerBuildingComponent_C::SpawnBuildingGhost(const struct FDataTableRowHandle& BuildingType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnBuildingGhost");

	UBP_PlayerBuildingComponent_C_SpawnBuildingGhost_Params params;
	params.BuildingType = BuildingType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnMasterFieldGhost
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_FieldCategories_E_FieldCategories> FieldType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PlayerBuildingComponent_C::SpawnMasterFieldGhost(TEnumAsByte<E_FieldCategories_E_FieldCategories> FieldType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnMasterFieldGhost");

	UBP_PlayerBuildingComponent_C_SpawnMasterFieldGhost_Params params;
	params.FieldType = FieldType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnSplineGhost
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     FenceType                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UBP_PlayerBuildingComponent_C::SpawnSplineGhost(const struct FDataTableRowHandle& FenceType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnSplineGhost");

	UBP_PlayerBuildingComponent_C_SpawnSplineGhost_Params params;
	params.FenceType = FenceType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnFurnitureGhost
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     FurnitureType                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
void UBP_PlayerBuildingComponent_C::SpawnFurnitureGhost(const struct FDataTableRowHandle& FurnitureType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnFurnitureGhost");

	UBP_PlayerBuildingComponent_C_SpawnFurnitureGhost_Params params;
	params.FurnitureType = FurnitureType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnRoadGhost
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     RoadType                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UBP_PlayerBuildingComponent_C::SpawnRoadGhost(const struct FDataTableRowHandle& RoadType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.SpawnRoadGhost");

	UBP_PlayerBuildingComponent_C_SpawnRoadGhost_Params params;
	params.RoadType = RoadType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ExecuteUbergraph_BP_PlayerBuildingComponent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PlayerBuildingComponent_C::ExecuteUbergraph_BP_PlayerBuildingComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerBuildingComponent.BP_PlayerBuildingComponent_C.ExecuteUbergraph_BP_PlayerBuildingComponent");

	UBP_PlayerBuildingComponent_C_ExecuteUbergraph_BP_PlayerBuildingComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
