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

// Function BP_Bear_Male.BP_Bear_Male_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Bear_Male_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bear_Male.BP_Bear_Male_C.ReceiveBeginPlay");

	ABP_Bear_Male_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Bear_Male.BP_Bear_Male_C.EventDead
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_Bear_Male_C::EventDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bear_Male.BP_Bear_Male_C.EventDead");

	ABP_Bear_Male_C_EventDead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Bear_Male.BP_Bear_Male_C.ExecuteUbergraph_BP_Bear_Male
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Bear_Male_C::ExecuteUbergraph_BP_Bear_Male(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Bear_Male.BP_Bear_Male_C.ExecuteUbergraph_BP_Bear_Male");

	ABP_Bear_Male_C_ExecuteUbergraph_BP_Bear_Male_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Bear_Male_C::AfterRead()
{
	ABP_BearAI_C::AfterRead();

	READ_PTR_FULL(CapsuleCollider_Body, UCapsuleComponent);
	READ_PTR_FULL(PelvisCapsule, UCapsuleComponent);
}

void ABP_Bear_Male_C::BeforeDelete()
{
	ABP_BearAI_C::BeforeDelete();

	DELE_PTR_FULL(CapsuleCollider_Body);
	DELE_PTR_FULL(PelvisCapsule);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
