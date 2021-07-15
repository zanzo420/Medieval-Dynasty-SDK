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

// UserDefinedStruct BP_Struct_GroundAnimaBehavior_Defend.BP_Struct_GroundAnimaBehavior_Defend
// 0x0014
struct FBP_Struct_GroundAnimaBehavior_Defend
{
	float                                              MaxDistanceFromLocation_6_BC9C4828461CA957E39B5B85EC4C38FD; // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<BP_Enum_DefenseLocation_EBP_Enum_DefenseLocation> DefenseLocationType_5_FAB415AA4DC450FF34709A9C92AAEFA1;    // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SQFP[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_AI_DefendLocation_C*                     SpecificDefenseLocation_13_0127B8504C11C623F2566896CB903011; // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InspectionTime_12_AE0302964FB5CE59A218F6938156203C;        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
