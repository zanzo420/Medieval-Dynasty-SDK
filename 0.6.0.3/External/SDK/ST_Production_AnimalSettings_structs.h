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

// UserDefinedStruct ST_Production_AnimalSettings.ST_Production_AnimalSettings
// 0x0003
struct FST_Production_AnimalSettings
{
	TEnumAsByte<E_Animals_E_Animals>                   AnimalType_2_9AE660A74AB78AC05B3AFFB58324AAE6;             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Production_AnimalSex_E_Production_AnimalSex> Sex_7_BC8C759E4F682ACD867D87BD25EF3FD2;                    // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Production_AnimalAge_E_Production_AnimalAge> Mature_10_4B59179240E186177756A09A31353048;                // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
