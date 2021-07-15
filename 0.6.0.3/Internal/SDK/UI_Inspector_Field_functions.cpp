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

// Function UI_Inspector_Field.UI_Inspector_Field_C.UpdateData
// (BlueprintCallable, BlueprintEvent)
void UUI_Inspector_Field_C::UpdateData()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inspector_Field.UI_Inspector_Field_C.UpdateData");

	UUI_Inspector_Field_C_UpdateData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Inspector_Field.UI_Inspector_Field_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MasterField_C*       FieldReference                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Chunk_ID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Inspector_Field_C::Init(class ABP_MasterField_C* FieldReference, int Chunk_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inspector_Field.UI_Inspector_Field_C.Init");

	UUI_Inspector_Field_C_Init_Params params;
	params.FieldReference = FieldReference;
	params.Chunk_ID = Chunk_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Inspector_Field.UI_Inspector_Field_C.ExecuteUbergraph_UI_Inspector_Field
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Inspector_Field_C::ExecuteUbergraph_UI_Inspector_Field(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inspector_Field.UI_Inspector_Field_C.ExecuteUbergraph_UI_Inspector_Field");

	UUI_Inspector_Field_C_ExecuteUbergraph_UI_Inspector_Field_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
