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

// Function BP_Trap_FishingNetMedium.BP_Trap_FishingNetMedium_C.Catch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Load                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Trap_FishingNetMedium_C::Catch(bool Load)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Trap_FishingNetMedium.BP_Trap_FishingNetMedium_C.Catch");

	ABP_Trap_FishingNetMedium_C_Catch_Params params;
	params.Load = Load;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Trap_FishingNetMedium.BP_Trap_FishingNetMedium_C.PickUpAnimal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Trap_FishingNetMedium_C::PickUpAnimal(class ABP_BaseCharacter_C* BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Trap_FishingNetMedium.BP_Trap_FishingNetMedium_C.PickUpAnimal");

	ABP_Trap_FishingNetMedium_C_PickUpAnimal_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Trap_FishingNetMedium.BP_Trap_FishingNetMedium_C.ExecuteUbergraph_BP_Trap_FishingNetMedium
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Trap_FishingNetMedium_C::ExecuteUbergraph_BP_Trap_FishingNetMedium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Trap_FishingNetMedium.BP_Trap_FishingNetMedium_C.ExecuteUbergraph_BP_Trap_FishingNetMedium");

	ABP_Trap_FishingNetMedium_C_ExecuteUbergraph_BP_Trap_FishingNetMedium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Trap_FishingNetMedium_C::AfterRead()
{
	ABP_MasterTrap_StaticMesh_Net_C::AfterRead();

	READ_PTR_FULL(Fish3_b, USkeletalMeshComponent);
	READ_PTR_FULL(Fish2_f, USkeletalMeshComponent);
	READ_PTR_FULL(Fish1_f, USkeletalMeshComponent);
	READ_PTR_FULL(Fish2_b, USkeletalMeshComponent);
	READ_PTR_FULL(Fish3_f, USkeletalMeshComponent);
	READ_PTR_FULL(Fish1_b, USkeletalMeshComponent);
}

void ABP_Trap_FishingNetMedium_C::BeforeDelete()
{
	ABP_MasterTrap_StaticMesh_Net_C::BeforeDelete();

	DELE_PTR_FULL(Fish3_b);
	DELE_PTR_FULL(Fish2_f);
	DELE_PTR_FULL(Fish1_f);
	DELE_PTR_FULL(Fish2_b);
	DELE_PTR_FULL(Fish3_f);
	DELE_PTR_FULL(Fish1_b);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
