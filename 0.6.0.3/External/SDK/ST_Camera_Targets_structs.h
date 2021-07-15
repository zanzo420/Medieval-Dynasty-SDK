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

// UserDefinedStruct ST_Camera_Targets.ST_Camera_Targets
// 0x00C8
struct FST_Camera_Targets
{
	struct FST_CameraSettings_Stance                   VelocityDirection_2_4C2C9BA845DEB56B3C8E9C84AB2605AD;      // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_CameraSettings_Stance                   LookingDirection_5_578351964FC9A146BD935BA26C96EE5B;       // 0x0050(0x0050) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_CameraSettings                          Aiming_10_CC94CE9F4D0739C8EC139FB82D403EB5;                // 0x00A0(0x0014) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_CameraSettings                          Ragdoll_12_B66522BA4D172D6D2E16E5A146BCF938;               // 0x00B4(0x0014) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
