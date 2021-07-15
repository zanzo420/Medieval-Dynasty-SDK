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

// Function BP_Comp_Group.BP_Comp_Group_C.EventRegisterWithGroup
// (BlueprintCallable, BlueprintEvent)
void UBP_Comp_Group_C::EventRegisterWithGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_Group.BP_Comp_Group_C.EventRegisterWithGroup");

	UBP_Comp_Group_C_EventRegisterWithGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Comp_Group.BP_Comp_Group_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UBP_Comp_Group_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_Group.BP_Comp_Group_C.ReceiveBeginPlay");

	UBP_Comp_Group_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Comp_Group.BP_Comp_Group_C.EventRegisterWithAutoGroupTag
// (BlueprintCallable, BlueprintEvent)
void UBP_Comp_Group_C::EventRegisterWithAutoGroupTag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_Group.BP_Comp_Group_C.EventRegisterWithAutoGroupTag");

	UBP_Comp_Group_C_EventRegisterWithAutoGroupTag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Comp_Group.BP_Comp_Group_C.EventRegisterWithAutoGroup
// (BlueprintCallable, BlueprintEvent)
void UBP_Comp_Group_C::EventRegisterWithAutoGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_Group.BP_Comp_Group_C.EventRegisterWithAutoGroup");

	UBP_Comp_Group_C_EventRegisterWithAutoGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Comp_Group.BP_Comp_Group_C.ExecuteUbergraph_BP_Comp_Group
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Comp_Group_C::ExecuteUbergraph_BP_Comp_Group(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Comp_Group.BP_Comp_Group_C.ExecuteUbergraph_BP_Comp_Group");

	UBP_Comp_Group_C_ExecuteUbergraph_BP_Comp_Group_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_Comp_Group_C::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(GroupManager, ABP_GroupManager_C);
	READ_PTR_FULL(Owner, ABP_GroundAnimalBase_C);
}

void UBP_Comp_Group_C::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(GroupManager);
	DELE_PTR_FULL(Owner);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
