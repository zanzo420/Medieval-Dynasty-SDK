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

// Function BP_Rat_Male.BP_Rat_Male_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Rat_Male_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rat_Male.BP_Rat_Male_C.ReceiveBeginPlay");

	ABP_Rat_Male_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Rat_Male.BP_Rat_Male_C.ExecuteUbergraph_BP_Rat_Male
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Rat_Male_C::ExecuteUbergraph_BP_Rat_Male(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Rat_Male.BP_Rat_Male_C.ExecuteUbergraph_BP_Rat_Male");

	ABP_Rat_Male_C_ExecuteUbergraph_BP_Rat_Male_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
