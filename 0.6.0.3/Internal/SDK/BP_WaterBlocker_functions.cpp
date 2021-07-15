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

// Function BP_WaterBlocker.BP_WaterBlocker_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_WaterBlocker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterBlocker.BP_WaterBlocker_C.UserConstructionScript");

	ABP_WaterBlocker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WaterBlocker.BP_WaterBlocker_C.ExecuteUbergraph_BP_WaterBlocker
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_WaterBlocker_C::ExecuteUbergraph_BP_WaterBlocker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterBlocker.BP_WaterBlocker_C.ExecuteUbergraph_BP_WaterBlocker");

	ABP_WaterBlocker_C_ExecuteUbergraph_BP_WaterBlocker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
