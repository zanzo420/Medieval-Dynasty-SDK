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
// Classes
//---------------------------------------------------------------------------

// Class DataTableSaveBluprintLibrary.DataTableSaveFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDataTableSaveFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DataTableSaveBluprintLibrary.DataTableSaveFunctionLibrary");
		return ptr;
	}



	bool STATIC_SaveDataTableRowFromName(class UDataTable* Table, const struct FName& RowName, const struct FGenericStruct& Value);
	void STATIC_SaveDataTable(class UDataTable* Table);
	void STATIC_RemoveDataTableRowFromName(class UDataTable* Table, const struct FName& RowName);
	class UDataTable* STATIC_GetDataTable(class UObject* WorldContextObject, const struct FString& TablePath);
	void STATIC_ClearDataTable(class UDataTable* Table);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
