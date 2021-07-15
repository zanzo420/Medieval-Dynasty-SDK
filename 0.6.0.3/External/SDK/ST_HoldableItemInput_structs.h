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

// UserDefinedStruct ST_HoldableItemInput.ST_HoldableItemInput
// 0x0021
struct FST_HoldableItemInput
{
	struct FName                                       InputMapped_2_8A397994458EBA714F87719515ED7C8A;            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       ActionText_5_64AFF10C4E92DC598846F2A908C6FF17;             // 0x0008(0x0018) (Edit, BlueprintVisible)
	bool                                               IsHold__8_E9CB3DCD45921B0B8BB686AC67D86181;                // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
