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

// Function UI_Technology_SchemesList.UI_Technology_SchemesList_C.FillSchemesList
struct UUI_Technology_SchemesList_C_FillSchemesList_Params
{
	TArray<struct FDataTableRowHandle>                 SchemesList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_Technology_SchemesList.UI_Technology_SchemesList_C.ChangeSelectedScheme
struct UUI_Technology_SchemesList_C_ChangeSelectedScheme_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Technology_SchemesList.UI_Technology_SchemesList_C.MakeSchemeActive
struct UUI_Technology_SchemesList_C_MakeSchemeActive_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Technology_SchemesList.UI_Technology_SchemesList_C.MakeSchemesUnactive
struct UUI_Technology_SchemesList_C_MakeSchemesUnactive_Params
{
};

// Function UI_Technology_SchemesList.UI_Technology_SchemesList_C.AddChildToGrid
struct UUI_Technology_SchemesList_C_AddChildToGrid_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                         Scheme;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	int                                                TechnologyVillageManagerID;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Technology_SchemesList.UI_Technology_SchemesList_C.UpdateSchemesList
struct UUI_Technology_SchemesList_C_UpdateSchemesList_Params
{
	TArray<struct FDataTableRowHandle>                 Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_Technology_SchemesList.UI_Technology_SchemesList_C.UpdateCoins
struct UUI_Technology_SchemesList_C_UpdateCoins_Params
{
};

// Function UI_Technology_SchemesList.UI_Technology_SchemesList_C.MakeActive
struct UUI_Technology_SchemesList_C_MakeActive_Params
{
};

// Function UI_Technology_SchemesList.UI_Technology_SchemesList_C.MakeUnactive
struct UUI_Technology_SchemesList_C_MakeUnactive_Params
{
};

// Function UI_Technology_SchemesList.UI_Technology_SchemesList_C.BindSchemesUpdateCoins
struct UUI_Technology_SchemesList_C_BindSchemesUpdateCoins_Params
{
};

// Function UI_Technology_SchemesList.UI_Technology_SchemesList_C.ExecuteUbergraph_UI_Technology_SchemesList
struct UUI_Technology_SchemesList_C_ExecuteUbergraph_UI_Technology_SchemesList_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
