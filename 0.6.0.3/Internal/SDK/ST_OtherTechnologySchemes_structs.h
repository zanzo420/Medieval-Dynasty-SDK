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

// UserDefinedStruct ST_OtherTechnologySchemes.ST_OtherTechnologySchemes
// 0x0034
struct FST_OtherTechnologySchemes
{
	struct FName                                       SchemeID_9_A8A877874966D821EB01FB997B720291;               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       SchemeName_19_B47290E14F0CE95D262EC88F9C398A84;            // 0x0008(0x0018) (Edit, BlueprintVisible)
	class UTexture2D*                                  Icon_16_289052504B6139C370BD0E8AB9AD931D;                  // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsLockedByTechnology_10_D420BF9A4F9F6D62D3D9BCA586E059E2;  // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes>   TechnologyType_11_A785AE6A42B70CDCD51A948DD8155D90;        // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QCJ5[0x2];                                     // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TechnologyLevel_12_4982768D422A843B12CB859F114A55E0;       // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TechnologyCost_13_EAAD376F4D3DC6EE93A0E7BBD68FF21D;        // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
