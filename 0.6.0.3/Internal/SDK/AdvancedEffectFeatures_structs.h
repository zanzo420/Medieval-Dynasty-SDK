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

// UserDefinedStruct AdvancedEffectFeatures.AdvancedEffectFeatures
// 0x0034
struct FAdvancedEffectFeatures
{
	TEnumAsByte<BlendModes_EBlendModes>                BlendMode_12_09737E6C44063CBE16D45A8896564C06;             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5LGD[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  BlendMask_21_9E705B66406A56FD3FFAF1A6942926D5;             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2DN                                  BlendMaskScale_24_EA5846484DB94044F896A09A0BC2F6C0;        // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendDistance_33_7594D9DD4D782916B58945895B32667E;         // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendDistanceSharpness_35_6A828E614037A27B69EE71A96FC5821D; // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BlendDistanceInvert_37_D287DE844826F2359AAFE3858976F62A;   // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZCVW[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BlendingOpacity_10_63DB57664274BA07E8C302A5DE11468B;       // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                EffectPriority_11_EDF854034FC93238C76D8FA5C8F7CD2F;        // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CustomDepth_1_CCA4E6DA4D5BFFF130E4238E20DDB1B8;            // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               StencilBuffer_15_EA46BAF04C25E4D2EA4796B4C92C5FE6;         // 0x002D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GV2K[0x2];                                     // 0x002E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                StencilMask_18_BF959A7242C50326D3AE65A973C5A5B1;           // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
