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

// Function UI_RewardSlot_DynastyReputation.UI_RewardSlot_DynastyReputation_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_RewardSlot_DynastyReputation_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RewardSlot_DynastyReputation.UI_RewardSlot_DynastyReputation_C.Construct");

	UUI_RewardSlot_DynastyReputation_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_RewardSlot_DynastyReputation.UI_RewardSlot_DynastyReputation_C.ExecuteUbergraph_UI_RewardSlot_DynastyReputation
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_RewardSlot_DynastyReputation_C::ExecuteUbergraph_UI_RewardSlot_DynastyReputation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RewardSlot_DynastyReputation.UI_RewardSlot_DynastyReputation_C.ExecuteUbergraph_UI_RewardSlot_DynastyReputation");

	UUI_RewardSlot_DynastyReputation_C_ExecuteUbergraph_UI_RewardSlot_DynastyReputation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
