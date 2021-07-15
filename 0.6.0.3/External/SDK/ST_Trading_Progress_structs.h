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

// UserDefinedStruct ST_Trading_Progress.ST_Trading_Progress
// 0x0038
struct FST_Trading_Progress
{
	bool                                               Overflow_84_31EEABE94B8CBB562E22BFA048C6DBF8;              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               NoResources_51_E20433714FDCA6DC2FF15E9C92764AF6;           // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2UBO[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Progress_6_62B9692C47FC72EC4AF8BAAAFF49FC84;               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NumberPerHour_14_6BF1231F4CA10AD5757A7CAA2EC29DCF;         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PowerOfProduction_59_68B9577C417A9A794ADA18B161ADE903;     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                         Item_76_81F832E3403405B7B4B76DB5CFBAB39A;                  // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor)
	bool                                               TimeActive_66_7B9F20B940FE4348D244BF96E5C48D5D;            // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_R9QM[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_ItemCache>                       Cache_82_AFDC6A6640809E964CF81E95C8C4A249;                 // 0x0028(0x0010) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
