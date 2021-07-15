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

// UserDefinedStruct ST_InteractSlotSettings.ST_InteractSlotSettings
// 0x0062
struct FST_InteractSlotSettings
{
	struct FTransform                                  Transform_25_5ABCFB38471545982853C3AD0548CF52;             // 0x0000(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FTransform                                  FinalTransform_31_B8E5D0394E788A4E01344CBEDCA2628E;        // 0x0030(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_FurnitureSlotType_E_FurnitureSlotType> SlotType_28_FD970B12437086ABB108DFAF7083A6C7;              // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Available_27_EC1C3B7B409B8D9F14E5AD87972F1BA6;             // 0x0061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
