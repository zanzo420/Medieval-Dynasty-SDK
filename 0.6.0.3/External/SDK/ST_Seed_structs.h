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

// UserDefinedStruct ST_Seed.ST_Seed
// 0x0078
struct FST_Seed
{
	TEnumAsByte<E_Seeds_E_Seeds>                       Type_6_8B605AF841AF4684021434907B52997A;                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IUQL[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<bool>                                       SowSeason_22_045DD1D043721A878394B988ECA96D6E;             // 0x0008(0x0010) (Edit, BlueprintVisible)
	TMap<TEnumAsByte<E_FieldPlantStages_E_FieldPlantStages>, struct FST_ChunkStageData> StageData_58_7C3BC9574397AB606A3F02864283433F;             // 0x0018(0x0050) (Edit, BlueprintVisible)
	TArray<struct FST_SowHarvestTime>                  TimesOfSowAndHarvest_62_455815584A9F0686D4661BA7C9A1EDA7;  // 0x0068(0x0010) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
