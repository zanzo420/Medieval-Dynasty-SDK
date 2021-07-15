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

// Function BP_FurnitureLight_Lantern.BP_FurnitureLight_Lantern_C.OnOwnershipSwap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> NewOwnership                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureLight_Lantern_C::OnOwnershipSwap(TEnumAsByte<E_Ownership_E_Ownership> NewOwnership)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureLight_Lantern.BP_FurnitureLight_Lantern_C.OnOwnershipSwap");

	ABP_FurnitureLight_Lantern_C_OnOwnershipSwap_Params params;
	params.NewOwnership = NewOwnership;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureLight_Lantern.BP_FurnitureLight_Lantern_C.CheckObstruction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanBePlaced_                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FurnitureLight_Lantern_C::CheckObstruction(bool* CanBePlaced_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureLight_Lantern.BP_FurnitureLight_Lantern_C.CheckObstruction");

	ABP_FurnitureLight_Lantern_C_CheckObstruction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanBePlaced_ != nullptr)
		*CanBePlaced_ = params.CanBePlaced_;

}


// Function BP_FurnitureLight_Lantern.BP_FurnitureLight_Lantern_C.DisableGhost
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_FurnitureLight_Lantern_C::DisableGhost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureLight_Lantern.BP_FurnitureLight_Lantern_C.DisableGhost");

	ABP_FurnitureLight_Lantern_C_DisableGhost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureLight_Lantern.BP_FurnitureLight_Lantern_C.EnableGhost
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_FurnitureLight_Lantern_C::EnableGhost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureLight_Lantern.BP_FurnitureLight_Lantern_C.EnableGhost");

	ABP_FurnitureLight_Lantern_C_EnableGhost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureLight_Lantern.BP_FurnitureLight_Lantern_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_FurnitureLight_Lantern_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureLight_Lantern.BP_FurnitureLight_Lantern_C.UserConstructionScript");

	ABP_FurnitureLight_Lantern_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureLight_Lantern.BP_FurnitureLight_Lantern_C.StartFire
// (BlueprintCallable, BlueprintEvent)
void ABP_FurnitureLight_Lantern_C::StartFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureLight_Lantern.BP_FurnitureLight_Lantern_C.StartFire");

	ABP_FurnitureLight_Lantern_C_StartFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureLight_Lantern.BP_FurnitureLight_Lantern_C.PutOutFire
// (BlueprintCallable, BlueprintEvent)
void ABP_FurnitureLight_Lantern_C::PutOutFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureLight_Lantern.BP_FurnitureLight_Lantern_C.PutOutFire");

	ABP_FurnitureLight_Lantern_C_PutOutFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureLight_Lantern.BP_FurnitureLight_Lantern_C.ExecuteUbergraph_BP_FurnitureLight_Lantern
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureLight_Lantern_C::ExecuteUbergraph_BP_FurnitureLight_Lantern(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureLight_Lantern.BP_FurnitureLight_Lantern_C.ExecuteUbergraph_BP_FurnitureLight_Lantern");

	ABP_FurnitureLight_Lantern_C_ExecuteUbergraph_BP_FurnitureLight_Lantern_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_FurnitureLight_Lantern_C::AfterRead()
{
	ABP_MasterFurniture_Light_C::AfterRead();

	READ_PTR_FULL(ObstructionMesh2, UBoxComponent);
	READ_PTR_FULL(PointLight, UPointLightComponent);
	READ_PTR_FULL(MeshLamp, UStaticMeshComponent);
	READ_PTR_FULL(MaterialReference, UMaterialInstanceDynamic);
}

void ABP_FurnitureLight_Lantern_C::BeforeDelete()
{
	ABP_MasterFurniture_Light_C::BeforeDelete();

	DELE_PTR_FULL(ObstructionMesh2);
	DELE_PTR_FULL(PointLight);
	DELE_PTR_FULL(MeshLamp);
	DELE_PTR_FULL(MaterialReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
