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

// UserDefinedStruct ST_SAVE_Modules.ST_SAVE_Modules
// 0x0048
struct FST_SAVE_Modules
{
	bool                                               FIN_36_4A28E9104EDB1143C1C3C0A4EAA4A813;                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0IPD[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HP_33_41862FFC481133EEB55374942A2B83BC;                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IM_57_B2496EA842BF34B0568E2F942AF02575;                    // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GY4K[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ID_39_E0882857430933F24AE4A4872DE8ABEE;                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BP_42_205849B245343D9102768BB5DBD64F62;                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IP_56_DC68EA2E46BB3E7E1EC73DA965EA071B;                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_SAVE_ItemStack>                  BRes_50_C56F3DA345FEC7F9F9AFA8B2E7350830;                  // 0x0018(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_SAVE_ItemStack>                  RRes_51_8DBB3F1345887FE95DF7E3840D036DA0;                  // 0x0028(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_SAVE_ItemStack>                  IRes_58_C746B3004DB0BAE9026ACFB514BF6DEF;                  // 0x0038(0x0010) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
