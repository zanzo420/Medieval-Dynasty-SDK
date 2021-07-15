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

// UserDefinedStruct ST_AnimalCategory.ST_AnimalCategory
// 0x0018
struct FST_AnimalCategory
{
	TEnumAsByte<E_Animals_E_Animals>                   AnimalType_60_290D8E91444D71CA19B5F1B656D3DBEF;            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2DIY[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ABP_AnimalBase_C*>                    ListOfAnimals_59_C0EB501A4302228A4F9FC1BFA0EEA761;         // 0x0008(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
