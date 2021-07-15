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

// UserDefinedStruct ST_MontagesSettings.ST_MontagesSettings
// 0x003C
struct FST_MontagesSettings
{
	class UAnimMontage*                                Montage_12_DE6E58A144B4F884EC06C6AA4A445833;               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HeadBlend_13_2066C7544A2D51A905F751A37AE82F19;             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               StopPlayerRotation_14_11B0618A466CF24833459C9EB2623EFB;    // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               StopPlayerMovement_15_B2F0057748CBF33CE25E57BE6F847BA4;    // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UsePawnControlRotation_16_F00B91EF4613E584D9C1328D63E434D8; // 0x000E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NCVV[0x1];                                     // 0x000F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBlendSpaceBase*                             MontageAimOffset_33_B47A28CE44252F7591A7F282E2B64D61;      // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlendSpaceBase*                             FullBodyAimOffset_34_504323FE4C20BFC7C5B1C798CA19FEB0;     // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_CameraRotationLimits                    CameraRotationLimits_28_FA762D534C81BDD0A0022285B51348A3;  // 0x0020(0x0018) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MovementSpeedMultiplier_30_838F6F4B416E49EAEAD8859DFE827B4E; // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
