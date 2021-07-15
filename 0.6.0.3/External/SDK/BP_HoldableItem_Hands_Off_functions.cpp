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

// Function BP_HoldableItem_Hands_Off.BP_HoldableItem_Hands_Off_C.PerformNextAttack
// (BlueprintCallable, BlueprintEvent)
void ABP_HoldableItem_Hands_Off_C::PerformNextAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldableItem_Hands_Off.BP_HoldableItem_Hands_Off_C.PerformNextAttack");

	ABP_HoldableItem_Hands_Off_C_PerformNextAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_HoldableItem_Hands_Off.BP_HoldableItem_Hands_Off_C.ExecuteUbergraph_BP_HoldableItem_Hands_Off
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HoldableItem_Hands_Off_C::ExecuteUbergraph_BP_HoldableItem_Hands_Off(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoldableItem_Hands_Off.BP_HoldableItem_Hands_Off_C.ExecuteUbergraph_BP_HoldableItem_Hands_Off");

	ABP_HoldableItem_Hands_Off_C_ExecuteUbergraph_BP_HoldableItem_Hands_Off_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_HoldableItem_Hands_Off_C::AfterRead()
{
	ABP_HoldableItem_Hands_C::AfterRead();

}

void ABP_HoldableItem_Hands_Off_C::BeforeDelete()
{
	ABP_HoldableItem_Hands_C::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
