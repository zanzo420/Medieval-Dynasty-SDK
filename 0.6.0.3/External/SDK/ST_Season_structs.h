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

// UserDefinedStruct ST_Season.ST_Season
// 0x0028
struct FST_Season
{
	struct FText                                       SeasonName_10_30E447214CC7CB24A29DCAA8C4F2095F;            // 0x0000(0x0018) (Edit, BlueprintVisible)
	TArray<struct FST_DayPreset>                       DayPresets_29_E3FB9A6E4BF01F8A224C239432F35F34;            // 0x0018(0x0010) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
