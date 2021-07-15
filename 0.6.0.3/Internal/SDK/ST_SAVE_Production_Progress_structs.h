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

// UserDefinedStruct ST_SAVE_Production_Progress.ST_SAVE_Production_Progress
// 0x0028
struct FST_SAVE_Production_Progress
{
	struct FName                                       Name_63_2D0C87BC4552A1931DB5CB8F9E366663;                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Progress_6_62B9692C47FC72EC4AF8BAAAFF49FC84;               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PowerOfProduction_64_68B9577C417A9A794ADA18B161ADE903;     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AcquiredResources_58_27BD7954437D95F8494F9493D9E4A50D;     // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               USE_HP_69_C8F7047A4E75F87C5CEDAB9E58C63B54;                // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_C1TU[0x2];                                     // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HP_68_834A9FA9469CA56045EB629330C247D7;                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_ItemCache>                       Cache_73_C0A3BE52424870344208FEB91724E5EB;                 // 0x0018(0x0010) (Edit, BlueprintVisible)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
