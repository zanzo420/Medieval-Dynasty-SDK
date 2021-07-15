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

// UserDefinedStruct ST_Challenge_DeliverFood.ST_Challenge_DeliverFood
// 0x0028
struct FST_Challenge_DeliverFood
{
	TArray<float>                                      MaxRequiredFoodValue_4_F37B6A0741B67B2DA434DAB9119ED299;   // 0x0000(0x0010) (Edit, BlueprintVisible)
	TArray<float>                                      MinRequiredFoodValue_6_2B10A6124D0191E9C99D7EA30E8319DD;   // 0x0010(0x0010) (Edit, BlueprintVisible)
	float                                              NeededFoodValue_10_201891904D16F794865A84BD8EE16367;       // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeliveredFoodValue_13_88FF5E5640146CBE81D4968F3A96AEE2;    // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
