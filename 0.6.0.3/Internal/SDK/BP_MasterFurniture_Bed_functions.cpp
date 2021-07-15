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

// Function BP_MasterFurniture_Bed.BP_MasterFurniture_Bed_C.OnOwnershipSwap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Ownership_E_Ownership> NewOwnership                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Bed_C::OnOwnershipSwap(TEnumAsByte<E_Ownership_E_Ownership> NewOwnership)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Bed.BP_MasterFurniture_Bed_C.OnOwnershipSwap");

	ABP_MasterFurniture_Bed_C_OnOwnershipSwap_Params params;
	params.NewOwnership = NewOwnership;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Bed.BP_MasterFurniture_Bed_C.CheckObstruction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanBePlaced_                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterFurniture_Bed_C::CheckObstruction(bool* CanBePlaced_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Bed.BP_MasterFurniture_Bed_C.CheckObstruction");

	ABP_MasterFurniture_Bed_C_CheckObstruction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanBePlaced_ != nullptr)
		*CanBePlaced_ = params.CanBePlaced_;

}


// Function BP_MasterFurniture_Bed.BP_MasterFurniture_Bed_C.DisableGhost
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_MasterFurniture_Bed_C::DisableGhost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Bed.BP_MasterFurniture_Bed_C.DisableGhost");

	ABP_MasterFurniture_Bed_C_DisableGhost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Bed.BP_MasterFurniture_Bed_C.EnableGhost
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_MasterFurniture_Bed_C::EnableGhost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Bed.BP_MasterFurniture_Bed_C.EnableGhost");

	ABP_MasterFurniture_Bed_C_EnableGhost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Bed.BP_MasterFurniture_Bed_C.Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           Timer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MasterFurniture_Bed_C::Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Bed.BP_MasterFurniture_Bed_C.Interact");

	ABP_MasterFurniture_Bed_C_Interact_Params params;
	params.BaseCharacter = BaseCharacter;
	params.Hit = Hit;
	params.Timer = Timer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Bed.BP_MasterFurniture_Bed_C.SetMeshMobility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EComponentMobility> Mobility                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Bed_C::SetMeshMobility(TEnumAsByte<Engine_EComponentMobility> Mobility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Bed.BP_MasterFurniture_Bed_C.SetMeshMobility");

	ABP_MasterFurniture_Bed_C_SetMeshMobility_Params params;
	params.Mobility = Mobility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_MasterFurniture_Bed.BP_MasterFurniture_Bed_C.ExecuteUbergraph_BP_MasterFurniture_Bed
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MasterFurniture_Bed_C::ExecuteUbergraph_BP_MasterFurniture_Bed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MasterFurniture_Bed.BP_MasterFurniture_Bed_C.ExecuteUbergraph_BP_MasterFurniture_Bed");

	ABP_MasterFurniture_Bed_C_ExecuteUbergraph_BP_MasterFurniture_Bed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
