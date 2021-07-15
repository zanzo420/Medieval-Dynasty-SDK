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

// UserDefinedStruct ST_FoliageDepletedData.ST_FoliageDepletedData
// 0x0034
struct FST_FoliageDepletedData
{
	struct FTransform                                  Transform_37_11D052A34893B671001558BBB56EB6FA;             // 0x0000(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	int                                                NumberOfSeasonToReset_31_8B63A5B54D83B075414EF0ABA1556E15; // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
