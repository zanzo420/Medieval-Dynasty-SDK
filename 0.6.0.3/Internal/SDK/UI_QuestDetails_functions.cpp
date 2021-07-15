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

// Function UI_QuestDetails.UI_QuestDetails_C.InitQuestDetails
// (BlueprintCallable, BlueprintEvent)
void UUI_QuestDetails_C::InitQuestDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuestDetails.UI_QuestDetails_C.InitQuestDetails");

	UUI_QuestDetails_C_InitQuestDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuestDetails.UI_QuestDetails_C.UpdateQuestInformation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Slot_Quest_C*        QuestReference                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_QuestDetails_C::UpdateQuestInformation(class UUI_Slot_Quest_C* QuestReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuestDetails.UI_QuestDetails_C.UpdateQuestInformation");

	UUI_QuestDetails_C_UpdateQuestInformation_Params params;
	params.QuestReference = QuestReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuestDetails.UI_QuestDetails_C.ExecuteUbergraph_UI_QuestDetails
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_QuestDetails_C::ExecuteUbergraph_UI_QuestDetails(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuestDetails.UI_QuestDetails_C.ExecuteUbergraph_UI_QuestDetails");

	UUI_QuestDetails_C_ExecuteUbergraph_UI_QuestDetails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
