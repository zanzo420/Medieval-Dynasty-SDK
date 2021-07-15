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

// Function DataTableSaveBluprintLibrary.DataTableSaveFunctionLibrary.SaveDataTableRowFromName
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
// Parameters:
// class UDataTable*              Table                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   RowName                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGenericStruct          Value                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDataTableSaveFunctionLibrary::STATIC_SaveDataTableRowFromName(class UDataTable* Table, const struct FName& RowName, const struct FGenericStruct& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSaveBluprintLibrary.DataTableSaveFunctionLibrary.SaveDataTableRowFromName");

	UDataTableSaveFunctionLibrary_SaveDataTableRowFromName_Params params;
	params.Table = Table;
	params.RowName = RowName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DataTableSaveBluprintLibrary.DataTableSaveFunctionLibrary.SaveDataTable
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UDataTable*              Table                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDataTableSaveFunctionLibrary::STATIC_SaveDataTable(class UDataTable* Table)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSaveBluprintLibrary.DataTableSaveFunctionLibrary.SaveDataTable");

	UDataTableSaveFunctionLibrary_SaveDataTable_Params params;
	params.Table = Table;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DataTableSaveBluprintLibrary.DataTableSaveFunctionLibrary.RemoveDataTableRowFromName
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UDataTable*              Table                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   RowName                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDataTableSaveFunctionLibrary::STATIC_RemoveDataTableRowFromName(class UDataTable* Table, const struct FName& RowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSaveBluprintLibrary.DataTableSaveFunctionLibrary.RemoveDataTableRowFromName");

	UDataTableSaveFunctionLibrary_RemoveDataTableRowFromName_Params params;
	params.Table = Table;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DataTableSaveBluprintLibrary.DataTableSaveFunctionLibrary.GetDataTable
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 TablePath                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDataTable*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDataTable* UDataTableSaveFunctionLibrary::STATIC_GetDataTable(class UObject* WorldContextObject, const struct FString& TablePath)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSaveBluprintLibrary.DataTableSaveFunctionLibrary.GetDataTable");

	UDataTableSaveFunctionLibrary_GetDataTable_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TablePath = TablePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DataTableSaveBluprintLibrary.DataTableSaveFunctionLibrary.ClearDataTable
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UDataTable*              Table                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDataTableSaveFunctionLibrary::STATIC_ClearDataTable(class UDataTable* Table)
{
	static auto fn = UObject::FindObject<UFunction>("Function DataTableSaveBluprintLibrary.DataTableSaveFunctionLibrary.ClearDataTable");

	UDataTableSaveFunctionLibrary_ClearDataTable_Params params;
	params.Table = Table;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
