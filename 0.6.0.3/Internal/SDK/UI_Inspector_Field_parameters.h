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

// Function UI_Inspector_Field.UI_Inspector_Field_C.UpdateData
struct UUI_Inspector_Field_C_UpdateData_Params
{
};

// Function UI_Inspector_Field.UI_Inspector_Field_C.Init
struct UUI_Inspector_Field_C_Init_Params
{
	class ABP_MasterField_C*                           FieldReference;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Chunk_ID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Inspector_Field.UI_Inspector_Field_C.ExecuteUbergraph_UI_Inspector_Field
struct UUI_Inspector_Field_C_ExecuteUbergraph_UI_Inspector_Field_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
