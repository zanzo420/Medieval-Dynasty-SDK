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

// UserDefinedStruct ST_SlotSettings.ST_SlotSettings
// 0x0071
struct FST_SlotSettings
{
	struct FTransform                                  Slot_9_814465744ACC328196A32282663A2E2A;                   // 0x0000(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	bool                                               IsOccupied_5_E4758CA94DFA8B072A0156A3D4CFD8C9;             // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7ZGW[0xF];                                     // 0x0031(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  StartPoint_12_A4EED4134C19687BAAA562ACB5F11D20;            // 0x0040(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	bool                                               HaveStartPoint_15_130CDCC744C84A8C546BB7BAF9666318;        // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
