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
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct ST_FieldCategory.ST_FieldCategory
// 0x0018
struct FST_FieldCategory
{
	TEnumAsByte<E_FieldCategories_E_FieldCategories>   Category_5_9007E0804EDF138D76C8E38B1DC8412E;               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6D6X[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ABP_MasterField_C*>                   ListOfFields_6_18DBEF89431BA0F63FC97A981EA205A5;           // 0x0008(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
