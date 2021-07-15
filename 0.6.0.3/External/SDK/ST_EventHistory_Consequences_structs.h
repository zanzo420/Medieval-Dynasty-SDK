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

// UserDefinedStruct ST_EventHistory_Consequences.ST_EventHistory_Consequences
// 0x0048
struct FST_EventHistory_Consequences
{
	class UObject*                                     Image_9_2D5CBEA14C1E2789A328D886C5E47AA8;                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                                 ImageTint_6_0D4E7B87423FDE721BBB42BCF2DD0CC4;              // 0x0008(0x0028) (Edit, BlueprintVisible)
	struct FText                                       ItemName_7_A8E9422E41D6AD91A65C848E46B7A9F2;               // 0x0030(0x0018) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
