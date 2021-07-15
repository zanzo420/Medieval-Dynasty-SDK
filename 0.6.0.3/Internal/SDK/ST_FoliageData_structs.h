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

// UserDefinedStruct ST_FoliageData.ST_FoliageData
// 0x0087
struct FST_FoliageData
{
	struct FString                                     FoliageID_40_68CE4FD44EB6629B0D17E780CE499F61;             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UFoliageType*                                FoliageType_23_16BE06A44A565BC6FE7DD4B660E8A01F;           // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ID_7_2D8C1F22474844BA73FE5FBD8AC1ACAF;                     // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6J9T[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  OriginTransform_14_11D052A34893B671001558BBB56EB6FA;       // 0x0020(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FTransform                                  CurrentTransform_15_0559943F44C91BEAB2DFBDA894C18147;      // 0x0050(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	int                                                NumberOfSeasonToReset_31_8B63A5B54D83B075414EF0ABA1556E15; // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DownAtBeginning_34_06CE65524E6F5F86653A12BDFEB66DFE;       // 0x0084(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               MovedDown_36_077EEC0F4CCAE5563EBD968BCA3C06CF;             // 0x0085(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Forever_42_EA32B8964966862B74629684414795CF;               // 0x0086(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
