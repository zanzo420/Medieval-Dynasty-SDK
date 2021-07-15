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

// UserDefinedStruct BP_Struct_GroundAnimalBehavior_AnimalDetails.BP_Struct_GroundAnimalBehavior_AnimalDetails
// 0x0024
struct FBP_Struct_GroundAnimalBehavior_AnimalDetails
{
	TEnumAsByte<BP_Enum_FeedingBehavior_EBP_Enum_FeedingBehavior> FeedingBehavior_17_E93B3B2647578E83006F329BB30C49AF;       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UO57[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxWalkSpeed_4_1E08CE69495D004ADB4402A5AE435C46;           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EngageMaxWalkSpeed_6_716E45B241D9610E8B0EDF9B7E176895;     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxAcceleration_8_83CF41FB490787DB06FD928ED7D8765F;        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EngageMaxAcceleration_10_AC5B061E46955A5A3B1CABA1503DAE92; // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HurtMovementFactor_20_27131F0D489F0691291E63B0E3ED9918;    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Mass_2_EE571A8645ABA09A05D53588BCDDC41F;                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxStepHeight_12_1CFE732843112C3003F0489AE1C5B33E;         // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxWalkableFloorAngle_14_440C7FD7434AB2BFD1C348AED31F86C2; // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
