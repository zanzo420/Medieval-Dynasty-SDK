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

// Function UI_Quest_KnowledgeDescription.UI_Quest_KnowledgeDescription_C.UpdateKnowledgeDescription
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   KnowledgeName                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   KnowledgeDesc                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
void UUI_Quest_KnowledgeDescription_C::UpdateKnowledgeDescription(const struct FText& KnowledgeName, const struct FText& KnowledgeDesc)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Quest_KnowledgeDescription.UI_Quest_KnowledgeDescription_C.UpdateKnowledgeDescription");

	UUI_Quest_KnowledgeDescription_C_UpdateKnowledgeDescription_Params params;
	params.KnowledgeName = KnowledgeName;
	params.KnowledgeDesc = KnowledgeDesc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Quest_KnowledgeDescription.UI_Quest_KnowledgeDescription_C.ExecuteUbergraph_UI_Quest_KnowledgeDescription
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Quest_KnowledgeDescription_C::ExecuteUbergraph_UI_Quest_KnowledgeDescription(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Quest_KnowledgeDescription.UI_Quest_KnowledgeDescription_C.ExecuteUbergraph_UI_Quest_KnowledgeDescription");

	UUI_Quest_KnowledgeDescription_C_ExecuteUbergraph_UI_Quest_KnowledgeDescription_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
