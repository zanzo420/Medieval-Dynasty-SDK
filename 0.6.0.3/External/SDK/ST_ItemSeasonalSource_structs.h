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

// UserDefinedStruct ST_ItemSeasonalSource.ST_ItemSeasonalSource
// 0x0040
struct FST_ItemSeasonalSource
{
	TArray<struct FST_ItemSource>                      SpringItems_25_2CAB8570410192FE8D3BC2B061C2946D;           // 0x0000(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_ItemSource>                      SummerItems_26_BB1220AC42A9226CD13B60B1558CBB9C;           // 0x0010(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_ItemSource>                      AutumnItems_27_5CA5B6024DCF49410EF1B9B40D937F53;           // 0x0020(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_ItemSource>                      WinterItems_28_A5057B3D412BEE8280E1A3A0AA2B6502;           // 0x0030(0x0010) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
