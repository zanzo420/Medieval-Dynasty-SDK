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

// Function BP_Trap_FishingNetBig.BP_Trap_FishingNetBig_C.Catch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Load                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Trap_FishingNetBig_C::Catch(bool Load)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Trap_FishingNetBig.BP_Trap_FishingNetBig_C.Catch");

	ABP_Trap_FishingNetBig_C_Catch_Params params;
	params.Load = Load;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Trap_FishingNetBig.BP_Trap_FishingNetBig_C.PickUpAnimal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Trap_FishingNetBig_C::PickUpAnimal(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Trap_FishingNetBig.BP_Trap_FishingNetBig_C.PickUpAnimal");

	ABP_Trap_FishingNetBig_C_PickUpAnimal_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Trap_FishingNetBig.BP_Trap_FishingNetBig_C.ExecuteUbergraph_BP_Trap_FishingNetBig
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Trap_FishingNetBig_C::ExecuteUbergraph_BP_Trap_FishingNetBig(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Trap_FishingNetBig.BP_Trap_FishingNetBig_C.ExecuteUbergraph_BP_Trap_FishingNetBig");

	ABP_Trap_FishingNetBig_C_ExecuteUbergraph_BP_Trap_FishingNetBig_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Trap_FishingNetBig_C::AfterRead()
{
	ABP_MasterTrap_StaticMesh_Net_C::AfterRead();

	READ_PTR_FULL(Fish3_f, USkeletalMeshComponent);
	READ_PTR_FULL(Fish1_f, USkeletalMeshComponent);
	READ_PTR_FULL(Fish2_b, USkeletalMeshComponent);
	READ_PTR_FULL(Fish1_b, USkeletalMeshComponent);
	READ_PTR_FULL(Fish2_f, USkeletalMeshComponent);
	READ_PTR_FULL(Fish3_b, USkeletalMeshComponent);
}

void ABP_Trap_FishingNetBig_C::BeforeDelete()
{
	ABP_MasterTrap_StaticMesh_Net_C::BeforeDelete();

	DELE_PTR_FULL(Fish3_f);
	DELE_PTR_FULL(Fish1_f);
	DELE_PTR_FULL(Fish2_b);
	DELE_PTR_FULL(Fish1_b);
	DELE_PTR_FULL(Fish2_f);
	DELE_PTR_FULL(Fish3_b);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
