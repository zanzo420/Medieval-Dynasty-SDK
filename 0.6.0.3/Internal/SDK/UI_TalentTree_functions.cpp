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

// Function UI_TalentTree.UI_TalentTree_C.MakeTalentActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_TalentTree_C::MakeTalentActive(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TalentTree.UI_TalentTree_C.MakeTalentActive");

	UUI_TalentTree_C_MakeTalentActive_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_TalentTree.UI_TalentTree_C.MakeTalentsUnactive
// (Public, BlueprintCallable, BlueprintEvent)
void UUI_TalentTree_C::MakeTalentsUnactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TalentTree.UI_TalentTree_C.MakeTalentsUnactive");

	UUI_TalentTree_C_MakeTalentsUnactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_TalentTree.UI_TalentTree_C.UpdateTalentTree
// (BlueprintCallable, BlueprintEvent)
void UUI_TalentTree_C::UpdateTalentTree()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TalentTree.UI_TalentTree_C.UpdateTalentTree");

	UUI_TalentTree_C_UpdateTalentTree_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_TalentTree.UI_TalentTree_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_TalentTree_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TalentTree.UI_TalentTree_C.Construct");

	UUI_TalentTree_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_TalentTree.UI_TalentTree_C.UpdateSelectedSkill
// (BlueprintCallable, BlueprintEvent)
void UUI_TalentTree_C::UpdateSelectedSkill()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TalentTree.UI_TalentTree_C.UpdateSelectedSkill");

	UUI_TalentTree_C_UpdateSelectedSkill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_TalentTree.UI_TalentTree_C.ExecuteUbergraph_UI_TalentTree
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_TalentTree_C::ExecuteUbergraph_UI_TalentTree(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TalentTree.UI_TalentTree_C.ExecuteUbergraph_UI_TalentTree");

	UUI_TalentTree_C_ExecuteUbergraph_UI_TalentTree_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
