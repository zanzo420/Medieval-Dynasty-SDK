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

// UserDefinedStruct ST_CameraRotationLimits.ST_CameraRotationLimits
// 0x0018
struct FST_CameraRotationLimits
{
	bool                                               LimitCameraRotation_1_B917077D4B714FB5010D04AFA5665C0D;    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UseYaw_18_8C72ED534B539E078F938C9695557C0D;                // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RSMT[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              YawMin_8_3139CAE547568BB96C3A35AE1711EBCC;                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              YawMax_9_1CEF2CF646CAA38C1615269CD3503A62;                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UsePitch_19_E232D6CF43B230812B4805A533FD9E6F;              // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_W3UY[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PitchMin_12_D01768584C8A0A91FD3A9B959C65AF62;              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PitchMax_13_DA497F8043D0F35C78023CA4801066E3;              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
