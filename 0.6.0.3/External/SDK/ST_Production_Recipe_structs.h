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

// UserDefinedStruct ST_Production_Recipe.ST_Production_Recipe
// 0x0040
struct FST_Production_Recipe
{
	struct FDataTableRowHandle                         RecipeHandler_29_4AA9F44743C16333A1D9209168858ACD;         // 0x0000(0x0010) (Edit, BlueprintVisible, NoDestructor)
	int                                                BaseWorkPower_41_C0B87BC942DDE3F32E60DD9B2A8B663C;         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_66TJ[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      BaseProductionPerHour_9_62B9692C47FC72EC4AF8BAAAFF49FC84;  // 0x0018(0x0010) (Edit, BlueprintVisible)
	bool                                               CheckAnimals_15_2B59E223419A5B2FED9CB9A5B59C3830;          // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Z05M[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_Production_AnimalSettings>       Animal_25_3B631E124E9C1F04626E3386CF720572;                // 0x0030(0x0010) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
