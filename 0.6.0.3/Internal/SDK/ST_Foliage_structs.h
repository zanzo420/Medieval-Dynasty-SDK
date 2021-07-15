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

// UserDefinedStruct ST_Foliage.ST_Foliage
// 0x0076
struct FST_Foliage
{
	int                                                ID_7_2D8C1F22474844BA73FE5FBD8AC1ACAF;                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CZ1D[0xC];                                     // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  OriginTransform_56_11D052A34893B671001558BBB56EB6FA;       // 0x0010(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FTransform                                  CurrentTransform_55_0559943F44C91BEAB2DFBDA894C18147;      // 0x0040(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	int                                                NumberOfSeasonToReset_54_8B63A5B54D83B075414EF0ABA1556E15; // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DownAtBeginning_53_06CE65524E6F5F86653A12BDFEB66DFE;       // 0x0074(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               MovedDown_52_077EEC0F4CCAE5563EBD968BCA3C06CF;             // 0x0075(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
