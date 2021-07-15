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

// Function BP_Furniture_FeedingRack.BP_Furniture_FeedingRack_C.CheckObstruction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanBePlaced_                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Furniture_FeedingRack_C::CheckObstruction(bool* CanBePlaced_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Furniture_FeedingRack.BP_Furniture_FeedingRack_C.CheckObstruction");

	ABP_Furniture_FeedingRack_C_CheckObstruction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanBePlaced_ != nullptr)
		*CanBePlaced_ = params.CanBePlaced_;

}


// Function BP_Furniture_FeedingRack.BP_Furniture_FeedingRack_C.UpdateCapacityAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CapacityRatio                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Furniture_FeedingRack_C::UpdateCapacityAnimation(float CapacityRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Furniture_FeedingRack.BP_Furniture_FeedingRack_C.UpdateCapacityAnimation");

	ABP_Furniture_FeedingRack_C_UpdateCapacityAnimation_Params params;
	params.CapacityRatio = CapacityRatio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Furniture_FeedingRack.BP_Furniture_FeedingRack_C.DisableGhost
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Furniture_FeedingRack_C::DisableGhost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Furniture_FeedingRack.BP_Furniture_FeedingRack_C.DisableGhost");

	ABP_Furniture_FeedingRack_C_DisableGhost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Furniture_FeedingRack.BP_Furniture_FeedingRack_C.EnableGhost
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Furniture_FeedingRack_C::EnableGhost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Furniture_FeedingRack.BP_Furniture_FeedingRack_C.EnableGhost");

	ABP_Furniture_FeedingRack_C_EnableGhost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Furniture_FeedingRack.BP_Furniture_FeedingRack_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Furniture_FeedingRack_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Furniture_FeedingRack.BP_Furniture_FeedingRack_C.UserConstructionScript");

	ABP_Furniture_FeedingRack_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Furniture_FeedingRack_C::AfterRead()
{
	ABP_Furniture_RefillableContainer_C::AfterRead();

	READ_PTR_FULL(ObstructionMesh, UBoxComponent);
	READ_PTR_FULL(Mesh, UStaticMeshComponent);
	READ_PTR_FULL(MaterialAnimation, UMaterialInstanceDynamic);
}

void ABP_Furniture_FeedingRack_C::BeforeDelete()
{
	ABP_Furniture_RefillableContainer_C::BeforeDelete();

	DELE_PTR_FULL(ObstructionMesh);
	DELE_PTR_FULL(Mesh);
	DELE_PTR_FULL(MaterialAnimation);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
