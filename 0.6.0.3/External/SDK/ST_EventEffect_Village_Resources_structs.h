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

// UserDefinedStruct ST_EventEffect_Village_Resources.ST_EventEffect_Village_Resources
// 0x0038
struct FST_EventEffect_Village_Resources
{
	int                                                MinRangeNumberOfBuildings_9_D769B973411282CC00EF8B94FFB2F083; // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxRangeNumberOfBuildings_10_70A2B2DD45C943585F9FC181D5BBC673; // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MinResourceRange_11_E20C245E4E0D98FC2061E89854363785;      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxResourceRange_12_6F49FA644D85FC556BFF05B62A7441E8;      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ResourceRangeIterator_13_8EAEC6A14586F58C5CE76F904DE3AA41; // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9619[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TEnumAsByte<E_ItemCategories_E_ItemCategories>> ItemCategoriesToRemove_30_C08906C74686894B1869A88C494FE8FF; // 0x0018(0x0010) (Edit, BlueprintVisible)
	TArray<struct FDataTableRowHandle>                 ItemToRemove_29_1FF07FFD4086EA6721BC4D92C93001E5;          // 0x0028(0x0010) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
