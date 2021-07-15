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

// Function UI_CharacterStats.UI_CharacterStats_C.Update
// (BlueprintCallable, BlueprintEvent)
void UUI_CharacterStats_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterStats.UI_CharacterStats_C.Update");

	UUI_CharacterStats_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CharacterStats.UI_CharacterStats_C.BindUpdate
// (BlueprintCallable, BlueprintEvent)
void UUI_CharacterStats_C::BindUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterStats.UI_CharacterStats_C.BindUpdate");

	UUI_CharacterStats_C_BindUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_CharacterStats.UI_CharacterStats_C.ExecuteUbergraph_UI_CharacterStats
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_CharacterStats_C::ExecuteUbergraph_UI_CharacterStats(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CharacterStats.UI_CharacterStats_C.ExecuteUbergraph_UI_CharacterStats");

	UUI_CharacterStats_C_ExecuteUbergraph_UI_CharacterStats_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
