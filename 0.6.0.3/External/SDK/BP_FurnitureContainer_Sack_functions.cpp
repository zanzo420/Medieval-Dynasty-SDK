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

// Function BP_FurnitureContainer_Sack.BP_FurnitureContainer_Sack_C.GetInventoryComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent_C*   Inventory                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureContainer_Sack_C::GetInventoryComponent(class UInventoryComponent_C** Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureContainer_Sack.BP_FurnitureContainer_Sack_C.GetInventoryComponent");

	ABP_FurnitureContainer_Sack_C_GetInventoryComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Inventory != nullptr)
		*Inventory = params.Inventory;

}


// Function BP_FurnitureContainer_Sack.BP_FurnitureContainer_Sack_C.OnOwnershipSwap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> NewOwnership                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureContainer_Sack_C::OnOwnershipSwap(TEnumAsByte<E_Ownership_E_Ownership> NewOwnership)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureContainer_Sack.BP_FurnitureContainer_Sack_C.OnOwnershipSwap");

	ABP_FurnitureContainer_Sack_C_OnOwnershipSwap_Params params;
	params.NewOwnership = NewOwnership;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureContainer_Sack.BP_FurnitureContainer_Sack_C.DisableGhost
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_FurnitureContainer_Sack_C::DisableGhost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureContainer_Sack.BP_FurnitureContainer_Sack_C.DisableGhost");

	ABP_FurnitureContainer_Sack_C_DisableGhost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_FurnitureContainer_Sack_C::AfterRead()
{
	ABP_MasterFurniture_Container_C::AfterRead();

	READ_PTR_FULL(Mesh, UStaticMeshComponent);
	READ_PTR_FULL(ObstructionMesh, UBoxComponent);
}

void ABP_FurnitureContainer_Sack_C::BeforeDelete()
{
	ABP_MasterFurniture_Container_C::BeforeDelete();

	DELE_PTR_FULL(Mesh);
	DELE_PTR_FULL(ObstructionMesh);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
