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

// Function BP_Prey_Deer_Female_Young.BP_Prey_Deer_Female_Young_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Prey_Deer_Female_Young_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prey_Deer_Female_Young.BP_Prey_Deer_Female_Young_C.ReceiveBeginPlay");

	ABP_Prey_Deer_Female_Young_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prey_Deer_Female_Young.BP_Prey_Deer_Female_Young_C.EventDead
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_Prey_Deer_Female_Young_C::EventDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prey_Deer_Female_Young.BP_Prey_Deer_Female_Young_C.EventDead");

	ABP_Prey_Deer_Female_Young_C_EventDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prey_Deer_Female_Young.BP_Prey_Deer_Female_Young_C.ExecuteUbergraph_BP_Prey_Deer_Female_Young
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Prey_Deer_Female_Young_C::ExecuteUbergraph_BP_Prey_Deer_Female_Young(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Prey_Deer_Female_Young.BP_Prey_Deer_Female_Young_C.ExecuteUbergraph_BP_Prey_Deer_Female_Young");

	ABP_Prey_Deer_Female_Young_C_ExecuteUbergraph_BP_Prey_Deer_Female_Young_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Prey_Deer_Female_Young_C::AfterRead()
{
	ABP_PreyAI_C::AfterRead();

	READ_PTR_FULL(PhysicsConstraint, UPhysicsConstraintComponent);
	READ_PTR_FULL(CapsuleCollider_Body, UCapsuleComponent);
	READ_PTR_FULL(BP_Comp_GrowOld, UBP_Comp_GrowOld_C);
}

void ABP_Prey_Deer_Female_Young_C::BeforeDelete()
{
	ABP_PreyAI_C::BeforeDelete();

	DELE_PTR_FULL(PhysicsConstraint);
	DELE_PTR_FULL(CapsuleCollider_Body);
	DELE_PTR_FULL(BP_Comp_GrowOld);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
