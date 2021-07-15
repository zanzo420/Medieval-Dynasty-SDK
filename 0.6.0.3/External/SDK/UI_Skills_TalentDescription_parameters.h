#pragma once

// Name: Medieval Dynasty, Version: 0.6.0.3


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function UI_Skills_TalentDescription.UI_Skills_TalentDescription_C.GetDescriptionWithCurrentLevelValue
struct UUI_Skills_TalentDescription_C_GetDescriptionWithCurrentLevelValue_Params
{
	struct FText                                       BaseDescription;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<float>                                      Values;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                ArrayIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       FinalDescription;                                          // (Parm, OutParm)
};

// Function UI_Skills_TalentDescription.UI_Skills_TalentDescription_C.UpdateTalentDescription
struct UUI_Skills_TalentDescription_C_UpdateTalentDescription_Params
{
	struct FST_MasterTalent                            TalentReference;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function UI_Skills_TalentDescription.UI_Skills_TalentDescription_C.ExecuteUbergraph_UI_Skills_TalentDescription
struct UUI_Skills_TalentDescription_C_ExecuteUbergraph_UI_Skills_TalentDescription_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
