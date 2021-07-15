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

// Function BP_FurnitureLight_Chandelier.BP_FurnitureLight_Chandelier_C.StartFire
// (BlueprintCallable, BlueprintEvent)
void ABP_FurnitureLight_Chandelier_C::StartFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureLight_Chandelier.BP_FurnitureLight_Chandelier_C.StartFire");

	ABP_FurnitureLight_Chandelier_C_StartFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureLight_Chandelier.BP_FurnitureLight_Chandelier_C.PutOutFire
// (BlueprintCallable, BlueprintEvent)
void ABP_FurnitureLight_Chandelier_C::PutOutFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureLight_Chandelier.BP_FurnitureLight_Chandelier_C.PutOutFire");

	ABP_FurnitureLight_Chandelier_C_PutOutFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FurnitureLight_Chandelier.BP_FurnitureLight_Chandelier_C.ExecuteUbergraph_BP_FurnitureLight_Chandelier
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FurnitureLight_Chandelier_C::ExecuteUbergraph_BP_FurnitureLight_Chandelier(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FurnitureLight_Chandelier.BP_FurnitureLight_Chandelier_C.ExecuteUbergraph_BP_FurnitureLight_Chandelier");

	ABP_FurnitureLight_Chandelier_C_ExecuteUbergraph_BP_FurnitureLight_Chandelier_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
