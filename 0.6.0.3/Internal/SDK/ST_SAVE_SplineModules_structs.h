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

// UserDefinedStruct ST_SAVE_SplineModules.ST_SAVE_SplineModules
// 0x0048
struct FST_SAVE_SplineModules
{
	bool                                               FIN_49_93C840744BFF0C121C759AA4A29CC549;                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_37K5[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HP_48_D6AA4E5D4DA5C79C03CCC8B5C0824FD3;                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IM_50_174624724B82B7BE7A711994AE5EB330;                    // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TR8S[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ID_54_D29F47B140A5B944F01937986CDEBAA2;                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BP_59_9795CB05488E0B639B59C197AFA3D7F3;                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IP_60_30A2CF794CABBC5720C2638F84F56B4B;                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_SAVE_ItemStack>                  BRes_46_1CE70FFB41CC76B760D66B9C85F2A4E2;                  // 0x0018(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_SAVE_ItemStack>                  RRes_45_13ADEE424508696D501AD19B84938CB9;                  // 0x0028(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_SAVE_ItemStack>                  IRes_47_49E491E047BB33C4C79D5B8E96C295E8;                  // 0x0038(0x0010) (Edit, BlueprintVisible)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
