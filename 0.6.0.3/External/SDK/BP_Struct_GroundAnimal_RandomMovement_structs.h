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

// UserDefinedStruct BP_Struct_GroundAnimal_RandomMovement.BP_Struct_GroundAnimal_RandomMovement
// 0x0020
struct FBP_Struct_GroundAnimal_RandomMovement
{
	struct FVector2D                                   WalkSpeedrange_2_15B7123D4A9253CE8CEC53A4496DD33C;         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   Accelerationrange_4_2BB5EA1943126ECEF79290BE443E5DD8;      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   EngageWalkSpeedrange_7_E9BB3CB847DC5549EF62F59ED4820572;   // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   EngageAccelerationrange_9_555F33F74D9D21F915FC75A4B5DC1674; // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
