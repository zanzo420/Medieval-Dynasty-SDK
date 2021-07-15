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

// UserDefinedStruct ST_Road.ST_Road
// 0x005C
struct FST_Road
{
	struct FName                                       TechnologySchemeID_72_A69C6AEA41CDDEA376A24B8A3BECA02E;    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Name_2_9176F3044DCF96898285B1B969D47957;                   // 0x0008(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description_15_D6076A164E280AD2D7A5C99914C7C764;           // 0x0020(0x0018) (Edit, BlueprintVisible)
	class UClass*                                      BuildingClass_93_D0A4637948415EDC3BB10E8473C522F5;         // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_ItemResource>                    Resources_80_DC7A6B2E4548F9E2FD06EB9F98A27989;             // 0x0040(0x0010) (Edit, BlueprintVisible)
	bool                                               IsLockedByTechnology_46_917AD40843D243E91DEB208F491EC1A4;  // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes>   TechnologyType_48_E13292F044E1BD7440DD5ABCB1792F4F;        // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WITD[0x2];                                     // 0x0052(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TechnologyLevel_51_D872A3D2445F3382BE6F6488F91B7BAE;       // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TechnologyCost_52_21D301484F60E0B8C180C3BCA4840DCB;        // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
