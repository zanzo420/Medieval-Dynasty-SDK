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

// Function BP_CaveTorch.BP_CaveTorch_C.EnableTorch
// (BlueprintCallable, BlueprintEvent)
void ABP_CaveTorch_C::EnableTorch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CaveTorch.BP_CaveTorch_C.EnableTorch");

	ABP_CaveTorch_C_EnableTorch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CaveTorch.BP_CaveTorch_C.DisableTorch
// (BlueprintCallable, BlueprintEvent)
void ABP_CaveTorch_C::DisableTorch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CaveTorch.BP_CaveTorch_C.DisableTorch");

	ABP_CaveTorch_C_DisableTorch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CaveTorch.BP_CaveTorch_C.ExecuteUbergraph_BP_CaveTorch
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CaveTorch_C::ExecuteUbergraph_BP_CaveTorch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CaveTorch.BP_CaveTorch_C.ExecuteUbergraph_BP_CaveTorch");

	ABP_CaveTorch_C_ExecuteUbergraph_BP_CaveTorch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
