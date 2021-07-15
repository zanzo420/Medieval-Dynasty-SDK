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

// Function UI_Skills_TalentDescription.UI_Skills_TalentDescription_C.GetDescriptionWithCurrentLevelValue
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   BaseDescription                (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<float>                  Values                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            ArrayIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   FinalDescription               (Parm, OutParm)
void UUI_Skills_TalentDescription_C::GetDescriptionWithCurrentLevelValue(const struct FText& BaseDescription, TArray<float>* Values, int ArrayIndex, struct FText* FinalDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills_TalentDescription.UI_Skills_TalentDescription_C.GetDescriptionWithCurrentLevelValue");

	UUI_Skills_TalentDescription_C_GetDescriptionWithCurrentLevelValue_Params params;
	params.BaseDescription = BaseDescription;
	params.ArrayIndex = ArrayIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Values != nullptr)
		*Values = params.Values;
	if (FinalDescription != nullptr)
		*FinalDescription = params.FinalDescription;

}


// Function UI_Skills_TalentDescription.UI_Skills_TalentDescription_C.UpdateTalentDescription
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FST_MasterTalent        TalentReference                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UUI_Skills_TalentDescription_C::UpdateTalentDescription(const struct FST_MasterTalent& TalentReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills_TalentDescription.UI_Skills_TalentDescription_C.UpdateTalentDescription");

	UUI_Skills_TalentDescription_C_UpdateTalentDescription_Params params;
	params.TalentReference = TalentReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Skills_TalentDescription.UI_Skills_TalentDescription_C.ExecuteUbergraph_UI_Skills_TalentDescription
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Skills_TalentDescription_C::ExecuteUbergraph_UI_Skills_TalentDescription(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Skills_TalentDescription.UI_Skills_TalentDescription_C.ExecuteUbergraph_UI_Skills_TalentDescription");

	UUI_Skills_TalentDescription_C_ExecuteUbergraph_UI_Skills_TalentDescription_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
