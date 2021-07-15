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

// Function UI_Inspector_NPC.UI_Inspector_NPC_C.GetAdvancedStatVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Visibility                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Inspector_NPC_C::GetAdvancedStatVisibility(bool* Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inspector_NPC.UI_Inspector_NPC_C.GetAdvancedStatVisibility");

	UUI_Inspector_NPC_C_GetAdvancedStatVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Visibility != nullptr)
		*Visibility = params.Visibility;

}


// Function UI_Inspector_NPC.UI_Inspector_NPC_C.UpdateData
// (BlueprintCallable, BlueprintEvent)
void UUI_Inspector_NPC_C::UpdateData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inspector_NPC.UI_Inspector_NPC_C.UpdateData");

	UUI_Inspector_NPC_C_UpdateData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Inspector_NPC.UI_Inspector_NPC_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BaseCharacter_C*     BaseCharacterReference         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Inspector_NPC_C::Init(class ABP_BaseCharacter_C* BaseCharacterReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inspector_NPC.UI_Inspector_NPC_C.Init");

	UUI_Inspector_NPC_C_Init_Params params;
	params.BaseCharacterReference = BaseCharacterReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Inspector_NPC.UI_Inspector_NPC_C.ExecuteUbergraph_UI_Inspector_NPC
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Inspector_NPC_C::ExecuteUbergraph_UI_Inspector_NPC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inspector_NPC.UI_Inspector_NPC_C.ExecuteUbergraph_UI_Inspector_NPC");

	UUI_Inspector_NPC_C_ExecuteUbergraph_UI_Inspector_NPC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
