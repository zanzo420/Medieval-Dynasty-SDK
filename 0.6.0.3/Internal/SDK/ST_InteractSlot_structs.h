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

// UserDefinedStruct ST_InteractSlot.ST_InteractSlot
// 0x0064
struct FST_InteractSlot
{
	struct FTransform                                  Transform_21_BCC8CEF34C06A0DD010E1184B6E935F3;             // 0x0000(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FTransform                                  FinalTransform_29_36DF52D949D8E39F1904EF8594B0DFD8;        // 0x0030(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	bool                                               Occupied_6_0C02C1EF44BC9AB47997EFB39DACBF1C;               // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               WantToOccupy_15_4B8D833546FDA460A893AAAC19A77F05;          // 0x0061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Available_24_C9C267FA4F95A24B87E41D89C47EA041;             // 0x0062(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_FurnitureSlotType_E_FurnitureSlotType> SlotPosition_25_FD970B12437086ABB108DFAF7083A6C7;          // 0x0063(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
