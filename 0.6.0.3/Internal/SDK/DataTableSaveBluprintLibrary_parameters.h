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

// Function DataTableSaveBluprintLibrary.DataTableSaveFunctionLibrary.SaveDataTableRowFromName
struct UDataTableSaveFunctionLibrary_SaveDataTableRowFromName_Params
{
	class UDataTable*                                  Table;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RowName;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGenericStruct                              Value;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DataTableSaveBluprintLibrary.DataTableSaveFunctionLibrary.SaveDataTable
struct UDataTableSaveFunctionLibrary_SaveDataTable_Params
{
	class UDataTable*                                  Table;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DataTableSaveBluprintLibrary.DataTableSaveFunctionLibrary.RemoveDataTableRowFromName
struct UDataTableSaveFunctionLibrary_RemoveDataTableRowFromName_Params
{
	class UDataTable*                                  Table;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RowName;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DataTableSaveBluprintLibrary.DataTableSaveFunctionLibrary.GetDataTable
struct UDataTableSaveFunctionLibrary_GetDataTable_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TablePath;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function DataTableSaveBluprintLibrary.DataTableSaveFunctionLibrary.ClearDataTable
struct UDataTableSaveFunctionLibrary_ClearDataTable_Params
{
	class UDataTable*                                  Table;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
