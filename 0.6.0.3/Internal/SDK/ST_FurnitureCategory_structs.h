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

// UserDefinedStruct ST_FurnitureCategory.ST_FurnitureCategory
// 0x0018
struct FST_FurnitureCategory
{
	TEnumAsByte<E_FurnitureCategories_E_FurnitureCategories> Category_2_FF8E66614F6A18F3367C1582A93BC7BF;               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OUY2[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ABP_MasterFurniture_C*>               ListOfFurniture_6_AF22061943970304796A188B8DCBC497;        // 0x0008(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
