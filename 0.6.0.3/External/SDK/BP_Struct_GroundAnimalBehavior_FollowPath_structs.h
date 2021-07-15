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

// UserDefinedStruct BP_Struct_GroundAnimalBehavior_FollowPath.BP_Struct_GroundAnimalBehavior_FollowPath
// 0x0018
struct FBP_Struct_GroundAnimalBehavior_FollowPath
{
	TEnumAsByte<BP_Enum_PathSelection_EBP_Enum_PathSelection> PathSelection_10_9101AD96497CB5644975669581003BC6;         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GUEJ[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_AIPath_C*                                PathToFollow_13_F43683A1458A5AC61898FA99BEA48DFF;          // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StartingWayPoint_16_48E8D0234D9E0C87318527B32CAF6039;      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WaitAtWayPoint_19_FFBE3DCE4233D3DD86D146B652953666;        // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
