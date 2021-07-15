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

// UserDefinedStruct ST_ItemSource.ST_ItemSource
// 0x0018
struct FST_ItemSource
{
	struct FDataTableRowHandle                         Item_2_362EB490464C23AB625CFC9BC607CAE7;                   // 0x0000(0x0010) (Edit, BlueprintVisible, NoDestructor)
	int                                                MinResourceCount_9_9C54216D420D6D02D21580A8369F52E2;       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxResourceCount_10_CE5E6F724498D71864AE598360735AF0;      // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
