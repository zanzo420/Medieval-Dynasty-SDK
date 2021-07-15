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

// UserDefinedStruct ST_ItemRestriction.ST_ItemRestriction
// 0x0014
struct FST_ItemRestriction
{
	struct FDataTableRowHandle                         Item_2_FB1EE43F4CA13C8FD8FA478032A8E9DA;                   // 0x0000(0x0010) (Edit, BlueprintVisible, NoDestructor)
	int                                                NumberRequired_8_8431512C408FCD026864DBA0B9DF94F3;         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
