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

// Function BP_AI_Food.BP_AI_Food_C.fnSetScales
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_AI_Food_C::fnSetScales()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_Food.BP_AI_Food_C.fnSetScales");

	ABP_AI_Food_C_fnSetScales_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_Food.BP_AI_Food_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_AI_Food_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_Food.BP_AI_Food_C.UserConstructionScript");

	ABP_AI_Food_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AI_Food.BP_AI_Food_C.ExecuteUbergraph_BP_AI_Food
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AI_Food_C::ExecuteUbergraph_BP_AI_Food(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AI_Food.BP_AI_Food_C.ExecuteUbergraph_BP_AI_Food");

	ABP_AI_Food_C_ExecuteUbergraph_BP_AI_Food_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
