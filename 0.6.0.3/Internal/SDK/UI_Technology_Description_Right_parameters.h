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

// Function UI_Technology_Description_Right.UI_Technology_Description_Right_C.GetItemStats
struct UUI_Technology_Description_Right_C_GetItemStats_Params
{
	struct FName                                       ItemRowName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Technology_Description_Right.UI_Technology_Description_Right_C.UpdateSlotDescription
struct UUI_Technology_Description_Right_C_UpdateSlotDescription_Params
{
	struct FDataTableRowHandle                         RecipeType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FDataTableRowHandle                         FurnitureType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FDataTableRowHandle                         FenceType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FST_OtherTechnologySchemes                  OtherSchemeType;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function UI_Technology_Description_Right.UI_Technology_Description_Right_C.UpdateTechnologyDescription
struct UUI_Technology_Description_Right_C_UpdateTechnologyDescription_Params
{
	int                                                TechnologyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Technology_Description_Right.UI_Technology_Description_Right_C.Init
struct UUI_Technology_Description_Right_C_Init_Params
{
	class APC_Player_C*                                PlayerControllerReference;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Technology_Description_Right.UI_Technology_Description_Right_C.Construct
struct UUI_Technology_Description_Right_C_Construct_Params
{
};

// Function UI_Technology_Description_Right.UI_Technology_Description_Right_C.ExecuteUbergraph_UI_Technology_Description_Right
struct UUI_Technology_Description_Right_C_ExecuteUbergraph_UI_Technology_Description_Right_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
